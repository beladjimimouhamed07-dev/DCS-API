--
--
--
-- 	dofile(LockOn_Options.script_path.. "avionics/transfer_parameters.lua")	
--
---------------------------------------------------------------------------------------------
-- TRANSFER PARAMETERS ----------------------------------------------------------------------
---------------------------------------------------------------------------------------------
--
-- TPH	Transfer Param Handle
--
--
--


TPH_loc = {}
--
--TPH_loc[1]	:
--TPH_loc[2]	:
--TPH_loc[3]	:
--
-------------------------------------------------------------------------
for i = 1,3 do
	TPH_loc[i] = {	
			x	=	get_param_handle("TPH_LOC_" .. i .. "_X"),
			y	=	get_param_handle("TPH_LOC_" .. i .. "_Y"),
			alt	=	get_param_handle("TPH_LOC_" .. i .. "_ALT"),		--or Z
			typ	=	get_param_handle("TPH_LOC_" .. i .. "_TYP"),
		
		}
end	
	--[[
		TPH_loc[1].x:set()
		TPH_loc[1].y:set()
		TPH_loc[1].alt:set()
		TPH_loc[1].typ:set()
		
		TPH_loc[1].x:get()
		TPH_loc[1].y:get()
		TPH_loc[1].alt:get()
		TPH_loc[1].typ:get()
	]]--

-------------------------------------------------------------------------









	
	
--[[
TPH_loc_1_x		=	get_param_handle("TPH_LOC_1_X")
	TPH_loc_1_y		=	get_param_handle("TPH_LOC_1_Y")
	TPH_loc_1_alt	=	get_param_handle("TPH_LOC_1_ALT")
	TPH_loc_1_type	=	get_param_handle("TPH_LOC_1_TYPE")


--Trans_handle_a1	= get_param_handle("AV_TRANS_A1")
	--print_message_to_user(Trans_handle_a1:get())
	Trans_handle_a1:set(get_model_time())
	Trans_handle_a1	= get_param_handle("AV_TRANS_A1")
	--print_message_to_user(Trans_handle_a1:get())
	--Trans_handle_a1:set(get_model_time)
	
	]]--