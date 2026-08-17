local dev=GetSelf()
make_default_activity(0.05)
function post_initialize()
    pcall(function() dev:AC_Generator_1_on(true) end)
    pcall(function() dev:AC_Generator_2_on(true) end)
    pcall(function() dev:DC_Battery_on(true) end)
end
function update() end
