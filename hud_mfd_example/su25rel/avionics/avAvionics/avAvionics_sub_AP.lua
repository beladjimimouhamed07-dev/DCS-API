


	--VARS----------------------------------------------------------
	
		glass_position 			= 0	-- 0 to -10
		glass_position_handle	= get_param_handle("AV_PIT_GLASS")

	--/VARS----------------------------------------------------------

function AP_post_initialize()

	--dev:listen_command(247)		--HUD glass up/down

end
	
function AP_SetCommand(command,value)
		
		--[[
		if command == 247 then
			if value > 0 then		--moves down
				if glass_position > -10 then
					glass_position = glass_position - 1
				end
			elseif value < 0 then	--moves up
				if glass_position < 0 then
					glass_position = glass_position + 1
				end
			end	
			glass_position_handle:set(glass_position)
		end
		]]--
		
end



previous_error = 0
integral = 0 

function AP_update()
	Kp = 0.005
	Ki = 0.0 
	Kd = 0.0 
	
	dt = 0.16--update_time_step
	
	--[[
	previous_error = 0
	integral = 0 
	start:
	  error = setpoint - measured_value
	  integral = integral + error*dt
	  derivative = (error - previous_error)/dt
	  output = Kp*error + Ki*integral + Kd*derivative
	  previous_error = error
	  wait(dt)
	  goto start

	]]--
	
	setpoint = 500

	cur_error = setpoint - Sensor_Data_Mod.self_alt
	integral = integral + cur_error * dt
	derivative = (cur_error - previous_error) / dt
	output = Kp*cur_error + Ki*integral + Kd*derivative
	previous_error = cur_error
	
	print_message_to_user(Sensor_Data_Mod.self_alt .. "\n" .. output)
end




local TargetTAS = 220.50    -- I want A10 to keep 220.50 KTAS
local LastTAS = 0.0             -- the previous sampled TAS
local TAS = 0.0                   -- the current sampled TAS
local Thrust = -0.5              -- set the initial Thrust position to -0.5
local T0, T1                       -- T0 is the last sample time, T1 is the current sample time
local lastDelta  = 0                  -- the TAS Delta ( the value of TAS - TargetTAS) of the last sample time, 
local IntegralSum = 0           --Integral sum, 

function AutoThrust()
    if T0 == nil then T0 = T1 return end

    local tDelta = T1 - T0      -- tDelta is the elapsed time between last sample time and the current sample time
    local Kp = 2                    -- PID value
    local Ki = 1
    local Kd = 1
    local TASDelta = TargetTAS - TAS   -- the speed delta between real and target speed
    local PID_P = Kp * TASDelta   -- calculate the P part
    -- calculate the IntegralSum
    IntegralSum = IntegralSum + TASDelta * tDelta
    -- integral  saturation
        if math.abs(IntegralSum) > 1000 then
        if IntegralSum > 0 then
            IntegralSum = 1000 
        elseif IntegralSum < 0 then
            IntegralSum = -1000
        end
    end


    local PID_I = Ki * IntegralSum
   
    -- the D part 
        local PID_D = Kd * (TASDelta - lastDelta) / tDelta
     -- P+I+D
    local Pout = PID_P + PID_I + PID_D
     -- map the PID value to Thrust position value [ -1, 1] , -1 is the max throttle, 
    Thrust = Pout / -2000

   --update some value
    lastDelta = TASDelta
    T0 = T1

    textOutput = string.format("t=%f;Thrust=%f;TAS=%f;TASDelta=%f;Pout=%f;P=%f;I=%f;D=%f;\n", T1, Thrust, TAS, TASDelta, Pout, PID_P, PID_I, PID_D )
    print( textOutput )
    logFile:write( textOutput )
end








