--print_message_to_user(mm_mfd_btn[1].text.status)



----------------------------------------------------------------------------------------

dofile(LockOn_Options.script_path.."devices.lua")
dofile(LockOn_Options.script_path.."command_defs.lua")
dev 	    = GetSelf()
DEBUG_ACTIVE = false
modpath = LockOn_Options.script_path.."MFD/"

local update_time_step = 0.01666666		--0.0166 --once every 1/60 sec
make_default_activity(update_time_step) 


MFD_SCALE	= 1	--must be the same as in ccDefinitions.lua
----------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------

lfs 		= require('lfs')
Terrain   	= require('terrain')

----------------------------------------------------------------------------------------
dofile(LockOn_Options.script_path.. "avionics/debug.lua")	
dofile(LockOn_Options.script_path.. "avionics/transfer_parameters.lua")	

----------------------------------------------------------------------------------------	
	

mm_cursor = {
				h_lr 		= get_param_handle("MM_CURSOR_LR"),
				h_ud 		= get_param_handle("MM_CURSOR_UD"),
				pos_lr		= 0,
				pos_ud		= 0,
				steps		= 0.01,
				rate_lr 	= 0 ,
				rate_ud 	= 0,
				active_btn 	= 0,
			}
	
--mm_cursor_lr	= get_param_handle("MM_CURSOR_LR")
--mm_cursor_ud	= get_param_handle("MM_CURSOR_UD")

--------------------

mm_mfd_SOI					= 50/255	--focus20
--mm_mfd_SOI					= 5/255		--no focus
mm_mfd_SOI_param			= get_param_handle("MM_MFD_SOI")
mm_mfd_SOI_param:set(mm_mfd_SOI)

mm_mfd_btn_cursor_clicked  	= 0
mm_mfd_btn_key_clicked  	= 0
mm_mfd_btn_enter			= 0
mm_mfd_btn_cancel			= 0
mm_mfd_cursor_mode 			= "normal"	--"list"

--------------------

dofile(modpath.."sub/avMFD_MOD_btn.lua")	
	
---LOADING PAGES-------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------

mm_mfd_cur_page = ""


dofile(modpath.."avMFD_MOD_init_pages.lua")	

dofile(modpath.."avMFD_MOD_page_root.lua")	
dofile(modpath.."avMFD_MOD_page_btn.lua")	
dofile(modpath.."avMFD_MOD_page_bmap.lua")	
dofile(modpath.."avMFD_MOD_page_eng.lua")
dofile(modpath.."avMFD_MOD_page_rbe2.lua")	

----------------------------------------------------------------------------------------	

dofile(modpath.."avMFD_MOD_sup_func.lua")	
dofile(modpath.."sub/avMFD_MOD_nav_obj.lua")	
dofile(modpath.."sub/avMFD_MOD_wpts.lua")	
dofile(modpath.."sub/avMFD_MOD_functions.lua")	


					
----------------------------------------------------------------------------------------

mm_bmap_scale = 10000
mm_bmap_range = 5
mm_bmap_range_text = mm_bmap_range .. " km"

----------------------------------------------------------------------------------------








----------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------


function post_initialize()
	print_message_to_user("Post init avMFD_MOD_init.lua")
	--mainPanelDevice 	= GetDevice(0)
	mdfmodDevice		= GetDevice(6)
	
	root_open_directory()
	bmap_open_directory()
	
	
	load_wpts_from_mission()
end


----------------------------------------------------------------------------------------
----------SETCOMMAND--------------------------------------------------------------------

function SetCommand(command,value)	--SetCommand(selfid,command,value)	

    -- RBE2 external bindings
    if rbe2_commands and value == 1 then
        local c = nil
        if command == rbe2_commands.VTM_TOGGLE then
            if mm_mfd_cur_page == "RBE2" then root_open_directory() else rbe2_open_directory() end
            return
        elseif command == rbe2_commands.MODE_RWS then c=1 elseif command == rbe2_commands.MODE_TWS then c=2 elseif command == rbe2_commands.MODE_STT then c=3
        elseif command == rbe2_commands.MODE_GMT then c=4 elseif command == rbe2_commands.MODE_SAR then c=5 elseif command == rbe2_commands.RANGE_UP then c=6 elseif command == rbe2_commands.RANGE_DOWN then c=7
        elseif command == rbe2_commands.TDC_UP then c=8 elseif command == rbe2_commands.TDC_RIGHT then c=9 elseif command == rbe2_commands.TDC_DOWN then c=10 elseif command == rbe2_commands.TDC_LEFT then c=11
        elseif command == rbe2_commands.TARGET_LOCK then c=12 elseif command == rbe2_commands.TARGET_UNLOCK then c=13 elseif command == rbe2_commands.TARGET_NEXT then c=14 elseif command == rbe2_commands.TARGET_PREV then c=15 end
        if c then get_param_handle("RBE2_COMMAND"):set(c); return end
    end

--print_message_to_user(string.format("SetCom: C %i   V%.2f",command,value))	


	if command > 3000 and command < 3021 then 
		
		command_btn = command-3000
					
			if 	mm_mfd_cursor_mode == "normal" or mm_mfd_cursor_mode == "list_prep" then
				
				----------------------------------------------------------------
					if command_btn == 1 and value == 1 then		--up	
						mm_cursor.rate_ud = mm_cursor.steps
				elseif command_btn == 2 and value == 1 then		--right
						mm_cursor.rate_lr = mm_cursor.steps
				elseif command_btn == 3 and value == 1 then		--down
						mm_cursor.rate_ud = -mm_cursor.steps
				elseif command_btn == 4 and value == 1 then		--left
						mm_cursor.rate_lr = -mm_cursor.steps
				else
					mm_cursor.rate_lr = 0
					mm_cursor.rate_ud = 0
				end
				
				----------------------------------------------------------------
					if command_btn == 5 and value == 1 then		--enter
					mm_mfd_btn_enter	= 1
				elseif command_btn == 5 and value == 0 then		--Enter
					mm_mfd_btn_enter	= 0
					if mm_mfd_cursor_mode == "list_prep" then
						mm_mfd_cursor_mode = "list"
					end
				elseif command_btn == 6 and value == 1 then		--cancel
					mm_mfd_btn_cancel	= 1
				elseif command_btn == 6 and value == 0 then		--cancel
					mm_mfd_btn_cancel	= 0
				end
			
			elseif 	mm_mfd_cursor_mode == "list" then
			
					if command_btn == 1 and value == 0 then		--up	
						mm_move_list("up")
				elseif command_btn == 2 and value == 0 then		--right
						
				elseif command_btn == 3 and value == 0 then		--down
						mm_move_list("down")
				elseif command_btn == 4 and value == 0 then		--left
				
				elseif command_btn == 5 and value == 0 then
						mm_move_list("enter")
				
				elseif command_btn == 6 and value == 0 then		--cancel
						mm_move_list("cancel")
				
					
				end
			
			end
			
	end

end


function nothing()
--	print_message_to_user("nothing")
end

---------------------------------------------------------
---------------------------------------------------------
-----------UPDATE----------------------------------------
---------------------------------------------------------
---------------------------------------------------------
function update()
	
	func_update_sensordata()
	mm_move_cursor()
	mm_update_wpt()
	
	
	

end
--print_message_to_user( mm_mfd_pagedata[test].btn_text[13])




