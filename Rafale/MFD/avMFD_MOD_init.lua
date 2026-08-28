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

dofile(
    modpath .. "avMFD_MOD_page_osf.lua"
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
-- CAUCASUS MOVING MAP
--
-- CARTE :
--   27771 x 16868 pixels
--
-- DECOUPAGE :
--   4096 x 4096 pixels
--   7 colonnes
--   5 lignes
--   35 tuiles
--
-- ORDRE DES TUILES :
--
--   01 02 03 04 05 06 07
--   08 09 10 11 12 13 14
--   15 16 17 18 19 20 21
--   22 23 24 25 26 27 28
--   29 30 31 32 33 34 35
--
-- La carte reste fixe.
-- TAC_MAP_TILE sélectionne la tuile.
-- TAC_MAP_AIRCRAFT_X/Y donnent la position
-- de l'avion à l'intérieur de cette tuile.
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
-- ORIGINAL MAP GEOREFERENCE
----------------------------------------------------------------
--
-- NORTH WEST
----------------------------------------------------------------

local TAC_NW_LAT =
    45.475047273277355

local TAC_NW_LON =
    34.92934725058618


----------------------------------------------------------------
-- NORTH EAST
----------------------------------------------------------------

local TAC_NE_LAT =
    45.01783390996292

local TAC_NE_LON =
    46.5736598541507


----------------------------------------------------------------
-- SOUTH WEST
----------------------------------------------------------------

local TAC_SW_LAT =
    40.93773261091714

local TAC_SW_LON =
    34.81578621343812


----------------------------------------------------------------
-- SOUTH EAST
----------------------------------------------------------------

local TAC_SE_LAT =
    40.29948360353398

local TAC_SE_LON =
    45.43927621063355


----------------------------------------------------------------
-- ORIGINAL IMAGE SIZE
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
-- LAST REAL PIXEL
--
-- Important :
--
-- 27771 pixels de large
-- 16868 pixels de haut
--
-- Les dernières tuiles contiennent donc du noir.
----------------------------------------------------------------

local TAC_LAST_PIXEL_X =
    TAC_MAP_PIXEL_WIDTH - 1.0

local TAC_LAST_PIXEL_Y =
    TAC_MAP_PIXEL_HEIGHT - 1.0


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
-- GEOREFERENCE
--
-- Conversion LAT/LON -> UV
--
-- U :
--   0 = gauche
--   1 = droite
--
-- V :
--   0 = haut
--   1 = bas
--
-- On utilise les quatre coins.
--
-- Comme les quatre côtés ne sont pas parfaitement horizontaux/
-- verticaux, on calcule d'abord U sur les deux bords puis
-- la latitude des deux bords à ce U.
----------------------------------------------------------------

local function tac_geo_to_uv(
    lat,
    lon
)

    ------------------------------------------------------------
    -- Longitude interpolation
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
    -- Moyenne U
    ------------------------------------------------------------

    local u =
        (
            north_u +
            south_u
        )
        *
        0.5


    ------------------------------------------------------------
    -- Clamp U
    ------------------------------------------------------------

    u =
        tac_clamp(
            u,
            0.0,
            1.0
        )


    ------------------------------------------------------------
    -- LATITUDE DES BORDS A CE U
    --
    -- On utilise U global plutôt que north_u/south_u
    -- pour garder une géométrie cohérente.
    ------------------------------------------------------------

    local north_lat =
        TAC_NW_LAT +
        (
            TAC_NE_LAT -
            TAC_NW_LAT
        )
        *
        u


    local south_lat =
        TAC_SW_LAT +
        (
            TAC_SE_LAT -
            TAC_SW_LAT
        )
        *
        u


    ------------------------------------------------------------
    -- V
    --
    -- haut = 0
    -- bas  = 1
    ------------------------------------------------------------

    local denominator =
        north_lat -
        south_lat


    local v = 0.0


    if math.abs(denominator) > 0.000001 then

        v =
            (
                north_lat -
                lat
            )
            /
            denominator

    end


    ------------------------------------------------------------
    -- Clamp
    ------------------------------------------------------------

    v =
        tac_clamp(
            v,
            0.0,
            1.0
        )


    return
        u,
        v

end


----------------------------------------------------------------
-- UV -> ORIGINAL PIXELS
----------------------------------------------------------------

local function tac_uv_to_pixels(
    u,
    v
)

    local pixel_x =
        u *
        TAC_LAST_PIXEL_X


    local pixel_y =
        v *
        TAC_LAST_PIXEL_Y


    return
        pixel_x,
        pixel_y

end


----------------------------------------------------------------
-- PIXELS -> TILE
----------------------------------------------------------------

local function tac_get_tile_info(
    pixel_x,
    pixel_y
)

    ------------------------------------------------------------
    -- COLUMN
    ------------------------------------------------------------

    local col =
        math.floor(
            pixel_x /
            TAC_TILE_SIZE
        )


    ------------------------------------------------------------
    -- ROW
    ------------------------------------------------------------

    local row =
        math.floor(
            pixel_y /
            TAC_TILE_SIZE
        )


    ------------------------------------------------------------
    -- SAFETY
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
    -- TILE NUMBER
    ------------------------------------------------------------

    local tile_number =
        row *
        TAC_TILE_COLUMNS +
        col +
        1


    ------------------------------------------------------------
    -- ORIGIN OF TILE
    ------------------------------------------------------------

    local tile_origin_x =
        col *
        TAC_TILE_SIZE


    local tile_origin_y =
        row *
        TAC_TILE_SIZE


    ------------------------------------------------------------
    -- POSITION INSIDE TILE
    ------------------------------------------------------------

    local local_x =
        pixel_x -
        tile_origin_x


    local local_y =
        pixel_y -
        tile_origin_y


    ------------------------------------------------------------
    -- NORMALIZED
    --
    -- 0 = left/top
    -- 1 = right/bottom
    ------------------------------------------------------------

    local local_u =
        local_x /
        TAC_TILE_SIZE


    local local_v =
        local_y /
        TAC_TILE_SIZE


    ------------------------------------------------------------
    -- Clamp
    ------------------------------------------------------------

    local_u =
        tac_clamp(
            local_u,
            0.0,
            1.0
        )


    local_v =
        tac_clamp(
            local_v,
            0.0,
            1.0
        )


    return
        tile_number,
        local_u,
        local_v

end


----------------------------------------------------------------
-- TILE UV -> MFD COORDINATES
----------------------------------------------------------------
--
-- X :
--   0 -> -1
--   1 -> +1
--
-- Y :
--   0 -> +1
--   1 -> -1
----------------------------------------------------------------

local function tac_tile_uv_to_mfd(
    local_u,
    local_v
)

    local screen_x =
        local_u *
        2.0 -
        1.0


    local screen_y =
        1.0 -
        local_v *
        2.0


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


    return
        screen_x,
        screen_y

end


----------------------------------------------------------------
-- UPDATE TAC
----------------------------------------------------------------

local function update_tac_tile()

    ------------------------------------------------------------
    -- DCS POSITION
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
    -- LAT/LON -> UV
    ------------------------------------------------------------

    local map_u,
          map_v =
        tac_geo_to_uv(
            lat,
            lon
        )


    ------------------------------------------------------------
    -- UV -> PIXELS
    ------------------------------------------------------------

    local pixel_x,
          pixel_y =
        tac_uv_to_pixels(
            map_u,
            map_v
        )


    ------------------------------------------------------------
    -- PIXELS -> TILE
    ------------------------------------------------------------

    local tile,
          local_u,
          local_v =
        tac_get_tile_info(
            pixel_x,
            pixel_y
        )


    ------------------------------------------------------------
    -- TILE UV -> MFD
    ------------------------------------------------------------

    local screen_x,
          screen_y =
        tac_tile_uv_to_mfd(
            local_u,
            local_v
        )


    ------------------------------------------------------------
    -- OUTPUT
    ------------------------------------------------------------

    TAC_MAP_TILE:set(
        tile
    )


    TAC_MAP_AIRCRAFT_X:set(
        screen_x
    )


    TAC_MAP_AIRCRAFT_Y:set(
        screen_y
    )


    TAC_MAP_VALID:set(1)

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