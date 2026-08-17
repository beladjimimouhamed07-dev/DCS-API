

dofile(LockOn_Options.script_path.."devices.lua")

dev 	    	= GetSelf()
DEBUG_ACTIVE 	= false


update_time_step = 0.01666		--0.0166 --once every 1/60 sec
--update_time_step = 0.1666		--0.166 --once every 6 times a sec

make_default_activity(update_time_step) 

--------------------------------------------


lfs 		= require('lfs')
Terrain   	= require('terrain')

-----------------------------------------------------------------------------------------------------
--  LOAD ADDITION LUA FILES  ------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------
	dofile(LockOn_Options.script_path.."avionics/debug.lua")
	dofile(LockOn_Options.script_path.."avionics/avAvionics/avAvionics_sensor_data.lua")	-- DCS - get_base_data()	


-----------------------------------------------------------------------------------------------------
--  LOAD MODULES  -----------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------
	dofile(LockOn_Options.script_path.."avionics/avAvionics/avAvionics_sub_HUD.lua")
	--dofile(LockOn_Options.script_path.."avionics/avAvionics/avAvionics_sub_AP.lua")

	dofile(LockOn_Options.script_path.. "avionics/transfer_parameters.lua")	
-----------------------------------------------------------------------------------------------------
----  VARS  -----------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------

	avDevID		= 5		--Avionics_Device_id = 1
	
							
-----------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------

function nothing()

end

function post_initialize()
	
	HUD_post_initialize()
	
---------------------------		
	dev:listen_command(247)
	
---------------------------	
	
	dev:listen_command(317)
	dev:listen_command(316)
	dev:listen_command(281)
	dev:listen_command(101)
	
end


----------------------------------------------------------------------------------------
------  SETCOMMAND  --------------------------------------------------------------------
----------------------------------------------------------------------------------------
function SetCommand(command,value)	--SetCommand(selfid,command,value)	

	if not value then value = -9999 end
	print_message_to_user(string.format("AvAvionics SetCom: C %i   V%.2f",command,value))	
	test_setcommand(command,value)
	
	
	
-- MOVING HUD GLASS UP/DOWN ----------------------
	if command == 247 then
		HUD_SetCommand(command,value)
	end
-- /MOVING HUD GLASS UP/DOWN ---------------------
	
	
end	


-----------------------------------------------------------
----  UPDATE  ---------------------------------------------
-----------------------------------------------------------
function update()

	M_Time = get_model_time()
	
	func_update_sensordata() --must be the first thing to update
	HUD_update()

end


-----------------------------------------------------------
-----------------------------------------------------------
-----------------------------------------------------------

function test_setcommand(command,value)


	if command == 3002 then
			--print_message_to_user("> > Command 3002")
			--AV_WS_test()
			--dump_to_file(get_mission_route())
		
		-----------------------------------------
			local tmp_draw_arg = {}
				for i =1,100 do
					tmp_draw_arg[#tmp_draw_arg+1] = get_aircraft_draw_argument_value(i)
				end
			dump_to_file(tmp_draw_arg)
		-----------------------------------------
	
	elseif command == 3003 and value == 0.0 then
				--GetDevice(wsDeviD):launch_station(1)
	elseif command == 3004 and value == 0.0 then
			--GetDevice(wsDeviD):select_station(1)
	elseif command == 3005 and value == 0.0 then
		SetGlobalCommand(393)
		SetGlobalCommand(425)
	end

	
	--GetDevice(100):listen_command(3006)
	--dev:listen_command(3006)
	--GetDevice(100):listen_command(3006)
	
	--dump_to_file(getmetatable(GetDevice(wsDeviD)))
	
end




