function osf_open_directory()

    clean_directory()

    mm_mfd_btn[6].text.text = "TV"
    mm_mfd_btn[6].func_short = function()
        get_param_handle("OSF_MODE"):set(2)
        pcall(function()
            GetDevice(devices.RAFALE_SYSTEMS):SetCommand(osf_commands.TV, 1)
        end)
    end

    mm_mfd_btn[7].text.text = "FLIR"
    mm_mfd_btn[7].func_short = function()
        get_param_handle("OSF_MODE"):set(1)
        pcall(function()
            GetDevice(devices.RAFALE_SYSTEMS):SetCommand(osf_commands.FLIR, 1)
        end)
    end

    mm_mfd_btn[8].text.text = "ZOOM+"
    mm_mfd_btn[8].func_short = function()
        pcall(function()
            GetDevice(devices.RAFALE_SYSTEMS):SetCommand(osf_commands.ZOOM_IN, 1)
        end)
    end

    mm_mfd_btn[9].text.text = "ZOOM-"
    mm_mfd_btn[9].func_short = function()
        pcall(function()
            GetDevice(devices.RAFALE_SYSTEMS):SetCommand(osf_commands.ZOOM_OUT, 1)
        end)
    end

    mm_mfd_btn[10].text.text = "OSF"
    mm_mfd_btn[10].text.status = 1
    mm_mfd_btn[10].func_short = nothing

    mm_mfd_cur_page = "OSF"
    mm_mfd_pagedata.osf_page_handle:set(1)

    mm_mfd_SOI = 30 / 255
    mm_mfd_SOI_param:set(mm_mfd_SOI)

    manage_directorys()

end
