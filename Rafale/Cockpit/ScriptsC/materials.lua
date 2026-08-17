dofile(LockOn_Options.common_script_path.."Fonts/symbols_locale.lua")
dofile(LockOn_Options.common_script_path.."Fonts/fonts_cmn.lua")


-------MATERIALS-------
materials = {}   

materials["HUD_GREEN"]					= {2,255,20,385}
materials["MFD_WHITE"]					= {240,240,240,255}
materials["MFD_MAGENTA"]				= {240,40,240,255}
materials["MFD_GREEN"]					= {25,200,25,255}
materials["DBG_RED"]					= {255, 0, 0, 100}
materials["MASK_MATERIAL_PURPLE"]		= {255, 0, 255, 30}
materials["MASK_MATERIAL_PURPLE_2"]		= {255, 0, 255, 100}
-------TEXTURES-------
textures = {}


-------FONTS----------
fontdescription = {}

HUD_thickness = 0.7
HUD_fuzziness = 0.5
MFD_thickness = 0.2
MFD_fuzziness = 0.7

fontdescription["font_HUD_RAF"] = {
	class     = "ceSLineFont",
	symb_storage = "stroke_font",
	thickness  = HUD_thickness,
	fuzziness  = HUD_fuzziness,
	draw_as_wire = false,
	default    = {12, 20}, -- (display increments)
	chars	   = {
		 [1]   = {latin['A'], "A"},
		 [2]   = {latin['B'], "B"},
		 [3]   = {latin['C'], "C"},
		 [4]   = {latin['D'], "D"},
		 [5]   = {latin['E'], "E"},
		 [6]   = {latin['F'], "F"},
		 [7]   = {latin['G'], "G"},
		 [8]   = {latin['H'], "H"},
		 [9]   = {latin['I'], "I"},
		 [10]  = {latin['J'], "J"},
		 [11]  = {latin['K'], "K"},
		 [12]  = {latin['L'], "L"},
		 [13]  = {latin['M'], "M"},
		 [14]  = {latin['N'], "N"},
		 [15]  = {latin['O'], "O"},
		 [16]  = {latin['P'], "P"},
		 [17]  = {latin['Q'], "Q"},
		 [18]  = {latin['R'], "R"},
		 [19]  = {latin['S'], "S"},
		 [20]  = {latin['T'], "T"},
		 [21]  = {latin['U'], "U"},
		 [22]  = {latin['V'], "V"},
		 [23]  = {latin['W'], "W"},
		 [24]  = {latin['X'], "X"},
		 [25]  = {latin['Y'], "Y"},
		 [26]  = {latin['Z'], "Z"},
		 
		 [27]  = {symbol['0'], "0"},
		 [28]  = {symbol['1'], "1"},
		 [29]  = {symbol['2'], "2"},
		 [30]  = {symbol['3'], "3"},
		 [31]  = {symbol['4'], "4"},
		 [32]  = {symbol['5'], "5"},
		 [33]  = {symbol['6'], "6"},
		 [34]  = {symbol['7'], "7"},
		 [35]  = {symbol['8'], "8"},
		 [36]  = {symbol['9'], "9"},
		 
		 [37]  = {symbol['-'], "symbol-minus"},
		 [38]  = {symbol['+'], "symbol-plus"},
		 [39]  = {symbol['\''], "symbol-apostrophe"},
		 [40]  = {symbol['('], "symbol-parenthesis-left"},
		 [41]  = {symbol[')'], "symbol-parenthesis-right"},
		 [42]  = {symbol['*'], "symbol-asterisk"},
		 [43]  = {symbol['%'], "symbol-percent"},
		 [44]  = {symbol[','], "symbol-comma"},
		 [45]  = {symbol['°'], "symbol-degree"},
		 [46]  = {symbol['.'], "symbol-period"},
		 [47]  = {symbol['/'], "symbol-slash"},
		 [48]  = {symbol['\\'], "symbol-backslash"},
		 [49]  = {symbol['\"'], "symbol-quote"},
		 [50]  = {symbol['?'], "symbol-question"},
		 [51]  = {symbol[':'], "symbol-colon"},
		 [52]  = {symbol['#'], "symbol-octothorpe"},
		 [53]  = {symbol['='], "symbol-equal"},
		 [54]  = {symbol['_'], "symbol-underscore"},
		 [55]  = {symbol['^'], "symbol-lambda"},

	}
}

fontdescription["font_stroke_MFD_T45"] = {
	class     = "ceSLineFont",
	symb_storage = "T45_HUD_MFD_Font",
	thickness  = MFD_thickness,
	fuzziness  = MFD_fuzziness,
	draw_as_wire = dbg_drawStrokesAsWire,
	default    = {15, 20}, -- (display increments)
	chars	   = {
		 [1]   = {latin['A'], "A"},
		 [2]   = {latin['B'], "B"},
		 [3]   = {latin['C'], "C"},
		 [4]   = {latin['D'], "D"},
		 [5]   = {latin['E'], "E"},
		 [6]   = {latin['F'], "F"},
		 [7]   = {latin['G'], "G"},
		 [8]   = {latin['H'], "H"},
		 [9]   = {latin['I'], "I"},
		 [10]  = {latin['J'], "J"},
		 [11]  = {latin['K'], "K"},
		 [12]  = {latin['L'], "L"},
		 [13]  = {latin['M'], "M-alt"},
		 [14]  = {latin['N'], "N"},
		 [15]  = {latin['O'], "O"},
		 [16]  = {latin['P'], "P"},
		 [17]  = {latin['Q'], "Q"},
		 [18]  = {latin['R'], "R"},
		 [19]  = {latin['S'], "S"},
		 [20]  = {latin['T'], "T"},
		 [21]  = {latin['U'], "U"},
		 [22]  = {latin['V'], "V-alt"},
		 [23]  = {latin['W'], "W-alt"},
		 [24]  = {latin['X'], "X"},
		 [25]  = {latin['Y'], "Y"},
		 [26]  = {latin['Z'], "Z"},
		 
		 [27]  = {symbol['0'], "0"},
		 [28]  = {symbol['1'], "1"},
		 [29]  = {symbol['2'], "2"},
		 [30]  = {symbol['3'], "3"},
		 [31]  = {symbol['4'], "4-alt1"},
		 [32]  = {symbol['5'], "5-alt"},
		 [33]  = {symbol['6'], "6"},
		 [34]  = {symbol['7'], "7"},
		 [35]  = {symbol['8'], "8"},
		 [36]  = {symbol['9'], "9"},
		 
		 [37]  = {symbol['-'], "symbol-minus"},
		 [38]  = {symbol['+'], "symbol-plus"},
		 [39]  = {symbol['\''], "symbol-apostrophe"},
		 [40]  = {symbol['*'], "symbol-asterisk"},
		 [41]  = {symbol['%'], "symbol-percent"},
		 [42]  = {symbol[','], "symbol-comma"},
		 [43]  = {symbol['°'], "symbol-degree"},
		 [44]  = {symbol['.'], "symbol-period"},
		 [45]  = {symbol['/'], "symbol-slash"},
		 [46]  = {symbol['\\'], "symbol-backslash"},
		 [47]  = {symbol['\"'], "symbol-quote"},
		 [48]  = {symbol[':'], "symbol-colon"},
		 [49]  = {symbol['^'], "symbol-lambda"},

	}
}


fontdescription["font_alphaHUD_T45"] = {
	class     = "ceSLineFont",
	symb_storage = "T45_Alpha_Symbol",
	thickness  = HUD_thickness,
	fuzziness  = HUD_fuzziness,
	draw_as_wire = dbg_drawStrokesAsWire,
	default    = {15, 20}, -- (display increments)
	chars	   = {
		[1]  = {symbol['@'], "symbol-alpha"},
	}
}

fontdescription["font_alpha_T45"] = {
	class     = "ceSLineFont",
	symb_storage = "T45_Alpha_Symbol",
	thickness  = MFD_thickness,
	fuzziness  = MFD_fuzziness,
	draw_as_wire = dbg_drawStrokesAsWire,
	default    = {15, 20}, -- (display increments)
	chars	   = {		 
		 [1]  = {symbol['@'], "symbol-alpha"},
	}
}



fonts = {}
fonts["font_RAFHUD"] = {fontdescription["font_HUD_RAF"], 10, materials["HUD_GREEN"]}

fonts["font_T45MFD"]		= {fontdescription["font_stroke_MFD_T45"], 10, materials["MFD_WHITE"]}
fonts["font_T45MFD_MAGENTA"]= {fontdescription["font_stroke_MFD_T45"], 10, materials["MFD_MAGENTA"]}
fonts["font_T45MFD_GREEN"]= {fontdescription["font_stroke_MFD_T45"], 10, materials["MFD_GREEN"]}

fonts["T45MFD_alphaHUD"]	= {fontdescription["font_alphaHUD_T45"], 10, materials["HUD_GREEN"]}
fonts["T45MFD_alpha"]	= {fontdescription["font_alpha_T45"], 10, materials["MFD_WHITE"]}

-- materials["RAFALE_HUD_SYMBOLS"] = {
--     type = "stroke_font",
--     font_name = LockOn_Options.script_path .. "Cockpit/ScriptsC/Rafale addon/stroke_symbols_HUD.svg"
-- }
-- path for stroke symbology
symbologyPaths = {LockOn_Options.script_path.."Rafale addon/"}

