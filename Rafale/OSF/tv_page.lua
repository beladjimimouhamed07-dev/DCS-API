----------------------------------------------------------------
-- Camera page. World image comes from avTVSensor::fill_camera.
-- Keep a full-frame quad so the indicator has a surface.
----------------------------------------------------------------

dofile(LockOn_Options.common_script_path .. "elements_defs.lua")

local size = 1

local frame = CreateElement "ceMeshPoly"
frame.name = "osf_tv_frame"
frame.primitivetype = "triangles"
frame.vertices = {
    { -size,  size },
    {  size,  size },
    {  size, -size },
    { -size, -size },
}
frame.indices = { 0, 1, 2, 0, 2, 3 }
frame.material = MakeMaterial(nil, { 0, 0, 0, 0 })
frame.isvisible = false
Add(frame)
