

local counter_squad = 0
local counter_group = 0
local counter_unit = 0
local counter_point = 0

local function new_group_name()
    counter_group = counter_group + 1
    counter_unit = 0
    if counter_squad == 0 then
        return string.format("Fighter group %d",counter_group)
    else
        return string.format("Fighter_%d group %d",counter_squad, counter_group)
    end
end

local function new_unit_name()
    counter_unit = counter_unit + 1
    if counter_squad == 0 then
        return string.format("Fighter unit_t %d_%d",counter_group, counter_unit)
    else
        return string.format("Fighter_%d unit_t %d_%d",counter_squad, counter_group, counter_unit)
    end
end

local function new_point_name()
    counter_point = counter_point + 1
    return string.format("DictKey_WptName_%d",counter_point)
end

local function FighterSweepTask()
    return 
    {
	
	
		["id"] = "ComboTask",
        ["params"] = 
        {
            ["tasks"] = 
            {
                [1] = 
                {
                    ["enabled"] = true,
                    ["key"] = "FighterSweep",
                    ["id"] = "EngageTargets",
                    ["number"] = 1,
                    ["auto"] = true,
                    ["params"] = 
                    {
                        ["targetTypes"] = 
                        {
                            [1] = "Planes",
                        }, -- end of ["targetTypes"]
                        ["priority"] = 0,
                    }, -- end of ["params"]
                }, -- end of [1]
                [2] = 
                {
                    ["enabled"] = true,
                    ["auto"] = true,
                    ["id"] = "WrappedAction",
                    ["number"] = 2,
                    ["params"] = 
                    {
                        ["action"] = 
                        {
                            ["id"] = "Option",
                            ["params"] = 
                            {
                                ["value"] = true,
                                ["name"] = 17,
                            }, -- end of ["params"]
                        }, -- end of ["action"]
                    }, -- end of ["params"]
                }, -- end of [2]
                [3] = 
                {
                    ["enabled"] = true,
                    ["auto"] = true,
                    ["id"] = "WrappedAction",
                    ["number"] = 3,
                    ["params"] = 
                    {
                        ["action"] = 
                        {
                            ["id"] = "Option",
                            ["params"] = 
                            {
                                ["value"] = 4,
                                ["name"] = 18,
                            }, -- end of ["params"]
                        }, -- end of ["action"]
                    }, -- end of ["params"]
                }, -- end of [3]
                [4] = 
                {
                    ["enabled"] = true,
                    ["auto"] = true,
                    ["id"] = "WrappedAction",
                    ["number"] = 4,
                    ["params"] = 
                    {
                        ["action"] = 
                        {
                            ["id"] = "Option",
                            ["params"] = 
                            {
                                ["value"] = true,
                                ["name"] = 19,
                            }, -- end of ["params"]
                        }, -- end of ["action"]
                    }, -- end of ["params"]
                }, -- end of [4]
                [5] = 
                {
                    ["enabled"] = true,
                    ["auto"] = true,
                    ["id"] = "WrappedAction",
                    ["number"] = 5,
                    ["params"] = 
                    {
                        ["action"] = 
                        {
                            ["id"] = "Option",
                            ["params"] = 
                            {
                                ["targetTypes"] = 
                                {
                                }, -- end of ["targetTypes"]
                                ["name"] = 21,
                                ["value"] = "none;",
                                ["noTargetTypes"] = 
                                {
                                    [1] = "Fighters",
                                    [2] = "Multirole fighters",
                                    [3] = "Bombers",
                                    [4] = "Helicopters",
                                    [5] = "UAVs",
                                    [6] = "Infantry",
                                    [7] = "Fortifications",
                                    [8] = "Tanks",
                                    [9] = "IFV",
                                    [10] = "APC",
                                    [11] = "Artillery",
                                    [12] = "Unarmed vehicles",
                                    [13] = "AAA",
                                    [14] = "SR SAM",
                                    [15] = "MR SAM",
                                    [16] = "LR SAM",
                                    [17] = "Aircraft Carriers",
                                    [18] = "Cruisers",
                                    [19] = "Destroyers",
                                    [20] = "Frigates",
                                    [21] = "Corvettes",
                                    [22] = "Light armed ships",
                                    [23] = "Unarmed ships",
                                    [24] = "Submarines",
                                    [25] = "Cruise missiles",
                                    [26] = "Antiship Missiles",
                                    [27] = "AA Missiles",
                                    [28] = "AG Missiles",
                                    [29] = "SA Missiles",
                                }, -- end of ["noTargetTypes"]
                            }, -- end of ["params"]
                        }, -- end of ["action"]
                    }, -- end of ["params"]
                }, -- end of [5]
                [6] = 
                {
                    ["enabled"] = true,
                    ["auto"] = true,
                    ["id"] = "WrappedAction",
                    ["number"] = 6,
                    ["params"] = 
                    {
                        ["action"] = 
                        {
                            ["id"] = "EPLRS",
                            ["params"] = 
                            {
                                ["value"] = true,
                                ["groupId"] = 1,
                            }, -- end of ["params"]
                        }, -- end of ["action"]
                    }, -- end of ["params"]
                }, -- end of [6]
            }, -- end of ["tasks"]
		}, -- end of ["params"]

    }
end

local function PointTask(x_,y_,z_,type,speed, action, task)--speed [km/h]

    local pos = {x = x_, y = y_, z = z_}
    local terra_height = 0--Disposition.getPointHeight(pos)

    local speed_mc = speed/3.6

    if action == nil then
        action = "Turning Point"
    end

    if type == nil then
        type = "Turning Point"
    end

    if task == nil then
        task = 
        {
            ["id"] = "ComboTask",
            ["params"] = 
            {
                ["tasks"] = 
                {
                }, -- end of ["tasks"]
            }, -- end of ["params"]
        }
    end

    return 
    {
        ["type"] = type,
        ["name"] = new_point_name(),
        ["x"] = pos.x,
        ["y"] = pos.z,
        ["alt"] = pos.y + terra_height,
        ["alt_type"] = "BARO",
        ["speed"] = speed_mc,
        ["action"] = action,
        ["task"] = task,
        ["ETA"] = 0,
        ["ETA_locked"] = false,
        ["speed_locked"] = true,
        ["formation_template"] = "",
    }
    
end

local function pointShiftAngleDeg(start_pos, length, course)--prop [-180..180]
    return
    {
        x = start_pos.x + math.cos(math.rad(course)) * length,
        y = start_pos.y,
        z = start_pos.z - math.sin(math.rad(course)) * length
    }
end

local function pointShiftAngleRad(start_pos, length, course)--prop [-pi..pi]
    return
    {
        x = start_pos.x + math.cos(course) * length,
        y = start_pos.y,
        z = start_pos.z - math.sin(course) * length
    }
end

local function pointShiftProp(start_pos, end_pos, prop)--prop [0..1]
    return 
    {
        x = start_pos.x + prop*(end_pos.x - start_pos.x), 
        y = start_pos.y + prop*(end_pos.y - start_pos.y),
        z = start_pos.z + prop*(end_pos.z - start_pos.z) 
    }
end

local function pointShiftAbs(start_pos, end_pos, shift)--shift [m]
    local vector = {
        x = end_pos.x - start_pos.x, 
        y = end_pos.y - start_pos.y,
        z = end_pos.z - start_pos.z 
       }

    local dist = math.sqrt(vector.x*vector.x + vector.y*vector.y + vector.z*vector.z);

    vector.x = start_pos.x + shift * vector.x / dist
    vector.y = start_pos.y + shift * vector.y / dist
    vector.z = start_pos.z + shift * vector.z / dist
    return vector
end

local function pointCourseRad(start_pos, end_pos)--return [radians]
    local vector_xz = {
        x = end_pos.x - start_pos.x, 
        z = end_pos.z - start_pos.z 
       }

    local course = 0
    if vector_xz.x < 0.01 or vector_xz.x < -0.01 then
        if  vector_xz.z > 0 then
            course = - 0.5 * math.pi
        else
            course =   0.5 * math.pi
        end
    else
        course = math.atan2(-vector_xz.z, vector_xz.x)
    end

    return course
end

local function pointCourseDeg(start_pos, end_pos)--return [degris]
    
    local course = pointCourseRad(start_pos, end_pos)
    return math.deg(course)
end

local function rotateCourseRad(course, angle)--course[radians] angle[radians] return [radians]
    local new_course = math.fmod(course,math.pi) + angle
    if new_course > math.pi then
        new_course = 2 * math.pi - new_course
    elseif new_course < -math.pi then
        new_course = 2 * math.pi + new_course
    end

    return new_course
end

local function addTriggerDeactivateInZone(diactivate_obj, zone_obj)

    if diactivate_obj == nil or zone_obj == nil then
        return nil
    end

    return
    {
        ["actions"] = string.format("a_deactivate_group(%d);", diactivate_obj),
        ["func"] = "if mission.trig.conditions[*]() then if not mission.trig.flag[*] then mission.trig.actions[*](); mission.trig.flag[*] = true;end; else mission.trig.flag[*] = false; end;",
        ["flag"] = true,
        ["conditions"] = string.format("return(c_part_of_group_in_zone(%d, %d) )", diactivate_obj, zone_obj),
    }
end

local function addPlaneRoutePointsByAirbase(airbase_name_start, airbase_name_target)
    
    local airbase =  Airbase.getByName(airbase_name_target)
    local airbase_target_pos = Object.getPosition(airbase).p

    local airbase_start_pos = {}
    if airbase_name_start == nil or airbase_name_start == "" then
        airbase_start_pos = pointShiftAngleDeg(airbase_target_pos, 50000, 0)
    else
        local airbase_start =  Airbase.getByName(airbase_name_start)
        airbase_start_pos = Object.getPosition(airbase_start).p
    end

    local course_to_target = pointCourseRad(airbase_start_pos,airbase_target_pos)
	local course_from_target = pointCourseRad(airbase_target_pos,airbase_start_pos)
    
	local shift = math.random(3000, 5000)
	local d_course = 0.25 * math.random() * math.pi
	if math.random() > 0.5 then
		d_course = -1 * d_course
	end
	local height = math.random(3000, 6000)

	
    local point_start = pointShiftAngleRad(airbase_start_pos, shift, course_to_target + d_course)

    local point_end = pointShiftAngleRad(airbase_target_pos, shift, course_from_target - d_course)

    local PN = 0
    local function point_num(b_current)
        if PN == 0 or b_current == nil or b_current == false then
            PN = PN + 1
        end
        return PN
    end

    local points =
    {
        [point_num()] = PointTask(point_start.x,height,point_start.z,nil,800,nil,FighterSweepTask()),
        [point_num()] = PointTask(point_end.x,height,point_end.z,nil,800),
    }
    
    points[1]["psi"] = course_to_target

    return points, point_num(true)
end

local function addPlaneRoutePoints(start_point, course, dist)
    
    
    local point_end = pointShiftAngleRad(start_point, dist, course)

    local PN = 0
    local function point_num(b_current)
        if PN == 0 or b_current == nil or b_current == false then
            PN = PN + 1
        end
        return PN
    end


    local points =
    {
        [point_num()] = PointTask(start_point.x,start_point.y,start_point.z,nil,800,nil,FighterSweepTask()),
        [point_num()] = PointTask(point_end.x,point_end.y,point_end.z,nil,800),
    }
    
    points[1]["psi"] = course

    return points, point_num(true)
end

local function planeGroupFirst(points, unit_skill)
    counter_squad = counter_squad + 1
    return
    {
        ["modulation"] = 0,
        ["tasks"] = 
        {
        }, -- end of ["tasks"]
        ["radioSet"] = false,
        ["task"] = "Fighter Sweep",
        ["uncontrolled"] = false,
        ["taskSelected"] = true,
        ["route"] = 
        {
            ["points"] = points,
        }, -- end of ["route"]
        ["hidden"] = false,
        ["units"] = 
        {
            [1] = 
            {
                ["alt"] = points[1].alt,
                ["hardpoint_racks"] = true,
                ["alt_type"] = "BARO",
                ["skill"] = unit_skill,
                ["speed"] = points[1].speed,
                ["AddPropAircraft"] = 
                {
                    ["STN_L16"] = "00202",
                    ["VoiceCallsignNumber"] = "11",
                    ["VoiceCallsignLabel"] = "ED",
                }, -- end of ["AddPropAircraft"]
                ["type"] = "F/A-18C",
                ["unitId"] = 2,
                ["psi"] = points[1].psi,
                ["onboard_num"] = "010",
                ["y"] = points[1].y,
                ["x"] = points[1].x,
                ["name"] = new_unit_name(),
                ["payload"] = 
                {
                    ["pylons"] = 
                    {
                        [1] = 
                        {
                            ["CLSID"] = "{6CEB49FC-DED8-4DED-B053-E1F033FF72D3}",
                        }, -- end of [1]
                        [2] = 
                        {
                            ["CLSID"] = "LAU-115_2*LAU-127_AIM-9M",
                        }, -- end of [2]
                        [3] = 
                        {
                            ["CLSID"] = "{C8E06185-7CD6-4C90-959F-044679E90751}",
                        }, -- end of [3]
                        [4] = 
                        {
                            ["CLSID"] = "{C8E06185-7CD6-4C90-959F-044679E90751}",
                        }, -- end of [4]
                        [6] = 
                        {
                            ["CLSID"] = "{C8E06185-7CD6-4C90-959F-044679E90751}",
                        }, -- end of [6]
                        [7] = 
                        {
                            ["CLSID"] = "{C8E06185-7CD6-4C90-959F-044679E90751}",
                        }, -- end of [7]
                        [8] = 
                        {
                            ["CLSID"] = "LAU-115_2*LAU-127_AIM-9M",
                        }, -- end of [8]
                        [9] = 
                        {
                            ["CLSID"] = "{6CEB49FC-DED8-4DED-B053-E1F033FF72D3}",
                        }, -- end of [9]
                    }, -- end of ["pylons"]
                    ["fuel"] = 4900,
                    ["flare"] = 15,
                    ["chaff"] = 30,
                    ["gun"] = 100,
                }, -- end of ["payload"]
                ["heading"] = points[1].psi,
                ["callsign"] = 
                {
                    [1] = 1,
                    [2] = 1,
                    ["name"] = "Enfield11",
                    [3] = 1,
                }, -- end of ["callsign"]
            }, -- end of [1]
        }, -- end of ["units"]
        ["y"] = points[1].y,
        ["x"] = points[1].x,
        ["name"] = new_group_name(),
        ["communication"] = true,
        ["start_time"] = 0,
        ["uncontrollable"] = false,
        ["frequency"] = 305,
    }
end

function AirFighterGroups(squad_name, group_country, airbase_name_start, airbase_name, unit_skill)
    if squad_name ~= nil then
        counter_squad = squad_name
    end

    if airbase_name_start == nil or airbase_name == nil then
        return
    end

    local plane_points, count_points = addPlaneRoutePointsByAirbase(airbase_name_start,airbase_name)
    local plane_1 = coalition.addGroup(group_country, Group.Category.AIRPLANE, planeGroupFirst(plane_points, unit_skill))

    return plane_1:getID()
end

function AirFighterGroupsPoint(squad_name, group_country, x,y, alt, course, dist, unit_skill)
    if squad_name ~= nil then
        counter_squad = squad_name
    end

	local point = {x = x, y = alt, z = y}

    local plane_points, count_points = addPlaneRoutePoints(point,course, dist)
    local plane_1 = coalition.addGroup(group_country, Group.Category.AIRPLANE, planeGroupFirst(plane_points, unit_skill))

    return plane_1:getID()
end

--groups_mission_id = AirFighterGroups(201,country.id.RUSSIA, "Senaki-Kolkhi", "Kutaisi", "Good")

--country.id.RUSSIA
--country.id.USA