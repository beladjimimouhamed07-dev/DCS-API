local base = _G

module('MultiplayerSelectDynamicDialog')

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
local Chat				= require('mul_chat')
local DCS				= require('DCS')
local DB				= require('me_db_api')
local PlayersPool		= require('mul_playersPool')
local BriefingDialog	= require('BriefingDialog')
local nickname			= require('mul_nickname')
local RPC				= require('RPC')
local advGrid			= require('advGrid')
local Terrain			= require('terrain')
local ProductType		= require('me_ProductType') 
local SkinUtils			= require('SkinUtils')
local DcsWeb			= require('DcsWeb')
local Tools				= require('tools')
local Input				= require('Input')
local textutil          = require('textutil')
local MsgWindow			= require('MsgWindow')
local UpdateManager		= require('UpdateManager')

local MultiplayerSelectRole = require('MultiplayerSelectRole')
local MultiplayerSelectRoleDialog = require('MultiplayerSelectRoleDialog')
local MultiplayerSelectAirdromeDialog = require('MultiplayerSelectAirdromeDialog')

i18n.setup(_M)

local locale = i18n.getLocale()
local rowHeight = 21

local lastTimeGridUpdate = 0

cdata = 
{
	mult_selectDynamicSlot  = _("MULTIPLAYER - Select dynamic slot"),
	choiceOfRole      		= _("Choice of role"),
    Exit                 	= _("EXIT"),
	BLUECOALITION        	= _("BLUE COALITION"),
    REDCOALITION         	= _("RED COALITION"),
    blueCoalitionDynamic    = _("SELECT THE BLUE COALITION AIRFIELD"),
    redCoalitionDynamic    	= _("SELECT THE RED COALITION AIRFIELD"),
    BackToSpectrators    	= _("CHANGE COALITION"),
	ReleaseSlot    			= _("RELEASE SLOT"),
    Name              		= _("Airfield"),
    Type              		= _("Type"),
	msgLeaveServer			= _('Are you sure you want to exit the server?'),
	msgExit					= _('Are you sure you want to exit to the main menu?'),								 	
	warning         		= _('WARNING'),
	yes             		= _('YES'),
    no              		= _('NO'),
	cantCreateUnit			= _('MultiplayerSelectRoleDialog.AllTerminalsAreBusy'),
	spawnIsOccupied			= _('MultiplayerSelectRoleDialog.SpawnIsOccupied'),
	info					= _('Info'),
	ok						= _('OK'),
	tabSlots				= _('MultiplayerSelectRole.TabSlots'),
	tabDynSlots				= _('MultiplayerSelectRole.TabDynSlots'),
	tip_selectCoalition		= _('tip_selectCoalition'),
	tip_selectSlot			= _('tip_selectSlot'),
	tip_selectDynamicSlot	= _('tip_selectDynamicSlot'),
	search					= _('Search'),
	clearAllFilters			= _('Clear'),
	clearSearch				= _('Clear search'),
	refreshGrid				= _('Refresh'),
	reset					= _('Reset'),
	availableFilters		= _('Available filters:'),
	msgMaxFilters			= _('The maximum number of filters has been reached.'),
	info					= _('Info'),
	ok						= _('OK'),
	airbaseType 			= _('TYPE'),
}

local curKeySort = 'name'
local sortReverse = false
local coalitionIndices = { [0] = "neutral", [1] = "red", [2] = "blue" }
local airdromesCoalitions = {}
local filtersButtons = {}
local checkItemsFilters = { airbaseType = {} }
local searchCategories = { "name", "display_name", "airbaseType" }
local searchString = ""
local kMaxSelectedFilters = 2

local KeysSort = 
    {
		"name",
    }


function create()
    window = DialogLoader.spawnDialogFromFile("./Scripts/UI/MultiplayerSelectRoleMap/MultiplayerSelectDynamicDialog.dlg", cdata)    
 
    main_panel 				= window.main_panel
	pWork                   = main_panel.pWork
	pCenter                 = pWork.pCenter
	grid                 	= pCenter.grid
	pNoVisible              = pCenter.pNoVisible
	pBtn                    = main_panel.pBtn
	btnBackToSpectrators    = pBtn.btnBackToSpectrators
	btnReleaseSlot    		= pBtn.btnReleaseSlot
	tabButton 				= main_panel.pTabs.tabButton
	pFilters				= main_panel.pFilters
	airbaseTypeFilter		= pFilters.airbaseTypeFilter
	clbAirbaseType			= main_panel.clbAirbaseType
	clearAirbaseType		= main_panel.clearAirbaseType
	selectedFiltersPanel	= pFilters.selectedFiltersPanel
	panelSearch				= pFilters.panelSearch
	availableFiltersCounter = pFilters.availableFiltersCounter
	buttonClearAllFilters	= pFilters.buttonClearAllFilters
	refreshGridButton		= pFilters.refreshGridButton
	editBoxSearch			= panelSearch.editBoxSearch
	buttonClearSearch 		= panelSearch.buttonClearSearch
    
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
				if a_typeSkin == 'normal' then
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
	
	local headerCell = grid:getColumnHeader(0)
	headerCell.KeySort = KeysSort[1]  

	
	headerCell:addChangeCallback(function(self)
		updateGrids()
	end	)

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
	
	function editBoxSearch:onFocus(focused)
		if focused == true then
			DCS.lockAllKeyboardInput()
			Input.ignoreUiLayer(true)
		else
			DCS.unlockKeyboardInput(true)
			Input.ignoreUiLayer(false)
		end
	end
	
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
	
	buttonClearSearch:addChangeCallback(function()
		panelSearch:setText(cdata.search)
		editBoxSearch:setText()
		editBoxSearch:setFocused(false)
		updateSearchResults()
	end)
	
	buttonClearAllFilters:addChangeCallback(function()
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
		updateFilters()
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
		
		checkClickButtomWithComboListBox(x, y, airbaseTypeFilter, clbAirbaseType, clearAirbaseType)
	end)
	
	window:addPositionCallback(function()
		MultiplayerSelectRoleDialog.updateDialogPosition(getDialogPosition())
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
	
	updCheckListBoxesPositions(airbaseTypeFilter, clbAirbaseType, clearAirbaseType)
	
	grid:setColumnWidth(0, 700)
	grid:setColumnWidth(1, 270)
end
    
function setupCallbacks()
    btnBackToSpectrators.onChange = MultiplayerSelectRole.backToSpectrators
	btnReleaseSlot.onChange = MultiplayerSelectRole.releaseSlot
	tabButton.onChange =  MultiplayerSelectRole.onSwitchToSlots
	
    grid.onMouseDown = function(self, x, y, button)
        if 1 ~= button then
            return
        end
       
        local col, row = grid:getMouseCursorColumnRow(x, y)

        if -1 < row then
            local widget = grid:getCell(0, row)
            if widget and widget.data then
				if widget.skinType == 4 then
					if widget.data.airdromeId then
						MultiplayerSelectRole.scrollToIdSelectDynamicDialog(widget.data.airdromeId, true)
					elseif widget.data.unitId then
						MultiplayerSelectRole.scrollToIdSelectDynamicDialog(widget.data.unitId, false)
					end
					local handler = MsgWindow.info(cdata.spawnIsOccupied, cdata.info, cdata.ok)
					handler:show()
					return
				end
				
				if widget.data.airdromeId then
					MultiplayerSelectRole.scrollToIdSelectDynamicDialog(widget.data.airdromeId, true)
					MultiplayerSelectAirdromeDialog.show(true, widget.data.airdromeId, true)
				elseif widget.data.unitId then
					MultiplayerSelectRole.scrollToIdSelectDynamicDialog(widget.data.unitId, false)
					MultiplayerSelectAirdromeDialog.show(true, widget.data.unitId, false)
				end
            end  
			updateGrids()
			gridAdv:selectRow(row)
        end        
    end
end

function updateSelectedFilters()
	selectedFiltersPanel:clear()
	for filterType, filters in base.pairs(checkItemsFilters) do
		local haveChecked = false
		for i = 1, #filters do
			if filters[i]:getChecked() then
				local filterButton = Button.new()
				filterButton.linkedCheck = filters[i]
				filterButton.filterType = filterType
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
			local filterName = v.name
			
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
	
	if not searchString or '' == searchString then
		panelSearch:setText(cdata.search)
	else		
		panelSearch:setText()
	end
	
	needCreateGrids = true
	updateGrids()
end

function clearFiltersWidgets()
	checkItemsFilters.airbaseType = {}
	clbAirbaseType:removeAllItems()
	
	filtersButtons = {}
	
	searchString = ""
end

function setupFilters()
	clearFiltersWidgets()

	local airbaseTypesTbl = {}
	
	local airdromes = getDynamicsAirdromes(MultiplayerSelectRole.getSelectedCoalition())
	airbaseTypesTbl[_('Airfield')] = #airdromes or 0
	local farpsAndCarriers = getDynamicsFarpsAndCarriers(MultiplayerSelectRole.getSelectedCoalition())
	for k,v in base.pairs(farpsAndCarriers) do
		airbaseTypesTbl[v.airbaseType] = airbaseTypesTbl[v.airbaseType] and airbaseTypesTbl[v.airbaseType] + 1 or 1
	end
	
	local function formatFilterTable(t)
		local sortedTable = {}
		for n, v in base.pairs(t) do base.table.insert(sortedTable, { name = n, count = v }) end
		base.table.sort(sortedTable, function(left, right)
			if not left or not right then
				return false
			end
			
			return textutil.Utf8Compare(left.name, right.name)
		end)
		return sortedTable
	end
	
	airbaseTypesTbl = formatFilterTable(airbaseTypesTbl)
	
	setupFilter(airbaseTypesTbl, "airbaseType", clbAirbaseType, clearAirbaseType)
	
	-- Search filter
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
	
	setupFilterButton("airbaseType", airbaseTypeFilter, clbAirbaseType, clearAirbaseType)
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

function getOurDynSlotAirbaseId()
	local airdromeId
	local helipadId
	
	local player_info = net.get_player_info(net.get_my_player_id())
    if player_info.slot ~= "" then
        for k,v in base.pairs(DCS.getAvailableSlots(MultiplayerSelectRole.getSelectedCoalition())) do
			local tmp, id = parseUnitId(v.unitId)	
			v.id = id or v.unitId
			
			if v.id == player_info.slot then
				airdromeId = v.airdromeId
				helipadId = v.helipadId
			end
		end
    end
	
	return airdromeId, helipadId
end

function onAirdromeSelected(airdromeId)
	if window == nil then
		return
	end
	
	if not airdromeId then
		gridAdv:unSelectGrid()
		return
	end
	
	local value = tblRows[airdromeId]
	if value then
		grid:setVertScrollPosition(value.index*rowHeight)
		gridAdv:selectRow(value.index)
	end
end 

function onChangeCoalition(coalition)

end

function tryGridUpdateByEvent()
	if lastTimeGridUpdate + 2 < DCS.getRealTime() then
		updateGrids(true)
	else
		UpdateManager.add(function()
			if lastTimeGridUpdate + 2 < DCS.getRealTime() then
				updateGrids(true)
				return true
			else
				return false
			end
		end)
    end
end

function onATCTerminalAcquireChanged()
	tryGridUpdateByEvent()
end

function onMissionLoadEnd()
	lastTimeGridUpdate = 0
end

function show(b)
    if window == nil then
        create()
    end	

	window:setVisible(b)    
	
	if b then
		base.START_PARAMS.returnScreen = 'multiplayer'
		setupFilters()
		updateFilters()
		updateTitle()
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
	if data1[curKeySort] == nil and data2[curKeySort] == nil then
		return false
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
	
	if sortReverse then
		return textutil.Utf8Compare(data2[curKeySort], data1[curKeySort])
	end
	
	return textutil.Utf8Compare(data1[curKeySort], data2[curKeySort])
end

function getAirdromeName(data)
	local airdromeName
	if data.display_name then
		airdromeName = _(data.display_name) 
	else
		airdromeName = data.names[locale] or data.names['en']
	end
	
	return airdromeName
end

function getAllDynamicsAirdromes()
	airdromes = Terrain.GetTerrainConfig("Airdromes")
	local dynamicsAirdromes = {}
	for i, v in pairs(airdromes) do
		local settings = DCS.getDynamicSpawnSettings(i, true)
		if settings.dynamicSpawnAvailable == true then
			base.table.insert(dynamicsAirdromes, i)
		end
	end
	return dynamicsAirdromes
end

function isDynamicSpawnAllowForAirbase(airbaseId, isAirdrome)
	local settings = DCS.getDynamicSpawnSettings(airbaseId, isAirdrome)
	if settings and settings.dynamicSpawnAvailable == true then
		return true
	end
	
	return false
end

function getDynamicsAirdromes(coalition)
	local dynamicsAirdromes = {}
	
	airdromes = Terrain.GetTerrainConfig("Airdromes")

	for i, value in pairs(DCS.getAirdromesCoalition()) do
		airdromesCoalitions[value.airdromeId] = coalitionIndices[value.coalition]
	end
	
	for i, v in pairs(airdromes) do
		local settings = DCS.getDynamicSpawnSettings(i, true)
		if settings and settings.dynamicSpawnAvailable == true and coalition == airdromesCoalitions[i] then
			v.airdromeId = i
			v.airbaseType = _('Airfield')
			base.table.insert(dynamicsAirdromes, v)
		end
	end
	return dynamicsAirdromes
end

function getDynamicsFarpsAndCarriers(coalition)
	local farpsAndCarriersData = {}
	
	local addFunc = function(data, airbaseType)
		for i, v in pairs(data) do
			local settings = DCS.getDynamicSpawnSettings(i, false)
			if settings and settings.dynamicSpawnAvailable == true and coalition == v.coalition then
				v.unitId = i
				v.airbaseType = airbaseType
				base.table.insert(farpsAndCarriersData, v)
			end
		end
	end
	
	local farpsAndCarriers = DCS.getFarpsAndCarriersMissionData()
	addFunc(farpsAndCarriers.farps, _('Heliport'))
	addFunc(farpsAndCarriers.carriers, _('Aircraft carrier'))
	return farpsAndCarriersData
end

function checkFilters(slot)
	for param, filters in base.pairs(checkItemsFilters) do
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
	
	if not searchString or '' == searchString then
		return true
	end
	
	for i, value in base.ipairs(searchCategories) do
		if slot[value] ~= nil then
			if textutil.Utf8FindNoCase(slot[value], searchString) then
				return true
			end
		end
	end
	
	return false
end

function updateGrids(updateRows)
	if window == nil or window:getVisible() == false then
		return
	end
	
	local takeSuitableSlots = function(slotsTableSource, slotsTableTarget)
		for k,v in base.pairs(slotsTableSource) do			
			if checkFilters(v) then
				base.table.insert(slotsTableTarget, v)
			end
		end
	end
	
	local airdromesTMP = getDynamicsAirdromes(MultiplayerSelectRole.getSelectedCoalition())
	local farpsAndCarriersTMP = getDynamicsFarpsAndCarriers(MultiplayerSelectRole.getSelectedCoalition())
	local airdromes = {}
	local farpsAndCarriers = {}
	
	takeSuitableSlots(airdromesTMP, airdromes)
	takeSuitableSlots(farpsAndCarriersTMP, farpsAndCarriers)
	
	curKeySort = "display_name"
	base.table.sort(airdromes, compareFunction)
	curKeySort = "name"
	base.table.sort(farpsAndCarriers, compareFunction)
	
	myDynAirdromeId, myDynHelipadId = getOurDynSlotAirbaseId()
	
	if updateRows == true then
		updateGrid(airdromes, farpsAndCarriers)
	else
		tblRows = {}
		createGrid(airdromes, farpsAndCarriers)
	end
	
	local myInfo = net.get_player_info(net.get_my_player_id())
	btnReleaseSlot:setEnabled(myInfo.slot ~= "")
	
	MultiplayerSelectRole.onDynamicSlotsGridUpdatedSelectRoleDialog()
end

function createGrid(airdromesData, farpsAndCarriersData)
    grid:removeAllRows()    
    local rowIndex = 0
	rowType = 1
	
    for k,data in base.pairs(airdromesData) do
        insertRow(data,rowIndex)
		rowIndex = rowIndex + 1
    end
	for k,data in base.pairs(farpsAndCarriersData) do
        insertRow(data,rowIndex)
		rowIndex = rowIndex + 1
    end
end

function insertRow(a_data, a_rowIndex)
    grid:insertRow(rowHeight)
	
	if rowType > 3 then
        rowType = 1
    end
	local isAirdrome = true
	if a_data.unitId ~= nil then
		isAirdrome = false
	end
	local terminalBusy = DCS.checkMultiplayerSpawnConflict("TakeOffParking", a_data.unitId or a_data.airdromeId, isAirdrome, "", "")
	local isMyDynAirbase = false
	if myDynHelipadId or myDynAirdromeId then
		isMyDynAirbase = myDynHelipadId == a_data.unitId and myDynAirdromeId == a_data.airdromeId
	end
	
	local unitDef = DB.unit_by_type[a_data.type]
	local airbaseLocked = false
	if unitDef and unitDef.PlayerInteractionLocked and unitDef.PlayerInteractionLocked == true then
		airbaseLocked = true
	end
	local cellRowType
	if (terminalBusy == true and isMyDynAirbase == false) or airbaseLocked == true then    
		cellRowType = 4
	else
		cellRowType = rowType
	end
    
    local cells = {}
	
	--name
    local cell = Static.new() 
    cell.data = a_data
    cell.skinType = cellRowType
    cell.rowType = rowType
    cell:setSkin(SkinsStatic[cellRowType].skinPadding)  
    cell.skin = SkinsStatic[cellRowType].skinPadding 
    cell.colNum = 0
	
	local name = ""
	if a_data.airdromeId then
		name = getAirdromeName(a_data) or ""
	elseif a_data.unitId then
		name = a_data.name or ""
	end
	
	if terminalBusy == true and isMyDynAirbase == false then
		name = name.." ("..cdata.spawnIsOccupied..")"
	end
	
	cell:setText(name)
    cell:setTooltipText(name)
	
    base.table.insert(cells,cell)
    grid:setCell(0, a_rowIndex, cell)
	
	--type
	local cell = Static.new() 
    cell.data = a_data
    cell.skinType = cellRowType
    cell.rowType = rowType
    cell:setSkin(SkinsStatic[cellRowType].skinPadding)  
    cell.skin = SkinsStatic[cellRowType].skinPadding 
    cell.colNum = 0
	local typeName
	if unitDef and unitDef.DisplayNameShort then
		typeName = string.format("%s (%s)",a_data.airbaseType, unitDef.DisplayNameShort)
	else
		typeName = a_data.airbaseType
	end
	cell:setText(typeName)
    cell:setTooltipText(typeName)
	
    base.table.insert(cells,cell)
    grid:setCell(1, a_rowIndex, cell)
	
	if a_data.airdromeId then
		tblRows[a_data.airdromeId] = {rowCells = cells, index = a_rowIndex}
	elseif a_data.unitId then
		tblRows[a_data.unitId] = {rowCells = cells, index = a_rowIndex}
	end
	
	rowType = rowType + 2
end

function updateGrid(airdromes, farpsAndCarriersData)
	local function updateFunc(a_data)
		for n,slot in base.pairs(a_data) do
			local cells
			if slot.airdromeId then
				cells = tblRows[slot.airdromeId].rowCells
			elseif slot.unitId then
				cells = tblRows[slot.unitId].rowCells
			end
			
			--name
			local cell = cells[1]
			
			local isAirdrome = true
			if slot.unitId ~= nil then
				isAirdrome = false
			end
			local terminalBusy = DCS.checkMultiplayerSpawnConflict("TakeOffParking", slot.unitId or slot.airdromeId, isAirdrome, "", "")
			local isMyDynAirbase = false
			if myDynHelipadId or myDynAirdromeId then
				isMyDynAirbase = myDynHelipadId == slot.unitId and myDynAirdromeId == slot.airdromeId
			end
			
			local cellRowType
			if terminalBusy == true and isMyDynAirbase == false then        
				cellRowType = 4
			else
				cellRowType = cell.rowType
			end
			
			cell.data = slot
			cell.skinType = cellRowType
			cell:setSkin(SkinsStatic[cellRowType].skinPadding)  
			cell.skin = SkinsStatic[cellRowType].skinPadding 
			
			local name = ""
			if slot.airdromeId then
				name = getAirdromeName(slot) or ""
			elseif slot.unitId then
				name = slot.name or ""
			end
			
			if cellRowType == 4 then
				name = name.." ("..cdata.spawnIsOccupied..")"
			end

			cell:setText(name)
    		cell:setTooltipText(name)
			
			--type
			cell = cells[2]			
			cell.skinType = cellRowType
			cell:setSkin(SkinsStatic[cellRowType].skinPadding)  
			cell.skin = SkinsStatic[cellRowType].skinPadding 
		end
	end
	
	updateFunc(airdromes)
	updateFunc(farpsAndCarriersData)
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