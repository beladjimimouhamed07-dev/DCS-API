local base = _G

module('ImportantNoticeDialog')

local require       = base.require
local ipairs        = base.ipairs

local i18n			= require('i18n')
local lfs			= require('lfs')
local U				= require('me_utilities')
local Tools			= require('tools')
local DialogLoader  = require("DialogLoader")
local Gui			= require('dxgui')
local SkinUtils     = require('SkinUtils')
local DB            = require('me_db_api')

i18n.setup(_M)

local writePath = lfs.writedir() .. 'Config/ImportantNoticeData.lua'
local pathToMods = './Mods/aircraft/'
local pathToContentFile = '/Notice/Content.lua'

local showsInfoByUnitType = {}
local showsInfoByUnitTypeCurrentSession = {}
local unitType = nil
local contentData = nil
local lastContentElementPosition = 0

local window = nil
local templateWidgets = nil

local cdata = 
{
	title = _('Important notice '),
	dontShowUntilNextUpdate = _('Don\'t show until next update'),
}

local function loadShowsInfoByUnitType()
	if showsInfoByUnitType ~= nil then
		return
	end
	
    local result = Tools.safeDoFile(writePath, false) or {}
	showsInfoByUnitType = result.cachedGenerationParams or {}
    showsInfoByUnitTypeCurrentSession = {}
end

local function saveShowsInfoByUnitType()
    U.saveInFile(showsInfoByUnitType, 'showsInfoByUnitType', writePath)	
end

local function loadContentForUnit()
    local unitDef = DB.unit_by_type[unitType]
    if unitDef == nil then return false end
    
    contentData = Tools.safeDoFileWithRequire(pathToMods..unitDef._origin_flyable..pathToContentFile, {"i_18n"}) or nil
    
    if contentData == nil then return false end
    
    return true
end

local function isNeedToShow()
    if contentData == nil then return false end

    if showsInfoByUnitType[unitType] == nil then return true end

    if showsInfoByUnitType[unitType].lastNoticeVersion < contentData.noticeVersion then return true end

    if showsInfoByUnitType[unitType].dontShow == true then return false end

    if showsInfoByUnitTypeCurrentSession[unitType] == true then return false end

    return true
end

local function insertTitle(titleText)
    if templateWidgets and templateWidgets.titleText then
        local titleTextWgt = templateWidgets.titleText:clone()
        window.contentScroll:insertWidget(titleTextWgt)
        lastContentElementPosition = lastContentElementPosition + 10
	    titleTextWgt:setPosition(0, lastContentElementPosition)
        titleTextWgt:setText(titleText)
        local elementW, elementH = titleTextWgt:getSize()
        lastContentElementPosition = lastContentElementPosition + elementH + 10
    end	
end

local function insertParagraphText(paragraphText)
    if templateWidgets and templateWidgets.paragraphText then
        local paragraphTextWgt = templateWidgets.paragraphText:clone()
        window.contentScroll:insertWidget(paragraphTextWgt)
	    paragraphTextWgt:setPosition(0, lastContentElementPosition)
        paragraphTextWgt:setText(paragraphText)
        paragraphTextWgt:setSize(paragraphTextWgt:calcSize())
        local elementW, elementH = paragraphTextWgt:getSize()
        lastContentElementPosition = lastContentElementPosition + elementH + 10
    end
end

local function insertParagraphImgs(imgs)
    local spacing = 10
    local imageWidth = 250
    if templateWidgets and templateWidgets.img then
        local imgCount = #imgs
        if imgCount > 3 then imgCount = 3 end

        local totalWidth = (imageWidth * imgCount) + (spacing * (imgCount - 1));
        local w, h = window.contentScroll:getSize()
        local startPosition = (w - totalWidth) / 2;

        for i = 1, imgCount do
            local img = templateWidgets.img:clone()
            window.contentScroll:insertWidget(img)
	        img:setPosition(startPosition + (i - 1) * (imageWidth + spacing), lastContentElementPosition)
            img:setSkin(SkinUtils.setStaticPicture(imgs[i], img:getSkin()))
        end

        lastContentElementPosition = lastContentElementPosition + 250 + 10
    end
end

local function onShow()
    window.cbDontShow:setState(false)
    window.contentScroll:removeAllWidgets()
    if contentData.noticeParagraphs == nil then return end

    for i, paragraph in ipairs(contentData.noticeParagraphs) do
		if paragraph.titleText then
            insertTitle(paragraph.titleText)
        end

        if paragraph.text then
            insertParagraphText(paragraph.text)
        end

        if paragraph.imgs then
            insertParagraphImgs(paragraph.imgs)
        end

        lastContentElementPosition = lastContentElementPosition + 5
	end
end

local function onHide()
    showsInfoByUnitType[unitType] = showsInfoByUnitType[unitType] or {}
    showsInfoByUnitType[unitType].lastNoticeVersion = contentData.noticeVersion
    showsInfoByUnitType[unitType].dontShow = window.cbDontShow:getState()
    showsInfoByUnitTypeCurrentSession[unitType] = true
    unitType = nil
    contentData = nil
    lastContentElementPosition = 0

    saveShowsInfoByUnitType()
end

local function create()
    local wS, hS = Gui.GetWindowSize()
    window = DialogLoader.spawnDialogFromFile("./Scripts/UI/ImportantNoticeDialog.dlg", cdata)
	local w, h = window:getSize()
	window:setPosition((wS - w) / 2, (hS - h) / 2)

    templateWidgets = window.templateWidgets

    window.onClose = hide

end

function showForUnit(type)
    unitType = type
    if loadContentForUnit() == false or isNeedToShow() == false then return end
    
    if window == nil then
        create()
    end

    onShow()

    window:setVisible(true)
end

function hide()
    onHide()
    window:setVisible(false)
end

loadShowsInfoByUnitType()