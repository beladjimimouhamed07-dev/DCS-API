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

dofile(
    modpath .. "avMFD_MOD_init_pages.lua"
)

dofile(
    modpath .. "avMFD_MOD_page_root.lua"
)

dofile(
    modpath .. "avMFD_MOD_page_btn.lua"
)

dofile(
    modpath .. "avMFD_MOD_page_bmap.lua"
)

dofile(
    modpath .. "avMFD_MOD_page_eng.lua"
)

dofile(
    modpath .. "avMFD_MOD_page_rbe2.lua"
)

dofile(
    modpath .. "avMFD_MOD_page_tac.lua"
)


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
-- TAC
-- CAUCASUS MOVING MAP TEST
--
-- Carte fixe.
-- Une seule tuile visible.
-- La croix représente l'avion.
----------------------------------------------------------------

TAC_MAP_VALID =
    get_param_handle(
        "TAC_MAP_VALID"
    )

TAC_MAP_TILE =
    get_param_handle(
        "TAC_MAP_TILE"
    )

TAC_MAP_AIRCRAFT_X =
    get_param_handle(
        "TAC_MAP_AIRCRAFT_X"
    )

TAC_MAP_AIRCRAFT_Y =
    get_param_handle(
        "TAC_MAP_AIRCRAFT_Y"
    )


----------------------------------------------------------------
-- INITIAL VALUES
----------------------------------------------------------------

TAC_MAP_VALID:set(0)

TAC_MAP_TILE:set(0)

TAC_MAP_AIRCRAFT_X:set(0)

TAC_MAP_AIRCRAFT_Y:set(0)


----------------------------------------------------------------
-- CAUCASUS GEOREFERENCE
--
-- ORIGINAL IMAGE
--
-- 27771 x 16868 pixels
----------------------------------------------------------------

local TAC_NW_LAT =
    45.475047273277355

local TAC_NW_LON =
    34.92934725058618


local TAC_NE_LAT =
    45.01783390996292

local TAC_NE_LON =
    46.5736598541507


local TAC_SW_LAT =
    40.93773261091714

local TAC_SW_LON =
    34.81578621343812


local TAC_SE_LAT =
    40.29948360353398

local TAC_SE_LON =
    45.43927621063355


----------------------------------------------------------------
-- ORIGINAL MAP SIZE
----------------------------------------------------------------

local TAC_MAP_PIXEL_WIDTH =
    27771.0

local TAC_MAP_PIXEL_HEIGHT =
    16868.0


----------------------------------------------------------------
-- TILE SIZE
----------------------------------------------------------------

local TAC_TILE_SIZE =
    4096.0


----------------------------------------------------------------
-- TILE GRID
----------------------------------------------------------------

local TAC_TILE_COLUMNS =
    7

local TAC_TILE_ROWS =
    5


----------------------------------------------------------------
-- CLAMP
----------------------------------------------------------------

local function tac_clamp(
    value,
    minimum,
    maximum
)

    if value < minimum then
        return minimum
    end

    if value > maximum then
        return maximum
    end

    return value

end


----------------------------------------------------------------
-- GEO -> ORIGINAL MAP PIXELS
--
-- Retourne :
--
-- pixel_x
-- pixel_y
----------------------------------------------------------------

local function tac_geo_to_pixels(
    lat,
    lon
)

    ------------------------------------------------------------
    -- Horizontal interpolation on north edge
    ------------------------------------------------------------

    local north_u =
        (
            lon -
            TAC_NW_LON
        )
        /
        (
            TAC_NE_LON -
            TAC_NW_LON
        )


    ------------------------------------------------------------
    -- Horizontal interpolation on south edge
    ------------------------------------------------------------

    local south_u =
        (
            lon -
            TAC_SW_LON
        )
        /
        (
            TAC_SE_LON -
            TAC_SW_LON
        )


    ------------------------------------------------------------
    -- Average horizontal position
    ------------------------------------------------------------

    local u =
        (
            north_u +
            south_u
        ) * 0.5


    ------------------------------------------------------------
    -- Latitude of north border at longitude
    ------------------------------------------------------------

    local north_lat =
        TAC_NW_LAT +
        (
            TAC_NE_LAT -
            TAC_NW_LAT
        )
        *
        north_u


    ------------------------------------------------------------
    -- Latitude of south border at longitude
    ------------------------------------------------------------

    local south_lat =
        TAC_SW_LAT +
        (
            TAC_SE_LAT -
            TAC_SW_LAT
        )
        *
        south_u


    ------------------------------------------------------------
    -- Vertical interpolation
    ------------------------------------------------------------

    local v =
        (
            north_lat -
            lat
        )
        /
        (
            north_lat -
            south_lat
        )


    ------------------------------------------------------------
    -- Clamp
    ------------------------------------------------------------

    u =
        tac_clamp(
            u,
            0.0,
            1.0
        )

    v =
        tac_clamp(
            v,
            0.0,
            1.0
        )


    ------------------------------------------------------------
    -- Pixel coordinates
    ------------------------------------------------------------

    local pixel_x =
        u *
        TAC_MAP_PIXEL_WIDTH


    local pixel_y =
        v *
        TAC_MAP_PIXEL_HEIGHT


    return
        pixel_x,
        pixel_y

end


----------------------------------------------------------------
-- TILE NUMBER
----------------------------------------------------------------

local function tac_get_tile_from_pixels(
    pixel_x,
    pixel_y
)

    local col =
        math.floor(
            pixel_x /
            TAC_TILE_SIZE
        )


    local row =
        math.floor(
            pixel_y /
            TAC_TILE_SIZE
        )


    ------------------------------------------------------------
    -- Safety
    ------------------------------------------------------------

    col =
        math.max(
            0,
            math.min(
                TAC_TILE_COLUMNS - 1,
                col
            )
        )


    row =
        math.max(
            0,
            math.min(
                TAC_TILE_ROWS - 1,
                row
            )
        )


    ------------------------------------------------------------
    -- 01..35
    ------------------------------------------------------------

    return
        row * TAC_TILE_COLUMNS +
        col +
        1

end


----------------------------------------------------------------
-- AIRCRAFT POSITION INSIDE TILE
----------------------------------------------------------------

local function update_tac_aircraft_position(
    pixel_x,
    pixel_y
)

    ------------------------------------------------------------
    -- TILE COLUMN / ROW
    ------------------------------------------------------------

    local col =
        math.floor(
            pixel_x /
            TAC_TILE_SIZE
        )


    local row =
        math.floor(
            pixel_y /
            TAC_TILE_SIZE
        )


    ------------------------------------------------------------
    -- CLAMP
    ------------------------------------------------------------

    col =
        math.max(
            0,
            math.min(
                TAC_TILE_COLUMNS - 1,
                col
            )
        )


    row =
        math.max(
            0,
            math.min(
                TAC_TILE_ROWS - 1,
                row
            )
        )


    ------------------------------------------------------------
    -- PIXEL POSITION INSIDE TILE
    ------------------------------------------------------------

    local local_x =
        pixel_x -
        col *
        TAC_TILE_SIZE


    local local_y =
        pixel_y -
        row *
        TAC_TILE_SIZE


    ------------------------------------------------------------
    -- NORMALIZED TILE POSITION
    --
    -- 0 = left / top
    -- 1 = right / bottom
    ------------------------------------------------------------

    local normalized_x =
        local_x /
        TAC_TILE_SIZE


    local normalized_y =
        local_y /
        TAC_TILE_SIZE


    ------------------------------------------------------------
    -- CONVERT TO MFD
    --
    -- X :
    -- 0 -> -1
    -- 1 -> +1
    --
    -- Y :
    -- top    -> +1
    -- bottom -> -1
    ------------------------------------------------------------

    local screen_x =
        normalized_x *
        2.0 -
        1.0


    local screen_y =
        1.0 -
        normalized_y *
        2.0


    ------------------------------------------------------------
    -- FINAL CLAMP
    ------------------------------------------------------------

    screen_x =
        tac_clamp(
            screen_x,
            -1.0,
            1.0
        )


    screen_y =
        tac_clamp(
            screen_y,
            -1.0,
            1.0
        )


    ------------------------------------------------------------
    -- OUTPUT
    ------------------------------------------------------------

    TAC_MAP_AIRCRAFT_X:set(
        screen_x
    )

    TAC_MAP_AIRCRAFT_Y:set(
        screen_y
    )

end


----------------------------------------------------------------
-- UPDATE TAC
----------------------------------------------------------------

local function update_tac_tile()

    ------------------------------------------------------------
    -- DCS COORDINATES
    ------------------------------------------------------------

    local self_x,
          self_alt,
          self_z =
        get_base_data().getSelfCoordinates()


    if not self_x
    or not self_z then

        TAC_MAP_VALID:set(0)

        TAC_MAP_TILE:set(0)

        TAC_MAP_AIRCRAFT_X:set(0)

        TAC_MAP_AIRCRAFT_Y:set(0)

        return

    end


    ------------------------------------------------------------
    -- DCS -> LAT/LON
    ------------------------------------------------------------

    local lat,
          lon =
        Terrain.convertMetersToLatLon(
            self_x,
            self_z
        )


    if not lat
    or not lon then

        TAC_MAP_VALID:set(0)

        TAC_MAP_TILE:set(0)

        TAC_MAP_AIRCRAFT_X:set(0)

        TAC_MAP_AIRCRAFT_Y:set(0)

        return

    end


    ------------------------------------------------------------
    -- GEO -> ORIGINAL PIXELS
    ------------------------------------------------------------

    local pixel_x,
          pixel_y =
        tac_geo_to_pixels(
            lat,
            lon
        )


    ------------------------------------------------------------
    -- TILE
    ------------------------------------------------------------

    local tile =
        tac_get_tile_from_pixels(
            pixel_x,
            pixel_y
        )


    ------------------------------------------------------------
    -- POSITION INSIDE TILE
    ------------------------------------------------------------

    update_tac_aircraft_position(
        pixel_x,
        pixel_y
    )


    ------------------------------------------------------------
    -- OUTPUT
    ------------------------------------------------------------

    if tile >= 1
    and tile <= 35 then

        TAC_MAP_VALID:set(1)

        TAC_MAP_TILE:set(
            tile
        )

    else

        TAC_MAP_VALID:set(0)

        TAC_MAP_TILE:set(0)

        TAC_MAP_AIRCRAFT_X:set(0)

        TAC_MAP_AIRCRAFT_Y:set(0)

    end

end


----------------------------------------------------------------
-- POST INITIALIZE
----------------------------------------------------------------

function post_initialize()

    print_message_to_user(
        "Post init avMFD_MOD_init.lua"
    )


    ------------------------------------------------------------
    -- DEVICE
    ------------------------------------------------------------

    mdfmodDevice =
        GetDevice(
            devices.MFD_MOD
        )


    ------------------------------------------------------------
    -- MENUS
    ------------------------------------------------------------

    root_open_directory()

    bmap_open_directory()

    load_wpts_from_mission()

end


----------------------------------------------------------------
-- SET COMMAND
----------------------------------------------------------------

function SetCommand(
    command,
    value
)

    ------------------------------------------------------------
    -- RBE2
    ------------------------------------------------------------

    if rbe2_commands
    and value == 1 then

        local c = nil


        if command ==
            rbe2_commands.VTM_TOGGLE then

            if mm_mfd_cur_page == "RBE2" then

                root_open_directory()

            else

                rbe2_open_directory()

            end

            return


        elseif command ==
            rbe2_commands.MODE_RWS then

            c = 1


        elseif command ==
            rbe2_commands.MODE_TWS then

            c = 2


        elseif command ==
            rbe2_commands.MODE_STT then

            c = 3


        elseif command ==
            rbe2_commands.MODE_GMT then

            c = 4


        elseif command ==
            rbe2_commands.MODE_SAR then

            c = 5


        elseif command ==
            rbe2_commands.RANGE_UP then

            c = 6


        elseif command ==
            rbe2_commands.RANGE_DOWN then

            c = 7


        elseif command ==
            rbe2_commands.TDC_UP then

            c = 8


        elseif command ==
            rbe2_commands.TDC_RIGHT then

            c = 9


        elseif command ==
            rbe2_commands.TDC_DOWN then

            c = 10


        elseif command ==
            rbe2_commands.TDC_LEFT then

            c = 11


        elseif command ==
            rbe2_commands.TARGET_LOCK then

            c = 12


        elseif command ==
            rbe2_commands.TARGET_UNLOCK then

            c = 13


        elseif command ==
            rbe2_commands.TARGET_NEXT then

            c = 14


        elseif command ==
            rbe2_commands.TARGET_PREV then

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
    ------------------------------------------------------------

    if command >= 3001
    and command <= 3006 then

        local command_btn =
            command - 3000


        --------------------------------------------------------
        -- NORMAL / LIST PREP
        --------------------------------------------------------

        if mm_mfd_cursor_mode == "normal"
        or mm_mfd_cursor_mode == "list_prep" then


            ----------------------------------------------------
            -- UP
            ----------------------------------------------------

            if command_btn == 1 then

                if value == 1 then

                    mm_cursor.rate_ud =
                        mm_cursor.steps

                else

                    mm_cursor.rate_ud =
                        0

                end


            ----------------------------------------------------
            -- RIGHT
            ----------------------------------------------------

            elseif command_btn == 2 then

                if value == 1 then

                    mm_cursor.rate_lr =
                        mm_cursor.steps

                else

                    mm_cursor.rate_lr =
                        0

                end


            ----------------------------------------------------
            -- DOWN
            ----------------------------------------------------

            elseif command_btn == 3 then

                if value == 1 then

                    mm_cursor.rate_ud =
                        -mm_cursor.steps

                else

                    mm_cursor.rate_ud =
                        0

                end


            ----------------------------------------------------
            -- LEFT
            ----------------------------------------------------

            elseif command_btn == 4 then

                if value == 1 then

                    mm_cursor.rate_lr =
                        -mm_cursor.steps

                else

                    mm_cursor.rate_lr =
                        0

                end

            end


            ----------------------------------------------------
            -- ENTER
            ----------------------------------------------------

            if command_btn == 5 then

                if value == 1 then

                    mm_mfd_btn_enter =
                        1

                else

                    mm_mfd_btn_enter =
                        0


                    if mm_mfd_cursor_mode ==
                        "list_prep" then

                        mm_mfd_cursor_mode =
                            "list"

                    end

                end

            end


            ----------------------------------------------------
            -- CANCEL
            ----------------------------------------------------

            if command_btn == 6 then

                if value == 1 then

                    mm_mfd_btn_cancel =
                        1

                else

                    mm_mfd_btn_cancel =
                        0

                end

            end


        --------------------------------------------------------
        -- LIST MODE
        --------------------------------------------------------

        elseif mm_mfd_cursor_mode == "list" then

            if command_btn == 1
            and value == 0 then

                mm_move_list("up")


            elseif command_btn == 2
            and value == 0 then

                -- RIGHT


            elseif command_btn == 3
            and value == 0 then

                mm_move_list("down")


            elseif command_btn == 4
            and value == 0 then

                -- LEFT


            elseif command_btn == 5
            and value == 0 then

                mm_move_list("enter")


            elseif command_btn == 6
            and value == 0 then

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

    update_tac_tile()

end