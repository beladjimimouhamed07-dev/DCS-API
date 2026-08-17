local base = _G

module('coords_info')

local DialogLoader	= base.require('DialogLoader')
local Static		= base.require('Static')
local i18n			= base.require('i18n')
local U				= base.require('me_utilities')
local Terrain		= base.require('terrain')
local UC			= base.require('utils_common')
local OptionsData	= base.require('Options.Data')
local Gui			= base.require('dxgui')

local callClose 	= nil

i18n.setup(_M)

local cdata = 
{
	coord 				= _("COORDINATES"),
	Metric				= _("Metric"),
	Lat_Long			= _("Lat Long"),
	Lat_Long_Decimal	= _("Lat Long Decimal Minutes"),
	MGRS_GRID			= _("MGRS GRID"),
	Precise_Lat_Long	= _("Precise Lat/Long"),
	Altitude 			= _("Altitude_coord","Altitude"),
	feet				= _('feet'),
	m					= _('m'),
    Ok          		= _("Ok"),
	COPY				= _("COPY"),
    
}

local function check_exist()
	if window then 
	   return
	end

	window = DialogLoader.spawnDialogFromFile("./Scripts/UI/coords_info.dlg", cdata)

	function window:onClose()
		if 	callClose then 
			callClose()
		end
	end

	window.btnOk.onChange = function()
		show(false)
	end
	
	window.btnCOPY.onChange = function()
		local text = ""
		
		text = text..cdata.Metric..": "..window.e_Metric:getText().."\n"
		text = text..cdata.Lat_Long..": "..window.e_Lat_Long:getText().."\n"
		text = text..cdata.Precise_Lat_Long..": "..window.e_Precise_Lat_Long:getText().."\n"
		text = text..cdata.Lat_Long_Decimal..": "..window.e_Lat_Long_Decimal:getText().."\n"
		text = text..cdata.MGRS_GRID..": "..window.e_MGRS_GRID:getText().."\n"
		text = text..cdata.Altitude..": "..window.e_AltM:getText().." "..cdata.m.." / "..window.e_AltFeet:getText().." "..cdata.feet.."\n"
		
		Gui.CopyTextToClipboard(text)	
	end
	---
	window.btnCopyMetric.onChange = function()
		local text = ""
		
		text = text..cdata.Metric..": "..window.e_Metric:getText().."\n"

		Gui.CopyTextToClipboard(text)	
	end
	
	window.btnCopyLatLong.onChange = function()
		local text = ""

		text = text..cdata.Lat_Long..": "..window.e_Lat_Long:getText().."\n"
	
		Gui.CopyTextToClipboard(text)	
	end
	
	window.btnCopyPreciseLatLong.onChange = function()
		local text = ""

		text = text..cdata.Precise_Lat_Long..": "..window.e_Precise_Lat_Long:getText().."\n"
		
		Gui.CopyTextToClipboard(text)	
	end
	
	window.btnCopyLatLongDecimal.onChange = function()
		local text = ""
		
		text = text..cdata.Lat_Long_Decimal..": "..window.e_Lat_Long_Decimal:getText().."\n"
		
		Gui.CopyTextToClipboard(text)	
	end
	
	window.btnCopyMGRS_GRID.onChange = function()
		local text = ""

		text = text..cdata.MGRS_GRID..": "..window.e_MGRS_GRID:getText().."\n"
	
		Gui.CopyTextToClipboard(text)	
	end
	
	window.btnCopyAltitude.onChange = function()
		local text = ""

		text = text..cdata.Altitude..": "..window.e_AltM:getText().." "..cdata.m.." / "..window.e_AltFeet:getText().." "..cdata.feet.."\n"
		
		Gui.CopyTextToClipboard(text)	
	end	
end

local function update(x, z)
	if x == nil or z == nil then
		show(false)
		return 
	end

	local lat, long = Terrain.convertMetersToLatLon(x, z) 
	local datum = OptionsData.getMiscellaneous('Datum')
	if datum == 2 then
		lat, long = UC.LL_datum_convert(1, 2, lat, long)
	end	
	
	window.e_Metric	:setText(U.text_coords_Metric(x,z))
	
	local radLAT = U.toRadians(lat)
	local radLON = U.toRadians(long)

	window.e_Lat_Long			:setText(U.text_coords_LatLong			('lat', radLAT).."   "..U.text_coords_LatLong	   ('long', radLON))
	window.e_Lat_Long_Decimal	:setText(U.text_coords_LatLongD			('lat', radLAT).."   "..U.text_coords_LatLongD	   ('long', radLON))
	window.e_Precise_Lat_Long	:setText(U.text_coords_LatLongHornet	('lat', radLAT).."   "..U.text_coords_LatLongHornet('long', radLON))
	window.e_MGRS_GRID:setText(Terrain.GetMGRScoordinates(x,z))
	
	local alt = Terrain.GetHeight(x, z)
	
	window.e_AltM:setText	(base.math.floor(alt+0.5))
	window.e_AltFeet:setText(base.math.floor(alt/0.3048+0.5))
end

function show(b, x, z, winX, winY)
	if not b then 
		if  window then 
			window:close()
		end
		return
	end
	
	check_exist()
	window:setPosition(winX or 100, winY or 100)
	window:setVisible(true)
	update(x, z)
end

function setOnCloseCallback(callback)
	callClose = callback
end

