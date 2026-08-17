local base = _G

module('MultiplayerSelectRoleDialog')

local require       = base.require
local pairs         = base.pairs
local ipairs		= base.ipairs
local table         = base.table
local math          = base.math
local setfenv       = base.setfenv
local string        = base.string
local assert        = base.assert
local io            = base.io
local loadstring    = base.loadstring
local print         = base.print
local os            = base.os

local i18n				= require('i18n')
local Window			= require('Window')
local U					= require('me_utilities')
local MsgWindow			= require('MsgWindow')
local DialogLoader		= require('DialogLoader')
local net				= require('net')
local Static			= require('Static')
local Skin				= require('Skin')
local textutil			= require('textutil')
local lfs				= require('lfs')
local Tools				= require('tools')
local Button			= require('Button')
local Gui				= require('dxgui')
local ListBoxItem		= require('ListBoxItem')
local Server_list		= require('mul_server_list')
local DCS				= require('DCS')
local BriefingDialog	= require('BriefingDialog')
local nickname			= require('mul_nickname')
local keys				= require('mul_keys')
local wait_query		= require('mul_wait_query')
local RPC				= require('RPC')
local slotJoinQuery		= require('mul_query')
local advGrid			= require('advGrid')
local Terrain			= require('terrain')
local ProductType		= require('me_ProductType') 
local SkinUtils			= require('SkinUtils')
local DcsWeb			= require('DcsWeb')
local Tools				= require('tools')
local Input				= require('Input')
local textutil          = require('textutil')
local UpdateManager		= require('UpdateManager')

local MultiplayerSelectRole = require('MultiplayerSelectRole')
local MultiplayerSelectDynamicDialog = require('MultiplayerSelectDynamicDialog')
local MultiplayerSelectCoalitionDialog = require('MultiplayerSelectCoalitionDialog')

i18n.setup(_M)

local locale = i18n.getLocale()
local rowHeight = 20
local passwords = {}
local passwordsById = {}

cdata = 
{
    Exit                 	= _("EXIT"),
    BLUECOALITION        	= _("BLUE COALITION"),
    REDCOALITION         	= _("RED COALITION"),
    Spectrators          	= _("SPECTATORS"),
    BackToSpectrators    	= _("CHANGE COALITION"),
    ReleaseSlot    			= _("RELEASE SLOT"),
    Disconnect           	= _("DISCONNECT"),
    Chat                 	= _("CHAT"),
    Briefing             	= _("BRIEFING"),
    mult_selectRole      	= _("MULTIPLAYER - Select role"),
	choiceOfRole     		= _("Choice of role"),
    group                	= _("Group"),
    UnitType             	= _("Unit Type"),
    Role             		= _("Role"),
    Country              	= _("Country"),
    Payload              	= _("Start Location"),
    Player               	= _("Player"),
    passwordEnable       	= _("Password enable"),
    Password             	= _("Password:"),
    Show                 	= _("Show"),
    Show_tooltip         	= _("Reveal coalition slots"),
    tgleFavorites_tooltip 	= _("Toggle Favorites"),
	msgLeaveServer			= _('Are you sure you want to exit the server?'),
	msgExit					= _('Are you sure you want to exit to the main menu?'),								 	
	warning         		= _('WARNING'),
	yes             		= _('YES'),
    no              		= _('NO'),
	search					= _('Search'),
	clearAllFilters			= _('Clear'),
	type 					= _('UNIT TYPE'),
	role 					= _('ROLE'),
	airdrome				= _('AIRFIELD'),
	availability			= _('AVAILABILITY'),
	reset					= _('Reset'),
	availableFilters		= _('Available filters:'),
	msgMaxFilters			= _('The maximum number of filters has been reached.'),
	info					= _('Info'),
	ok						= _('OK'),
	onlyAvailable			= _('Usable'),
	onlyFree				= _('Vacant'),
	onlyHot					= _('Hot & Ready'),
	onlyCold				= _('Cold & Ready'),
	noPilot					= _('No Pilot'),
	clearSearch				= _('Clear search'),
	refreshGrid				= _('Refresh'),
	cantCreateUnit			= _('MultiplayerSelectRoleDialog.AllTerminalsAreBusy'),
	spawnIsOccupied			= _('MultiplayerSelectRoleDialog.SpawnIsOccupied'),
	tabSlots				= _('MultiplayerSelectRole.TabSlots'),
	tabDynSlots				= _('MultiplayerSelectRole.TabDynSlots'),
	dynamicSlotsNotExist	= _('No suitable airfields'),
	tip_selectCoalition		= _('tip_selectCoalition'),
	tip_selectSlot			= _('tip_selectSlot'),
	tip_selectDynamicSlot	= _('tip_selectDynamicSlot'),
	
	sAir					= _('Air'),
	sGround					= _('Ground'),
	sPilot					= _('Pilot'),
	sCombinedArms			= _('Combined Arms'),
	sSupercarrier			= _('Supercarrier'),
}

if ProductType.getType() == "LOFAC" then
    cdata.UnitType    = _("Unit Type-LOFAC")
    cdata.Player      = _("Player-LOFAC")
end

local needCreateGrids = true
local scrollGridTo = nil
local MultySeatLAbyId = {}
local ship_by_type = nil
local curKeySort = 'groupName'
local sortReverse = false
local filtersButtons = {}
local checkItemsFilters = { type = {}, roleCategorie = {}, airdromeName = {}, availability = {} }
local searchCategories = { "groupName", "type", "role", "roleCategorie", "airdromeName", "countryName", "onboard_num" }
local searchString = ""
local coalitionIndices = { [0] = "neutral", [1] = "red", [2] = "blue" }
local kMaxSelectedFilters = 12

local filteredSlotsIds = {}

local lastTimeGridUpdate = 0

local gridCreatingProcess = false

local KeysSort = 
    {
		"password",
        "groupName", 
		"type",
        "not",
        "not",
        "not",
        "airdromeName",
        "not",
    }


function create()
    window = DialogLoader.spawnDialogFromFile("./Scripts/UI/MultiplayerSelectRoleMap/MultiplayerSelectRoleDialog.dlg", cdata)    

    main_panel 				= window.main_panel
	pWork                   = main_panel.pWork
	pCenter                 = pWork.pCenter
	grid                 	= pCenter.grid
	pNoVisible              = pCenter.pNoVisible
	pFilters				= main_panel.pFilters
	pBtn                    = main_panel.pBtn
	lbSpectrators           = pWork.lbSpectrators
	btnBackToSpectrators    = pBtn.btnBackToSpectrators
	btnReleaseSlot    		= pBtn.btnReleaseSlot
	btnChangeMission        = pBtn.btnChangeMission
	btnBriefing             = pBtn.btnBriefing
	sNameMission            = pBtn.sNameMission
	ePassword				= pBtn.ePassword
	typesFilter				= pFilters.typesFilter
	rolesFilter				= pFilters.rolesFilter
	airdromesFilter			= pFilters.airdromesFilter
	availabilityFilter		= pFilters.availabilityFilter
	clbType					= main_panel.clbType
	clbRole					= main_panel.clbRole
	clbAirdrome				= main_panel.clbAirdrome
	clbAvailability			= main_panel.clbAvailability
	clearType				= main_panel.clearType
	clearRole				= main_panel.clearRole
	clearAirdrome			= main_panel.clearAirdrome
	clearAvailability		= main_panel.clearAvailability
	selectedFiltersPanel	= pFilters.selectedFiltersPanel
	panelSearch				= pFilters.panelSearch
	availableFiltersCounter = pFilters.availableFiltersCounter
	buttonClearAllFilters	= pFilters.buttonClearAllFilters
	refreshGridButton		= pFilters.refreshGridButton
	editBoxSearch			= panelSearch.editBoxSearch
	buttonClearSearch 		= panelSearch.buttonClearSearch
	tabButton 				= main_panel.pTabs.tabButton
    
	gridAdv = advGrid.new(grid)
    
    setupCallbacks()
	
	staticSkinGridServersLock           = pNoVisible.sLock:getSkin()
    staticSkinGridServersLockNo         = pNoVisible.sLockNo:getSkin()
	staticSkinGridServersLockSel		= pNoVisible.sLockSel:getSkin()
	staticSkinGridServersLockNoSel		= pNoVisible.sLockNoSel:getSkin()
	filterButtonNormalSkin 				= pNoVisible.filterButtonNormal:getSkin()
	filterButtonMarkeredSkin 			= pNoVisible.filterButtonMarkered:getSkin()
	buttonSelectedFilterSkin 			= selectedFiltersPanel.previewButton:getSkin()
	selectedFiltersPanel.previewButton:destroy()
    
    skinGridItemAlignMiddle1 = pNoVisible.sGridItemAlignMiddle1:getSkin()
    skinGridItemPadding1 = pNoVisible.sGridItemPadding1:getSkin()
    
    skinGridItemAlignMiddle2 = pNoVisible.sGridItemAlignMiddle2:getSkin()
    skinGridItemPadding2 = pNoVisible.sGridItemPadding2:getSkin()
    
    skinGridItemAlignMiddleSel = pNoVisible.sGridItemAlignMiddleSel:getSkin()
    skinGridItemPaddingSel = pNoVisible.sGridItemPaddingSel:getSkin()
    
    skinGridItemAlignMiddleDis = pNoVisible.sGridItemAlignMiddleDis:getSkin()
    skinGridItemPaddingDis = pNoVisible.sGridItemPaddingDis:getSkin()
    
    skinGridItemAlignMiddleHover1 = pNoVisible.sGridItemAlignMiddleHover1:getSkin()
    skinGridItemAlignMiddleHover2 = pNoVisible.sGridItemAlignMiddleHover2:getSkin()
    
    skinGridItemPaddingHover1 = pNoVisible.sGridItemPaddingHover1:getSkin()
    skinGridItemPaddingHover2 = pNoVisible.sGridItemPaddingHover2:getSkin()
         
    SkinsStatic = 
    {
        [1] = {
            skinAlignMiddle     = skinGridItemAlignMiddle1,
            skinPadding         = skinGridItemPadding1,
            skinAlignMiddleHover= skinGridItemAlignMiddleHover1,
            skinPaddingHover    = skinGridItemPaddingHover1
        },
        [2] = { --выделенный свой
            skinAlignMiddle     = skinGridItemAlignMiddleSel,
            skinPadding         = skinGridItemPaddingSel,            
        }, 
        [3] = {
            skinAlignMiddle     = skinGridItemAlignMiddle2,
            skinPadding         = skinGridItemPadding2,
            skinAlignMiddleHover= skinGridItemAlignMiddleHover2,
            skinPaddingHover    = skinGridItemPaddingHover2
        },
        [4] = { -- здесь надо сделать серый текст
            skinAlignMiddle     = skinGridItemAlignMiddleDis,
            skinPadding         = skinGridItemPaddingDis,
        },
        
    }
    
    SkinsHeaders = 
    {
        [1] = {
            skinNoSort      = pNoVisible.gridHeaderCellNoSort:getSkin(),
			skinSortUp     	= pNoVisible.gridHeaderCellSortUp:getSkin(),
			skinSortDown  	= pNoVisible.gridHeaderCellSortDown:getSkin(),
        },
        [2] = {
            skinNoSort      = pNoVisible.gridHeaderCellNoSortPadding:getSkin(),
			skinSortUp      = pNoVisible.gridHeaderCellSortUpPadding:getSkin(),
			skinSortDown 	= pNoVisible.gridHeaderCellSortDownPadding:getSkin(),
        }        
    }
    
    skinsForGrid =
    {
        all = {
            ['func'] = function(a_cell, a_typeSkin)  
				if a_typeSkin == 'normal'then
					if a_cell.colNum == 1 then						
						if a_cell.data.password ~= nil then
							return staticSkinGridServersLock
						else
							return staticSkinGridServersLockNo
						end	
					end 
                    return a_cell.skin
                elseif a_typeSkin == 'select' then
					if a_cell.colNum == 1 then						
						if a_cell.data.password ~= nil then
							return staticSkinGridServersLockSel
						else
							return staticSkinGridServersLockNoSel							
						end	
					end
					
					if a_cell.colNum == 5 or a_cell.colNum == 6 then
						return SkinsStatic[2].skinAlignMiddle
					else
						return SkinsStatic[2].skinPadding
					end
                else -- hover
					if a_cell.colNum == 1 then						
						if a_cell.data.password ~= nil then
							return staticSkinGridServersLock
						else
							return staticSkinGridServersLockNo
						end	
					end

                    if SkinsStatic[a_cell.skinType].skinAlignMiddleHover then
                        if a_cell.colNum == 5 or a_cell.colNum == 6 then
                            return SkinsStatic[a_cell.skinType].skinAlignMiddleHover
                        else
                            return SkinsStatic[a_cell.skinType].skinPaddingHover
                        end
                    else
                        return a_cell.skin
                    end        
                end
            
            end
        },
    }
    
    gridAdv:setSkins(skinsForGrid)
	
	for i = 0, 7 do
		local headerCell = grid:getColumnHeader(i)
		headerCell.KeySort = KeysSort[i+1]  
	
		
		headerCell:addChangeCallback(function(self) 
			if self.KeySort == 'not' then
				return
			end
			
			if curKeySort == self.KeySort then
				sortReverse = not sortReverse
			else
				sortReverse = false
			end
			curKeySort = self.KeySort
	
			updateColumnHeaders()
			needCreateGrids = true
			updateGrids()
		end	)		
	end

	editBoxSearch:addKeyDownCallback(function(comboBox, keyName, unicode)
		if 'return' == keyName then
			editBoxSearch:setFocused(false)
			updateSearchResults()
		elseif 'escape' == keyName then
			panelSearch:setText(cdata.search)
			editBoxSearch:setText()
			editBoxSearch:setFocused(false)
			updateSearchResults()
		end
	end)

	editBoxSearch:addChangeCallback(function()
		if editBoxSearch:getText() == "" then
			panelSearch:setText(cdata.search)
		else		
			panelSearch:setText()
		end
	end)

	function editBoxSearch:onFocus(focused)
		MultiplayerSelectRole.setIgnoreInput(focused)
	end

	function ePassword:onFocus(focused)
		MultiplayerSelectRole.setIgnoreInput(focused)
	end

	buttonClearSearch:addChangeCallback(function()
		panelSearch:setText(cdata.search)
		editBoxSearch:setText()
		editBoxSearch:setFocused(false)
		updateSearchResults()
	end)
	
	buttonClearAllFilters:addChangeCallback(function()
		if editBoxSearch:getText() == "" and selectedFiltersPanel:getWidgetCount() == 0 then
			return
		end

		for filterType, filters in base.pairs(checkItemsFilters) do
			for i = 1, #filters do
				filters[i]:setChecked(false)
			end
			filtersButtons[filterType]:setSkin(filterButtonNormalSkin)
		end
		
		availableFiltersCounter:setText(cdata.availableFilters.." "..kMaxSelectedFilters)
		panelSearch:setText(cdata.search)
		editBoxSearch:setText()
		
		searchString = ""
		selectedFiltersPanel:clear()
		
		needCreateGrids = true
		updateGrids()
	end)
	
	refreshGridButton:addChangeCallback(function()
		updateGrids()
	end)

	Gui.AddMouseCallback('down', function(x, y, button)
		local function checkClickButtomWithComboListBox(x, y, button, checkListBox, resetButton)
			if not button or not checkListBox or not resetButton then
				return
			end
		
			if checkListBox:getVisible() then
				scrX, scrY = checkListBox:widgetToWindow()
				scrXBtn, scrYBtn = button:widgetToWindow()
				scrXBtnR, scrYBtnR = resetButton:widgetToWindow()
				w, h = checkListBox:getSize()
				wBtn, hBtn = button:getSize()
				wBtnR, hBtnR = resetButton:getSize()
				local outWgt = x < scrX or x > scrX + w or y < scrY or y > scrY + h
				local outBtn = x < scrXBtn or x > scrXBtn + wBtn or y < scrYBtn or y > scrYBtn + hBtn
				local outBtnR = x < scrXBtnR or x > scrXBtnR + wBtnR or y < scrYBtnR or y > scrYBtnR + hBtnR
				if outWgt and outBtn and outBtnR then
					button.comboListBoxVisible = false
					checkListBox:setVisible(false)
					resetButton:setVisible(false)
				end
			end
		end
		
		checkClickButtomWithComboListBox(x, y, typesFilter, clbType, clearType)
		checkClickButtomWithComboListBox(x, y, rolesFilter, clbRole, clearRole)
		checkClickButtomWithComboListBox(x, y, airdromesFilter, clbAirdrome, clearAirdrome)
		checkClickButtomWithComboListBox(x, y, availabilityFilter, clbAvailability, clearAvailability)
	end)
	
	window:addPositionCallback(function()
		MultiplayerSelectDynamicDialog.updateDialogPosition(getDialogPosition())
		MultiplayerSelectRole.saveDialogsPositions()
	end)
	
	updateBounds()

    return window
end

function updateBounds()	
	local wS, hS = Gui.GetWindowSize()
	local resizedWindowH = hS / 2
	
	if resizedWindowH > 480 then
		local wW, hW = window:getSize()
		local headerH = window:getSkin().skinData.params.headerHeight
		local wPTabs, hPTabs = main_panel.pTabs:getSize()
		local wPFilters, hPFilters = pFilters:getSize()
		local wPBtn, hPBtn = pBtn:getSize()
		
		window:setSize(wW, resizedWindowH)
		main_panel:setSize(wW, resizedWindowH - headerH)
		pWork:setSize(wW, resizedWindowH - headerH - hPFilters - hPBtn - hPTabs + 2)
		pCenter:setSize(wW, resizedWindowH - headerH - hPFilters - hPBtn - hPTabs + 2)
		grid:setSize(wW, resizedWindowH - headerH - hPFilters - hPBtn - hPTabs + 2)
		pBtn:setPosition(0, resizedWindowH - headerH - hPBtn)
	end
	
	local x, y = MultiplayerSelectRole.getSavedDialogPosition("selectRole")
	if x == nil or y == nil then
		local wW, wH = window:getSize()
		x = (wS - wW) / 2
		y = (hS - wH) / 2
	end
	
	window:setPosition(x, y)
	
	local function updCheckListBoxesPositions(button, checkListCombo, resetButton)
		if not button or not checkListCombo or not resetButton then
			return
		end
		
		local w, h = button:getSize()
		local wR, hR = resetButton:getSize()
		local xB, yB = button:widgetToParentWidget(0, h, window.main_panel.widget)
		resetButton:setPosition(xB, yB)
		checkListCombo:setPosition(xB, yB + hR)
	end
	
	updCheckListBoxesPositions(typesFilter, clbType, clearType)
	updCheckListBoxesPositions(rolesFilter, clbRole, clearRole)
	updCheckListBoxesPositions(airdromesFilter, clbAirdrome, clearAirdrome)
	updCheckListBoxesPositions(availabilityFilter, clbAvailability, clearAvailability)
    
	grid:setColumnWidth(0, 20)  
    grid:setColumnWidth(1, 250)
    grid:setColumnWidth(2, 120)
    grid:setColumnWidth(3, 120)
    grid:setColumnWidth(4, 60)    
    grid:setColumnWidth(5, 50)
    grid:setColumnWidth(6, 180)
    grid:setColumnWidth(7, 160)
end

function isRole(a_type)
    return DCS.isRoleAvailable(a_type)
end

function isSupercarrierRole(role)
	return DCS.isSupercarrierRoleAvailable(role)
end

function isEnableAirdrome(a_type)
	if a_type then
		if ship_by_type == nil then
			ship_by_type = {}
			for i,v in pairs(base.db.Units.Ships.Ship) do
				ship_by_type[v.type] = v
			end
		end
		
		local unitDef = ship_by_type[a_type]
		if unitDef then
			if unitDef.PlayerInteractionLocked ~= true then
				return true
			end			
			return false
		end
	end
	return true
end

local updateFilters

function updateSelectedFilters()
	selectedFiltersPanel:clear()
	for filterType, filters in base.pairs(checkItemsFilters) do
		local haveChecked = false
		if filterType == "availability" then
			for i = 1, #filters do
				if filters[i]:getChecked() then
					local filterButton = Button.new()
					filterButton.linkedCheck = filters[i]
					filterButton:setSkin(buttonSelectedFilterSkin)
					filterButton:setText(filters[i].filterName)
					filterButton:addMouseUpCallback(function()
						filterButton.linkedCheck:setChecked(false)
						updateFilters()
					end)
					selectedFiltersPanel:insertWidget(filterButton)
					
					haveChecked = true
				end
			end
		else
			for i = 1, #filters do
				if filters[i]:getChecked() then
					local filterButton = Button.new()
					filterButton.linkedCheck = filters[i]
					filterButton.filterType = filterType
					filterButton:setSkin(buttonSelectedFilterSkin)
					filterButton:setText(getLocalizedSlotValue(filterType, filters[i].filterName))
					filterButton:addMouseUpCallback(function()
						filterButton.linkedCheck:setChecked(false)
						updateFilters()
					end)
					selectedFiltersPanel:insertWidget(filterButton)
					haveChecked = true
				end
			end
		end
		
		if filtersButtons[filterType] ~= nil then
			if haveChecked == true then
				filtersButtons[filterType]:setSkin(filterButtonMarkeredSkin)
			else
				filtersButtons[filterType]:setSkin(filterButtonNormalSkin)
			end
		end
	end
end

function updateFilters()
	updateSelectedFilters()
	local availableFilters = kMaxSelectedFilters - selectedFiltersPanel:getWidgetCount()
	if availableFilters < 0 then
		availableFilters = 0
	end
	availableFiltersCounter:setText(cdata.availableFilters.." "..availableFilters)
	needCreateGrids = true
	updateGrids()
end

function getLocalizedSlotValue(key, value)
	if not key or not value then
		return ""
	end
	
	local localizedValue
	if key == "role" then
		localizedValue = keys.tabTr[value] or value
	elseif key == "type" then
		localizedValue = keys.tabTr[value] or keys.getDisplayName(value)
	elseif key == "countryName" then
		localizedValue = keys.tabCountries[value] or value
	else
		localizedValue = value
	end
	
	return localizedValue
end

function showMaxFiltersWarning()
	local handler = MsgWindow.info(cdata.msgMaxFilters, cdata.info, cdata.ok)
    handler:show()
end

function clearFiltersInCategory(category)
	for i, checkWgt in base.ipairs(checkItemsFilters[category]) do
		checkWgt:setChecked(false)
	end
	
	updateFilters()
end

function resizeDropDownMenu(filterWidget, resetButton)
	local maxItemWidth = filterWidget:calcSize()
	maxItemWidth = maxItemWidth + 46
	filterWidget:setSize(maxItemWidth, base.math.min(filterWidget:getItemCount()*30+2, 662))
	resetButton:setSize(maxItemWidth, 30)
end

function setupFilter(filterNames, filterType, filterWidget, resetButton)
	for i, v in ipairs(filterNames) do
		if v.name ~= "" then
			local filterName = getLocalizedSlotValue(filterType, v.name)
			
			if filterName then
				local nameStr = filterName.." ("..v.count..")"
				local item = filterWidget:newItem(nameStr)
				item.filterName = v.name
				item.slotsAmount = v.count
				item:setTooltipText(nameStr)
				base.table.insert(checkItemsFilters[filterType], item)
			end
		end
	end
	
	function filterWidget:onItemChange()	
		local item = filterWidget:getSelectedItem()
		if selectedFiltersPanel:getWidgetCount() >= kMaxSelectedFilters and item:getChecked() then
			item:setChecked(false)
			showMaxFiltersWarning()
			return
		end
		
		updateFilters()
	end
	
	resizeDropDownMenu(filterWidget, resetButton)
	
	function resetButton:onChange()
		clearFiltersInCategory(filterType)
	end
end

local trim = function(text)
	return (string.gsub(text, '^%s*(.-)%s*$', '%1'))
end

function updateSearchResults()
	searchString = trim(editBoxSearch:getText())
	needCreateGrids = true
	updateGrids()
end

function clearFiltersWidgets()
	checkItemsFilters.type = {}
	clbType:removeAllItems()
	
	checkItemsFilters.roleCategorie = {}
	clbRole:removeAllItems()
	
	checkItemsFilters.airdromeName = {}
	clbAirdrome:removeAllItems()
	
	checkItemsFilters.availability = {}
	clbAvailability:removeAllItems()
	
	filtersButtons = {}
	
	searchString = ""
end

local getAirdromeName

function setupFilters()
	airdromesCoalitions = {}
	clearFiltersWidgets()

	local typesTbl = {}
	local rolesTbl = {}
	local airdromesTbl = {}
	
	local function getFilteredDataFromSlots(slots)
		for k,v in base.pairs(slots) do
			if v.type ~= "artillery_commander" and v.type ~= "instructor" then
				typesTbl[v.type] = typesTbl[v.type] and typesTbl[v.type] + 1 or 1
			end
			rolesTbl[v.roleCategorie] = rolesTbl[v.roleCategorie] and rolesTbl[v.roleCategorie] + 1 or 1
			airdromesTbl[getAirdromeName(v)] = airdromesTbl[getAirdromeName(v)] and airdromesTbl[getAirdromeName(v)] + 1 or 1
		end
	end
	
	getFilteredDataFromSlots(DCS.getAvailableSlots(MultiplayerSelectRole.getSelectedCoalition()))
	
	local function formatFilterTable(t, filterType)
		local sortedTable = {}
		for n, v in base.pairs(t) do base.table.insert(sortedTable, { name = n, count = v }) end
		
		local alwaysFirstOrLast = {} --the higher the value, the higher in the list
		alwaysFirstOrLast[cdata.sAir] = 2
		alwaysFirstOrLast[cdata.sGround] = 1
		alwaysFirstOrLast[cdata.sPilot] = 2
		alwaysFirstOrLast[cdata.sCombinedArms] = -1
		alwaysFirstOrLast[cdata.sSupercarrier] = -2
		
		base.table.sort(sortedTable, function(left, right)
			if not left or not right then
				return false
			end

			local leftLocalized = getLocalizedSlotValue(filterType, left.name)
			local rightLocalized = getLocalizedSlotValue(filterType, right.name)
			
			if alwaysFirstOrLast[leftLocalized] == nil and alwaysFirstOrLast[rightLocalized] == nil then
				return textutil.Utf8Compare(leftLocalized, rightLocalized)
			elseif alwaysFirstOrLast[leftLocalized] ~= nil and alwaysFirstOrLast[rightLocalized] == nil then
				return alwaysFirstOrLast[leftLocalized] > 0;
			elseif alwaysFirstOrLast[leftLocalized] == nil and alwaysFirstOrLast[rightLocalized] ~= nil then
				return alwaysFirstOrLast[rightLocalized] <= 0;
			else
				if alwaysFirstOrLast[leftLocalized] == alwaysFirstOrLast[rightLocalized] then
					return textutil.Utf8Compare(leftLocalized, rightLocalized)
				else
					return alwaysFirstOrLast[leftLocalized] > alwaysFirstOrLast[rightLocalized]
				end
			end
		end)
		return sortedTable
	end
	
	typesTbl = formatFilterTable(typesTbl, "type")
	rolesTbl = formatFilterTable(rolesTbl, "roleCategorie")
	airdromesTbl = formatFilterTable(airdromesTbl, "airdromeName")
	
	setupFilter(typesTbl, "type", clbType, clearType)
	setupFilter(rolesTbl, "roleCategorie", clbRole, clearRole)
	setupFilter(airdromesTbl, "airdromeName", clbAirdrome, clearAirdrome)
	
	-- Search filter
	local function setupAvailabilityFilter(name)
		local item = clbAvailability:newItem(name)
		item.filterName = name
		item:setTooltipText(name)
		base.table.insert(checkItemsFilters.availability, item)
	end
	
	setupAvailabilityFilter(cdata.onlyAvailable)
	setupAvailabilityFilter(cdata.onlyFree)
	setupAvailabilityFilter(cdata.onlyHot)
	setupAvailabilityFilter(cdata.onlyCold)
	
	resizeDropDownMenu(clbAvailability, clearAvailability)
	
	function clbAvailability:onItemChange()	
		local item = clbAvailability:getSelectedItem()
		if selectedFiltersPanel:getWidgetCount() >= kMaxSelectedFilters and item:getChecked() then
			item:setChecked(false)
			showMaxFiltersWarning()
			return
		end
		
		updateFilters()
	end
	
	function clearAvailability:onChange()
		clearFiltersInCategory('availability')
	end
	
	--
	local function setupFilterButton(filterType, button, checkListBox, resetButton)
		if not filterType or filterType == "" or not button or not checkListBox or not resetButton then
			return
		end
		
		checkListBox:setVisible(false)
		resetButton:setVisible(false)
		button.comboListBoxVisible = false
		button.hiddenByMissClick = false
		function button:onChange()
			button.comboListBoxVisible = not button.comboListBoxVisible
			checkListBox:setVisible(button.comboListBoxVisible)
			resetButton:setVisible(button.comboListBoxVisible)
		end
		
		filtersButtons[filterType] = button
	end
	
	setupFilterButton("type", typesFilter, clbType, clearType)
	setupFilterButton("roleCategorie", rolesFilter, clbRole, clearRole)
	setupFilterButton("airdromeName", airdromesFilter, clbAirdrome, clearAirdrome)
	setupFilterButton("availability", availabilityFilter, clbAvailability, clearAvailability)
end

function isValidSlot(a_data)
	local a_type = a_data.type
	local a_helipadUnitType = a_data.helipadUnitType
	return (base.aircraftFlyableInPlugins[a_type] or isRole(a_type) or isSupercarrierRole(a_data.role)) and isEnableAirdrome(a_helipadUnitType) and isMulticrewOkaySlot(a_data)
end	
	
function setupCallbacks()
    btnBriefing.onChange    = onChange_btnBriefing
    btnBackToSpectrators.onChange = MultiplayerSelectRole.backToSpectrators
    btnReleaseSlot.onChange = MultiplayerSelectRole.releaseSlot
	ePassword.onKeyDown = onKeyDown_ePassword
	tabButton.onChange = MultiplayerSelectRole.onSwitchToDynamicSlots
	
    grid.onMouseDown = function(self, x, y, button)
        if 1 ~= button then
            return
        end
       
        local col, row = grid:getMouseCursorColumnRow(x, y)

        if -1 < row then
            local widget = grid:getCell(0, row)
            if widget and widget.data then
				MultiplayerSelectRole.scrollToIdSelectRoleDialog(widget.data.unitId)
				local isAirdrome = true
				if widget.data.helipadId ~= nil then
					isAirdrome = false
				end
				local terminalBusy = DCS.checkMultiplayerSpawnConflict(widget.data.takeOffType, widget.data.helipadId or widget.data.airdromeId, isAirdrome, widget.data.unitId, widget.data.type)
				if widget.data.multicrew_place == 1 and terminalBusy == true and playerIdBySlot[widget.data.unitId] ~= myId then
					local handler = MsgWindow.info(cdata.cantCreateUnit, cdata.info, cdata.ok)
					handler:show()
					return
				end
				
				if widget.skinType ~= 4 then
					local coalition = MultiplayerSelectRole.getSelectedCoalition()
					local side = 0
					if coalition == "red" then
						side = 1
					elseif coalition == "blue" then
						side = 2
					end
                    setSlot(side,widget.data.unitId)
                end    
            end
			gridAdv:selectRow(row)
        end        
    end
end 

local function parseUnitId(a_unitId)
    local pos = string.find(string.reverse(a_unitId), '_');        
    if pos then
        local unitId = string.sub(a_unitId, 1, -pos -1);
        local place = string.sub(a_unitId,-pos+1)
        return true,unitId,place
    end

    return false
end

function busyLA(a_unitId)
    local idMaster  = MultySeatLAbyId[a_unitId]     
    if idMaster and (idMaster ~= net.get_my_player_id()) then
        return true, idMaster
    end

    return false
end

function setSlot(a_side, a_unitId)
    print("---setSlot---",a_side, a_unitId)
    
    if playerIdBySlot[a_unitId] ~= nil then
        print("---slotbusy---")
        return
    end
 
    slotJoinQuery.onChange_bDenyAll() -- отказываем всем на присоединение к ЛА
    
	local bBusyLA, idMaster = busyLA(a_unitId)
    if bBusyLA then
		local foo, newID = parseUnitId(a_unitId)
		local baz, oldAID = net.get_slot(net.get_my_player_id())
		local bar, oldID = parseUnitId(oldAID)
		if newID ~= oldID then 
			wait_query.show(true, idMaster)
		end
    end    

	local passwordCoal = nil
	if a_side == 1 then
		passwordCoal = MultiplayerSelectCoalitionDialog.getCoalitionPassword("red")
	elseif a_side == 2 then
		passwordCoal = MultiplayerSelectCoalitionDialog.getCoalitionPassword("blue")
	end
	
    net.set_slot(a_side,a_unitId, passwordCoal, passwordsById[a_unitId])
end

function onKeyDown_ePassword(self, key, unicode)
	if 'return' == key then                      
		base.table.insert(passwords, self:getText())
		self:setText()
		
		needCreateGrids = true
		updateGrids()
	elseif 'escape' == key then
		self:setText()
		self:setFocused(false)
	end
end

function onSlotSelected(unitId)
	if window == nil then
		return
	end
	
	if not unitId then
		gridAdv:unSelectGrid()
		return
	end
	
	local value = tblRows[base.tostring(unitId)]
	if value then
		if isValidSlot(value.rowCells[1].data) then
			local coalition = MultiplayerSelectRole.getSelectedCoalition()
			local side = 0
			if coalition == "red" then
				side = 1
			elseif coalition == "blue" then
				side = 2
			end
            setSlot(side,unitId)
			grid:setVertScrollPosition((value.index)*(rowHeight+1))
        end
	end
end

function tryGridUpdateByEvent()
	if lastTimeGridUpdate + 2 < DCS.getRealTime() then
		updateGrids()
	else
		UpdateManager.add(function()
			if lastTimeGridUpdate + 2 < DCS.getRealTime() and gridCreatingProcess == false then
				updateGrids()
				return true
			else
				return false
			end
		end)
    end
end

function onPlayerChangeSlot(id)
    tryGridUpdateByEvent()
end    

function onPlayerConnect(id)
    
end 

function onPlayerDisconnect(id)
    tryGridUpdateByEvent()
end 

function onSimulationStart()
	needCreateGrids = true
	
	if DCS.isTrackPlaying() == false then		
		local settings = net.get_server_settings()		
		if settings.advanced then
			redPasswordHash = settings.advanced.redPasswordHash
			bluePasswordHash = settings.advanced.bluePasswordHash
		end
	end	
end

function onMissionLoadEnd()
	needCreateGrids = true
	lastTimeGridUpdate = 0
end

function onATCTerminalAcquireChanged()
	tryGridUpdateByEvent()
end

function onChangeCoalition(coalition)	
	local dynamicSlotsExist = #MultiplayerSelectDynamicDialog.getDynamicsAirdromes(coalition) + #MultiplayerSelectDynamicDialog.getDynamicsFarpsAndCarriers(coalition) > 0
	tabButton:setEnabled(dynamicSlotsExist)
	tabButton:setTooltipText(dynamicSlotsExist and cdata.tip_selectDynamicSlot or cdata.dynamicSlotsNotExist)
end

function onChange_btnBriefing()
    if MultiplayerSelectRole.checkSpectatorExternalViews() == true then   
        MultiplayerSelectRole.onEsc(true)
        local unit_type = DCS.getPlayerUnitType()
        if unit_type then DCS.preloadCockpit(unit_type) end
        BriefingDialog.show('Menu')  
    end
end

function show(b)
    if window == nil then
        create()
    end	
	
	window:setVisible(b)    
	if b then
		airdromes = Terrain.GetTerrainConfig("Airdromes")
		updateColumnHeaders()
		setupFilters()
		updateTitle()
		updateFilters()
    end
end

function updateTitle()
	local coalitionText = ""
	local coalition = MultiplayerSelectRole.getSelectedCoalition()
	if coalition == "red" then
		coalitionText = cdata.REDCOALITION
	elseif coalition == "blue" then
		coalitionText = cdata.BLUECOALITION
	end
	
    playerName = nickname:getNickname()
    if playerName == nil then
        playerName = cdata.Player
    end
	
	window:setText(coalitionText.." - "..playerName)  
end

function compareFunction(data1, data2)
	if curKeySort == "password" or curKeySort == 'groupName' or curKeySort == 'airdromeName' or curKeySort == 'countryName'
		or curKeySort == 'onboard_num' then
		if data1[curKeySort] == nil and data2[curKeySort] == nil then
			if data1.id == data2.id then
				return data1.multicrew_place < data2.multicrew_place 
			end
			return data1.id < data2.id 
		end
		
		if data1[curKeySort] == nil and data2[curKeySort] ~= nil then
			if sortReverse then
				return true
			end
			return false
		end
		
		if data1[curKeySort] ~= nil and data2[curKeySort] == nil then
			if sortReverse then
				return false
			end
			return true
		end
		
		if data1[curKeySort] == data2[curKeySort] then
			if data1.id == data2.id then
				return data1.multicrew_place < data2.multicrew_place 
			end
			return data1.id < data2.id 
		else
			if sortReverse then
				return textutil.Utf8Compare(data2[curKeySort], data1[curKeySort])
			end
			return textutil.Utf8Compare(data1[curKeySort], data2[curKeySort])
		end
	elseif curKeySort == 'player' then
		if data1['unitId'] == nil and data2['unitId'] == nil then
			if data1.id == data2.id then
				return data1.multicrew_place < data2.multicrew_place 
			end
			return data1.id < data2.id 
		end
		
		if data1['unitId'] == nil and data2['unitId'] ~= nil then
			if sortReverse then
				return true
			end
			return false
		end
		
		if data1['unitId'] ~= nil and data2['unitId'] == nil then
			if sortReverse then
				return false
			end
			return true
		end
		
		local kk1 = playerNameBySlot[data1.unitId] or ""
		local kk2 = playerNameBySlot[data2.unitId] or ""
		if kk1 == kk2 then
			if data1.id == data2.id then
				return data1.multicrew_place < data2.multicrew_place 
			end
			return data1.id < data2.id 
		else
			if sortReverse then
				return textutil.Utf8Compare(kk2, kk1)
			end
			
			return textutil.Utf8Compare(kk1, kk2)
		end
	elseif curKeySort == 'type' or curKeySort == 'role' then
		if data1[curKeySort] == nil and data2[curKeySort] == nil then
			if data1.id == data2.id then
				return data1.multicrew_place < data2.multicrew_place 
			end
			return data1.id < data2.id 
		end
		
		if data1[curKeySort] == nil and data2[curKeySort] ~= nil then
			if sortReverse then
				return true
			end
			return false
		end
		
		if data1[curKeySort] ~= nil and data2[curKeySort] == nil then
			if sortReverse then
				return false
			end
			return true
		end
		
		local kk1 = keys.tabTr[data1[curKeySort]] or keys.getDisplayName(data1[curKeySort])
		local kk2 = keys.tabTr[data2[curKeySort]] or keys.getDisplayName(data2[curKeySort])
		if kk1 == kk2 then
			if data1.id == data2.id then
				return data1.multicrew_place < data2.multicrew_place 
			end
			return data1.id < data2.id 
		else
			if sortReverse then
				return textutil.Utf8Compare(kk2, kk1)
			end
			
			return textutil.Utf8Compare(kk1, kk2)
		end
	end
end

function fillListMultySeatLA(aSlots)
    MultySeatLAbyId = {}  -- [slot_id] = id плеера сидящего в другом слоте
    for k,v in base.pairs(aSlots) do
        local res,unitId = parseUnitId(v.unitId)
        if res == true then
            MultySeatLAbyId[v.unitId] = playerIdBySlot[unitId]
            MultySeatLAbyId[unitId] = playerIdBySlot[v.unitId]  --первый пилот
        end
    end
end

function getAirdromeName(a_data)
	local airdromeName
	if a_data.type == a_data.role then
        airdromeName = ""
	elseif a_data.role == "airboss" or a_data.role == "lso" then
		airdromeName = ""
    elseif a_data.action then
        if a_data.action == 'From Ground Area' then
            airdromeName = _('Ground')
        end
        if a_data.action == 'From Ground Area Hot' then
            airdromeName = _('Ground') 
        end
    elseif a_data.airdromeId and airdromes[a_data.airdromeId] then
		if airdromes[a_data.airdromeId].display_name then
			airdromeName = _(airdromes[a_data.airdromeId].display_name) 
		else
			airdromeName = airdromes[a_data.airdromeId].names[locale] or airdromes[a_data.airdromeId].names['en']
		end        
	end
	return a_data.helipadName or airdromeName or _("Air")
end

function updateTypeFilterCounters(aSlots)
	local busySlotsByType = {}
	
	local findBusySlots = function(slots)
		for k,v in base.pairs(slots) do
			if playerIdBySlot[v.unitId] then
				busySlotsByType[v.type] = busySlotsByType[v.type] and busySlotsByType[v.type] + 1 or 1
			end
		end
	end
	
	findBusySlots(aSlots)
	
	for i = 1, #checkItemsFilters.type do
		local filter = checkItemsFilters.type[i]
		local busySlots = busySlotsByType[filter.filterName] or 0
		local filterName = getLocalizedSlotValue("type", filter.filterName)
		local freeSlots = filter.slotsAmount - busySlots
		filter:setText(filterName.." ("..freeSlots.."/"..filter.slotsAmount..")")
	end
end

function check_password(a_unitId, a_hashed_password)
	local result = false
	for k, plain_password in base.pairs(passwords) do
		local bCheck = net.check_password(plain_password, a_hashed_password)
		if bCheck then
			passwordsById[a_unitId] = plain_password
		end
		result = result or bCheck
	end
	return result
end

function isSlotAvailable(slot, coalition)
	if slot.groupName then
		if (slot.groupName and base.aircraftFlyableInPlugins[slot.type] == nil) and isSupercarrierRole(slot.role) == false then
			return false
		end

		if isValidSlot(slot) ~= true then
			return false
		end
	
		local startPoint = slot.helipadId or slot.airdromeId or nil
		if startPoint ~= nil then
			if DCS.getAircraftAmountInAirportWarehouse(slot.type, startPoint, startPoint == slot.helipadId) < 1 then
				return false
			end
		end
	
		if slot.airdromeId and coalition ~= airdromesCoalitions[slot.airdromeId] then
			return false
		end
	end

	return true;
end

function checkFilters(slot, coalition)
	-- filterAvailable
	if checkItemsFilters.availability[1]:getChecked() == true then
		if isSlotAvailable(slot, coalition) == false then
			return false
		end
	end
	
	-- filterFree
	if checkItemsFilters.availability[2]:getChecked() == true then
		if playerIdBySlot[slot.unitId] ~= nil and playerIdBySlot[slot.unitId] ~= "" and playerIdBySlot[slot.unitId] ~= myId then
			return false
		end
	end
	
	-- For Hot and Cold together
	if checkItemsFilters.availability[3]:getChecked() ~= checkItemsFilters.availability[4]:getChecked() then
		-- filterHot
		if checkItemsFilters.availability[3]:getChecked() == true then
			local typeStr = slot.takeOffType or ""
			if typeStr ~= "TakeOff" and #typeStr > 7 and string.sub(typeStr, 1, 7) == "TakeOff" then
				if string.sub(typeStr, #typeStr - 2, #typeStr) ~= "Hot" then
					return false
				end
			elseif #typeStr < 3 then
				return false
			end
		end
		
		-- filterCold
		if checkItemsFilters.availability[4]:getChecked() == true then
			local typeStr = slot.takeOffType or ""
			if typeStr ~= "TakeOffParking" and typeStr ~= "TakeOffGround" then
				return false
			end
		end
	end
	
	for param, filters in base.pairs(checkItemsFilters) do
		if param ~= "availability" then
			local filterFound = false
			local notSelected = true
			
			for i = 1, #filters do
				local filter = filters[i]
				if filter:getChecked() == true and filter.filterName == slot[param] then
					filterFound = true
					break 
				elseif filter:getChecked() == true then
					notSelected = false
				end
			end
			
			if filterFound == false and notSelected == false then
				return false
			end
		end
	end
	
	if not searchString or '' == searchString then
		return true
	end
	
	for i, value in base.ipairs(searchCategories) do
		if textutil.Utf8FindNoCase(getLocalizedSlotValue(value, slot[value]), searchString) then
			return true
		end
	end
	
	if textutil.Utf8FindNoCase(playerNameBySlot[slot.unitId] or "", searchString) then
		return true
	end
	
	return false
end

function updateGrids()
	if window == nil or window:getVisible() == false then
		return
	end
	
	for i, value in base.pairs(DCS.getAirdromesCoalition()) do
		airdromesCoalitions[value.airdromeId] = coalitionIndices[value.coalition]
	end
	
    local slotsTMP = DCS.getAvailableSlots(MultiplayerSelectRole.getSelectedCoalition())
    local slots = {}
	filteredSlotsIds = {}
	
	local takeSuitableSlots = function(slotsTableSource, slotsTableTarget, coalition)
		for k,v in base.pairs(slotsTableSource) do
			v.airdromeName = getAirdromeName(v)
			local tmp, id = parseUnitId(v.unitId)	
			v.id = id or v.unitId
			
			if checkFilters(v, coalition) then
				if v.password == nil or check_password(v.unitId, v.password) == true then
					base.table.insert(slotsTableTarget, v)
					base.table.insert(filteredSlotsIds, base.tonumber(v.id))
				end
			end
		end
	end
	
	takeSuitableSlots(slotsTMP, slots, MultiplayerSelectRole.getSelectedCoalition())
	
    base.table.sort(slots, compareFunction)
	
    myId = net.get_my_player_id() 
 
    local players = net.get_player_list()
    playerNameBySlot = {}
    playerIdBySlot = {}
    for k,playerId in base.pairs(players) do
        local player_info = net.get_player_info(playerId)
        if player_info.slot ~= "" then
            playerNameBySlot[player_info.slot] = player_info.name
            playerIdBySlot[player_info.slot] = player_info.id
        end
        
        if (MultiplayerSelectRole.getSelectedCoalition() == "red" and player_info.side == 1)
			or (MultiplayerSelectRole.getSelectedCoalition() == "blue" and player_info.side == 2) then
        end
    end
	
	updateTypeFilterCounters(slotsTMP)
    
    fillListMultySeatLA(slots)
	
    if needCreateGrids == true then
        tblRows = {}
        createGrid(slots)
    else
		if #slots == U.getTableSize(tblRows) then
        	updateGrid(slots)
		else
			scrollGridTo = grid:getVertScrollPosition()
			tblRows = {}
        	createGrid(slots)
		end
    end

	MultiplayerSelectRole.onSlotsGridUpdatedSelectRoleDialog()
	
	local myInfo = net.get_player_info(myId)
	btnReleaseSlot:setEnabled(myInfo.slot ~= "")

	lastTimeGridUpdate = DCS.getRealTime()
end

function updateGrid(a_data)
	rowType = 1
    for n,slot in base.pairs(a_data) do
		local row = tblRows[slot.unitId]
		if row ~= nil then
			if rowType > 3 then
				rowType = 1
			end
			if slot.multicrew_place > 1 and slot.roleCategorie ~= cdata.sSupercarrier then
				rowType = oldRowType
			end

			local cells = row.rowCells --- unitId - на самом деле slotId
			local skinType


			local terminalBusy = false
			if a_data.multicrew_place == 1 then
				local isAirdrome = true
				if a_data.helipadId ~= nil then
					isAirdrome = false
				end
				terminalBusy = DCS.checkMultiplayerSpawnConflict(slot.takeOffType, slot.helipadId or slot.airdromeId, isAirdrome, slot.unitId, slot.type)
			end
			
			if playerIdBySlot[slot.unitId] == myId then
				skinType = 2
			elseif (slot.groupName and base.aircraftFlyableInPlugins[slot.type] == nil) and isSupercarrierRole(a_data.role) == false then        
				skinType = 4
			elseif isSlotAvailable(slot, MultiplayerSelectRole.getSelectedCoalition()) == false then
				skinType = 4 
			elseif isValidSlot(slot) == true and terminalBusy == false then        
				skinType = rowType
			else
				skinType = 4 
			end   
					
			for k, cell in base.pairs(cells) do
				if k == 8 then
					cell:setText(playerNameBySlot[slot.unitId] or "")
				end
				if k == 2 then
					local modifiedName = slot.groupName or ""
					
					if slot.multicrew_place > 1 and slot.roleCategorie ~= cdata.sSupercarrier then
						local pilotName = playerNameBySlot[slot.id] or cdata.noPilot
						modifiedName = modifiedName.." ("..pilotName..")"
						cell:setText("\t\t"..modifiedName)
					elseif terminalBusy == true and playerIdBySlot[slot.unitId] == nil then
						modifiedName = modifiedName.." ("..cdata.spawnIsOccupied..")"
						cell:setText(modifiedName)
					end
					
					cell:setTooltipText(modifiedName)
				end
				
				cell.skinType = skinType
				local skin 
				if k == 5 or k == 6 then
					skin = SkinsStatic[skinType].skinAlignMiddle
				elseif k == 1 then
					skin = cell.skin
					if cell.colNum == 1 then						
						if cell.data.password ~= nil then
							if skinType == 2 then
								skin = staticSkinGridServersLockSel
							else
								skin = staticSkinGridServersLock
							end
						else
							if skinType == 2 then
								skin = staticSkinGridServersLockNoSel
							else
								skin = staticSkinGridServersLockNo
							end						
						end	
					end
				else
					skin = SkinsStatic[skinType].skinPadding 
				end
				cell:setSkin(skin)
				cell.skin = skin
			end
			oldRowType = rowType
			rowType = rowType + 2
		end
    end    
end

function createGrid(a_data)
    grid:removeAllRows()
	grid:setRowCount(#a_data)
	local playerSelectedSlotIndex
    rowType = 1
	gridCreatingProcess = true

	if #a_data > 50 then
		playerSelectedSlotIndex = 1
		local indexOffset = 0
		if scrollGridTo ~= nil then
			playerSelectedSlotIndex = math.ceil(scrollGridTo / (rowHeight+1))
			grid:setVertScrollPosition(scrollGridTo)
			scrollGridTo = nil
		else
			for i = 1, #a_data do
				if playerIdBySlot[a_data[i].unitId] == myId then
					playerSelectedSlotIndex = i
					grid:setVertScrollPosition((playerSelectedSlotIndex - 1)*(rowHeight+1))
					gridAdv:selectRow(playerSelectedSlotIndex - 1)
					break
				end
			end
		end

		if playerSelectedSlotIndex <= 0 then
			playerSelectedSlotIndex = 1
		elseif playerSelectedSlotIndex > #a_data then
			playerSelectedSlotIndex = #a_data
		end

		Gui.EnableHighSpeedUpdate(true)
		UpdateManager.add(function()
			local addedRowsInThisUpdate = 0
			while playerSelectedSlotIndex + indexOffset <= #a_data or playerSelectedSlotIndex - indexOffset >= 1 do
				if playerSelectedSlotIndex + indexOffset <= #a_data then
					insertRow(a_data[playerSelectedSlotIndex + indexOffset], playerSelectedSlotIndex + indexOffset - 1)
					addedRowsInThisUpdate = addedRowsInThisUpdate + 1
				end
				
				if playerSelectedSlotIndex - indexOffset >= 1 then
					insertRow(a_data[playerSelectedSlotIndex - indexOffset], playerSelectedSlotIndex - indexOffset - 1)
					addedRowsInThisUpdate = addedRowsInThisUpdate + 1
				end

				indexOffset = indexOffset + 1

				if addedRowsInThisUpdate >= 10 then
					return false
				end
			end

			if playerSelectedSlotIndex + indexOffset > #a_data and playerSelectedSlotIndex - indexOffset < 1 then
				needCreateGrids = false
				gridCreatingProcess = false
				scrollGridTo = nil
				playerSelectedSlotIndex = nil
				Gui.EnableHighSpeedUpdate(false)
				return true
			end
		end)
	else
		local rowIndex = 0
		for i = 1, #a_data do
			insertRow(a_data[i],rowIndex)
	
			if playerIdBySlot[a_data[i].unitId] == myId then
				playerSelectedSlotIndex = i
			end
	
			rowIndex = rowIndex + 1
		end

		if scrollGridTo ~= nil then
			grid:setVertScrollPosition(scrollGridTo)
			scrollGridTo = nil
		elseif playerSelectedSlotIndex ~= nil then
			grid:setVertScrollPosition((playerSelectedSlotIndex - 1)*(rowHeight+1))
			gridAdv:selectRow(playerSelectedSlotIndex - 1)
			playerSelectedSlotIndex = nil
		end

		needCreateGrids = false
		gridCreatingProcess = false
	end
end

function insertRow(a_data, a_rowIndex)
    if rowType > 3 then
        rowType = 1
    end
	
	local skinType
	if a_data.multicrew_place > 1 and a_data.roleCategorie ~= cdata.sSupercarrier then
       rowType = oldRowType
    end

	local terminalBusy = false
	if a_data.multicrew_place == 1 then
		local isAirdrome = true
		if a_data.helipadId ~= nil then
			isAirdrome = false
		end
		terminalBusy = DCS.checkMultiplayerSpawnConflict(a_data.takeOffType, a_data.helipadId or a_data.airdromeId, isAirdrome, a_data.unitId, a_data.type)
	end
	
	if playerIdBySlot[a_data.unitId] == myId then
		skinType = 2
	elseif (a_data.groupName and base.aircraftFlyableInPlugins[a_data.type] == nil) and isSupercarrierRole(a_data.role) == false then        
	    skinType = 4
	elseif isSlotAvailable(a_data, MultiplayerSelectRole.getSelectedCoalition()) == false then
		skinType = 4 
	elseif isValidSlot(a_data) == true and terminalBusy == false then        
	    skinType = rowType
	else
	    skinType = 4 
	end    
    
    local cells = {}
  	local cell
	------1
	cell = Static.new()
	cell.data = a_data
	cell.skinType = skinType
	if a_data.password ~= nil then 
        tooltipsPas = cdata.passwordEnable
        cell:setSkin(staticSkinGridServersLock)
		cell.skin = staticSkinGridServersLock
    else
        cell:setSkin(staticSkinGridServersLockNo)
		cell.skin = staticSkinGridServersLockNo
    end
   
    cell:setTooltipText(tooltipsPas)
    cell.colNum = 1
	base.table.insert(cells,cell)
    grid:setCell(0, a_rowIndex, cell)
   
    ------2
    cell = Static.new() 
    cell.data = a_data
    cell.skinType = skinType
    cell:setSkin(SkinsStatic[skinType].skinPadding)  
    cell.skin = SkinsStatic[skinType].skinPadding 
    cell.colNum = 2
	
	local modifiedName = a_data.groupName or ""
	
	if a_data.multicrew_place > 1 and a_data.roleCategorie ~= cdata.sSupercarrier then
		local pilotName = playerNameBySlot[a_data.id] or cdata.noPilot
		modifiedName = modifiedName.." ("..pilotName..")"
		cell:setText("\t\t"..modifiedName)
    else
		if terminalBusy == true and playerIdBySlot[a_data.id] ~= myId then
			modifiedName = modifiedName.." ("..cdata.spawnIsOccupied..")"
		end
		cell:setText(modifiedName)
    end
	
	cell:setTooltipText(modifiedName)
	
    base.table.insert(cells,cell)
    grid:setCell(1, a_rowIndex, cell)

    ------3
    cell = Static.new()
    cell.data = a_data
    cell.skinType = skinType
    cell:setSkin(SkinsStatic[skinType].skinPadding)
    cell.skin = SkinsStatic[skinType].skinPadding 
    cell.colNum = 3
	
	local textType = keys.tabTr[a_data.type] or keys.getDisplayName(a_data.type)
    cell:setText(textType)  
    cell:setTooltipText(textType)
		
    base.table.insert(cells,cell)  
    grid:setCell(2, a_rowIndex, cell)
    
    ------4
    cell = Static.new()
    cell.data = a_data
    cell.skinType = skinType
    cell:setSkin(SkinsStatic[skinType].skinPadding)
    cell.skin = SkinsStatic[skinType].skinPadding 
	local text = keys.tabTr[a_data.role] or a_data.role
    cell:setText(text)
    cell:setTooltipText(text)
    cell.colNum = 4
    grid:setCell(3, a_rowIndex, cell)
    base.table.insert(cells,cell)
    
    ------5
    cell = Static.new()
    cell.data = a_data
    cell.skinType = skinType
    cell:setSkin(SkinsStatic[skinType].skinAlignMiddle)
    cell.skin = SkinsStatic[skinType].skinAlignMiddle
    cell.colNum = 5
	local text = keys.tabCountries[a_data.countryName] or a_data.countryName
    cell:setText(text)
    cell:setTooltipText(text)
    grid:setCell(4, a_rowIndex, cell)
    base.table.insert(cells,cell)
    
    ------6
    cell = Static.new()
    cell.data = a_data
    cell.skinType = skinType
    cell:setSkin(SkinsStatic[skinType].skinAlignMiddle)
    cell.skin = SkinsStatic[skinType].skinAlignMiddle
    cell.colNum = 6
    cell:setText(a_data.onboard_num)
    cell:setTooltipText(a_data.onboard_num)
    grid:setCell(5, a_rowIndex, cell)
    base.table.insert(cells,cell)
    
    ------7
    cell = Static.new()
    cell.data = a_data
    cell.skinType = skinType
    cell:setSkin(SkinsStatic[skinType].skinPadding)
    cell.skin = SkinsStatic[skinType].skinPadding  
    cell.colNum = 7
	
	local text
	if a_data.airdromeId and a_data.parking_id then
		text = a_data.airdromeName.." - "..a_data.parking_id 
	else
		text = a_data.airdromeName
	end
	cell:setText(text)
	cell:setTooltipText(text)

    grid:setCell(6, a_rowIndex, cell)
    base.table.insert(cells,cell)
    
    ------8
    cell = Static.new()
    cell.data = a_data
    cell.skinType = skinType
    cell:setSkin(SkinsStatic[skinType].skinPadding)
    cell.skin = SkinsStatic[skinType].skinPadding 
	local text = playerNameBySlot[a_data.unitId] or ""
    cell:setText(text)
    cell:setTooltipText(text)
    cell.colNum = 8
    grid:setCell(7, a_rowIndex, cell) 
    base.table.insert(cells,cell)    
    tblRows[a_data.unitId] = {rowCells = cells, index = a_rowIndex} --- unitId - на самом деле slotId
    oldRowType = rowType
    rowType = rowType + 2
end

function update(a_serverlist,a_force) 

end

local function getColumnHeaderSkin(a_key, a_index)
    if a_index == 3 or a_index == 4 then
        groupSkin = 1
    else
        groupSkin = 2
    end
	
	local skinKey = 'skinNoSort'
	if curKeySort == a_key then
		if sortReverse then
			skinKey = 'skinSortDown'
		else
			skinKey = 'skinSortUp'
		end
	end
    
	return SkinsHeaders[groupSkin][skinKey]
end

function updateColumnHeaders()
    local count = grid:getColumnCount()
	
	for i = 1, count - 1 do
		local gridHeaderCell = grid:getColumnHeader(i)
		
		if gridHeaderCell then
			local skin = getColumnHeaderSkin(gridHeaderCell.KeySort, i)
			
			if skin then
				gridHeaderCell:setSkin(skin)
			end
		end
	end
end

function getVisible()
    if window then
        return window:getVisible()
    end
    return false    
end

function getDialogPosition()
    if window then
        return window:getPosition()
    end
    return nil, nil
end

function updateDialogPosition(x, y)
    if window and x and y then
        return window:setPosition(x, y)
    end
end

function getDialogSize()
    if window then
        return window:getSize()
    end
    return 0, 0    
end

function getFilteredSlotsIds()
	return filteredSlotsIds
end

function isMulticrewOkaySlot(a_data)
	local multicrew_place = a_data.multicrew_place
	if not multicrew_place or multicrew_place == 1 then
		return true
	end
	local res, unit_id, nope = parseUnitId(a_data.unitId)
	if not res then
		return true
	end
	if a_data.role == "airboss" or a_data.role == "lso" then
		return true --fckn supercarrier
	end
	local player_name = playerNameBySlot[unit_id]
	if not player_name or player_name == "" or player_name == playerName then
		return false
	end
	return true
end

function resetPasswords()
	passwords = {}
	passwordsById = {}
end