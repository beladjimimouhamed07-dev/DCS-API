dofile(LockOn_Options.script_path.."command_defs.lua")
dofile(LockOn_Options.script_path.."devices.lua")

local Dev = GetSelf()
local sensor_data = get_base_data()
local Terrain = require('terrain')
local update_time_step = 0.002
make_default_activity(update_time_step)

local meter2mile = 0.000621371
local meter2feet = 3.28084
local meterToNauticalMile = 1/1852
local degrees_per_radian = 57.2957795

local terrain_line = 0
local gcas_distance = get_param_handle("GCAS_DIST")
local roll_param = get_param_handle("GCAS_ROT")
local slip_param = get_param_handle("GCAS_HDG")
local gcas_visibility = get_param_handle("GCAS_VISIBILITY")

local gcas_symbol_param = nil

local last_terrain_positions = {}
local last_terrain_visible = {}
local has_valid_terrain = {}

local GCAS_300FT_SENSITIVITY = 1.0

local total_gcas_lines = 9
local lines_per_group = 9
local groups_count = 1

local horizontal_spacing = 180
local vertical_spacing = 10
local base_offset_x = -550
local base_offset_y = 200

local SMOOTHING_FACTOR = 0.3
local last_smoothed_angles = {}

local MIN_DISTANCE = 1
local GCAS_MAX_RADAR_ALT_FT = 10000
local GCAS_MAX_RADAR_ALT_M = GCAS_MAX_RADAR_ALT_FT / 3.28084

function init_gcas_parameters()
    for i = 0, total_gcas_lines - 1 do
        local dash_height = get_param_handle("TF_D_"..i.."_H")
        dash_height:set(-1000)
        
        last_terrain_positions[i] = {x = 0, y = 0, z = 0}
        last_terrain_visible[i] = false
        has_valid_terrain[i] = false
        last_smoothed_angles[i] = 0
    end
    gcas_visibility:set(0)
end

function post_initialize()
    gcas_distance:set(2000)
    
    init_gcas_parameters()
    
    gcas_symbol_param = get_param_handle("GCAS_SYMBOL_H")
    gcas_symbol_param:set(-1000)
end

function update_gcas_300ft_symbol()
    if not gcas_symbol_param then
        return
    end
    
    local radar_alt_m = sensor_data.getRadarAltitude()
    local radar_alt_ft = radar_alt_m * meter2feet
    
    local diff_ft = radar_alt_ft - 300
    
    local hud_position = -diff_ft * GCAS_300FT_SENSITIVITY
    
    hud_position = math.max(-400, math.min(400, hud_position))
    
    if not last_300ft_pos then
        last_300ft_pos = hud_position
    end
    local smoothed_pos = last_300ft_pos * 0.8 + hud_position * 0.2
    last_300ft_pos = smoothed_pos
    
    gcas_symbol_param:set(smoothed_pos)
end

function should_activate_gcas_lines()
    local argument_144 = get_cockpit_draw_argument_value(144)
    if math.abs(argument_144 - 0.2) > 0.05 then
        return false
    end
    
    local radar_altitude = sensor_data.getRadarAltitude()
    local radar_altitude_ft = radar_altitude * meter2feet
    
    if radar_altitude_ft > GCAS_MAX_RADAR_ALT_FT then
        return false
    end
    
    local left_gear_down = sensor_data.getLeftMainLandingGearDown()
    local right_gear_down = sensor_data.getRightMainLandingGearDown()
    local nose_gear_down = sensor_data.getNoseLandingGearDown()
    
    if left_gear_down > 0 or right_gear_down > 0 or nose_gear_down > 0 then
        return false
    end
    
    return true
end

function should_activate_gcas_symbol()
    local argument_144 = get_cockpit_draw_argument_value(144)
    if math.abs(argument_144 - 0.1) > 0.05 then
        return false
    end
    
    return true
end

function update()
    local argument_144 = get_cockpit_draw_argument_value(144)
    
    if math.abs(argument_144 - 0.1) <= 0.05 then
        gcas_visibility:set(0)
        
        update_gcas_300ft_symbol()
        
        for i = 0, total_gcas_lines - 1 do
            local dash_height = get_param_handle("TF_D_"..i.."_H")
            dash_height:set(-1000)
        end
        
        roll_param:set(sensor_data.getRoll())
        slip_param:set(sensor_data.getAngleOfSlide())
        
    elseif math.abs(argument_144 - 0.2) <= 0.05 then
        local gcas_lines_active = should_activate_gcas_lines()
        
        if gcas_lines_active then
            gcas_visibility:set(1)
            
            if gcas_symbol_param then
                gcas_symbol_param:set(-1000)
            end
            last_300ft_pos = nil
            
            local pos_x, pos_y, pos_z = sensor_data.getSelfCoordinates()
            local my_hdg = 2 * math.pi - sensor_data.getHeading()
            local my_roll = sensor_data.getRoll()
            local my_pitch = sensor_data.getPitch()
            
            update_gcas_lines(0, pos_x, pos_y, pos_z, my_hdg, pos_y, my_roll, my_pitch)
            
            roll_param:set(sensor_data.getRoll())
            slip_param:set(sensor_data.getAngleOfSlide())
        else
            gcas_visibility:set(0)
            
            for i = 0, total_gcas_lines - 1 do
                local dash_height = get_param_handle("TF_D_"..i.."_H")
                dash_height:set(-1000)
            end
            
            if gcas_symbol_param then
                gcas_symbol_param:set(-1000)
            end
            reset_gcas_lines()
        end
    
    else
        gcas_visibility:set(1)
        
        for i = 0, total_gcas_lines - 1 do
            local dash_height = get_param_handle("TF_D_"..i.."_H")
            dash_height:set(-1000)
        end
        
        if gcas_symbol_param then
            gcas_symbol_param:set(-1000)
        end
        last_300ft_pos = nil
        
        reset_gcas_lines()
    end
end

function update_gcas_lines(group_index, posx, posy, posz, my_hdg, my_alt, my_roll, my_pitch)
    local start_index = 0
    local end_index = total_gcas_lines - 1
    
    for dash = start_index, end_index do
        local dash_height = get_param_handle("TF_D_"..dash.."_H")
        
        local line_index = dash
        local base_azimuth = base_offset_x + horizontal_spacing * line_index
        local hdg_offset = math.rad(base_azimuth * 0.01)
        
        local rng = gcas_distance:get()
        
        local dot_x = posx + rng * math.cos(hdg_offset + my_hdg)
        local dot_z = posz + rng * math.sin(hdg_offset + my_hdg)
        local terrain_height = Terrain.GetHeight(dot_x, dot_z)
        
        local is_visible = Terrain.isVisible(posx, posy, posz, dot_x, terrain_height, dot_z)
        
        if is_visible then
            last_terrain_positions[dash] = {
                x = dot_x,
                y = terrain_height,
                z = dot_z
            }
            last_terrain_visible[dash] = true
            has_valid_terrain[dash] = true
            
            local height_diff = posy - terrain_height - 70
            
            local effective_distance = math.max(rng, MIN_DISTANCE)
            
            local geometric_angle = math.atan(height_diff / effective_distance)
            
            local max_angle = math.rad(60)
            geometric_angle = math.max(-max_angle, math.min(max_angle, geometric_angle))
            
            local final_angle = geometric_angle + my_pitch
            local hud_position = -final_angle
            
            last_smoothed_angles[dash] = last_smoothed_angles[dash] or hud_position
            local smoothed_position = last_smoothed_angles[dash] * (1 - SMOOTHING_FACTOR) + hud_position * SMOOTHING_FACTOR
            last_smoothed_angles[dash] = smoothed_position
            
            dash_height:set(smoothed_position)
            
        elseif has_valid_terrain[dash] then
            local last_terrain = last_terrain_positions[dash]
            
            local dx = last_terrain.x - posx
            local dz = last_terrain.z - posz
            local distance = math.sqrt(dx * dx + dz * dz)
            
            if distance > MIN_DISTANCE then
                local height_diff = posy - last_terrain.y - 100
                
                local effective_distance = math.max(distance, MIN_DISTANCE)
                
                local geometric_angle = math.atan(height_diff / effective_distance)
                
                local max_angle = math.rad(60)
                geometric_angle = math.max(-max_angle, math.min(max_angle, geometric_angle))
                
                local final_angle = geometric_angle + my_pitch
                local hud_position = -final_angle
                
                last_smoothed_angles[dash] = last_smoothed_angles[dash] or hud_position
                local smoothed_position = last_smoothed_angles[dash] * (1 - SMOOTHING_FACTOR) + hud_position * SMOOTHING_FACTOR
                last_smoothed_angles[dash] = smoothed_position
                
                dash_height:set(smoothed_position)
            else
                dash_height:set(-1000)
            end
            
            local now_visible = Terrain.isVisible(posx, posy, posz, last_terrain.x, last_terrain.y, last_terrain.z)
            last_terrain_visible[dash] = now_visible
            
        else
            dash_height:set(-1000)
            last_smoothed_angles[dash] = -1000
        end
    end
end

function smooth_adjacent_lines(angles)
    local smoothed = {}
    local n = #angles
    
    for i = 1, n do
        local values = {}
        
        if i > 1 then table.insert(values, angles[i-1]) end
        table.insert(values, angles[i])
        if i < n then table.insert(values, angles[i+1]) end
        
        table.sort(values)
        smoothed[i] = values[math.ceil(#values/2)]
    end
    
    return smoothed
end

function reset_gcas_lines()
    for i = 0, total_gcas_lines - 1 do
        last_terrain_positions[i] = {x = 0, y = 0, z = 0}
        last_terrain_visible[i] = false
        has_valid_terrain[i] = false
        last_smoothed_angles[i] = 0
        local dash_height = get_param_handle("TF_D_"..i.."_H")
        dash_height:set(-1000)
    end
end

function math.sign(x)
    if x > 0 then return 1
    elseif x < 0 then return -1
    else return 0 end
end

need_to_be_closed = false

