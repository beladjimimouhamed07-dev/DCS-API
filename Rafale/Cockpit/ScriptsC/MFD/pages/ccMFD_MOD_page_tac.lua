----------------------------------------------------------------------
-- RAFALE MFD
-- TAC - PNG TEST
--
-- TEST :
--   brain.png
--   taille contrôlée
--   croix visible au-dessus
----------------------------------------------------------------------


----------------------------------------------------------------------
-- MFD DEFINITIONS
----------------------------------------------------------------------

dofile(
    LockOn_Options.script_path ..
    "MFD/pages/ccMFD_MOD_definitions.lua"
)

local mfd_base_tac =
    CreateElement "ceSimple"

mfd_base_tac.name =
    "mfd_base_tac"

mfd_base_tac.init_pos =
    {0, 0, 0}

mfd_base_tac.element_params =
    {
        "MM_MFD_PAGE_TAC"
    }

mfd_base_tac.controllers =
    {
        {"parameter_in_range", 0, 0.9, 1.1}
    }

Add(mfd_base_tac)





----------------------------------------------------------------------
-- BRAIN PNG
----------------------------------------------------------------------

local TAC_TEST_MATERIAL =
    MakeMaterial(
        LockOn_Options.script_path ..
        "MFD/maps/Caucasus.png",
        {255, 255, 255, 125}
    )


----------------------------------------------------------------------
-- BRAIN SIZE
--
-- On commence volontairement petit.
----------------------------------------------------------------------

local BRAIN_W = 1
local BRAIN_H = 1


----------------------------------------------------------------------
-- BRAIN
----------------------------------------------------------------------

local TAC_TEST_IMAGE =
    CreateElement("ceTexPoly")


TAC_TEST_IMAGE.name =
    "TAC_TEST_BRAIN"


TAC_TEST_IMAGE.material =
    TAC_TEST_MATERIAL


TAC_TEST_IMAGE.primitivetype =
    "triangles"


TAC_TEST_IMAGE.vertices = {

    {-BRAIN_W,  BRAIN_H},
    { BRAIN_W,  BRAIN_H},
    { BRAIN_W, -BRAIN_H},
    {-BRAIN_W, -BRAIN_H}

}


TAC_TEST_IMAGE.indices = {

    0, 1, 2;
    0, 2, 3

}


----------------------------------------------------------------------
-- FULL PNG
----------------------------------------------------------------------

TAC_TEST_IMAGE.tex_coords = {

    {0, 0},
    {1, 0},
    {1, 1},
    {0, 1}

}


----------------------------------------------------------------------
-- RENDER ORDER
----------------------------------------------------------------------

TAC_TEST_IMAGE.level =
    MDF_DEFAULT_LEVEL


TAC_TEST_IMAGE.h_clip_relation =
    h_clip_relations.COMPARE

TAC_TEST_IMAGE.parent_element =
    "mfd_base_tac"
----------------------------------------------------------------------
-- ADD
----------------------------------------------------------------------

Add(TAC_TEST_IMAGE)


----------------------------------------------------------------------
-- CROSS
----------------------------------------------------------------------

local CROSS_SIZE = 0.08


local TAC_CENTER =
    CreateElement("ceMeshPoly")


TAC_CENTER.name =
    "TAC_CENTER"


TAC_CENTER.primitivetype =
    "lines"


TAC_CENTER.vertices = {

    {-CROSS_SIZE, 0},
    { CROSS_SIZE, 0},

    {0, -CROSS_SIZE},
    {0,  CROSS_SIZE}

}


TAC_CENTER.indices = {

    0, 1,
    2, 3

}


TAC_CENTER.material =
    MFCD_CURSOR


----------------------------------------------------------------------
----------------------------------------------------------------------

TAC_CENTER.level =
    MDF_DEFAULT_LEVEL + 10


TAC_CENTER.h_clip_relation =
    h_clip_relations.REWRITE_LEVEL


TAC_CENTER.isdraw =
    true

    TAC_CENTER.parent_element =
    "mfd_base_tac"
----------------------------------------------------------------------
-- ADD
----------------------------------------------------------------------

Add(TAC_CENTER)