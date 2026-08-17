dofile(LockOn_Options.common_script_path.."elements_defs.lua")
dofile(LockOn_Options.common_script_path.."Fonts/symbols_locale.lua")
dofile(LockOn_Options.common_script_path.."Fonts/fonts_cmn.lua")
 
-- dofile(LockOn_Options.script_path.."fonts.lua")
 
local IndicationFontPath = LockOn_Options.script_path.."../Textures/Fonts/"
ADI_IND_TEX_PATH        = LockOn_Options.script_path .. "Resources/"
HUD_IND_TEX_PATH        = LockOn_Options.script_path .. "Resources/"

aspect = GetAspect()
SHOW_MASKS = false

SetScale(FOV)

stringdefs 				= {0.012,0.75 * 0.012, 0, 0}
ADI_strdefs_mdf_data	= {0.0051,0.0007, 0, 0}
ADI_strdefs_menu		= {0.0061,0.001, 0, 0}
ADI_strdefs_text		= {0.007,0.002, 0, 0}
ADI_strdefs_digit		= {0.008,0.002, 0, 0}
ADI_strdefs_digit_b		= {0.01,0.002, 0, 0}
ADI_strdefs_digit_f		= {0.01,0.0028, 0, 0}

materials = {}
materials["DBG_GREY"]    = {5, 5, 5, 255}
materials["DBG_BLACK"]   = {0, 0, 0, 255}
materials["DBG_BLUE"]    = {0, 0, 100, 255}

materials["DBG_GREEN"]	= {108, 232, 108, 255}
materials["DBG_RED"]	= {255, 0, 0, 255}
materials["DBG_WHITE"]	= {255, 255, 255, 255}
materials["DBG_CYAN"]	= {1, 244, 244, 255}
materials["DBG_YELLOW"]	= {255,255,0,255}
materials["BASE_GREEN"]	= {0,255,0, 255}
materials["B_GREEN"]	= {0,155,0, 255}
materials["RADAR_GRID"] = {0,100,0,192}


materials["BGREEN"]     = MakeMaterial(nil, materials["B_GREEN"])
materials["DGREEN"]     = MakeMaterial(nil, materials["DBG_GREEN"])
materials["BGCOLOR"]    = MakeMaterial(nil,{242, 235, 179,255})

materials["MWHITE"]     = MakeMaterial(nil, materials["DBG_WHITE"])
materials["BBLACK"]     = MakeMaterial(nil, materials["DBG_BLACK"])
materials["RED"]     	= MakeMaterial(nil, materials["DBG_RED"])
materials["CYAN"]     	= MakeMaterial(nil, materials["DBG_CYAN"])
materials["BLUE"]     	= MakeMaterial(nil, materials["DBG_BLUE"])
materials["GREY"]     	= MakeMaterial(nil, materials["DBG_GREY"])
materials["DYELLOW"]    = MakeMaterial(nil, materials["DBG_YELLOW"])

-------FONTS-------
 
fonts = {}
textures = {}

fonts["FONT_WHITE"]		= MakeFont({used_DXUnicodeFontData = "FUI/Fonts/font_arial_17"},materials["DBG_WHITE"],50,"test_font")
fonts["FONT_BLUE"]		= MakeFont({used_DXUnicodeFontData = "FUI/Fonts/font_arial_17"},materials["DBG_BLUE"],50,"test_font") 
fonts["FONT_RED"]		= MakeFont({used_DXUnicodeFontData = "FUI/Fonts/font_arial_17"},materials["DBG_RED"],50,"test_font") 
fonts["FONT_GREEN"]		= MakeFont({used_DXUnicodeFontData = "FUI/Fonts/font_arial_17"}, materials["DBG_GREEN"],50,"test_font") 
fonts["FONT_BGREEN"]	= MakeFont({used_DXUnicodeFontData = "FUI/Fonts/font_arial_17"}, materials["B_GREEN"],50,"test_font") 
fonts["FONT_BLACK"]		= MakeFont({used_DXUnicodeFontData = "FUI/Fonts/font_arial_17"}, materials["DBG_BLACK"],50,"test_font") 
fonts["FONT_CYAN"]		= MakeFont({used_DXUnicodeFontData = "FUI/Fonts/font_arial_17"}, materials["DBG_CYAN"],50,"test_font") 
fonts["FONT_YELLOW"]	= MakeFont({used_DXUnicodeFontData = "FUI/Fonts/font_arial_17"}, materials["DBG_YELLOW"],50,"test_font") 

DEGREE_TO_MRAD = 17.4532925199433
DEGREE_TO_RAD  = 0.0174532925199433
RAD_TO_DEGREE  = 57.29577951308233
MRAD_TO_DEGREE = 0.05729577951308233
 
ADI_DEFAULT_LEVEL = 7                               
ADI_DEFAULT_NOCLIP_LEVEL  = ADI_DEFAULT_LEVEL - 1  
 
DEBUG_COLOR                 = {0,255,0,200}
ADI_DAY_COLOR               = {255,255,255,255}
ADI_DARK_COLOR              = {0,0,0,255}

CAPTYPE = MakeMaterial(ADI_IND_TEX_PATH.."ADI/cap_tape.dds", ADI_DAY_COLOR)
ADI_MAIN = MakeMaterial(ADI_IND_TEX_PATH .. "ADI/Adi_Ladder.dds", ADI_DAY_COLOR)
triangleB = MakeMaterial(ADI_IND_TEX_PATH .. "ADI/triangleB.dds", ADI_DAY_COLOR)
triangleJ = MakeMaterial(ADI_IND_TEX_PATH .. "ADI/triangleJ.dds", ADI_DAY_COLOR)
aoa = MakeMaterial(ADI_IND_TEX_PATH .. "ADI/aoa.dds", ADI_DAY_COLOR)
curseur = MakeMaterial(ADI_IND_TEX_PATH .. "ADI/curseur.dds", ADI_DAY_COLOR)
contour = MakeMaterial(ADI_IND_TEX_PATH .. "ADI/contour.dds", ADI_DAY_COLOR)
default_ADI_x = 1024
default_ADI_y = 1024

default_ADI_z_offset = 0.8
default_ADI_rot_offset = 30

box_indices =
{
	0,1,2;0,2,3
}
 
function AddElement(object)
	object.use_mipfilter    = false
	object.additive_alpha   = false
	object.change_opacity	= false

    if (object.h_clip_relation == nil) then
        object.h_clip_relation = h_clip_relations.COMPARE
    end 
    
    if (object.level == nil) or (object.level < ADI_DEFAULT_LEVEL) then
        object.level        = ADI_DEFAULT_LEVEL 
    end
	
    Add(object)
end

function AddElement_a(object)
	object.use_mipfilter    = false
	object.additive_alpha   = false
	object.change_opacity	= false
	object.h_clip_relation  = h_clip_relations.COMPARE
    if (object.level == nil) or (object.level < ADI_DEFAULT_LEVEL) then
        object.level        = ADI_DEFAULT_LEVEL  	
    end
    Add(object)
end

function AddElement_b(object)
	object.use_mipfilter    = true
	object.additive_alpha   = true
	object.change_opacity	= true
    object.collimated      = true
	if (object.h_clip_relation == nil) then
		object.h_clip_relation = h_clip_relations.COMPARE 
    end 
    if (object.level == nil) or (object.level < ADI_DEFAULT_LEVEL) then
        object.level        = ADI_DEFAULT_LEVEL  	
    end
    Add(object)
end

function AddElementClip2(object)
	object.use_mipfilter   = true
	object.additive_alpha  = true
	object.change_opacity  = true
	object.h_clip_relation = h_clip_relations.COMPARE
	object.level           = ADI_DEFAULT_LEVEL + 1
    Add(object)
end

function AddElementClip(object)
	object.use_mipfilter    = true
	object.additive_alpha   = false
	object.change_opacity	 = false
     if (object.h_clip_relation == nil) then
		object.h_clip_relation = h_clip_relations.DECREASE_IF_LEVEL 
    end 
    
    if (object.level == nil) or (object.level < ADI_DEFAULT_LEVEL) then
		object.level  		 = ADI_DEFAULT_LEVEL + 1   
    end
	
	
    Add(object)
end

function AddElement2(object)
	object.use_mipfilter    = true
	object.additive_alpha   = false
	object.change_opacity	 = false
	object.h_clip_relation  = h_clip_relations.INCREASE_IF_LEVEL
	object.level			= ADI_DEFAULT_LEVEL
    Add(object)
end

function texture_box (UL_X,UL_Y,W,H, texture_size_x, texture_size_y)
local ux = UL_X / texture_size_x
local uy = UL_Y / texture_size_y
local w  = W / texture_size_x
local h  = H / texture_size_y
return {{ux	    ,uy},
		{ux + w ,uy},
		{ux + w ,uy + h},
		{ux	 	,uy + h}}
end

function create_mfd_tex_map(mfd_material, UL_X,UL_Y,DR_X,DR_Y, scale, CENTER_X,CENTER_Y)
	if scale == nil then
		scale = 1/10
	end
	local mils_per_pixel =  scale/DR_X
	local W 	   		 = DR_X - UL_X
	local H 	   		 = DR_Y - UL_Y
	local cx		     = (UL_X + 0.5 * W)
	local cy		     = (UL_Y + 0.5 * H)

	local CENTER_X 		 = CENTER_X or cx
	local CENTER_Y 		 = CENTER_Y or cy
	local dcx 		 	 = mils_per_pixel * (CENTER_X - cx)
	local dcy 		     = mils_per_pixel * (CENTER_Y - cy)

	local half_x 		 = 0.5 * W * mils_per_pixel
	local half_y 		 = 0.5 * H * mils_per_pixel
	local object = CreateElement "ceTexPoly"
		  object.material =  mfd_material
		  object.vertices =  {{-half_x - dcx, half_y + dcy},
							  { half_x - dcx, half_y + dcy},
							  { half_x - dcx,-half_y + dcy},
							  {-half_x - dcx,-half_y + dcy}}
		  object.tex_coords = texture_box(UL_X,UL_Y,W,H, DR_X, DR_Y)
		  object.indices	  = box_indices
  return object
end

function create_hdg_text2k_box(vth_hdg_material, UL_X,UL_Y,DR_X,DR_Y,scale, CENTER_X,CENTER_Y)

if scale == nil then
	scale = 1.4
end

local mils_per_pixel =  scale/2048

local W 	   		 = DR_X - UL_X
local H 	   		 = DR_Y - UL_Y
local cx		     = (UL_X + 0.5 * W)
local cy		     = (UL_Y + 0.5 * H)

local CENTER_X 		 = CENTER_X or cx
local CENTER_Y 		 = CENTER_Y or cy
local dcx 		 	 = mils_per_pixel * (CENTER_X - cx)
local dcy 		     = mils_per_pixel * (CENTER_Y - cy)

local half_x 		 = 0.5 * W * mils_per_pixel
local half_y 		 = 0.5 * H * mils_per_pixel

local object = CreateElement "ceTexPoly"
	  object.material =  vth_hdg_material
 	  object.vertices =  {{-half_x - dcx, half_y + dcy},
						  { half_x - dcx, half_y + dcy},
						  { half_x - dcx,-half_y + dcy},
						  {-half_x - dcx,-half_y + dcy}}
	  object.tex_coords = texture_box(UL_X,UL_Y,W,H, 2048,64)
	  object.indices	  = box_indices
	  return object
end
 
function create_ADI_tex(ADI_material, UL_X,UL_Y,DR_X,DR_Y, sale,CENTER_X,CENTER_Y)

if sale == nil then
	sale = 1.4
end

local mils_per_pixel =  sale/1024
local W 	   		 = DR_X - UL_X
local H 	   		 = DR_Y - UL_Y
local cx		     = (UL_X + 0.5 * W)
local cy		     = (UL_Y + 0.5 * H)

local CENTER_X 		 = CENTER_X or cx
local CENTER_Y 		 = CENTER_Y or cy
local dcx 		 	 = mils_per_pixel * (CENTER_X - cx)
local dcy 		     = mils_per_pixel * (CENTER_Y - cy)

local half_x 		 = 0.47 * W * mils_per_pixel
local half_y 		 = 0.49 * H * mils_per_pixel


local object = CreateElement "ceTexPoly"
	  object.material =  ADI_material
 	  object.vertices =  {{-half_x - dcx, half_y + dcy},
						  { half_x - dcx, half_y + dcy},
						  { half_x - dcx,-half_y + dcy},
						  {-half_x - dcx,-half_y + dcy}}
	  object.tex_coords = texture_box(UL_X,UL_Y,W,H, 2048, 2048)
	  object.indices	  = box_indices
	  return object
end

function create_ADI_tex1(ADI_material, UL_X,UL_Y,DR_X,DR_Y, sale, CENTER_X,CENTER_Y)

if sale == nil then
	sale = 5
end

local mils_per_pixel =  sale/1024

local W 	   		 = DR_X - UL_X
local H 	   		 = DR_Y - UL_Y
local cx		     = (UL_X + 0.5 * W)
local cy		     = (UL_Y + 0.5 * H)

local CENTER_X 		 = CENTER_X or cx
local CENTER_Y 		 = CENTER_Y or cy
local dcx 		 	 = mils_per_pixel * (CENTER_X - cx)
local dcy 		     = mils_per_pixel * (CENTER_Y - cy)

local half_x 		 = 0.5 * W * mils_per_pixel
local half_y 		 = 0.5 * H * mils_per_pixel

local object = CreateElement "ceTexPoly"
	  object.material =  ADI_material
 	  object.vertices =  {{-half_x - dcx, half_y + dcy},
						  { half_x - dcx, half_y + dcy},
						  { half_x - dcx,-half_y + dcy},
						  {-half_x - dcx,-half_y + dcy}}
	  object.tex_coords = texture_box(UL_X,UL_Y,W,H, 1024, 1024)
	  object.indices	  = box_indices
	  object.element_params  = {"ADI_BRIGHT" }
	  object.controllers     = {{"opacity_using_parameter", 0}}
	  return object
end

function create_hdg_textr_box(vth_hdg_material, UL_X,UL_Y,DR_X,DR_Y,scale, CENTER_X,CENTER_Y)

if scale == nil then
	scale = 1.4
end

local mils_per_pixel =  scale/4096

local W 	   		 = DR_X - UL_X
local H 	   		 = DR_Y - UL_Y
local cx		     = (UL_X + 0.5 * W)
local cy		     = (UL_Y + 0.5 * H)

local CENTER_X 		 = CENTER_X or cx
local CENTER_Y 		 = CENTER_Y or cy
local dcx 		 	 = mils_per_pixel * (CENTER_X - cx)
local dcy 		     = mils_per_pixel * (CENTER_Y - cy)

local half_x 		 = 0.5 * W * mils_per_pixel
local half_y 		 = 0.5 * H * mils_per_pixel

local object = CreateElement "ceTexPoly"
	  object.material =  vth_hdg_material
 	  object.vertices =  {{-half_x - dcx, half_y + dcy},
						  { half_x - dcx, half_y + dcy},
						  { half_x - dcx,-half_y + dcy},
						  {-half_x - dcx,-half_y + dcy}}
	  object.tex_coords = texture_box(UL_X,UL_Y,W,H, 4096,64)
	  object.indices	  = box_indices
	  return object
end

function create_ADI_tex_hud(ADI_material, UL_X,UL_Y,DR_X,DR_Y, sale, CENTER_X,CENTER_Y)

if sale == nil then
	sale = 4.5
end

local mils_per_pixel =  sale/2801

local W 	   		 = DR_X - UL_X
local H 	   		 = DR_Y - UL_Y
local cx		     = (UL_X + 0.5 * W)
local cy		     = (UL_Y + 0.5 * H)

local CENTER_X 		 = CENTER_X or cx
local CENTER_Y 		 = CENTER_Y or cy
local dcx 		 	 = mils_per_pixel * (CENTER_X - cx)
local dcy 		     = mils_per_pixel * (CENTER_Y - cy)

local half_x 		 = 0.5 * W * mils_per_pixel
local half_y 		 = 0.5 * H * mils_per_pixel


local object = CreateElement "ceTexPoly"
	  object.material =  ADI_material
 	  object.vertices =  {{-half_x - dcx, half_y + dcy},
						  { half_x - dcx, half_y + dcy},
						  { half_x - dcx,-half_y + dcy},
						  {-half_x - dcx,-half_y + dcy}}
	  object.tex_coords = texture_box(UL_X,UL_Y,W,H, 2048, 2048)
	  object.indices	  = box_indices
	  object.element_params  = {"ADI_BRIGHT" }
	  object.controllers     = {{"opacity_using_parameter", 0}}
	  return object
end

function create_hdg_textr_box(vth_hdg_material, UL_X,UL_Y,DR_X,DR_Y,scale, CENTER_X,CENTER_Y)

if scale == nil then
	scale = 1.4
end

local mils_per_pixel =  scale/4096

local W 	   		 = DR_X - UL_X
local H 	   		 = DR_Y - UL_Y
local cx		     = (UL_X + 0.5 * W)
local cy		     = (UL_Y + 0.5 * H)

local CENTER_X 		 = CENTER_X or cx
local CENTER_Y 		 = CENTER_Y or cy
local dcx 		 	 = mils_per_pixel * (CENTER_X - cx)
local dcy 		     = mils_per_pixel * (CENTER_Y - cy)

local half_x 		 = 0.5 * W * mils_per_pixel
local half_y 		 = 0.5 * H * mils_per_pixel


local object = CreateElement "ceTexPoly"
	  object.material =  vth_hdg_material
 	  object.vertices =  {{-half_x - dcx, half_y + dcy},
						  { half_x - dcx, half_y + dcy},
						  { half_x - dcx,-half_y + dcy},
						  {-half_x - dcx,-half_y + dcy}}
	  object.tex_coords = texture_box(UL_X,UL_Y,W,H, 4096,64)
	  object.indices	  = box_indices
	  return object
end

function create_ADI_tex_sq(ADI_material, UL_X,UL_Y,DR_X,DR_Y, sale,CENTER_X,CENTER_Y)

if sale == nil then
	sale = 1.4
end

local mils_per_pixel =  sale/1024
local W 	   		 = DR_X - UL_X
local H 	   		 = DR_Y - UL_Y
local cx		     = (UL_X + 0.5 * W)
local cy		     = (UL_Y + 0.5 * H)

local CENTER_X 		 = CENTER_X or cx
local CENTER_Y 		 = CENTER_Y or cy
local dcx 		 	 = mils_per_pixel * (CENTER_X - cx)
local dcy 		     = mils_per_pixel * (CENTER_Y - cy)

local half_x 		 = 0.5 * W * mils_per_pixel
local half_y 		 = 0.5 * H * mils_per_pixel


local object = CreateElement "ceTexPoly"
	  object.material =  ADI_material
 	  object.vertices =  {{-half_x - dcx, half_y + dcy},
						  { half_x - dcx, half_y + dcy},
						  { half_x - dcx,-half_y + dcy},
						  {-half_x - dcx,-half_y + dcy}}
	  object.tex_coords = texture_box(UL_X,UL_Y,W,H,2048,2048)
	  object.indices	  = box_indices
	  return object
end

function create_hdg_text_d(UL_X,UL_Y,DR_X,DR_Y, CENTER_X,CENTER_Y)
local mils_per_pixel =  2.2/1024

local W 	   		 = DR_X - UL_X
local H 	   		 = DR_Y - UL_Y
local cx		     = (UL_X + 0.5 * W)
local cy		     = (UL_Y + 0.5 * H)

local CENTER_X 		 = CENTER_X or cx
local CENTER_Y 		 = CENTER_Y or cy
local dcx 		 	 = mils_per_pixel * (CENTER_X - cx)
local dcy 		     = mils_per_pixel * (CENTER_Y - cy)

local half_x 		 = 0.5 * W * mils_per_pixel
local half_y 		 = 0.5 * H * mils_per_pixel
local object = CreateElement "ceTexPoly"
	  object.material =  ADI_RPM_DIGIT_D
 	  object.vertices =  {{-half_x - dcx, half_y + dcy},
						  { half_x - dcx, half_y + dcy},
						  { half_x - dcx,-half_y + dcy},
						  {-half_x - dcx,-half_y + dcy}}
	  object.tex_coords = texture_box(UL_X,UL_Y,W,H, 31, 324)
	  object.indices	  = box_indices
	  return object
end

function ADI_vert_gen(width, height)
    return {{(0 - width) / 2 / default_ADI_x , (0 + height) / 2 / default_ADI_y},
    {(0 + width) / 2 / default_ADI_x , (0 + height) / 2 / default_ADI_y},
    {(0 + width) / 2 / default_ADI_x , (0 - height) / 2 / default_ADI_y},
    {(0 - width) / 2 / default_ADI_x , (0 - height) / 2 / default_ADI_y},}
end

function ADI_duo_vert_gen(width, total_height, not_include_height)
    return {
        {(0 - width) / 2 / default_ADI_x , (0 + total_height) / 2 / default_ADI_y},
        {(0 + width) / 2 / default_ADI_x , (0 + total_height) / 2 / default_ADI_y},
        {(0 + width) / 2 / default_ADI_x , (0 + not_include_height) / 2 / default_ADI_y},
        {(0 - width) / 2 / default_ADI_x , (0 + not_include_height) / 2 / default_ADI_y},
        {(0 + width) / 2 / default_ADI_x , (0 - not_include_height) / 2 / default_ADI_y},
        {(0 - width) / 2 / default_ADI_x , (0 - not_include_height) / 2 / default_ADI_y},
        {(0 + width) / 2 / default_ADI_x , (0 - total_height) / 2 / default_ADI_y},
        {(0 - width) / 2 / default_ADI_x , (0 - total_height) / 2 / default_ADI_y},
    }
end

function tex_coord_gen(x_dis,y_dis,width,height,size_X,size_Y)
    return {{x_dis / size_X , y_dis / size_Y},
			{(x_dis + width) / size_X , y_dis / size_Y},
			{(x_dis + width) / size_X , (y_dis + height) / size_Y},
			{x_dis / size_X , (y_dis + height) / size_Y},}
end

function mirror_tex_coord_gen(x_dis,y_dis,width,height,size_X,size_Y)
    return {{(x_dis + width) / size_X , y_dis / size_Y},
			{x_dis / size_X , y_dis / size_Y},
			{x_dis / size_X , (y_dis + height) / size_Y},
			{(x_dis + width) / size_X , (y_dis + height) / size_Y},}
end
 
function create_line(PosX, PosY, lLenght, lwidth, parent, material, vertices)
	vmaterial =  materials["MWHITE"]
	if material ~= nil then
		vmaterial =  materials[material]
	end
	vvertices = {{0, 0}, {lLenght,0}}
	if vertices ~= nil then
		vvertices = vertices
	end	
	line_object				 = CreateElement "ceSimpleLineObject"
	line_object.name		 = create_guid_string()
	line_object.material	 = vmaterial
	line_object.width		 = lwidth
	line_object.vertices	 =  vvertices
	line_object.init_pos     = {PosX, PosY}
	if parent ~= nil then
		line_object.parent_element	= parent.name
	end
	line_object.element_params = {"ADI_BRIGHT"}
	line_object.controllers	   = {{"opacity_using_parameter", 0}} 	
	-- AddElement(line_object)
	return line_object
end

function create_rect1(xpos, ypos, bw, bh, Border, parent, material)
	local rec_parent       		= CreateElement "ceSimple"
	rec_parent.name				= create_guid_string()
	rec_parent.init_pos       	= {xpos, ypos}
	rec_parent.parent_element	= parent.name
	
	local  rect_top_line 		= create_line(0 ,0 , bw * 2, Border, rec_parent, material)
	rect_top_line.init_pos 		= {-bw,bh}
	AddElement(rect_top_line)

	local  rect_bottom_line = Copy(rect_top_line)
	rect_bottom_line.init_pos 	= {-bw, -bh}
	AddElement(rect_bottom_line)

	local  rect_left_line 		= create_line(Border ,0 , Border, bh , rec_parent, material)
	rect_left_line.init_pos 	= {-bw +(Border ) - 0.005, 0}
	AddElement(rect_left_line)

	local  rect_right_line = Copy(rect_left_line)
	rect_right_line.init_pos 	= { bw -(Border ) , 0}
	AddElement(rect_right_line)
	
	return rec_parent
end

function create_rect(xpos, ypos, bw, bh, Border, parent, material)
	local rec_parent       		= CreateElement "ceSimple"
	rec_parent.name				= create_guid_string()
	rec_parent.init_pos       	= {xpos, ypos}
	if parent ~= nil then
		rec_parent.parent_element	= parent.name
	end
	AddElement(rec_parent)
	
	AddElement( create_line(0,  bh, 0.3, Border, rec_parent, material , {{-bw, 0}, { bw , 0}}) ) -- top
	AddElement( create_line(0, -bh, 0.3, Border, rec_parent, material, {{-bw, 0}, { bw , 0}}) )  -- bottom
	
	AddElement( create_line(-bw+Border, 0, 0.3, Border, rec_parent, material, {{0, -bh}, { 0, bh }}) ) -- left
	AddElement( create_line( bw-Border, 0, 0.3, Border, rec_parent, material, {{0, -bh}, { 0, bh }}) ) -- right
	return rec_parent
end

function AddArcCircle(xpos, ypos, radius, arc, border, parent_element, fill, color)
	vmaterial =  materials["MWHITE"]
	if border <=0 then
		border = 1
	end
	if color ~= nil then
		vmaterial =  materials[color]
	end
		RWR_circle_i 				= CreateElement "ceMeshPoly"
		RWR_circle_i.name 			= create_guid_string()
		RWR_circle_i.primitivetype 	= "triangles"
		RWR_circle_i.init_pos       = {xpos, ypos}
		-- RWR_circle_i.init_rot		= {90, 0, 0}
		RWR_circle_i.element_params    = {"ADI_BRIGHT"}
		RWR_circle_i.controllers       = {{"opacity_using_parameter", 0}}	
		if fill == true then
			set_circle	(RWR_circle_i, radius + 0.0020 )
		else
			set_circle	(RWR_circle_i, radius + (border / 1000), radius, arc, 36)
		end
		RWR_circle_i.material 		= vmaterial
		if parent_element ~= nil then
			RWR_circle_i.parent_element = parent_element.name
		end
		-- AddElement(RWR_circle_i)
	return RWR_circle_i
end

function AddCircle(xpos, ypos, radius, border, parent_element, fill, color)
	vmaterial =  materials["MWHITE"]
	if border <=0 then
		border = 1
	end
	if color ~= nil then
		vmaterial =  materials[color]
	end
	for i=1, border do
		RWR_circle_i 				= CreateElement "ceMeshPoly"
		RWR_circle_i.name 			= create_guid_string()
		RWR_circle_i.primitivetype 	= "triangles"
		RWR_circle_i.init_pos       = {xpos, ypos}
		RWR_circle_i.element_params    = {"ADI_BRIGHT"}
		RWR_circle_i.controllers       = {{"opacity_using_parameter", 0}}	
		if fill == true then
			set_circle	(RWR_circle_i, radius + 0.0020 )
		else
			set_circle	(RWR_circle_i, radius + 0.0020, radius - 0.0020, 360, 36)
		end
		RWR_circle_i.material 		= vmaterial
		if parent_element ~= nil then
			RWR_circle_i.parent_element = parent_element
		end
		AddElement(RWR_circle_i)
		radius = radius + 0.001
	end
	-- return RWR_circle_i
end

function AddCircleClip2(xpos, ypos, radius, border, parent_element, fill, color, level)
	vmaterial =  materials["MWHITE"]
	if border <=0 then
		border = 1
	end
	if color ~= nil then
		vmaterial =  materials[color]
	end	
	if level == nil then
		level =  ADI_DEFAULT_LEVEL   + 1
	end
	for i=1, border do
		RWR_circle_i 				= CreateElement "ceMeshPoly"
		RWR_circle_i.name 			= create_guid_string()
		RWR_circle_i.primitivetype 	= "triangles"
		RWR_circle_i.init_pos       = {xpos, ypos}
		RWR_circle_i.element_params    = {"ADI_BRIGHT"}
		RWR_circle_i.controllers       = {{"opacity_using_parameter", 0}}	
		-- RWR_circle_i.h_clip_relation   = h_clip_relations.INCREASE_IF_LEVEL 
		-- RWR_circle_i.level  		   = level
		if fill == true then
			set_circle	(RWR_circle_i, radius + 0.0020 )
		else
			set_circle	(RWR_circle_i, radius + 0.0020, radius - 0.0020, 360, 36)
		end
		RWR_circle_i.material 		= vmaterial
		if parent_element ~= nil then
			RWR_circle_i.parent_element = parent_element
		end
		AddElement_a(RWR_circle_i)
		radius = radius + 0.001
	end
	-- return RWR_circle_i
end

function AddCircleClip(xpos, ypos, radius, border, parent_element, fill, color)
	vmaterial =  materials["MWHITE"]
	if border <=0 then
		border = 1
	end
	if color ~= nil then
		vmaterial =  materials[color]
	end
	for i=1, border do
		RWR_circle_i 				= CreateElement "ceMeshPoly"
		RWR_circle_i.name 			= create_guid_string()
		RWR_circle_i.primitivetype 	= "triangles"
		RWR_circle_i.init_pos       = {xpos, ypos}
		RWR_circle_i.element_params    = {"ADI_BRIGHT"}
		RWR_circle_i.controllers       = {{"opacity_using_parameter", 0}}	
		RWR_circle_i.h_clip_relation   = h_clip_relations.INCREASE_IF_LEVEL 
		RWR_circle_i.level  		 	  = ADI_DEFAULT_LEVEL 
		if fill == true then
			set_circle	(RWR_circle_i, radius + 0.0020 )
		else
			set_circle	(RWR_circle_i, radius + 0.0020, radius - 0.0020, 360, 36)
		end
		RWR_circle_i.material 		= vmaterial
		if parent_element ~= nil then
			RWR_circle_i.parent_element = parent_element
		end
		AddElement(RWR_circle_i)
		radius = radius + 0.001
	end
	-- return RWR_circle_i
end

function AddCircle_b(xpos, ypos, radius, border, parent_element, fill , color)

	local rec_parent       		= CreateElement "ceSimple"
	rec_parent.name				= create_guid_string()
	rec_parent.init_pos       	= {xpos, ypos}
	rec_parent.parent_element	= parent_element
	-- AddElement(rec_parent)
	
	if border <=0 then
		border = 1
	end
	if color == nil then
		color =  "DBG_GREEN"
	end
	for i=1, border do
		    RWR_circle_i 				= CreateElement "ceMeshPoly"
			RWR_circle_i.name 			= create_guid_string()
			RWR_circle_i.primitivetype 	= "triangles"
			RWR_circle_i.init_pos       = {0 , 0}
			if fill == true then
				set_circle	(RWR_circle_i, radius + 0.0020 )
			else
				set_circle	(RWR_circle_i, radius + 0.0020, radius - 0.0020, 360, 36)
			end
			RWR_circle_i.material 		= color
			RWR_circle_i.parent_element = rec_parent.name
			AddElement(RWR_circle_i)
			radius = radius + 0.001
	end
	return rec_parent
end
 
function add_text(text, posx, posy, pparent, vstringdefs, font_mat, valign)
	-------------------
	if valign == nil then
		valign = "CenterCenter"
	end
	if font_mat == nil then
		font_mat = "FONT_GREEN"
	end
	
	if vstringdefs == nil then
		vstringdefs = ADI_strdefs_text
	end		
	-------------------
	local parent          = CreateElement "ceStringPoly"
	parent.name           = create_guid_string()
	parent.material       = fonts[font_mat]
	parent.init_pos       = {posx, posy}
	parent.stringdefs     = vstringdefs
	parent.alignment	  = valign
	parent.value  	      = text
	parent.element_params    = {"ADI_BRIGHT"}
	parent.controllers       = {{"opacity_using_parameter", 0}}	
	if pparent ~= nil then
		parent.parent_element	= pparent.name
	end	
-- AddElement(parent)	
	-------------------
	return parent
end

function add_text_param(posx, posy, element_parm, tformat, pparent, stringdefs, font_mat, talignment)
	if tformat == nil then
		tformat = "%.0f"
	end
	if talignment == nil then
		talignment = "CenterCenter"
	end
	vfont_mat = fonts["FONT_GREEN"]
	if font_mat ~= nil then
		vfont_mat = fonts[font_mat]
	end	
	if stringdefs == nil then
		stringdefs = ADI_strdefs_text
	end	
	
	local parent          = CreateElement "ceStringPoly"
	parent.name           = create_guid_string()
	parent.material       = vfont_mat
	parent.init_pos       = {posx, posy}
	parent.stringdefs     = stringdefs
	parent.alignment	  = talignment
	if pparent ~= nil then
		parent.parent_element = pparent.name
	end
	parent.formats           = {tformat} 
	parent.element_params    = {"ADI_BRIGHT", element_parm }
	parent.controllers       = {{"opacity_using_parameter", 0},  {"text_using_parameter",1},}
	AddElement(parent)
	-------------------
	return parent
end

function ellipse(a,b,phi_start,phi_end)
	local a_start = phi_start or 0
	local a_end   = phi_end   or 2 * math.pi
	
	if a_end < 0 then 
	   a_end = a_end + 2 * math.pi
	end
	
	local point = function (phi)
		local  cp = math.cos(phi)
		local  sp = math.sin(phi)
		
		local  bc = b * cp
		local  as = a * sp
		
		local  r = a * b / math.sqrt(bc * bc + as * as)

		return {r * sp,r * cp}
	end
	
	local vertices  = {{0,0},point(a_start)}
	local indices = {}
	
	local step = (a_end - a_start) / 128
	
	for i = 1, 128 do 
		
		local new_cpp_index = #vertices
		
		vertices[new_cpp_index + 1] = point(a_start + i * step)

		indices[#indices + 1] = 0
		indices[#indices + 1] = new_cpp_index - 1
		indices[#indices + 1] = new_cpp_index
	end
	
	local last_cpp_index = #vertices - 1
		
	indices[#indices + 1] = 0
	indices[#indices + 1] = last_cpp_index
	indices[#indices + 1] = 1
	
	
	local elem  	  = CreateElement("ceMeshPoly")
	elem.primitivetype = "triangles"
	elem.vertices	  = vertices
	elem.indices	  = indices
	elem.material     = MakeMaterial("",{200,0,200,255})
	-- Add(elem)
	return elem
end

function AddElementObject2(object)
    if object.name == nil or string.len(object.name) < 1 then
        object.name        = create_guid_string()
    end
    -- if type(object.stringdefs) ~= "table" or next(object.stringdefs) == nil then
        -- object.stringdefs        = CADI_STRINGDEFS_DEF
    -- end
    if object.h_clip_relation == nil then
        object.h_clip_relation   = h_clip_relations.COMPARE
    end
    Add(object)
end

function AddMenuOption(vnumber, value, parent_element, PAGE_ID, SUBPAGE_ID)
	vstringdefs					= {0.0060,0.0013,0.0,0}
	xpos = 0
	ypos = 0
	direction_rot = 0
	vNB_BTN = 0
	
	local xstep = 0.32
	local ystep = 0.32
	if NB_BTN == 7 then
		vNB_BTN = 1
		xstep = 0.27
		ystep = 0.27
		if vnumber > 4 then vnumber = vnumber + 1 end 
		if vnumber == 23 then vnumber = 5 end 
	else
		if vnumber >= 22 then return true end
	end
	
	if (vnumber >= 0 and vnumber <= 4 + vNB_BTN)  then
		xpos = -0.67 + ( (vnumber) * xstep)
		ypos = 0.94  
	elseif vnumber >= 5 + vNB_BTN and vnumber <= 9 + vNB_BTN then
		xpos = 0.91
		ypos = 0.63 - ((vnumber - (5 + vNB_BTN)) * ystep)
		direction_rot = 90
	elseif vnumber >= 10 + vNB_BTN and vnumber <= 14 + vNB_BTN then
		xpos = 0.63 - ((vnumber - (10 + vNB_BTN)) * xstep)
		ypos = -0.902
	elseif vnumber >= 15 + vNB_BTN  and vnumber <= 20 + vNB_BTN then
		xpos = -0.95
		ypos = -0.74 + ((vnumber - (15 + vNB_BTN)) * ystep)
		direction_rot = 90
	end
	
	local text_menu = add_text(value, xpos, ypos, parent_element,  vstringdefs, "FONT_GREEN","CenterCenter")
	
	if PAGE_ID ~= nil then
		local rec_parent 	= create_rect(xpos, ypos, 0.13, 0.04, 0.004, parent_element , "DGREEN")
		rec_parent.init_rot	= {direction_rot, 0}
		
		if SUBPAGE_ID ~= nil then									   
			rec_parent.element_params = {"SU27SM3_MODE", "SU30ADI"..SU30ADIID.."S"..SUBPAGE_ID}
			rec_parent.controllers	  = { {"parameter_compare_with_number",0, PAGE_ID},
										  {"parameter_in_range"			 ,1,0.5,1.1} 
										}
		else
			rec_parent.element_params = {"SU27SM3_MODE" }
			rec_parent.controllers	  = {{"parameter_compare_with_number",0, PAGE_ID }, 
										  
									}
		end
	end
	
	AddElement(text_menu)
	return text_menu
end
 


