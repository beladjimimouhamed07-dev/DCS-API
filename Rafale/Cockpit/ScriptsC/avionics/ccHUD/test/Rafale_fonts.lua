-- Rafale_fonts.lua
-- HUD stroke font definitions (MDG-style)
-- Only stroke fonts needed for HUD display

dofile(LockOn_Options.common_script_path.."Fonts/symbols_locale.lua")
dofile(LockOn_Options.common_script_path.."Fonts/fonts_cmn.lua")

fontdescription = {}

-- ===== PRIMARY STROKE FONT - MDG Style =====
-- Used for all HUD text, numbers, and tactical symbols
-- Supports 100%, 120%, 150%, 200% scaling

fontdescription["font_stroke_MDG"] = {
	class     = "ceSLineFont",
	symb_storage = "stroke_font",
	thickness  = stroke_thickness,
	fuzziness  = stroke_fuzziness,
	draw_as_wire = dbg_drawStrokesAsWire,
	default    = {12, 20},  -- Default DI size (width=12, height=20)
	chars	   = {
		-- Uppercase letters
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
		
		-- Numbers
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
		
		-- Symbols
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

-- ===== STROKE FONT VARIANTS =====

-- DMC outline variant (for black outline beneath main stroke)
fontdescription["font_stroke_MDG_DMC_outline"] = {}
copyTable(fontdescription["font_stroke_MDG_DMC_outline"], fontdescription["font_stroke_MDG"])
fontdescription["font_stroke_MDG_DMC_outline"].thickness = DMC_outline_thickness
fontdescription["font_stroke_MDG_DMC_outline"].fuzziness = DMC_outline_fuzziness

-- DMC main variant (for thinner DMC-generated fonts)
fontdescription["font_stroke_MDG_DMC_main"] = {}
copyTable(fontdescription["font_stroke_MDG_DMC_main"], fontdescription["font_stroke_MDG"])
fontdescription["font_stroke_MDG_DMC_main"].thickness = DMC_stroke_thickness
fontdescription["font_stroke_MDG_DMC_main"].fuzziness = DMC_stroke_fuzziness

-- 150 WIDE variant (optimized for 150% font size with wide spacing)
fontdescription["font_stroke_MDG_150_WIDE"] = {}
copyTable(fontdescription["font_stroke_MDG_150_WIDE"], fontdescription["font_stroke_MDG"])
fontdescription["font_stroke_MDG_150_WIDE"].thickness = STROKE_THICKNESS_150_WIDE
fontdescription["font_stroke_MDG_150_WIDE"].fuzziness = STROKE_FUZZINESS_150_WIDE

-- path for stroke symbology
symbologyPaths = {LockOn_Options.script_path.."Rafale addon/"}

