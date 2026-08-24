local dev = GetSelf()
make_default_activity(0.02)

perfomance = {
    roll_compensation_limits = {math.rad(-180), math.rad(180)},
    pitch_compensation_limits = {math.rad(-60), math.rad(60)},
    tracking_azimuth = {math.rad(-60), math.rad(60)},
    tracking_elevation = {math.rad(-10), math.rad(10)},
    scan_volume_azimuth = math.rad(120),
    scan_volume_elevation = math.rad(10),
    scan_beam = math.rad(5),
    max_available_distance = 200000,
    scan_speed = math.rad(120),
    dead_zone = 1.0,
    ground_clutter = {
        sea={0,0,0}, land={0,0,0}, artificial={0,0,0},
        rays_density=0.01, max_distance=18520
    }
}

local cmd = get_param_handle("RBE2_COMMAND")
local mode = get_param_handle("RBE2_MODE")
local range = get_param_handle("RBE2_RANGE")
local tdc_az = get_param_handle("RBE2_TDC_AZ")
local tdc_el = get_param_handle("RBE2_TDC_EL")
local designated = get_param_handle("RBE2_DESIGNATED")
local radar_tdc_az = get_param_handle("RADAR_TDC_AZIMUTH")
local radar_tdc_range = get_param_handle("RADAR_TDC_RANGE")

local tracks={}
for i=1,16 do
    local id=string.format("%02d",i)
    tracks[i]={
        az=get_param_handle("RBE2_TRACK_"..id.."_AZ"),
        el=get_param_handle("RBE2_TRACK_"..id.."_EL"),
        range=get_param_handle("RBE2_TRACK_"..id.."_RANGE"),
        x=get_param_handle("RBE2_TRACK_"..id.."_X"),
        y=get_param_handle("RBE2_TRACK_"..id.."_Y"),
        vis=get_param_handle("RBE2_TRACK_"..id.."_VIS"),
        state=get_param_handle("RBE2_TRACK_"..id.."_STATE"),
        friendly=get_param_handle("RBE2_TRACK_"..id.."_FRIENDLY"),
        rvel=get_param_handle("RBE2_TRACK_"..id.."_RVEL")
    }
end

function post_initialize()
    mode:set(1)
    range:set(80)
    tdc_az:set(0)
    tdc_el:set(0)
    designated:set(0)
    radar_tdc_az:set(0)
    radar_tdc_range:set(80*1852)
    pcall(function() dev:set_power(true) end)
end

local function clamp(v,a,b)
    if v<a then return a elseif v>b then return b else return v end
end

local last_cmd=0
function update()
    local c=cmd:get()
    if c~=last_cmd and c>0 then
        if c<=5 then
            mode:set(c)
        elseif c==6 then
            range:set(clamp(range:get()*2,10,160))
        elseif c==7 then
            range:set(clamp(range:get()/2,5,80))
        elseif c==8 then
            tdc_el:set(clamp(tdc_el:get()+0.025,-1,1))
        elseif c==9 then
            tdc_az:set(clamp(tdc_az:get()+0.025,-1,1))
        elseif c==10 then
            tdc_el:set(clamp(tdc_el:get()-0.025,-1,1))
        elseif c==11 then
            tdc_az:set(clamp(tdc_az:get()-0.025,-1,1))
        elseif c==12 then
            pcall(function() dispatch_action(nil,509) end)
            designated:set(1)
        elseif c==13 then
            pcall(function() dispatch_action(nil,384) end)
            designated:set(0)
        end
        last_cmd=c
        cmd:set(0)
    end

    radar_tdc_az:set(tdc_az:get()*math.rad(60))
    radar_tdc_range:set(range:get()*1852)

    local maxr=range:get()*1852
    local n=0
    for i=1,16 do
        local base=string.format("RADAR_CONTACT_%02d_",i)
        local rr=get_param_handle(base.."RANGE"):get()
        if rr and rr>0 and rr<=maxr then
            n=n+1
            if n<=16 then
                local az=get_param_handle(base.."AZIMUTH"):get()
                local el=get_param_handle(base.."ELEVATION"):get()
                local tr=tracks[n]
                tr.az:set(az); tr.el:set(el); tr.range:set(rr)
                tr.x:set(math.sin(az)*(rr/maxr))
                tr.y:set(math.cos(az)*(rr/maxr))
                tr.vis:set(1)
                tr.state:set(mode:get()==2 and 2 or 1)
                tr.friendly:set(get_param_handle(base.."FRIENDLY"):get())
                tr.rvel:set(0)
            end
        end
    end
    if n>16 then n=16 end
    for i=n+1,16 do tracks[i].vis:set(0) end
end
