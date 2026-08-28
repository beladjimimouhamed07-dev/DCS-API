dofile(LockOn_Options.script_path .. "MFD/pages/ccMFD_MOD_definitions.lua")

local function show(o)
    o.element_params = o.element_params or {}
    table.insert(o.element_params, "MM_MFD_PAGE_OSF")
    o.controllers = o.controllers or {}
    table.insert(o.controllers, { "parameter_in_range", #o.element_params - 1, 0.5, 1.5 })
    o.parent_element = o.parent_element or "mfd_base"
    o.level = MDF_DEFAULT_LEVEL
    Add(o)
end

local x_size = MFD_SIZE * 0.74
local y_size = MFD_SIZE * 0.74

-- avTVSensor / ccIndicator camera image
local OSF_TV_MAT = MakeMaterial("render_target_1", { 255, 255, 255, 255 })

local video = CreateElement "ceTexPoly"
video.name = "osf_tv_video"
video.primitivetype = "triangles"
video.vertices = {
    { -x_size,  y_size },
    {  x_size,  y_size },
    {  x_size, -y_size },
    { -x_size, -y_size },
}
video.indices = { 0, 1, 2, 0, 2, 3 }
video.tex_coords = { { 0, 0 }, { 1, 0 }, { 1, 1 }, { 0, 1 } }
video.material = OSF_TV_MAT
video.h_clip_relation = h_clip_relations.COMPARE
show(video)

local title = CreateElement "ceStringPoly"
title.material = MFD_BTN_FONT
title.stringdefs = mfd_txt_head_stringdefs
title.alignment = "CenterCenter"
title.value = "OSF"
title.init_pos = { 0, 0.82 }
show(title)

local tv_lbl = CreateElement "ceStringPoly"
tv_lbl.material = MFD_BTN_FONT
tv_lbl.stringdefs = mfd_txt_box_stringdefs
tv_lbl.alignment = "LeftTop"
tv_lbl.value = "TV"
tv_lbl.init_pos = { -0.70, 0.68 }
tv_lbl.element_params = { "OSF_MODE", "MM_MFD_PAGE_OSF" }
tv_lbl.controllers = {
    { "parameter_in_range", 0, 1.5, 2.5 },
    { "parameter_in_range", 1, 0.5, 1.5 },
}
Add(tv_lbl)

local flir_lbl = CreateElement "ceStringPoly"
flir_lbl.material = MFD_BTN_FONT
flir_lbl.stringdefs = mfd_txt_box_stringdefs
flir_lbl.alignment = "LeftTop"
flir_lbl.value = "FLIR"
flir_lbl.init_pos = { -0.70, 0.68 }
flir_lbl.element_params = { "OSF_MODE", "MM_MFD_PAGE_OSF" }
flir_lbl.controllers = {
    { "parameter_in_range", 0, 0.5, 1.5 },
    { "parameter_in_range", 1, 0.5, 1.5 },
}
Add(flir_lbl)

local dll_lbl = CreateElement "ceStringPoly"
dll_lbl.material = MFD_BTN_FONT
dll_lbl.stringdefs = mfd_txt_box_stringdefs
dll_lbl.alignment = "RightTop"
dll_lbl.value = "SYS"
dll_lbl.init_pos = { 0.70, 0.68 }
dll_lbl.element_params = { "OSF_DLL_OK", "MM_MFD_PAGE_OSF" }
dll_lbl.controllers = {
    { "parameter_in_range", 0, 0.5, 1.5 },
    { "parameter_in_range", 1, 0.5, 1.5 },
}
Add(dll_lbl)

local reticle = CreateElement "ceMeshPoly"
reticle.primitivetype = "lines"
reticle.vertices = {
    { -0.04, 0 }, { 0.04, 0 },
    { 0, -0.04 }, { 0, 0.04 },
}
reticle.indices = { 0, 1, 2, 3 }
reticle.material = MFCD_GREEN
show(reticle)
