local base = _G

module('AirdromeDataNew')

mtab = {__index = _M}

local require	= base.require
local print		= base.print
local tostring	= base.tostring
local pairs		= base.pairs
local string    = base.string

local Factory   = require('Factory')
local loader 	= require('DialogLoader')
local i18n 		= require('i18n')
local Gui 		= require("dxgui")

local isMetricSystem = require('UICommon').isMetricSystem

i18n.setup(_M)
local function dtransl(s) 
	if s and s ~= '' then return i18n.gettext.dtranslate('missioneditor', s) end
	return ''
end

dialogs = {}

local cdata = 
{
	airdomeData	= _('AIRDROME DATA'	),
	coalition	= _('COALITION'		),
	coordinates	= _('COORDINATES'	),
	elevation 	= _('ELEVATION'		),
	name 		= _('NAME'			),
	rwylength 	= _('RWY Length'	),
	tacan 		= _('TACAN'			),
	atc 		= _('ATC'			),				
	vor 		= _('VOR'			),				
	rsbn 		= _('RSBN'			),
	rwys 		= _('RWYs'			),
	ils 		= _('ILS'			),
	outerndb 	= _('OUTER NDB'		),
	innerndb 	= _('INNER NDB'		),
	rpmg 		= _('PRMG'			),
	icaocode 	= _('ICAO'			),
	Resources 	= _('RESOURCES'		),
}
cdata.atc = cdata.atc .. '  ('.._('MHz')..', '.._('AM').. ')'

function getWindow(surfaceId)
	if not dialogs[surfaceId] then 
		return nil
	end
	return dialogs[surfaceId].window.widget
end

function new(surfaceId, base_w, base_h)
	return Factory.create(_M, surfaceId, base_w, base_h)
end

function construct(self, surfaceId, base_w, base_h)
	print(string.format('AirdromeDataNew.construct, surfaceId = %d, base_w = %d, base_h = %d', surfaceId, base_w, base_h))
	self.window = loader.spawnDialogFromFile("./Scripts/UI/F10View/AirdromeData.dlg", cdata)
	self.surfaceId = surfaceId;
	self.window:setSurfaceId(surfaceId)
	self.window:setVisible(false)
	
	local x, y, w, h = self.window:getBounds()
	h = h - 40 -- to hide bResources button
	self.window:setBounds(15, base_h-h-15, w, h)
	
	function self.window:onClose()
		if onClose ~= nil then
		   onClose(self.surfaceId)
		end
		show(self.surfaceId, false)
	end
	self.window.Panel1.bResources:setVisible(false)
--[[
	function self.window.Panel1.bResources:onChange()
		--print('asdasdasd')
		if onShowStatsAirdrome ~= nil then
		   onShowStatsAirdrome(self.surfaceId)
		end
	end
--]]	
	dialogs[surfaceId] = self
	print(string.format('AirdromeDataNew: dialog created for surfaceId = %d', surfaceId))
end

function move(surfaceId, dx, dy)
	if not dialogs[surfaceId] then
		print(string.format('AirdromeDataNew: dialog not found for surfaceId = %d', surfaceId))
		return 
	end
	
	local x, y, w, h = dialogs[surfaceId].window:getBounds()
	dialogs[surfaceId].window:setBounds(x + dx, y + dy, w, h)
end
	
function updateStaticData(surfaceId, name,atc,country,tacan,rsbn,vor,rwy1,rwy2,rwylen,ils1,ils2,outer1,outer2,inner1,inner2,alt,coordsStr,callsign,prmg1,prmg2)	
	--print(string.format('AirdromeDataNew.updateStaticData: surfaceId = %d', surfaceId))
	if not dialogs[surfaceId] then
		print(string.format('AirdromeDataNew: dialog not found for surfaceId = %d', surfaceId))
		return 
	end
	
	local units
	
	if isMetricSystem() then
		units = _('m')
	else
		units = _('ft')
	end	
	
	local panel = dialogs[surfaceId].window.Panel1
	
	dialogs[surfaceId].window:setText(name)
	panel.sAtc			:setText(atc)
	panel.sCoalition	:setText(country)
	panel.sTacan		:setText(tacan)
	panel.sRsbn			:setText(rsbn)
	panel.sVor			:setText(vor)
	panel.sRwys1		:setText(tostring(rwy1))
	panel.sRwys2		:setText(tostring(rwy2))
	panel.sRwylenght	:setText(tostring(rwylen) .. ' ' .. units)
	panel.sIls1			:setText(ils1)
	panel.sIls2			:setText(ils2)
	panel.sOuterndb1	:setText(outer1)
	panel.sOuterndb2	:setText(outer2)
	panel.sInnerndb1	:setText(inner1)
	panel.sInnerndb2	:setText(inner2)
	panel.sElevation	:setText(tostring(alt) .. ' ' .. units)
	panel.sCoordinates	:setText(coordsStr)
	panel.sRpmg1		:setText(prmg1)
	panel.sRpmg2		:setText(prmg2)
	panel.sIcaoCode		:setText(callsign)
end

function updateDynamicData(surfaceId, alt, coordsStr )
	if not dialogs[surfaceId] then
		print(string.format('AirdromeDataNew: dialog not found for surfaceId = %d', surfaceId))
		return 
	end
end

function kill(surfaceId)
	if not dialogs[surfaceId] then
		print(string.format('AirdromeDataNew: dialog not found for surfaceId = %d', surfaceId))
		return 
	end

	dialogs[surfaceId].window:kill()
	dialogs[surfaceId] = nil
end

function show(surfaceId, b)
	--print(string.format('AirdromeDataNew.show: surfaceId = %d, b = %s', surfaceId, tostring(b)))
	if not dialogs[surfaceId] then
		print(string.format('AirdromeDataNew: dialog not found for surfaceId = %d', surfaceId))
		return 
	end
	
	dialogs[surfaceId].window:setVisible(b)
end