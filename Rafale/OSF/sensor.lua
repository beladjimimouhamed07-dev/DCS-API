----------------------------------------------------------------
-- OSF / avTVSensor
-- DCS constructs cockpit::avTVSensor from this creator script.
----------------------------------------------------------------

dofile(LockOn_Options.script_path .. "devices.lua")

local dev = GetSelf()
make_default_activity(0.05)

-- Geometry used by avTVSensor::fill_camera when the TV indicator draws.
default_search_distance = 25000

tracking_azimuth   = { math.rad(-120), math.rad(120) }
tracking_elevation = { math.rad(-30),  math.rad(60) }

zoom = {
    math.rad(24),
    math.rad(12),
    math.rad(3),
}

function post_initialize()
    pcall(function()
        if dev.set_power then
            dev:set_power(true)
        end
    end)
end

function update()
end

need_to_be_closed = false
