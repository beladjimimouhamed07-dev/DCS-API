----------------------------------------------------------------
-- RAFALE MFD MOD DEVICE
----------------------------------------------------------------

dofile(LockOn_Options.script_path .. "devices.lua")
dofile(LockOn_Options.script_path .. "command_defs.lua")

dev = GetSelf()

DEBUG_ACTIVE = false

modpath = LockOn_Options.script_path .. "MFD/"

local update_time_step = 0.01666666

make_default_activity(update_time_step)

MFD_SCALE = 1


----------------------------------------------------------------
-- LIBRARIES
----------------------------------------------------------------

lfs = require("lfs")
Terrain = require("terrain")


----------------------------------------------------------------
-- COMMON
----------------------------------------------------------------

dofile(
    LockOn_Options.script_path ..
    "avionics/debug.lua"
)

dofile(
    LockOn_Options.script_path ..
    "avionics/transfer_parameters.lua"
)


----------------------------------------------------------------
-- CURSOR
----------------------------------------------------------------

mm_cursor = {

    h_lr = get_param_handle("MM_CURSOR_LR"),
    h_ud = get_param_handle("MM_CURSOR_UD"),

    pos_lr = 0,
    pos_ud = 0,

    steps = 0.01,

    rate_lr = 0,
    rate_ud = 0,

    active_btn = 0,
}


----------------------------------------------------------------
-- MFD STATE
----------------------------------------------------------------

mm_mfd_SOI = 50 / 255

mm_mfd_SOI_param =
    get_param_handle("MM_MFD_SOI")

mm_mfd_SOI_param:set(mm_mfd_SOI)


mm_mfd_btn_cursor_clicked = 0
mm_mfd_btn_key_clicked = 0

mm_mfd_btn_enter = 0
mm_mfd_btn_cancel = 0

mm_mfd_cursor_mode = "normal"


----------------------------------------------------------------
-- BUTTONS
----------------------------------------------------------------

dofile(
    modpath .. "sub/avMFD_MOD_btn.lua"
)


----------------------------------------------------------------
-- PAGES
----------------------------------------------------------------

mm_mfd_cur_page = ""

dofile(modpath.."avMFD_MOD_init_pages.lua")

dofile(modpath.."avMFD_MOD_page_root.lua")
dofile(modpath.."avMFD_MOD_page_btn.lua")
dofile(modpath.."avMFD_MOD_page_bmap.lua")
dofile(modpath.."avMFD_MOD_page_eng.lua")
dofile(modpath.."avMFD_MOD_page_rbe2.lua")
dofile(modpath.."avMFD_MOD_page_tac.lua")


----------------------------------------------------------------
-- SUPPORT
----------------------------------------------------------------

dofile(
    modpath .. "avMFD_MOD_sup_func.lua"
)

dofile(
    modpath .. "sub/avMFD_MOD_nav_obj.lua"
)

dofile(
    modpath .. "sub/avMFD_MOD_wpts.lua"
)

dofile(
    modpath .. "sub/avMFD_MOD_functions.lua"
)


----------------------------------------------------------------
-- BMAP
----------------------------------------------------------------

mm_bmap_scale = 10000
mm_bmap_range = 5

mm_bmap_range_text =
    mm_bmap_range .. " km"


----------------------------------------------------------------
-- POST INITIALIZE
----------------------------------------------------------------

function post_initialize()

    print_message_to_user(
        "Post init avMFD_MOD_init.lua"
    )

    ------------------------------------------------------------
    -- IMPORTANT:
    -- use the symbolic device ID.
    ------------------------------------------------------------

    mdfmodDevice =
        GetDevice(devices.MFD_MOD)


    root_open_directory()

    bmap_open_directory()

    load_wpts_from_mission()
    
end


----------------------------------------------------------------
-- SET COMMAND
----------------------------------------------------------------

function SetCommand(command, value)

    ------------------------------------------------------------
    -- RBE2
    ------------------------------------------------------------

    if rbe2_commands and value == 1 then

        local c = nil

        if command == rbe2_commands.VTM_TOGGLE then

            if mm_mfd_cur_page == "RBE2" then
                root_open_directory()
            else
                rbe2_open_directory()
            end

            return

        elseif command == rbe2_commands.MODE_RWS then
            c = 1

        elseif command == rbe2_commands.MODE_TWS then
            c = 2

        elseif command == rbe2_commands.MODE_STT then
            c = 3

        elseif command == rbe2_commands.MODE_GMT then
            c = 4

        elseif command == rbe2_commands.MODE_SAR then
            c = 5

        elseif command == rbe2_commands.RANGE_UP then
            c = 6

        elseif command == rbe2_commands.RANGE_DOWN then
            c = 7

        elseif command == rbe2_commands.TDC_UP then
            c = 8

        elseif command == rbe2_commands.TDC_RIGHT then
            c = 9

        elseif command == rbe2_commands.TDC_DOWN then
            c = 10

        elseif command == rbe2_commands.TDC_LEFT then
            c = 11

        elseif command == rbe2_commands.TARGET_LOCK then
            c = 12

        elseif command == rbe2_commands.TARGET_UNLOCK then
            c = 13

        elseif command == rbe2_commands.TARGET_NEXT then
            c = 14

        elseif command == rbe2_commands.TARGET_PREV then
            c = 15
        end

        if c then

            get_param_handle(
                "RBE2_COMMAND"
            ):set(c)

            return
        end
    end


    ------------------------------------------------------------
    -- VTM COMMANDS
    --
    -- 3001 = UP
    -- 3002 = RIGHT
    -- 3003 = DOWN
    -- 3004 = LEFT
    -- 3005 = ENTER
    -- 3006 = CANCEL
    ------------------------------------------------------------

    if command >= 3001 and command <= 3006 then

        local command_btn =
            command - 3000


        --------------------------------------------------------
        -- NORMAL / LIST PREP
        --------------------------------------------------------

        if mm_mfd_cursor_mode == "normal"
        or mm_mfd_cursor_mode == "list_prep" then

            ----------------------------------------------------
            -- CURSOR
            ----------------------------------------------------

            if command_btn == 1 then

                if value == 1 then
                    mm_cursor.rate_ud =
                        mm_cursor.steps
                else
                    mm_cursor.rate_ud = 0
                end

            elseif command_btn == 2 then

                if value == 1 then
                    mm_cursor.rate_lr =
                        mm_cursor.steps
                else
                    mm_cursor.rate_lr = 0
                end

            elseif command_btn == 3 then

                if value == 1 then
                    mm_cursor.rate_ud =
                        -mm_cursor.steps
                else
                    mm_cursor.rate_ud = 0
                end

            elseif command_btn == 4 then

                if value == 1 then
                    mm_cursor.rate_lr =
                        -mm_cursor.steps
                else
                    mm_cursor.rate_lr = 0
                end

            end


            ----------------------------------------------------
            -- ENTER
            ----------------------------------------------------

            if command_btn == 5 then

                if value == 1 then

                    mm_mfd_btn_enter = 1

                else

                    mm_mfd_btn_enter = 0

                    if mm_mfd_cursor_mode == "list_prep" then
                        mm_mfd_cursor_mode = "list"
                    end

                end
            end


            ----------------------------------------------------
            -- CANCEL
            ----------------------------------------------------

            if command_btn == 6 then

                if value == 1 then
                    mm_mfd_btn_cancel = 1
                else
                    mm_mfd_btn_cancel = 0
                end

            end


        --------------------------------------------------------
        -- LIST MODE
        --------------------------------------------------------

        elseif mm_mfd_cursor_mode == "list" then

            if command_btn == 1 and value == 0 then

                mm_move_list("up")

            elseif command_btn == 2 and value == 0 then

                -- RIGHT

            elseif command_btn == 3 and value == 0 then

                mm_move_list("down")

            elseif command_btn == 4 and value == 0 then

                -- LEFT

            elseif command_btn == 5 and value == 0 then

                mm_move_list("enter")

            elseif command_btn == 6 and value == 0 then

                mm_move_list("cancel")

            end

        end

        return
    end

end


----------------------------------------------------------------
-- UPDATE
----------------------------------------------------------------

function update()

    func_update_sensordata()

    mm_move_cursor()

    mm_update_wpt()

end