----------------------------------------------------------------
-- OSF TV / FLIR camera indicator
-- Linked to avTVSensor. Drawn into a render target for the MFD.
----------------------------------------------------------------

dofile(LockOn_Options.common_script_path .. "devices_defs.lua")
dofile(LockOn_Options.common_script_path .. "ViewportHandling.lua")

if indicator_types.TV ~= nil then
    indicator_type = indicator_types.TV
else
    indicator_type = indicator_types.COMMON
end

purposes = {
    render_purpose.GENERAL,
}

init_pageID = 1

page_subsets = {
    [1] = LockOn_Options.script_path .. "OSF/tv_page.lua",
}

pages = {
    [1] = { 1 },
}

-- Keep feeding render_target_* even without a cockpit connector.
render_target_always = true

try_find_assigned_viewport("OSF_TV")
