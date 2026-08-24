----------------------------------------------------------------------
-- RAFALE MFD
-- TAC / STATIC CAUCASUS TILE
--
-- CARTE FIXE
-- CROIX = POSITION DE L'AVION
--
-- TAC_MAP_TILE sélectionne la PNG.
-- TAC_MAP_AIRCRAFT_X/Y déplacent la croix dans la PNG.
----------------------------------------------------------------------


----------------------------------------------------------------------
-- MFD DEFINITIONS
----------------------------------------------------------------------

dofile(
    LockOn_Options.script_path ..
    "MFD/pages/ccMFD_MOD_definitions.lua"
)


----------------------------------------------------------------------
-- BASE
----------------------------------------------------------------------

local mfd_base_tac =
    CreateElement "ceSimple"


mfd_base_tac.name =
    "mfd_base_tac"


mfd_base_tac.init_pos =
    {
        0,
        0,
        0
    }


mfd_base_tac.element_params =
{
    "MM_MFD_PAGE_TAC"
}


mfd_base_tac.controllers =
{
    {
        "parameter_in_range",
        0,
        0.9,
        1.1
    }
}


Add(
    mfd_base_tac
)


----------------------------------------------------------------------
-- TAC PARAMETERS
----------------------------------------------------------------------

local TAC_MAP_VALID =
    get_param_handle(
        "TAC_MAP_VALID"
    )


local TAC_MAP_TILE =
    get_param_handle(
        "TAC_MAP_TILE"
    )


local TAC_MAP_AIRCRAFT_X =
    get_param_handle(
        "TAC_MAP_AIRCRAFT_X"
    )


local TAC_MAP_AIRCRAFT_Y =
    get_param_handle(
        "TAC_MAP_AIRCRAFT_Y"
    )


----------------------------------------------------------------------
-- TILE SIZE
----------------------------------------------------------------------

local TILE_W =
    1


local TILE_H =
    1


----------------------------------------------------------------------
-- CREATE TILE
----------------------------------------------------------------------

local function create_tac_tile(
    tile_number
)

    --------------------------------------------------------------
    -- MATERIAL
    --------------------------------------------------------------

    local material =
        MakeMaterial(
            LockOn_Options.script_path ..
            string.format(
                "MFD/maps/Caucasus_%02d.png",
                tile_number
            ),
            {
                50,
                50,
                50,
                225
            }
        )


    --------------------------------------------------------------
    -- IMAGE
    --------------------------------------------------------------

    local image =
        CreateElement(
            "ceTexPoly"
        )


    image.name =
        string.format(
            "TAC_Caucasus_%02d",
            tile_number
        )


    image.material =
        material


    image.primitivetype =
        "triangles"


    --------------------------------------------------------------
    -- VERTICES
    --------------------------------------------------------------

    image.vertices =
    {

        {
            -TILE_W,
             TILE_H
        },

        {
             TILE_W,
             TILE_H
        },

        {
             TILE_W,
            -TILE_H
        },

        {
            -TILE_W,
            -TILE_H
        }

    }


    --------------------------------------------------------------
    -- INDICES
    --------------------------------------------------------------

    image.indices =
    {

        0, 1, 2;

        0, 2, 3

    }


    --------------------------------------------------------------
    -- FULL PNG
    --------------------------------------------------------------

    image.tex_coords =
    {

        {0, 0},

        {1, 0},

        {1, 1},

        {0, 1}

    }


    --------------------------------------------------------------
    -- RENDER
    --------------------------------------------------------------

    image.level =
        MDF_DEFAULT_LEVEL


    image.h_clip_relation =
        h_clip_relations.COMPARE


    image.parent_element =
        "mfd_base_tac"


    --------------------------------------------------------------
    -- PARAMETERS
    --------------------------------------------------------------

    image.element_params =
    {
        "TAC_MAP_VALID",
        "TAC_MAP_TILE"
    }


    --------------------------------------------------------------
    -- VISIBILITY
    --------------------------------------------------------------

    image.controllers =
    {

        {
            "parameter_in_range",
            0,
            0.9,
            1.1
        },

        {
            "parameter_in_range",
            1,
            tile_number - 0.1,
            tile_number + 0.1
        }

    }


    image.isdraw =
        true


    --------------------------------------------------------------
    -- ADD
    --------------------------------------------------------------

    Add(
        image
    )

end


----------------------------------------------------------------------
-- CREATE 35 TILES
----------------------------------------------------------------------

for tile_number = 1, 35 do

    create_tac_tile(
        tile_number
    )

end


----------------------------------------------------------------------
-- AIRCRAFT POSITION MARKER
----------------------------------------------------------------------

local CROSS_SIZE =
    0.10


local TAC_CENTER =
    CreateElement(
        "ceMeshPoly"
    )


TAC_CENTER.name =
    "TAC_CENTER"


----------------------------------------------------------------------
-- TYPE
----------------------------------------------------------------------

TAC_CENTER.primitivetype =
    "lines"


----------------------------------------------------------------------
-- GEOMETRY
----------------------------------------------------------------------

TAC_CENTER.vertices =
{
    {-CROSS_SIZE,  0},
    { CROSS_SIZE,  0},

    { 0, -CROSS_SIZE},
    { 0,  CROSS_SIZE}
}


TAC_CENTER.indices =
{
    0, 1,
    2, 3
}


----------------------------------------------------------------------
-- MATERIAL
----------------------------------------------------------------------

TAC_CENTER.material =
    MFCD_CURSOR


----------------------------------------------------------------------
-- INITIAL POSITION
----------------------------------------------------------------------

TAC_CENTER.init_pos =
{
    0,
    0,
    0
}


----------------------------------------------------------------------
-- PARAMETERS
----------------------------------------------------------------------

TAC_CENTER.element_params =
{
    "TAC_MAP_AIRCRAFT_X",
    "TAC_MAP_AIRCRAFT_Y"
}


----------------------------------------------------------------------
-- MOVE
--
-- IMPORTANT :
--
-- Le device calcule déjà une position locale dans la tuile
-- exprimée dans [-1,+1].
--
-- On utilise donc 1.0 ici.
----------------------------------------------------------------------

TAC_CENTER.controllers =
{
    {
        "move_left_right_using_parameter",
        0,
        0.01
    },

    {
        "move_up_down_using_parameter",
        1,
        0.01
    }
}


----------------------------------------------------------------------
-- RENDER
----------------------------------------------------------------------

TAC_CENTER.level =
    MDF_DEFAULT_LEVEL + 50


TAC_CENTER.h_clip_relation =
    h_clip_relations.REWRITE_LEVEL


TAC_CENTER.isdraw =
    true


----------------------------------------------------------------------
-- PARENT
----------------------------------------------------------------------

TAC_CENTER.parent_element =
    "mfd_base_tac"


----------------------------------------------------------------------
-- ADD
----------------------------------------------------------------------

Add(
    TAC_CENTER
)