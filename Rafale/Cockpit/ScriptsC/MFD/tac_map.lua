----------------------------------------------------------------------
-- RAFALE MFD
-- TAC CAUCASUS MAP GRAPHICS
----------------------------------------------------------------------

local TAC_MAP_LEVEL = 2


----------------------------------------------------------------------
-- ECHELLE D'AFFICHAGE
--
-- IMPORTANT :
--
-- Ce n'est PAS un zoom.
--
-- C'est uniquement la conversion :
--
--      pixel carte -> unité graphique MFD
--
-- A calibrer une seule fois pour ton écran MFD.
----------------------------------------------------------------------

local MAP_PIXEL_TO_MFD = 0.00008


----------------------------------------------------------------------
-- CENTRE MFD
----------------------------------------------------------------------

local MAP_CENTER_X = 0.0
local MAP_CENTER_Y = 0.0


----------------------------------------------------------------------
-- DIMENSIONS D'UNE TILE A L'ECRAN
----------------------------------------------------------------------

local TILE_DISPLAY_SIZE =
    4096.0 * MAP_PIXEL_TO_MFD


----------------------------------------------------------------------
-- PARAMETRES
----------------------------------------------------------------------

local map_valid =
    get_param_handle("TAC_MAP_VALID")

local map_visible =
    get_param_handle("TAC_MAP_VISIBLE")

local map_global_x =
    get_param_handle("TAC_MAP_GLOBAL_X")

local map_global_y =
    get_param_handle("TAC_MAP_GLOBAL_Y")


----------------------------------------------------------------------
-- ROOT
----------------------------------------------------------------------

local TAC_MAP_ROOT =
    CreateElement("ceSimple")

TAC_MAP_ROOT.name =
    "TAC_CAUCASUS_MAP_ROOT"

TAC_MAP_ROOT.init_pos =
    {
        MAP_CENTER_X,
        MAP_CENTER_Y,
        0
    }

TAC_MAP_ROOT.h_clip_relation =
    h_clip_relations.COMPARE

TAC_MAP_ROOT.level =
    TAC_MAP_LEVEL

TAC_MAP_ROOT.element_params =
    {
        "TAC_MAP_VALID",
        "TAC_MAP_VISIBLE"
    }

TAC_MAP_ROOT.controllers =
    {
        {
            "parameter_in_range",
            0,
            1
        },

        {
            "opacity_using_parameter",
            1
        }
    }

Add(TAC_MAP_ROOT)


----------------------------------------------------------------------
-- CREATION D'UNE TILE
----------------------------------------------------------------------

local function create_caucasus_tile(
    tile_number,
    row,
    col
)

    local tile =
        CreateElement("ceTexPoly")


    ------------------------------------------------------------------
    -- NOM
    ------------------------------------------------------------------

    tile.name =
        string.format(
            "TAC_CAUCASUS_%02d",
            tile_number
        )


    ------------------------------------------------------------------
    -- TEXTURE
    ------------------------------------------------------------------

    tile.material =
        string.format(
            "Caucasus_%02d",
            tile_number
        )


    ------------------------------------------------------------------
    -- TAILLE
    ------------------------------------------------------------------

    tile.vertices =
    {
        {
            -TILE_DISPLAY_SIZE / 2,
             TILE_DISPLAY_SIZE / 2
        },

        {
             TILE_DISPLAY_SIZE / 2,
             TILE_DISPLAY_SIZE / 2
        },

        {
             TILE_DISPLAY_SIZE / 2,
            -TILE_DISPLAY_SIZE / 2
        },

        {
            -TILE_DISPLAY_SIZE / 2,
            -TILE_DISPLAY_SIZE / 2
        }
    }


    tile.indices =
    {
        0, 1, 2,
        0, 2, 3
    }


    ------------------------------------------------------------------
    -- TEXTURE COMPLETE
    ------------------------------------------------------------------

    tile.tex_coords =
    {
        {0, 0},
        {1, 0},
        {1, 1},
        {0, 1}
    }


    ------------------------------------------------------------------
    -- POSITION DE BASE
    --
    -- 01 = NW
    -- 07 = NE
    --
    ------------------------------------------------------------------

    local base_x =
        (col + 0.5) *
        TILE_DISPLAY_SIZE


    local base_y =
        -(
            row + 0.5
        ) *
        TILE_DISPLAY_SIZE


    tile.init_pos =
    {
        base_x,
        base_y,
        0
    }


    ------------------------------------------------------------------
    -- PARENT
    ------------------------------------------------------------------

    tile.parent_element =
        TAC_MAP_ROOT.name


    ------------------------------------------------------------------
    -- PARAMETRES
    --
    -- GLOBAL_X/Y servent à déplacer toute la carte.
    ------------------------------------------------------------------

    tile.element_params =
    {
        "TAC_MAP_VALID",
        "TAC_MAP_GLOBAL_X",
        "TAC_MAP_GLOBAL_Y"
    }


    ------------------------------------------------------------------
    -- CONTROLLERS
    ------------------------------------------------------------------

    tile.controllers =
    {
        {
            "parameter_in_range",
            0,
            1
        },

        {
            "move_left_right_using_parameter",
            1,
            -MAP_PIXEL_TO_MFD
        },

        {
            "move_up_down_using_parameter",
            2,
            MAP_PIXEL_TO_MFD
        }
    }


    tile.h_clip_relation =
        h_clip_relations.COMPARE

    tile.level =
        TAC_MAP_LEVEL


    tile.isdraw =
        true

    tile.use_mipfilter =
        true


    Add(tile)

end


----------------------------------------------------------------------
-- LES 35 TILES
----------------------------------------------------------------------

for row = 0, 4 do

    for col = 0, 6 do

        local tile_number =
            row * 7 + col + 1


        create_caucasus_tile(
            tile_number,
            row,
            col
        )

    end

end