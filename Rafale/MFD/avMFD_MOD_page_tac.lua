----------------------------------------------------------------------
-- RAFALE MFD
-- TAC / TACTICAL MAP
--
-- V1
-- Static raster map only.
--
-- No georeferencing.
-- No DCS world coordinates.
-- No scale.
-- No rotation.
-- No moving map.
----------------------------------------------------------------------


----------------------------------------------------------------------
-- CONFIGURATION
----------------------------------------------------------------------

----------------------------------------------------------------------
-- PAGE OPEN
----------------------------------------------------------------------

function tac_open_directory()

    clean_directory()

    --------------------------------------------------------------
    -- PAGE BUTTONS
    --------------------------------------------------------------

    -- Bottom / return button
    mm_mfd_btn[13].text.text = "BMAP"
    mm_mfd_btn[13].func_short = bmap_open_directory
    mm_mfd_btn[13].func_long = nothing

    -- Page title / status
    mm_mfd_btn[12].text.text = "TAC"
    mm_mfd_btn[12].func_short = nothing
    mm_mfd_btn[12].func_long = nothing
    mm_mfd_btn[12].text.status = 1

    --------------------------------------------------------------
    -- Clear unused buttons
    --------------------------------------------------------------

    for i = 1, 20 do

        if i ~= 12 and i ~= 13 then

            mm_mfd_btn[i].text.text = ""
            mm_mfd_btn[i].func_short = nothing
            mm_mfd_btn[i].func_long = nothing

        end

    end

    --------------------------------------------------------------
    -- Page state
    --------------------------------------------------------------

    manage_directorys()

    mm_mfd_cur_page = "TAC"

    mm_mfd_pagedata.tac_page_handle:set(1)

    --------------------------------------------------------------
    -- MFD SOI
    --------------------------------------------------------------

    mm_mfd_SOI = 50 / 255
    mm_mfd_SOI_param:set(mm_mfd_SOI)

end