dofile(LockOn_Options.script_path.."ADI/Indicator/ADI_pages_id.lua")
dofile(LockOn_Options.script_path.."ADI/Indicator/ADI_def.lua")

ADI_OFF 			= CreateElement "ceSimple"
ADI_OFF.init_pos	= {0,0}
ADI_OFF.name		= create_guid_string()
ADI_OFF.element_params = {"ADI_MODE"}
ADI_OFF.controllers    = {{"parameter_compare_with_number",0, SUB_PAGE_ID.OFF}}
AddElement(ADI_OFF)

 AddElement(add_text( "OFF"  , 0,0 , ADI_OFF))
 

