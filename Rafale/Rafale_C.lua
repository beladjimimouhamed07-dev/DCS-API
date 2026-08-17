-- --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- --------------------------------------------------------------------------------------------------- PYLONES --------------------------------------------------------------------------------------------------------------------------
-- --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- local wingPylonMass	= 0.0		-- [kg]	SUU-63 (310 lb)
-- local ctrPylonMass	= 0.0		-- [kg]	SUU-62 (139 lb)
-- local lau116Mass	= 0.0		-- [kg]	LAU-116 launcher

-- local function joinTbl(orig, to, from)
-- 	for i, value in ipairs(orig) do
-- 		to[i] = value
-- 	end
-- 	for i, value in ipairs(from) do
-- 		table.insert(to, value)
-- 	end
-- 	return to
-- end

-- local tips = 
-- {
-- 	---------------------------------------------------------------- Fumigenes -------------------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"{A4BCC903-06C8-47bb-9937-A30FEDB4E741}" },							-- smoke gen blue
-- 	{ CLSID =	"{A4BCC903-06C8-47bb-9937-A30FEDB4E742}" },							-- smoke gen green
-- 	{ CLSID =	"{A4BCC903-06C8-47bb-9937-A30FEDB4E743}" },							-- smoke gen orange
-- 	{ CLSID =	"{A4BCC903-06C8-47bb-9937-A30FEDB4E744}" },							-- smoke gen red
-- 	{ CLSID =	"{A4BCC903-06C8-47bb-9937-A30FEDB4E745}" },							-- smoke gen white
-- 	{ CLSID =	"{A4BCC903-06C8-47bb-9937-A30FEDB4E746}" },							-- smoke gen yellow
-- 	---------------------------------------------------------------- Mica Bout d'aile ------------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"{AIM-9L}",
-- 		required =	
-- 		{
-- 			{station = 1, loadout = {"{AIM-9L}"}},
-- 			{station = 9, loadout = {"{AIM-9L}"}}
-- 		},																Cx_gain = 0.33	},			-- Mica IR / AIM-9L
-- }

-- local outboard 	= 
-- {
-- 	---------------------------------------------------------------- Suppression du pylone -------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"<CLEAN>",															arg_value = 1, add_mass = -wingPylonMass },							-- Clean
-- }

-- local outboardLeft = {}	-- left
-- joinTbl(outboard, outboardLeft,
-- {
-- 	---------------------------------------------------------------- Bombes ----------------------------------------------------------------------------------------------------------------------------------------------------------
-- 		{ CLSID =	"{AT730_2X_GBU-16}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{AT730_2X_GBU-16}"}}
-- 		},													Type = 1,	arg = 309,	arg_value = 0.01, Cx_gain_empty = 0.339, Cx_gain_item = 1.760 },	-- GBU-16 X2 sur AT730
-- 	{ CLSID =	"{AT730_2X_GBU-12}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{AT730_2X_GBU-12}"}}
-- 		},													Type = 1,	arg = 309,	arg_value = 0.01, Cx_gain_empty = 0.373, Cx_gain_item = 1.178 },	-- GBU-12 X2 sur AT730
-- 	{ CLSID =	"{0D33DDAE-524F-4A4E-B5B8-621754FE3ADE}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{0D33DDAE-524F-4A4E-B5B8-621754FE3ADE}"}}
-- 		},													Type = 1,	arg = 309,	arg_value = 0.01, Cx_gain = 1.530 },								-- GBU-16
-- 	{ CLSID =	"{AT730_2X_MK-82}",	
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{AT730_2X_MK-82}"}}
-- 		},																arg = 309,	arg_value = 0.01, Cx_gain_empty = 0.379, Cx_gain_item = 1.132 },	-- Mk-82 x2 sur AT730
-- 	{ CLSID	=	"{AT730_1X_MK-83}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{AT730_1X_MK-83}"}}
-- 		},																arg = 309,	arg_value = 0.01, Cx_gain = 1.466 },								-- Mk-83 sur AT730
-- 	{ CLSID =	"{AT730_2X_MK-83}",	
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{AT730_2X_MK-83}"}}
-- 		},																arg = 309,	arg_value = 0.01, Cx_gain_empty = 0.339, Cx_gain_item = 1.760 },	-- Mk-83 X2 sur AT730
-- 	{ CLSID	=	"{AB8B8299-F1CC-4359-89B5-2172E0CF4A5A}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{AB8B8299-F1CC-4359-89B5-2172E0CF4A5A}"}}
-- 		},													Type = 1,	arg = 309,	arg_value = 0.01, Cx_gain = 1.296 },								-- Mk-84
-- 	{ CLSID =	"{GBU-24}",	
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{GBU-24}"}}
-- 		},													Type = 1,	arg = 309,	arg_value = 0.01, Cx_gain = 2.073 },								-- GBU-24
-- 	---------------------------------------------------------------- Missiles Air-Air ------------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"{METEOR}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{METEOR}"}}
-- 		},																arg = 309,	arg_value = 0.11, attach_point_position = {0, -0.18, 0}, Cx_gain_empty = 0.786, Cx_gain_item = 0.543 },			-- Météor / AIM 120C
-- 	{ CLSID =	"{METEOR_MICA_EM_MIX_L}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{METEOR_MICA_EM_MIX_R}"}}
-- 		},																arg = 309,	arg_value = 0.41,										 Cx_gain_empty = 0.786, Cx_gain_item = 0.863 },			-- METEOR + MICA EM  / AIM-120C + AIM-120B
-- 	{ CLSID =	"{METEOR_MICA_IR_MIX_L}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"LAU-115_LAU-127_AIM-9L_R"}}
-- 		},																arg = 309,	arg_value = 0.41,										 Cx_gain_empty = 0.786, Cx_gain_item = 0.863 },			-- METEOR + MICA IR  / AIM-120C + AIM-9L
-- 	{ CLSID =	"{MICA_EM}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{MICA_EM}"}}
-- 		},																arg = 309,	arg_value = 0.21, attach_point_position = {0, -0.17, 0}, Cx_gain_empty = 0.786, Cx_gain_item = 0.863 },			-- Mica EM / AIM-120B
-- 	{ CLSID =	"{MICA_EM_X2L}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{MICA_EM_X2R}"}}
-- 		},																arg = 309,	arg_value = 0.25,										Cx_gain_empty = 0.786, Cx_gain_item = 0.863 },			-- Mica EM x2 / AIM-120B x2
-- 	{ CLSID =	"{AIM-9L}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{AIM-9L}"}}
-- 		},																arg = 309,	arg_value = 0.21,	attach_point_position = {0, -0.155, 0}, Cx_gain_empty = 0.786, Cx_gain_item = 0.863 },			-- Mica IR / AIM-9L
-- 	{ CLSID =	"LAU-115_LAU-127_AIM-9L",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"LAU-115_LAU-127_AIM-9L_R"}}
-- 		},																arg = 309,	arg_value = 0.25,											Cx_gain_empty = 0.786, Cx_gain_item = 0.863 },			-- Mica IR x2 / AIM-9L x2
-- 	{ CLSID =	"{MICA_MIX_L}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"LAU-115_LAU-127_AIM-9L_R"}}
-- 		},																arg = 309,	arg_value = 0.25,											Cx_gain_empty = 0.786, Cx_gain_item = 0.863 },			-- Mica EM + IR / AIM-120B + AIM-9L	
-- 		---------------------------------------------------------------- Missiles Air-Sol ------------------------------------------------------------------------------------------------------------------------------------------------
-- --	{ CLSID = 	"{BRU55_2*AGM-154A}",
-- --		required =	
-- --		{
-- --			{station = 8, loadout = {"{BRU55_2*AGM-154A}"}}
-- --		},													Type = 1,	arg = 309,	arg_value = 0.01, Cx_gain_empty = 0.371, Cx_gain_item = 0.277 },	-- SBU-38 250 X2 sur AT730
-- 	{ CLSID = 	"{AT730_2X_SBU-38_250}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{AT730_2X_SBU-38_250}"}}
-- 		},													Type = 1,	arg = 309,	arg_value = 0.01, Cx_gain_empty = 0.371, Cx_gain_item = 0.277 },	-- SBU-38 500 X2 sur AT730
-- 	{ CLSID	= "LAU_117_AGM_65F",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"LAU_117_AGM_65F"}},
-- 		},													Type = 1,	arg = 309,	arg_value = 0.01, Cx_gain = 0.188 },								-- AASM 1000 IR / AGM-65F
-- 	{ CLSID	= "{F16A4DE0-116C-4A71-97F0-2CF85B0313EC}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{F16A4DE0-116C-4A71-97F0-2CF85B0313EC}"}},
-- 		},													Type = 1,	arg = 309,	arg_value = 0.01, Cx_gain = 0.188 },								-- AASM 1000 Laser / AGM-65E
-- 	{ CLSID	= "{GBU_31_V_2B}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{GBU_31_V_2B}"}},
-- 		},													Type = 1,	arg = 309,	arg_value = 0.01, Cx_gain = 0.188 },								-- AASM 1000
-- 	{ CLSID	=	"{AGM_84H}",
-- 		required =	
-- 		{
-- 			{station = 8, loadout = {"{AGM_84H}"}}
-- 		},													Type = 1,	arg = 309,	arg_value = 0.01, Cx_gain = 0.467 },								-- SCALP / AGM-84H
-- })

-- local outboardRight = {}	-- right
-- joinTbl(outboard, outboardRight,
-- {
-- 	---------------------------------------------------------------- Bombes ----------------------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"{AT730_2X_GBU-16}",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{AT730_2X_GBU-16}"}}
-- 		},																arg = 315,	arg_value = 0.01, Cx_gain_empty = 0.339, Cx_gain_item = 1.760 },	-- GBU-16 X2 sur AT730
-- 	{ CLSID =	"{AT730_2X_GBU-12}",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{AT730_2X_GBU-12}"}}
-- 		},																arg = 315,	arg_value = 0.01, Cx_gain_empty = 0.373, Cx_gain_item = 1.178 },	-- GBU-12 X2 sur AT730
-- 	{ CLSID =	"{0D33DDAE-524F-4A4E-B5B8-621754FE3ADE}",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{0D33DDAE-524F-4A4E-B5B8-621754FE3ADE}"}}
-- 		},													Type = 1,	arg = 315,	arg_value = 0.01, Cx_gain = 1.530 },								-- GBU-16
-- 	{ CLSID =	"{AT730_2X_MK-82}",	
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{AT730_2X_MK-82}"}}
-- 		},																arg = 315,	arg_value = 0.01, Cx_gain_empty = 0.379, Cx_gain_item = 1.132 },	-- Mk-82 x2 sur AT730
-- 	{ CLSID	=	"{AT730_1X_MK-83}",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{AT730_1X_MK-83}"}}
-- 		},													Type = 1,	arg = 315,	arg_value = 0.01, Cx_gain = 1.466 },								-- Mk-83 sur AT730
-- 	{ CLSID =	"{AT730_2X_MK-83}",	
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{AT730_2X_MK-83}"}}
-- 		},																arg = 315,	arg_value = 0.01, Cx_gain_empty = 0.339, Cx_gain_item = 1.760 },	-- Mk-83 X2 sur AT730
-- 	{ CLSID	=	"{AB8B8299-F1CC-4359-89B5-2172E0CF4A5A}",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{AB8B8299-F1CC-4359-89B5-2172E0CF4A5A}"}}
-- 		},													Type = 1,	arg = 315,	arg_value = 0.01, Cx_gain = 1.296 },								-- Mk-84
-- 	{ CLSID =	"{GBU-24}",	
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{GBU-24}"}}
-- 		},													Type = 1,	arg = 315,	arg_value = 0.01, Cx_gain = 2.073 },								-- GBU-24
-- 	---------------------------------------------------------------- Missiles Air-Air ------------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"{METEOR}",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{METEOR}"}}
-- 		},																arg = 315,	arg_value = 0.11, 	attach_point_position = {0, -0.18, 0}, Cx_gain_empty = 0.786, Cx_gain_item = 0.543 },			-- Météor / AIM 120C
-- 	{ CLSID =	"{METEOR_MICA_EM_MIX_R}",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{METEOR_MICA_EM_MIX_L}"}}
-- 		},																arg = 315,	arg_value = 0.41,											 Cx_gain_empty = 0.786, Cx_gain_item = 0.863 },			-- METEOR + Mica EM / AIM-120C + AIM-120B
-- 	{ CLSID =	"{MICA_EM}",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{MICA_EM}"}}
-- 		},																arg = 315,	arg_value = 0.21,	attach_point_position = {0, -0.17, 0}, Cx_gain_empty = 0.786, Cx_gain_item = 0.863 },			-- Mica EM / AIM-120B
-- 	{ CLSID =	"{MICA_EM_X2R}",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{MICA_EM_X2L}"}}
-- 		},																arg = 315,																 Cx_gain_empty = 0.786, Cx_gain_item = 0.863 },			-- Mica EM x2 / AIM-120B x2
-- 	{ CLSID =	"{AIM-9L}",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{AIM-9L}"}}
-- 		},																arg = 315,	arg_value = 0.21,	attach_point_position = {0, -0.155, 0}, Cx_gain_empty = 0.786, Cx_gain_item = 0.863 },			-- Mica IR / AIM-9L
-- 	{ CLSID =	"LAU-115_LAU-127_AIM-9L_R",								arg = 315,																Cx_gain_empty = 0.786, Cx_gain_item = 0.863 },			-- Mica IR x2 / AIM-9L x2	
-- 	---------------------------------------------------------------- Missiles Air-Sol ------------------------------------------------------------------------------------------------------------------------------------------------
-- 	--{ CLSID =	"{BRU55_2*AGM-154A}",
-- 	--	required =	
-- 	--	{
-- 	--		{station = 2, loadout = {"{BRU55_2*AGM-154A}"}}
-- 	--	},													Type = 1,	arg = 315,	arg_value = 0.01, Cx_gain_empty = 0.371, Cx_gain_item = 0.277 },	-- SBU-38 250 X2 sur AT730
-- 	{ CLSID =	"{AT730_2X_SBU-38_250}",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{AT730_2X_SBU-38_250}"}}
-- 		},													Type = 1,	arg = 315,	arg_value = 0.01, Cx_gain_empty = 0.371, Cx_gain_item = 0.277 },	-- SBU-38 500 X2 sur AT730
-- 	{ CLSID	= "LAU_117_AGM_65F",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"LAU_117_AGM_65F"}},
-- 		},													Type = 1,	arg = 315,	arg_value = 0.01, Cx_gain = 0.188 },								-- AASM 1000 IR / AGM-65F
-- 	{ CLSID	= "{F16A4DE0-116C-4A71-97F0-2CF85B0313EC}",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{F16A4DE0-116C-4A71-97F0-2CF85B0313EC}"}},
-- 		},													Type = 1,	arg = 315,	arg_value = 0.01, Cx_gain = 0.188 },								-- AASM 1000 Laser / AGM-65E
-- 	{ CLSID	= "{GBU_31_V_2B}",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{GBU_31_V_2B}"}},
-- 		},													Type = 1,	arg = 315,	arg_value = 0.01, Cx_gain = 0.188 },								-- AASM 1000
-- 	{ CLSID	=	"{AGM_84H}",
-- 		required =	
-- 		{
-- 			{station = 2, loadout = {"{AGM_84H}"}}
-- 		},													Type = 1,	arg = 315,	arg_value = 0.01, Cx_gain = 0.467 },								-- SCALP / AGM-84H
-- })

-- local inboard 	= 
-- {
-- 	---------------------------------------------------------------- Suppression du pylone -------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"<CLEAN>",											arg_value = 1, add_mass = -wingPylonMass	},				-- Clean
-- }

-- local inboardLeft = {}	-- left
-- joinTbl(inboard, inboardLeft,
-- {
-- 	---------------------------------------------------------------- Bidons ----------------------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"{RPL711_Aile}",
-- 		forbidden =
-- 		{
-- 			{station = 5, loadout = {"{RPL711_Aile}","{RPL751_Aile}"}}
-- 		},
-- 		required =
-- 		{
-- 			{station = 7, loadout = {"{RPL711_Aile}"}}
-- 		},															arg = 310,	arg_value = 0.05 },
-- 	{ CLSID =	"{RPL751_Aile}",
-- 		forbidden =
-- 		{
-- 			{station = 5, loadout = {"{RPL711_Aile}","{RPL751_Aile}"}}
-- 		},
-- 		required =
-- 		{
-- 			{station = 7, loadout = {"{RPL751_Aile}"}}
-- 		},															arg = 310,	arg_value = 0.10 },
-- 	---------------------------------------------------------------- Missiles Air-Air Décalé ------------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"{MICA_EM_X2C}",
-- 		forbidden = 
-- 		{
-- 			{station = 5, loadout = {"{RPL711_Ventral}","{RPL751_Ventral}","{AB8B8299-F1CC-4359-89B5-2172E0CF4A5A}"}}
-- 		}, 															arg = 310,	arg_value = 0.60, Cx_gain_empty = 0.786, Cx_gain_item = 0.543 },	-- Mica EM / AIM-120B central
-- 	---------------------------------------------------------------- Bombe Air-Sol Décalé ------------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID	=	"{GBU-24}",
-- 		forbidden = 
-- 		{
-- 			{station = 5, loadout = {"{RPL711_Ventral}","{RPL751_Ventral}","{AB8B8299-F1CC-4359-89B5-2172E0CF4A5A}"}}
-- 		},															arg = 310,	arg_value = 0.80, Cx_gain = 2.073 },								-- GBU-24 central
-- 	---------------------------------------------------------------- Missiles Air-Sol Décalé----------------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID	= 	"{AGM_84E}",
-- 		forbidden = 
-- 		{
-- 			{station = 5, loadout = {"{RPL711_Ventral}","{RPL751_Ventral}","{AB8B8299-F1CC-4359-89B5-2172E0CF4A5A}"}}
-- 		},														arg = 310,	arg_value = 0.80, Cx_gain = 0.467 },									-- ASMP-A / AGM-84E
-- })

-- local inboardRight = {}	-- right
-- joinTbl(inboard, inboardRight,
-- {
-- 	---------------------------------------------------------------- Bidons ----------------------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"{RPL711_Aile}",									arg = 314,	arg_value = 0.05 },
-- 	{ CLSID =	"{RPL751_Aile}",									arg = 314,	arg_value = 0.10 },
-- })

-- local fuselage = 
-- {
-- 	---------------------------------------------------------------- Suppression du pylone -------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"<CLEAN>",											arg_value = 1, add_mass = -lau116Mass },				-- Clean
-- }

-- local fuselageLeft	= {}
-- joinTbl(fuselage, fuselageLeft,
-- {
-- 	---------------------------------------------------------------- Missiles Air-Air ------------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"{METEOR}",											arg = 311,	arg_value = 0.05, attach_point_position = {0, 0.01, 0}, Cx_gain_empty = 0.786, Cx_gain_item = 0.543 },	-- METEOR / AIM-120C
-- 	{ CLSID =	"{MICA_EM}",										arg = 311,	arg_value = 0.05, attach_point_position = {0, -0.08, 0}, Cx_gain_empty = 0.786, Cx_gain_item = 0.863 },	-- Mica EM / AIM-120B
-- 	---------------------------------------------------------------- Pod Litening & ATFLIR -------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"{AAQ-28_LEFT}",
-- 	forbidden = 
-- 	{
-- 		{station = 5, loadout = {"{A111396E-D3E8-4b9c-8AC9-2432489304D5}"}},
-- 	},																arg = 311,	arg_value = 0.40 },	-- Pod Talios Thales Pylone 4
-- 	{ CLSID =	"{AN_ASQ_228}",
-- 	forbidden = 
-- 	{
-- 		{station = 5, loadout = {"{A111396E-D3E8-4b9c-8AC9-2432489304D5}"}},
-- 	},																arg = 311,	arg_value = 0.85 },	-- Pod ATFLIR / OSF
-- })

-- local fuselageRight	= {}
-- joinTbl(fuselage, fuselageRight,
-- {
-- 	---------------------------------------------------------------- Missiles Air-Air ------------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"{METEOR}",											arg = 313,	arg_value = 0.05, attach_point_position = {0, 0.01, 0}, Cx_gain_empty = 0.786, Cx_gain_item = 0.543 },	-- METEOR / AIM-120C
-- 	{ CLSID =	"{MICA_EM}",										arg = 313,	arg_value = 0.05, attach_point_position = {0, -0.08, 0}, Cx_gain_empty = 0.786, Cx_gain_item = 0.863 },	-- Mica EM / AIM-120B
-- })

-- local centerline 	= 
-- {
-- 	---------------------------------------------------------------- Bidons ----------------------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"{RPL711_Ventral}",
-- 		forbidden =
-- 		{
-- 			{station = 3, loadout = {"{MICA_EM_X2C}","{GBU-24}","{AGM_84E}"}}
-- 		},															arg = 312,	arg_value = 0.05 },
-- 	{ CLSID =	"{RPL751_Ventral}",
-- 		forbidden =
-- 		{
-- 			{station = 3, loadout = {"{MICA_EM_X2C}","{GBU-24}","{AGM_84E}"}}
-- 		},															arg = 312,	arg_value = 0.10 },
-- 	{ CLSID =	"{RPL711_Aile}",
-- 		forbidden =	
-- 		{
-- 			{station = 3, loadout = {"{RPL711_Aile}","{RPL751_Aile}"}}
-- 		},
-- 		required =
-- 		{
-- 			{station = 7, loadout = {"{RPL711_Aile}"}}
-- 		},															arg = 312,	arg_value = 0.65 }, -- Décalé
-- 	{ CLSID =	"{RPL751_Aile}",
-- 		forbidden =
-- 		{
-- 			{station = 3, loadout = {"{RPL711_Aile}","{RPL751_Aile}"}}
-- 		},
-- 		required =
-- 		{
-- 			{station = 7, loadout = {"{RPL751_Aile}"}}
-- 		},															arg = 312,	arg_value = 0.70 }, -- Décalé
-- 	---------------------------------------------------------------- Bombes ----------------------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID	=	"{AB8B8299-F1CC-4359-89B5-2172E0CF4A5A}",
-- 		forbidden =
-- 		{
-- 			{station = 3, loadout = {"{MICA_EM_X2C}","{GBU-24}","{AGM_84E}"}}
-- 		},															arg = 312,	arg_value = 0.01 },	-- Mk-84
-- 	---------------------------------------------------------------- Pod Litening & ATFLIR -------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID =	"{A111396E-D3E8-4b9c-8AC9-2432489304D5}",
-- 		forbidden = 
-- 		{
-- 			{station = 4, loadout = {"{AAQ-28_LEFT}"}},
-- 			{station = 4, loadout = {"{AN_ASQ_228}"}}
-- 		},															arg = 312,	arg_value = 0.97 },	-- Pod Talios Thales Pylone 5

-- 	---------------------------------------------------------------- Suppression du pylone -------------------------------------------------------------------------------------------------------------------------------------------
-- 	{ CLSID = "<CLEAN>",														arg_value = 1, add_mass = -ctrPylonMass	},	-- Clean
-- }
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Rafale_C =
{
	Name 				=   'Rafale-C',

	shape_table_data 	=
	{
		{
			file  		= "Rafale-C";
			username	= "Rafale-C";
			index		= WSTYPE_PLACEHOLDER;
			life		= 20; -- прочность объекта (методом lifebar*) -- The strength of the object (ie. lifebar *)
			vis			= 3; -- множитель видимости (для маленьких объектов лучше ставить поменьше). Visibility factor (For a small objects is better to put lower nr).
			desrt		= "F_A-18C_destr"; --Name of destroyed object file name
			fire		= { 300, 2}; -- Fire on the ground after destoyed: 300sec 4m
			classname	= "lLandPlane";
			positioning	= "BYNORMAL";
		},
		{
			name  = "F_A-18C_destr";
			file  = "f-18c-oblomok";
			fire  = { 0, 1};
		}
	},

	Picture				=	"Rafale.png",
	DisplayName			=	_("Rafale C"),
	mapclasskey			=	"P0091000024",
	WorldID				=   WSTYPE_PLACEHOLDER,
	attribute 			= 	{wsType_Air, wsType_Airplane, wsType_Fighter, WSTYPE_PLACEHOLDER, "Multirole fighters", "Refuelable", "Datalink", "Link16", "Link4", "ACLS"},
	Categories			=	{"{78EFB7A2-FD52-4b57-A6A6-3BF0E1D6555F}", "Interceptor",},
	CanopyGeometry		=	makeAirplaneCanopyGeometry(LOOK_AVERAGE, LOOK_AVERAGE, LOOK_GOOD),
	Rate				=	50,
	Shape 				= "Rafale-C",


	country_of_origin = "FRA",

	-- database/planes
	LandRWCategories = {
		[1] =
		{
			Name = "AircraftCarrier With Arresting Gear",
		}, -- end of [1]
	}, -- end of LandRWCategories

	-- Countermeasures,
	passivCounterm = {
		CMDS_Edit = true,
		SingleChargeTotal = 120,
		chaff = {default = 60, increment = 10, chargeSz = 1},
		flare = {default = 60, increment = 10, chargeSz = 1},
		preferred_flare_kind = 2,
	},
	Sensors = {
		RADAR = "AN/APG-73",
		RWR = "Abstract RWR"
	},
	Countermeasures = {
		ECM = {"AN/ALQ-165"}
	},
	EPLRS = true,

	-- Pylons =
	-- {
	-- 	pylon(1, 0, -4.375, -0.30931, -5.436,		{							use_full_connector_position = true,	connector = "Pylon1",																DisplayName = _("LW"),		},	tips),				-- Bout d'aile G
	-- 	pylon(2, 0, -3.3869, 1.41864, -3.34461,		{arg = 309, arg_value = 0,	use_full_connector_position = true,	connector = "Pylon2",	mass = wingPylonMass,										DisplayName = _("LO"),		},	outboardLeft),		-- A2SM - SCALP - Mica - Météor -- Y, Z, X		
	-- 	pylon(3, 1, -2.38105, -0.542027, -2.10997,	{arg = 310, arg_value = 0,	use_full_connector_position = true,	connector = "Pylon3",	mass = wingPylonMass,										DisplayName = _("LI"),		},	inboardLeft),		-- RPL
	-- 	pylon(4, 1, -3.96864, -0.756669, -1.36635,	{arg = 311, arg_value = 0,	use_full_connector_position = true,	connector = "Pylon4",	mass = lau116Mass,		eject_dir = {0,-0.9085,-0.4179},	DisplayName = _("FL"),		},	fuselageLeft),		-- Mica - Météor G - Pod
	-- 	pylon(5, 1, -1.42384, -0.914163, 0,			{arg = 312, arg_value = 0,	use_full_connector_position = true,	connector = "Pylon5",	mass = ctrPylonMass,										DisplayName = _("CTR"),		},	centerline),		-- Pylone ventral
	-- 	pylon(6, 1, -3.96864, -0.756669, 1.36635,	{arg = 313, arg_value = 0,	use_full_connector_position = true,	connector = "Pylon6",	mass = lau116Mass,		eject_dir = {0,-0.9085,0.4179},		DisplayName = _("FR"),		},	fuselageRight),		-- Mica - Météor G
	-- 	pylon(7, 1, -2.38105, -0.542027, 2.10997,	{arg = 314, arg_value = 0,	use_full_connector_position = true,	connector = "Pylon7",	mass = wingPylonMass, 										DisplayName = _("RI"),		},	inboardRight),		-- RPL
	-- 	pylon(8, 0, -3.3869, 1.41864, 3.34461,		{arg = 315, arg_value = 0,	use_full_connector_position = true,	connector = "Pylon8",	mass = wingPylonMass, 										DisplayName = _("RO"),		},	outboardRight),		-- A2SM, SCALP, Mica, Météor -- Y, Z, X
	-- 	pylon(9, 0, -4.375, -0.30931, 5.436,		{							use_full_connector_position = true,	connector = "Pylon9", 																DisplayName = _("RW"),		},	tips),				-- Bout d'aile D
	-- 	pylon(10, 2, -8.1, 0.1, 0,					{connector = "disable", DisplayName = _("SMK")},
	-- 	{
	-- 		{CLSID = "{INV-SMOKE-RED}"},		--Smoke Generator - red
	-- 		{CLSID = "{INV-SMOKE-GREEN}"},		--Smoke Generator - green
	-- 		{CLSID = "{INV-SMOKE-BLUE}"},		--Smoke Generator - blue
	-- 		{CLSID = "{INV-SMOKE-WHITE}"},		--Smoke Generator - white
	-- 		{CLSID = "{INV-SMOKE-YELLOW}"},		--Smoke Generator - yellow
	-- 		{CLSID = "{INV-SMOKE-ORANGE}"},		--Smoke Generator - orange
	-- 	}),
	-- },

	--0043552: Hornet: Gun should not have tracers
	--Tracers are an option but not often used. My suggestion is to keep them by default because they look awesome, and make it a load option or a menu option to not use tracers.
	Guns = {
		gun_mount("M_61",
		{
			mixes = { 
				{1},		-- XM242 HEI-T
				{2},		-- M56 HEI
				{3},		-- M53 API
				{4,5},		-- M55 + M220 TP
				{6},		-- PGU-28/B SAPHEI
				{7,8},		-- PGU-27/B TP with tracers
			},
			count = 125
		},
		{
			supply_position		 = {-0.3,-0.0692737,-0.0117591 },		-- approx
			muzzle_pos_connector = "gun_point_00",
			effects =
			{
				{name = "FireEffect"},
				{name = "SmokeEffect" , sparks_enabled = true}
			}
		})
	},
	ammo_type ={
			_("HEI-T High Explosive Incendiary-Tracer"),
			_("HEI High Explosive Incendiary"),
			_("AP Armor Piercing"),
			_("TP Target Practice-Tracer"),
			_("SAPHEI High Explosive Armor Piercing PGU"),
			_("TP Target Practice-Tracer PGU"),
	},
	HumanRadio	= {
		frequency		= 305.0,
		editable		= true,
		minFrequency	=  30.000,
		maxFrequency	= 399.975,
		rangeFrequency = {
			{min =  30.0, max =  87.995, modulation	= MODULATION_FM},
			{min = 118.0, max = 135.995, modulation	= MODULATION_AM},
			{min = 136.0, max = 155.995, modulation	= MODULATION_AM_AND_FM, modulationDef = MODULATION_FM},
			{min = 156.0, max = 173.995, modulation	= MODULATION_FM},
			{min = 225.0, max = 399.975, modulation	= MODULATION_AM_AND_FM, modulationDef = MODULATION_AM}
		},
		modulation	= MODULATION_AM,
	},
	panelRadio	= {
		[1] = {
			name = _("COMM 1: ARC-210"),
			range = {
				{min =  30.0, max =  87.995, modulation	= MODULATION_FM},
				{min = 118.0, max = 135.995, modulation	= MODULATION_AM},
				{min = 136.0, max = 155.995, modulation	= MODULATION_AM_AND_FM, modulationDef = MODULATION_FM},
				{min = 156.0, max = 173.995, modulation	= MODULATION_FM},
				{min = 225.0, max = 399.975, modulation	= MODULATION_AM_AND_FM, modulationDef = MODULATION_AM}
			},
			channels = {
				[1] =  { name = _("Channel 1"),		default = 305.0, connect = true}, -- default
				[2] =  { name = _("Channel 2"),		default = 264.0},	-- min. water : 135.0, 264.0
				[3] =  { name = _("Channel 3"),		default = 265.0},	-- nalchik : 136.0, 265.0
				[4] =  { name = _("Channel 4"),		default = 256.0},	-- sochi : 127.0, 256.0
				[5] =  { name = _("Channel 5"),		default = 254.0},	-- maykop : 125.0, 254.0
				[6] =  { name = _("Channel 6"),		default = 250.0},	-- anapa : 121.0, 250.0
				[7] =  { name = _("Channel 7"),		default = 270.0},	-- beslan : 141.0, 270.0
				[8] =  { name = _("Channel 8"),		default = 257.0},	-- krasnodar-pashk. : 128.0, 257.0
				[9] =  { name = _("Channel 9"),		default = 255.0},	-- gelenjik : 126.0, 255.0
				[10] = { name = _("Channel 10"),	default = 262.0},	-- kabuleti : 133.0, 262.0
				[11] = { name = _("Channel 11"),	default = 259.0},	-- gudauta : 130.0, 259.0
				[12] = { name = _("Channel 12"),	default = 268.0},	-- soginlug : 139.0, 268.0
				[13] = { name = _("Channel 13"),	default = 269.0},	-- vaziani : 140.0, 269.0
				[14] = { name = _("Channel 14"),	default = 260.0},	-- batumi : 131.0, 260.0
				[15] = { name = _("Channel 15"),	default = 263.0},	-- kutaisi : 134.0, 263.0
				[16] = { name = _("Channel 16"),	default = 261.0},	-- senaki : 132.0, 261.0
				[17] = { name = _("Channel 17"),	default = 267.0},	-- lochini : 138.0, 267.0
				[18] = { name = _("Channel 18"),	default = 251.0},	-- krasnodar-center : 122.0, 251.0
				[19] = { name = _("Channel 19"),	default = 253.0},	-- krymsk : 124.0, 253.0
				[20] = { name = _("Channel 20"),	default = 266.0},	-- mozdok : 137.0, 266.0
			}
		},
		[2] = {
			name = _("COMM 2: ARC-210"),
			range = {
				{min =  30.0, max =  87.995, modulation	= MODULATION_FM},
				{min = 118.0, max = 135.995, modulation	= MODULATION_AM},
				{min = 136.0, max = 155.995, modulation	= MODULATION_AM_AND_FM, modulationDef = MODULATION_FM},
				{min = 156.0, max = 173.995, modulation	= MODULATION_FM},
				{min = 225.0, max = 399.975, modulation	= MODULATION_AM_AND_FM, modulationDef = MODULATION_AM}
			},
			channels = {
				[1] =  { name = _("Channel 1"),		default = 305.0},	-- default
				[2] =  { name = _("Channel 2"),		default = 264.0},	-- min. water : 135.0, 264.0
				[3] =  { name = _("Channel 3"),		default = 265.0},	-- nalchik : 136.0, 265.0
				[4] =  { name = _("Channel 4"),		default = 256.0},	-- sochi : 127.0, 256.0
				[5] =  { name = _("Channel 5"),		default = 254.0},	-- maykop : 125.0, 254.0
				[6] =  { name = _("Channel 6"),		default = 250.0},	-- anapa : 121.0, 250.0
				[7] =  { name = _("Channel 7"),		default = 270.0},	-- beslan : 141.0, 270.0
				[8] =  { name = _("Channel 8"),		default = 257.0},	-- krasnodar-pashk. : 128.0, 257.0
				[9] =  { name = _("Channel 9"),		default = 255.0},	-- gelenjik : 126.0, 255.0
				[10] = { name = _("Channel 10"),	default = 262.0},	-- kabuleti : 133.0, 262.0
				[11] = { name = _("Channel 11"),	default = 259.0},	-- gudauta : 130.0, 259.0
				[12] = { name = _("Channel 12"),	default = 268.0},	-- soginlug : 139.0, 268.0
				[13] = { name = _("Channel 13"),	default = 269.0},	-- vaziani : 140.0, 269.0
				[14] = { name = _("Channel 14"),	default = 260.0},	-- batumi : 131.0, 260.0
				[15] = { name = _("Channel 15"),	default = 263.0},	-- kutaisi : 134.0, 263.0
				[16] = { name = _("Channel 16"),	default = 261.0},	-- senaki : 132.0, 261.0
				[17] = { name = _("Channel 17"),	default = 267.0},	-- lochini : 138.0, 267.0
				[18] = { name = _("Channel 18"),	default = 251.0},	-- krasnodar-center : 122.0, 251.0
				[19] = { name = _("Channel 19"),	default = 253.0},	-- krymsk : 124.0, 253.0
				[20] = { name = _("Channel 20"),	default = 266.0},	-- mozdok : 137.0, 266.0
			}
		},
	},
	TACAN_AA	= true,

	Tasks		= {
		aircraft_task(CAP),
		aircraft_task(Escort),
		aircraft_task(FighterSweep),
		aircraft_task(Intercept),
		aircraft_task(PinpointStrike),
		aircraft_task(CAS),
		aircraft_task(GroundAttack),
		aircraft_task(RunwayAttack),
		aircraft_task(SEAD),
		aircraft_task(AFAC),
		aircraft_task(AntishipStrike),
		aircraft_task(Reconnaissance),
	},-- end of Tasks
	DefaultTask	=   aircraft_task(CAP),

	-------------------------
	M_empty					=	 9350,			-- [kg] 23838 lb
	M_nominal				=	14500,
	M_max					=	24500,
	M_fuel_max				=	4700,
	H_max					=	15240,
	CAS_min					=	60,
	V_opt					=	250,
	V_take_off				=	85,
	V_land					=	120,
	V_max_sea_level			=	1390,
	V_max_h					=	2390,
	Mach_max				=	2.0,
	Vy_max					=	305,
	Ny_min					=	-3.2,
	Ny_max					=	9.0,
	Ny_max_e				=	11,
	bank_angle_max			=	60,
	AOA_take_off			=	0.175,
	range					=	2200,
	average_fuel_consumption =	0.0125,
	thrust_sum_max			=	15000,
	thrust_sum_ab			=	23000,

	wing_area	=	45.7,
	wing_span	=	10.90,
	length		=	15.27,
	height		=	5.34,

	flaps_maneuver				= 0.7,
	stores_number				= 14,
	has_afteburner				= true,
	has_speedbrake				= true,
	brakeshute_name				= 0,
	radar_can_see_ground		= true,
	RCS							= 4,
	detection_range_max			= 400,
	IR_emission_coeff			= 0.7,
	IR_emission_coeff_ab		= 3,
	air_refuel_receptacle_pos	= {5.27329,	0.861692, 0.54873}, --Y, Z, X
	tanker_type					= 2,
	wing_tip_pos				= {-6.311, -0.24, -5.315}, --Y, Z, X

	--La taille physique de l'aile ne change pas, mais le jeu la considère comme une aile plus petite. 
	--Logiquement, les positions des tourbillons de bout d'aile ne devraient pas avoir besoin d'être modifiées, mais si elles le sont, c'est cette ligne :
	
	tand_gear_max								= 3.73,
	-- La position Z ce fait par rapport à l'armature - donc elle est négative - distance entre l'armature et le pneu en contact avec le sol
	nose_gear_pos								= {1.905307, -2.03, 0},	-- Y, Z, X pour IA -- main gear coords
	nose_gear_amortizer_direct_stroke			= 0.200,					-- down from nose_gear_pos !!! Négatif : ammortisseur décomprimé - Positif : ammortisseur comprimé sur piste
	nose_gear_amortizer_reversal_stroke			= -0.050,					-- up
	nose_gear_amortizer_normal_weight_stroke	= 0,						-- down from nose_gear_pos
	nose_gear_wheel_diameter					= 0,35665,
	nose_gear_door_close_after_retract			= false,

	main_gear_pos								= {-3.225668, -1.65, -1.41163},	-- Y, Z, X pour IA -- main gear coords
	main_gear_amortizer_direct_stroke		 	= 0.240,							-- down from nose_gear_pos !!!
	main_gear_amortizer_reversal_stroke		 	= -0.050,							-- up
	main_gear_amortizer_normal_weight_stroke 	= 0,								-- down from nose_gear_pos
	main_gear_wheel_diameter					= 0.781,
	main_gear_door_close_after_retract			= false,

	-----------------------------------------------------------------------
	----------------- SUSPENSION CODE BEGINS
	-----------------------------------------------------------------------

	--tand_gear_max 								= 2.1445,
		
	-- nose_gear_pos 								= {2.938,	-1.36,	0},
	-- nose_gear_amortizer_direct_stroke			= -0.01,
	-- nose_gear_amortizer_reversal_stroke			= 0.28 - 0.50,
	-- nose_gear_amortizer_normal_weight_stroke		= -0.14,
	-- nose_gear_wheel_diameter						= 0.57,
	
	
	-- main_gear_pos								= {-1.678, -1.47,	1.40},
	-- main_gear_amortizer_direct_stroke			= 0,
	-- main_gear_amortizer_reversal_stroke			= 1.295 - 1.40,
	-- main_gear_amortizer_normal_weight_stroke		= -0.1,
	-- main_gear_wheel_diameter						= 0.84,

	engines_count	=	2,
	engines_nozzles =
	{
		[1] =
		{
			pos = 	{-7.60864,	-0.10467,	0.6},	--Y, Z, X
			elevation	=	0,
			diameter	=	1,
			exhaust_length_ab	=	6.4,
			exhaust_length_ab_K	=	0.707,
			smokiness_level		= 	0.05, 
			afterburner_effect_texture = "afterburner_f-18c",
		}, -- end of [1]
		[2] =
		{
			pos = 	{-7.60864,	-0.10467,	-0.6},	--Y, Z, X
			elevation	=	0,
			diameter	=	1,
			exhaust_length_ab	=	6.4,
			exhaust_length_ab_K	=	0.707,
			smokiness_level		= 	0.05,
			afterburner_effect_texture = "afterburner_f-18c",
			afterburner_light_color  = {1,1,1},
		}, -- end of [2]
	}, -- end of engines_nozzles
	crew_size	 = 1,
	crew_members =
	{
		[1] =
		{
			ejection_seat_name	= "Rafale_pilotseat",
			pilot_name		   	= "Rafale_pilot",
			drop_canopy_name	= "fa-18c_fonar",
			drop_parachute_name	= "Rafale_parachute",
			canopy_pos			= {0, 0, 0},
			pos					= {3.755,	0.4,	0},
			bailout_arg 		= -1,
			can_be_playable		= true,
			role_display_name	= _("Pilote"),
			g_suit 			    =  9.0,
		}, -- end of [1]
	}, -- end of crew_members

-- 	mechanimations = {
-- 		Door0 = {
-- 			{Transition = {"Close", "Open"},  Sequence = {{C = {{"Arg", 38, "to", 1, "in", 9.0},},},}, Flags = {"Reversible"},},
-- 			{Transition = {"Open", "Close"},  Sequence = {{C = {{"Arg", 38, "to", 0.0, "in", 6.0},},},}, Flags = {"Reversible", "StepsBackwards"},},
-- -- 			{Transition = {"Any", "Bailout"}, Sequence = {{C = {{"JettisonCanopy", 0},},},},},
-- 		},
-- 		FoldableWings = {
-- 			{Transition = {"Retract", "Extend"}, Sequence = {
-- 						{C = {{"Arg", 8, "to", 0.0, "in", 5.0}}},
-- 						{C = {{"Arg", 19, "to", 0.0, "in", 0.3}}},
-- 					},
-- 					Flags = {"Reversible"}},
-- 			{Transition = {"Extend", "Retract"}, Sequence = {
-- 						{C = {{"Arg", 8, "to", 1.0, "in", 15.0}}},
-- 						{C = {{"Arg", 19, "to", 1.0, "in", 0.3}}},
-- 					},
-- 					Flags = {"Reversible", "StepsBackwards"}},
-- 		},
-- 		ServiceHatches = {
-- 			{Transition = {"Close", "Open"}, Sequence = {{C = {{"PosType", 3}, {"Sleep", "for", 30.0}}}, {C = {{"Arg", 24, "set", 1.0}}}}},
-- 			{Transition = {"Open", "Close"}, Sequence = {{C = {{"PosType", 6}, {"Sleep", "for", 5.0}}}, {C = {{"Arg", 24, "set", 0.0}}}}},
-- 		},
-- 		CrewLadder = {
-- 			{Transition = {"Dismantle", "Erect"}, Sequence = {
-- 				{C = {{"Arg", 323, "to", 1.0, "in", 3.0}}},
-- 			}},
-- 			{Transition = {"Erect", "Dismantle"}, Sequence = {
-- 				{C = {{"Arg", 323, "to", 0.0, "in", 3.0}}},
-- 			}},
-- 		},
-- --		LaunchBar = {
-- --			{Transition = {"Retract", "Extend"}, Sequence = {{C = {{"ChangeDriveTo", "HydraulicGravityAssisted"}, {"VelType", 3}, {"Arg", 85, "to", 0.881, "in", 4.4}}}}},
-- 			--{Transition = {"Extend", "Retract"}, Sequence = {{C = {{"ChangeDriveTo", "Hydraulic"}, {"VelType", 2}, {"Arg", 85, "to", 0.000, "in", 4.5}}}}},
-- --			{Transition = {"Retract", "Stage"},  Sequence = {{C = {{"ChangeDriveTo", "HydraulicGravityAssisted"}, {"VelType", 3}, {"Arg", 85, "to", 0.815, "in", 4.4}}}}},
-- 			--{Transition = {"Stage", "Retract"},  Sequence = {{C = {{"ChangeDriveTo", "Hydraulic"}, {"VelType", 2}, {"Arg", 85, "to", 0.000, "in", 4.5}}}}},
-- --			{Transition = {"Any", "Retract"},  Sequence = {{C = {{"ChangeDriveTo", "Hydraulic"}, {"VelType", 2}, {"Arg", 85, "to", 0.000, "in", 4.5}}}}},
-- --			{Transition = {"Extend", "Stage"},   Sequence = {
-- --					{C = {{"ChangeDriveTo", "Mechanical"}, {"Sleep", "for", 0.000}}},
-- --					{C = {{"Arg", 85, "from", 0.881, "to", 0.766, "in", 0.600}}},
-- --					{C = {{"Arg", 85, "from", 0.766, "to", 0.753, "in", 0.200}}},
-- --					{C = {{"Sleep", "for", 0.15}}},
-- 					--{C = {{"Sleep", "for", 0.150}}},
-- --					{C = {{"Arg", 85, "from", 0.753, "to", 0.784, "in", 0.1, "sign", 2}}},
-- --					{C = {{"Arg", 85, "from", 0.784, "to", 0.881, "in", 1.0}}},
-- 					--{C = {{"PosType", 6}, {"Sleep", "for", 3.3}}},
-- 					--{C = {{"Arg", 85, "from", 0.854, "to", 0.815, "in", 1.25}}},
-- --				},
-- --			},
-- --			{Transition = {"Stage", "Pull"},  Sequence = {
-- --					{C = {{"ChangeDriveTo", "Mechanical"}, {"VelType", 2}, {"Arg", 85,"from", 0.881, "to", launch_bar_connected_arg_value_, "in", 0.15}}},
-- --					{C = {{"ChangeDriveTo", "Mechanical"}, {"VelType", 2}, {"Arg", 85, "to", 0.78, "speed", 0.1}}},
-- --					{C = {{"ChangeDriveTo", "Mechanical"}, {"VelType", 2}, {"Arg", 85, "to", 0.7792, "speed", 0.02}}},
-- --					}
-- --			},
-- --			{Transition = {"Stage", "Extend"},   Sequence = {{C = {{"ChangeDriveTo", "HydraulicGravityAssisted"}, {"VelType", 3}, {"Arg", 85, "from", 0.815, "to", 0.881, "in", 0.2}}}}},
-- --		},
-- 		Crewman0Gestures = {
-- 			{Transition = {"Any", "GestureSaluteLeft"},
-- 				Sequence = {
-- 					{--step 1 hands and head to 0 position
-- 						C = {
-- 								{"Arg", 39,  "to", 0.0, "speed", 0.50},
-- 								{"Arg", 99,  "to", 0.0, "speed", 0.50},
-- 								{"Arg", 500, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 395, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 501, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 396, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 530, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 531, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 521, "set", 0.01},
-- 							},
-- 					},
-- 					{-- step 2 gesture start
-- 						C = {{"Arg", 521, "from", 0.01, "to", 0.6, "in", 2.0}}
-- 					},
-- 					{-- step 4 gesture end
-- 						C = {{"Arg", 521, "from", 0.6, "to", 1.0, "in", 1.5}}
-- 					},
-- 					{-- step 5 activate 522 arg to remove hands control
-- 						C = {
-- 								{"Arg", 522, "set", 0.01},
-- 							}
-- 					},
-- 				},
-- 			},
-- 			{Transition = {"Any", "GestureSaluteRight"},
-- 				Sequence = {
-- 					{--step 1 hands and head to 0 position
-- 						C = {
-- 								{"Arg", 39,  "to", 0.0, "speed", 0.50},
-- 								{"Arg", 99,  "to", 0.0, "speed", 0.50},
-- 								{"Arg", 500, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 395, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 501, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 396, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 530, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 531, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 520, "set", 0.01},
-- 							},
-- 					},
-- 					{-- step 2 gesture start
-- 						C = {{"Arg", 520, "from", 0.01, "to", 0.55, "in", 2.0}}
-- 					},
-- 					{-- step 5 gesture end
-- 						C = {{"Arg", 520, "from", 0.55, "to", 1.0, "in", 1.7}}
-- 					},
-- 					{-- step 6 activate 522 arg to remove hands control
-- 						C = {
-- 								{"Arg", 522, "set", 0.01},
-- 							}
-- 					},
-- 				},
-- 			},
-- 			{Transition = {"Any", "GestureSaluteTakeOffFinalize"},
-- 				Sequence = {
-- 					{--step 1 head shake, hands moves to propper place
-- 						C = {{"Arg", 522, "to", 1.0, "speed", 0.33},},
-- 					},
-- 					{-- step 2 reset 522 arg, move to normal operation
-- 						C = {
-- 							{"Arg", 522, "set", 0.0},
-- 							{"Arg", 521, "set", 0.0},
-- 							{"Arg", 520, "set", 0.0},
-- 						}
-- 					},
-- 				},
-- 			},
-- 			{Transition = {"Any", "GestureSaluteTaxi"}, -- TEMP! TODO: waiting for special arg with THUMB UP
-- 				Sequence = {
-- 					{--step 1 hands and (head?) to 0 position
-- 						C = {
-- 								--{"Arg", 39,  "to", 0.0, "speed", 0.50},
-- 								{"Arg", 99,  "to", 0.0, "speed", 0.50},
-- 								{"Arg", 500, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 395, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 501, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 396, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 530, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 531, "to", 0.0, "speed", 5.0},
-- 								{"Arg", 520, "set", 0.01},
-- 							},
-- 					},
-- 					{-- step 2 gesture start
-- 						C = {{"Arg", 520, "from", 0.01, "to", 0.55, "in", 2.0}}
-- 					},
-- 					{-- step 3 gesture end (back)
-- 						C = {{"Arg", 520, "from", 0.55, "to", 0.0, "in", 2.0}}
-- 					},
-- 				},
-- 			},
-- 			{Transition = {"Any", "GestureSaluteReset"}, Sequence = {{C = {{"Sleep", "for", 0.0}}}}},

-- 		},
-- 	}, -- end of mechanimations

	InheriteCommonCallnames = true,
	SpecificCallnames = {
		["USA"] = {
					{_('Hornet'),			'Hornet'},
					{_('Squid'),			'Squid'},
					{_('Ragin'),			'Ragin'},
					{_('Roman'),			'Roman'},
					{_('Sting'),			'Sting'},
					{_('Jury'),				'Jury'},
					{_('Joker'),			'Joker'},
					{_('Ram'),				'Ram'},
					{_('Hawk'),				'Hawk'},
					{_('Devil'),			'Devil'},
					{_('Check'),			'Check'},
					{_('Snake'),			'Snake'}
		}
	},
	-- add model draw args for network transmitting to this draw_args table (16 limit)
	net_animation =
	{
		0,
		1,
		2,--[[nws]]
		3,
		4,
		5,
		6,
		11,
		12,
		13, --[[right LE flap]]
		14, --[[left LE flap]]
		21,
		25, --[[hook]]
		38,
		84,
		89,--[[nozzle]]
		90,

		39, 99,						-- PLT head turn
--		506, 507, 508, 509,			-- PLT helmet kit
--		459,						-- died/alive
--		500, 501, 502, 503,			-- hands on stick, throttle; pedals control
--		395, 396, 397, 398, 420,	-- controls: stick, throttle, pedals
--		539,						-- hand correction
--		520, 521, 522,				-- actions with a catapult
--		530, 531, 532,				-- PLT body deflections
		533,						-- PLT head roll
	},

	fires_pos =
	{
		[1] = 	{-0.232,	0.262,	0},
		[2] = 	{-1.938,	0.08,	 1.344},
		[3] = 	{-1.945,	0.056,	-1.359},
		[4] = 	{-2.52,		0.265,	 3.274},
		[5] = 	{-2.52,		0.265,	-3.274},
		[6] = 	{-2.73,		0.255,	 4.634},
		[7] = 	{-2.73,		0.255,	-4.634},
		[8] = 	{-7.128,	0.039,	 0.5},
		[9] = 	{-7.728,	0.039,	-0.5},
		[10] = 	{-7.728,	0.039,	 0.5},
		[11] = 	{-7.728,	0.039,	-0.5},
	}, -- end of fires_pos

	effects_presets = {
		{effect = "APU_STARTUP_BLAST", preset = "F18", ttl = 3.0},
		{effect = "OVERWING_VAPOR", file = current_mod_path.."/Effects/Rafale_overwingVapor.lua"},
	},
	chaff_flare_dispenser =
	{
		[1] =
		{
			dir = 	{0,	0.5, -0.2}, -- Orientation 0 = verticale (inclinaison vers avant ou arrière), 1 = vers le haut, 0 = inclinaison sur les côtés.
			pos = 	{-5.69312,	-0.0913261,	-1.27177},
		}, -- end of [1] Flare Gauche
		[2] =
		{
			dir = 	{0, 0.5, 0.2},
			pos = 	{-6.00627,	-0.091326,	1.2717},
		}, -- end of [2] Flare Droit
		[3] =
		{
			dir = 	{0, 0.1, 0},
			pos = 	{-5.69312,	-0.091326,	-1.2717},
		}, -- end of [3] Chaff Gauche
		[4] =
		{
			dir = 	{0, 0.1, 0},
			pos = 	{-6.00627,	-0.091326,	1.2717},
		}, -- end of [4] Chaff Droit
	}, -- end of chaff_flare_dispenser

-- 	Failures =
-- 	{
-- 		-- electric system
-- 		{ id = 'Failure_Elec_UtilityBattery',					label = _('Utility Battery FAILURE'), 								enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Elec_EmergencyBattery',					label = _('Emergency Battery FAILURE'), 							enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Elec_LeftGenerator',					label = _('Left Generator FAILURE'),								enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Elec_RightGenerator',					label = _('Right Generator FAILURE'), 								enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Elec_LeftTransformerRectifier',			label = _('Left Transformer-Rectifier FAILURE'), 					enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Elec_RightTransformerRectifier',		label = _('Right Transformer-Rectifier FAILURE'), 					enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		-- hydraulic system
-- 		{ id = 'Failure_Hyd_HYD1A_Leak',						label = _('HYD 1A LEAKAGE'),										enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Hyd_HYD1B_Leak',						label = _('HYD 1B LEAKAGE'), 										enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Hyd_HYD2A_Leak',						label = _('HYD 2A LEAKAGE'), 										enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Hyd_HYD2B_Leak',						label = _('HYD 2B LEAKAGE'), 										enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Hyd_IsolatedHYD2BSystem_Leak',			label = _('Isolated HYD 2B System LEAKAGE'), 						enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		-- power plant
-- 		{ id = 'Failure_PP_EngL_Main_FFCS',						label = _('Left Engine: Main Fuel Flow Control System FAILURE'),	enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_PP_EngR_Main_FFCS',						label = _('Right Engine: Main Fuel Flow Control System FAILURE'),	enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_PP_EngL_AB_FFCS',						label = _('Left Engine: AB Fuel Flow Control System FAILURE'),		enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_PP_EngR_AB_FFCS',						label = _('Right Engine: AB Fuel Flow Control System FAILURE'),		enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_PP_EngL_Nozzle_CS',						label = _('Left Engine: Nozzle Control System FAILURE'),			enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_PP_EngR_Nozzle_CS',						label = _('Right Engine: Nozzle Control System FAILURE'),			enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_PP_EngL_OilLeak',						label = _('Left Engine: Oil LEAKAGE'),								enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_PP_EngR_OilLeak',						label = _('Right Engine: Oil LEAKAGE'),								enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_PP_LeftPTS',							label = _('Left PTS FAILURE'),										enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_PP_RightPTS',							label = _('Right PTS FAILURE'),										enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_PP_LeftAMAD_OilLeak',					label = _('Left AMAD Oil LEAKAGE'),									enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_PP_RightAMAD_OilLeak',					label = _('Right AMAD Oil LEAKAGE'),								enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		-- fuel system
-- 		{ id = 'Failure_Fuel_LeftBoostPump',					label = _('Left Boost Pump FAILURE'),								enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Fuel_RightBoostPump',					label = _('Right Boost Pump FAILURE'),								enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Fuel_Tank1Transfer',					label = _('Tank 1 Transfer FAILURE'),								enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Fuel_Tank4Transfer',					label = _('Tank 4 Transfer FAILURE'),								enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Fuel_ExtTankTransferL',					label = _('External Left Wing Tank Transfer FAILURE'),				enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Fuel_ExtTankTransferR',					label = _('External Right Wing Tank Transfer FAILURE'),				enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Fuel_ExtTankTransferC',					label = _('External Centerline Tank Transfer FAILURE'),				enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Fuel_QuantityGaging',					label = _('Fuel Quantity Gaging System FAILURE'),					enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		-- gear system
-- 		{ id = 'Failure_Gear_WOW',								label = _('WOW System FAILURE'),									enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Gear_NWS',								label = _('NWS FAILURE'),											enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		-- ECS
-- 		{ id = 'Failure_ECS_Valve',								label = _('ECS Valve FAILURE'),										enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_ECS_OBOGS',								label = _('OBOGS FAILURE'),											enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		-- control system
-- 		{ id = 'Failure_Ctrl_LEF',								label = _('LEF FAILURE'),											enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Ctrl_Aileron',							label = _('Aileron FAILURE'),										enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Ctrl_FCS_Ch1',							label = _('FCS Channel 1 FAILURE'),									enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Ctrl_FCS_Ch2',							label = _('FCS Channel 2 FAILURE'),									enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Ctrl_FCS_Ch3',							label = _('FCS Channel 3 FAILURE'),									enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Ctrl_FCS_Ch4',							label = _('FCS Channel 4 FAILURE'),									enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		-- computers
-- 		{ id = 'Failure_Comp_ADC',								label = _('ADC FAILURE'),											enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Comp_MC1',								label = _('MC 1 FAILURE'),											enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Comp_MC2',								label = _('MC 2 FAILURE'),											enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		--{ id = 'Failure_Comp_CSC_Mux',							label = _('CSC MUX FAILURE'),										enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		-- sensors
-- 		{ id = 'Failure_Sens_LeftPitotHeater',					label = _('Left PITOT Heater FAILURE'),								enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 		{ id = 'Failure_Sens_RightPitotHeater',					label = _('Right PITOT Heater FAILURE'),							enable = false, hh = 0, mm = 0, mmint = 1, prob = 100 },
-- 	},

-- 	Damage = verbose_to_dmg_properties(
-- 	{
-- 		["NOSE_CENTER"]				= {args = {146}, critical_damage = 3},-- NOSE_CENTER
-- 		["NOSE_BOTTOM"]				= {args = {148}, critical_damage = 3},-- NOSE_BOTTOM
-- 		["NOSE_LEFT_SIDE"]			= {args = {150}, critical_damage = 3},-- NOSE_LEFT_SIDE
-- 		["NOSE_RIGHT_SIDE"]			= {args = {149}, critical_damage = 3},-- NOSE_RIGHT_SIDE

-- 		["COCKPIT"]					= {args = {65},  critical_damage = 1},-- COCKPIT
-- 		["CABIN_BOTTOM"]			= {args = {152}, critical_damage = 3},-- CABIN_BOTTOM
-- 		["CABIN_LEFT_SIDE"]			= {args = {298}, critical_damage = 3},-- CABIN_LEFT_SIDE
-- 		["CABIN_RIGHT_SIDE"]		= {args = {299}, critical_damage = 3},-- CABIN_RIGHT_SIDE
-- 		["FRONT_GEAR_BOX"]			= {args = {265}, critical_damage = 2},
-- 		["WHEEL_F"]					= {args = {135}, critical_damage = 3},-- WHEEL_F

-- 		["FUSELAGE_LEFT_SIDE"]		= {args = {154}, critical_damage = 3},-- FUSELAGE_LEFT_SIDE
-- 		["FUSELAGE_RIGHT_SIDE"]		= {args = {153}, critical_damage = 3},-- FUSELAGE_RIGHT_SIDE
-- 		["FUSELAGE_BOTTOM"]			= {args = {152}, critical_damage = 4},-- FUSELAGE_BOTTOM
-- 		["LEFT_GEAR_BOX"]			= {args = {267}, critical_damage = 3},
-- 		["WHEEL_L"]					= {args = {137}, critical_damage = 3},-- WHEEL_L
-- 		["RIGHT_GEAR_BOX"]			= {args = {266}, critical_damage = 3},
-- 		["WHEEL_R"]					= {args = {136}, critical_damage = 3},-- WHEEL_R

-- 		["TAIL_LEFT_SIDE"]			= {args = {158}, critical_damage = 3},-- TAIL_LEFT_SIDE
-- 		["TAIL_RIGHT_SIDE"]			= {args = {157}, critical_damage = 3},-- TAIL_RIGHT_SIDE
-- 		["TAIL_BOTTOM"]				= {args = {156}, critical_damage = 3},--
-- 		["HOOK"]					= {critical_damage = 2},
-- 		["AIR_BRAKE"]				= {args = {183}, critical_damage = 1},--

-- 		["ENGINE_L"]				= {args = {166}, critical_damage = 2},-- ENGINE_L	-- 167,168
-- 		["ENGINE_R"]				= {args = {160}, critical_damage = 2},-- ENGINE_R	-- 161,162

-- 		["WING_L_IN"]				= {args = {225}, critical_damage = 5, deps_cells = {"WING_L_CENTER", "WING_L_OUT", "WING_L_PART_IN", "WING_L_PART_OUT", "ELERON_L", "STABILIZER_L_IN"}},-- WING_L_IN
-- 		["WING_L_CENTER"]			= {args = {225}, critical_damage = 5, deps_cells = {"WING_L_OUT", "WING_L_PART_IN", "WING_L_PART_OUT", "ELERON_L", "STABILIZER_L_IN"}},-- WING_L_CENTER
-- 		["WING_L_OUT"]				= {args = {225}, critical_damage = 5, deps_cells = {"WING_L_PART_OUT", "ELERON_L"}},		-- WING_L_OUT
-- 		["WING_L_PART_IN"]			= {args = {230}, critical_damage = 1.5},	-- WING_L_PART_IN  -- inboard slat
-- 		["WING_L_PART_OUT"]			= {args = {232}, critical_damage = 1.5},	-- WING_L_PART_OUT -- outboard slat
-- --		["FLAP_L_IN"]				= {args = {227}, critical_damage = 2},		-- FLAP_L_IN -- flap
-- 		["ELERON_L"]				= {args = {226}, critical_damage = 1},		-- ELERON_L

-- 		["WING_R_IN"]				= {args = {215}, critical_damage = 5, deps_cells = {"WING_R_CENTER", "WING_R_OUT", "WING_R_PART_IN", "WING_R_PART_OUT", "ELERON_R", "STABILIZER_R_IN"}},-- WING_R_IN
-- 		["WING_R_CENTER"]			= {args = {215}, critical_damage = 5, deps_cells = {"WING_R_OUT", "WING_R_PART_IN", "WING_R_PART_OUT", "ELERON_R", "STABILIZER_R_IN"}},-- WING_R_CENTER
-- 		["WING_R_OUT"]				= {args = {215}, critical_damage = 5, deps_cells = {"WING_R_PART_OUT", "ELERON_R"}},		-- WING_R_OUT
-- 		["WING_R_PART_IN"]			= {args = {220}, critical_damage = 1.5},	-- WING_R_PART_IN  -- inboard slat
-- 		["WING_R_PART_OUT"]			= {args = {222}, critical_damage = 1.5},	-- WING_R_PART_OUT -- outboard slat
-- --		["FLAP_R_IN"]				= {args = {217}, critical_damage = 2},		-- FLAP_R_IN -- flap
-- 		["ELERON_R"]				= {args = {216}, critical_damage = 1},		-- ELERON_R

-- 		["FIN_L_BOTTOM"]			= {args = {245}, critical_damage = 4, deps_cells = {"RUDDER_L"}},
-- 		["FIN_L_CENTER"]			= {args = {245}, critical_damage = 4, deps_cells = {"RUDDER_L"}},	-- ??
-- 		["FIN_L_TOP"]				= {args = {245}, critical_damage = 4},
-- 		["RUDDER_L"]				= {args = {248}, critical_damage = 1},-- RUDDER_L

-- 		["FIN_R_BOTTOM"]			= {args = {242}, critical_damage = 4, deps_cells = {"RUDDER_R"}},
-- 		["FIN_R_CENTER"]			= {args = {242}, critical_damage = 4, deps_cells = {"RUDDER_R"}},	-- ??
-- 		["FIN_R_TOP"]				= {args = {241}, critical_damage = 4},
-- 		["RUDDER_R"]				= {args = {247}, critical_damage = 1},-- RUDDER_R

-- 		["STABILIZER_L_IN"]			= {args = {227}, critical_damage = 2},-- STABILIZER_L_IN
-- 		["STABILIZER_R_IN"]			= {args = {217}, critical_damage = 2},-- STABILIZER_R_IN

-- 		["LAUNCH_BAR"]				= {critical_damage = 2},-- LAUNCH BAR
-- 	}),-- end of Damage

	DamageParts 	=
 	{
		[1] = "FA-18C_oblomok_wing_R",
		[2] = "FA-18C_oblomok_wing_L",
	},

	AddPropAircraft = {
		{ id = "OuterBoard",			control = 'comboList', label = _('Outerboard rockets mode'),
			values = {
				{id =  0, dispName = _("Single")},
				{id =  1, dispName = _("Ripple")},
			},
			defValue	= 0,
			wCtrl		= 150,
			playerOnly	= true
		},
		{ id = "InnerBoard",			control = 'comboList', label = _('Innerboard rockets mode'),
			values = {
				{id = 0, dispName = _("Single")},
				{id = 1, dispName = _("Ripple")},
			},
			defValue	= 0,
			wCtrl		= 150,
			playerOnly = true
		},
		{ id = "HelmetMountedDevice",			control = 'comboList', label = _('Helmet Mounted Device'),
			values = {
				{id = 0, dispName = _("Not installed"),	value = 0.5},
				{id = 1, dispName = _("JHMCS"),			value = 0.0},
				{id = 2, dispName = _("NVG"),			value = 1.0},
			},
			defValue	= 1,
			wCtrl		= 150,
			playerOnly	= true,
			arg			= 509,
		},

				---------DATALINK--------------------------------------------------------------------------
		{ id = "datalink_Label", control = 'label', label = _('DATALINK'), xLbl = 150, playerOnly = false},
		{ id = "VoiceCallsignLabel" , control = 'editbox', label = _('Voice Callsign Label'), getDefault = getCallsignLabel, onChange = onChange_VoiceCallsignLabel, playerOnly = false},
		{ id = "VoiceCallsignNumber" , control = 'editbox', label = _('Voice Callsign Number'), getDefault = getCallsignNumber, onChange = onChange_VoiceCallsignNumber, playerOnly = false},
		{ id = "STN_L16" , control = 'editbox', label = _('STN'), getDefault = getSTN, onChange = onChange_STN, onFocus = onFocus_STN, playerOnly = false},
	},

		connectDatalinks = {
			"Link16",
		},
		datalinks = {
		--IDM = "CoreMods\\aircraft\\AH-64D\\Datalinks\\IDM.lua",
		Link16 = "CoreMods\\aircraft\\FA-18C\\Datalinks\\Link16.lua",
		--Link4 = "CoreMods\\aircraft\\FA-18C\\Datalinks\\Link4.lua",
		--SADL
	},

	dataCartridge = true,

	SFM_Data = {
		aerodynamics =
	{
    Cy0    =    0,
    Mzalfa    =    6.2,
    Mzalfadt    =    1.1,
    kjx    =    0.5,
    kjz    =    0.00125,
    Czbe    =    -0.016,
    cx_gear    =    0.026,
    cx_flap    =    0.22,
    cy_flap    =    0.75,
    cx_brk    =    0.07,
    
        table_data =
    {
        -- M    Cx0    	Cya    B     B4     Omxmax(rad/s) Aldop(°) Cymax
        {0,     0.014,  0.085, 0.091,    0.110,  4.8,   30.0,  1.45},
    	{0.1,   0.014,  0.082, 0.091,    0.105,  4.8,   30.0,  1.40},
    	{0.2,   0.014,  0.080, 0.091,    0.100,  4.7,   30.0,  1.35},
    	{0.35,  0.014,  0.078, 0.0875,   0.300,  4.6,   30.0,  1.30},
    	{0.45,  0.015,  0.075, 0.084,    0.500,  4.5,   25.0,  1.25},
    	{0.55,  0.016,  0.072, 0.0805,   0.800,  4.4,   20.0,  1.20},
    	{0.6,   0.016,  0.070, 0.077,    1.100,  4.3,   18.0,  1.15},
    	{0.8,   0.017,  0.068, 0.0735,   1.600,  4.0,   16.0,  1.10},
    	{1.0,   0.018,  0.072, 0.070,    1.900,  3.8,   14.0,  1.05},
    	{1.2,   0.019,  0.070, 0.0665,   2.100,  3.5,   12.0,  1.00},
    	{1.5,   0.021,  0.065, 0.063,    2.300,  2.5,   10.0,  0.90},
    	{1.8,   0.024,  0.055, 0.0595,   2.500,  2.0,   8.0,   0.80},
    	{2.0,   0.026,  0.048, 0.056,    2.600,  1.8,   7.0,   0.70},
    	},
	},
		engine =
{
    type    =    "TurboFan",
    Nmg    =    70.0,
    MinRUD    =    0,
    MaxRUD    =    1,
    MaksRUD    =    0.87,
    ForsRUD    =    0.94,
    hMaxEng    =    20,
    dcx_eng    =    0.0135,
    
    cemax    =    1.35,
    cefor    =    2.85,
    
    dpdh_m    =    4800,
    dpdh_f    =    13000,
    
    table_data =
    {
        -- M    Pmax(N)    	Pfor(N)
        {0,     100000,     150000},
        {0.2,   101000,     152000},
        {0.4,   102000,     154000},
        {0.6,   103000,     157000},
        {0.8,   105000,     162000},
        {0.9,   107000,     168000},
        {1.0,   108000,     175000},
        {1.2,   106000,     178000},
        {1.5,   102000,     175000},
        {1.8,   96000,      170000},
        {2.0,   90000,      162000},
        {2.2,   84000,      152000},
    },
	},
},

	lights_data =
	{
		typename =	"collection",
		lights 	 =
		{
			[WOLALIGHT_STROBES]	= {
				typename	=	"collection",
				lights 		= {
					{ typename = "argnatostrobelight", argument = 193, period = 1.2},		-- beacon lights
				},
			},--must be collection
			[WOLALIGHT_LANDING_LIGHTS]	= {
				typename	= 	"collection",
				lights		= {
					{ typename  = "argumentlight",	argument  = 210, },
				},
			},--must be collection
			[WOLALIGHT_TAXI_LIGHTS]	= {
				typename	= 	"collection",
				lights		= {
					{ typename  = "argumentlight",	argument  = 210, },
				},
			},--must be collection
			[WOLALIGHT_NAVLIGHTS]	= {
				typename 	= "collection",
				lights 		= {
					{ typename  = "argumentlight", argument  = 190, },				-- red
					{ typename  = "argumentlight", argument  = 191, },				-- green
					{ typename  = "argumentlight", argument  = 192, },				-- white
				},
			},--must be collection
			[WOLALIGHT_FORMATION_LIGHTS] = {
				typename	= "collection",
				lights		= {
					{ typename  = "argumentlight",	argument  = 88, },
				},		-- green bars
			},--must be collection
			-- REFUEL
			[WOLALIGHT_REFUEL_LIGHTS] = {
				typename = "collection",
				lights	 = {
					{ typename = "argumentlight",	argument = 212, },				-- AR light
				},
			},
			[WOLALIGHT_CABIN_NIGHT] = {
				typename = "collection",
				lights = {
					{ typename = "argumentlight", argument = 69, },
				},
			},
		}, -- end of lights
	},-- end of lights_data
	
	ColdStartDefaultControls = {
		[8]		=  0,
		[11]	=  -0.7,
		[12]	=  -0.7,
		[15]	=  -0.7,
		[16]	=  -0.7,
		[17]	=  0,		-- [17] = Left rudder Dérive
		[18]	=  0,		-- [18] = Right rudder Dérive
	},

	-- DTC = true,

}
add_aircraft(Rafale_C)