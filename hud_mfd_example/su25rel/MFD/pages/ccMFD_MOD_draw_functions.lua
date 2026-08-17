

--[[--EXAMPLE
local 	obj_name		= add_gauge("test",						--just a name to reference object
									MDF_DEFAULT_LEVEL,
									0.25,						--radius of the gauge
									MFCD_LIGHT_GRAY,			--gauge color back
									MFCD_TEXT_GREEN,			--gauge color rotation index
									{0,0,0},					--initial position	-- {0.0,+0.01,0.0} because its actualy has party below INITpos
									{"MM_AC_ENG_L_RPM_ROT"},	--Handle of the rotation in RAD (1-180 degrees)
									"RPM %",					-- Descriptiv text
									MFD_BTN_FONT,				--font of descriptiv text	
									mfd_txt_box_stringdefs,
									{"MM_AC_ENG_L_RPM_ROT"},	--param handl of the text value for the gauge value, expects a float %.0f
									"mfd_base_eng",
									90
									)
	]]--



function add_gauge(name,clip_level,radius,color_back,color_display,position,rot_param,text_desc,font_desc,string_defs,text_param,parent_ele,rotation)


local	element             	= CreateElement "ceSimple"
		element.name			= name .. "_base"
		element.init_pos		= position
		element.parent_element 	= parent_ele
		element.init_rot		= {rotation,0,0}
	Add(element)



	local   element 				= CreateElement "ceMeshPoly"
			element.name 			= name .. "_line_1"
			element.primitivetype 	= "triangles"
			element.vertices 		= {	{radius - 0.04, - 0.01},
										{radius - 0.04,   0},
										{radius + 0.04,   0},
										{radius + 0.04, - 0.01},
										
										{-radius - 0.04, - 0.01},
										{-radius - 0.04,   0},
										{-radius + 0.04,   0},
										{-radius + 0.04, - 0.01},
										}
			element.indices  		= { 0, 1, 2, 
										0, 2, 3,
										
										4, 5, 6,
										4, 6, 7,}
			element.material 		= color_back
			element.h_clip_relation	= h_clip_relations.COMPARE
			element.level			= clip_level
			element.isdraw		 	= true
			element.parent_element 	= name .. "_base"	
		Add(element)



	-----------------
	local	element			   		= CreateElement "ceMeshPoly"
			element.name		   	= name .. "_circle_base"
			element.primitivetype	= "triangles"					
			set_circle					(element,
										 radius + 0.005,
										 radius - 0.005,
										 180, 
										 32)					
			element.init_rot	   	= {90.0, 0.0, 0.0}
			element.material     	= color_back
			element.h_clip_relation	= h_clip_relations.COMPARE
			element.level 			= clip_level
			element.parent_element 	= name .. "_base"
	Add(element)
	-----------------
	local   element 				= CreateElement "ceMeshPoly"
			element.name 			= name .. "_blocker_1"
			element.primitivetype 	= "triangles"
			element.vertices 		= {	{-radius - 0.1, -radius - 0.1},
										{-radius - 0.1, -0.0001},
										{ radius + 0.1, -0.0001},
										{ radius + 0.1, -radius - 0.1}}
			element.indices  		= default_box_indices
			element.material 		= color_back
			element.h_clip_relation	= h_clip_relations.INCREASE_IF_LEVEL
			element.level			= clip_level
			element.isdraw		 	= true
			element.isvisible 		= false
			element.parent_element 	= name .. "_base"
		Add(element)
	-------------------------------------------------------------------------------------
	
	local	element			   		= CreateElement "ceMeshPoly"
			element.name		   	= name .. "_circle_gauge"
			element.primitivetype	= "triangles"	
			set_circle					(element,
										 radius + 0.015,
										 radius - 0.015,
										 180, 
										 32)	
			element.init_rot	   	= {90.0  + 180 -0, 0.0, 0.0}
			element.material     	= color_display
			element.parent_element 	= name .. "_base"
			element.h_clip_relation	= h_clip_relations.COMPARE
			element.level 			= clip_level
			element.element_params	= rot_param
			element.controllers 	= {{"rotate_using_parameter",0,-1},}
	Add(element)

	-------------------------------------------------------------------------------------
	local   element 				= CreateElement "ceMeshPoly"
			element.name 			= name .. "_blocker_2"
			element.primitivetype 	= "triangles"
			element.vertices 		= {	{-radius - 0.1, -radius - 0.1},
										{-radius - 0.1, -0.0001},
										{ radius + 0.1, -0.0001},
										{ radius + 0.1, -radius - 0.1}}
			element.indices  		= default_box_indices
			element.init_pos 		= position
			element.material 		= color_back
			element.h_clip_relation	= h_clip_relations.DECREASE_IF_LEVEL
			element.level			= clip_level + 1
			element.isdraw		 	= true
			element.isvisible 		= false
			element.parent_element 	= name .. "_base"
		Add(element)

	-----------------
	
	local 	element        			= CreateElement "ceStringPoly"
		element.name            	= name .. "_text_desc"
		element.material        	= font_desc
		element.alignment       	= "CenterBottom"
		element.stringdefs      	= string_defs
		element.formats         	= {"%s"} 
		element.value         		= text_desc  
		element.h_clip_relation		= h_clip_relations.COMPARE
		element.level				= clip_level
		element.parent_element 		= name .. "_base"
	Add(element)	
	
	local 	element        			= CreateElement "ceStringPoly"
		element.name            	= name .. "_text_rot"
		element.material        	= font_desc
		element.init_pos			= {0,radius-0.04,0}
		element.alignment       	= "CenterTop"
		element.stringdefs      	= string_defs
		element.formats         	= {"%.0f"}
		element.value         		= text_desc  
		element.h_clip_relation		= h_clip_relations.COMPARE
		element.level				= clip_level
		element.parent_element 		= name .. "_base"
		element.element_params  	= {"MM_AC_ENG_R_RPM_TEXT"}
		element.controllers     	= {{"text_using_parameter",0,0}}
	Add(element)	
	
		
end
--------END function add_gauge






	
	
	
	
	
	
	
	
	
	
	
	
function mm_make_circle_4_dot(radius)	--return verts,inds
	
	
	num_points = 130
	step = math.rad(360.0/num_points)

	verts = {}
	inds = {}
	j = 0
	for i = 1, num_points do
		verts[i] = {(radius * math.cos(i * step)), (radius * math.sin(i * step))}
	end

	for i = 4, 58 do		
	
		if math.floor(i/2) == (i/2) then
		
		else
			j = j + 1
			inds[j] = i 
			j = j + 1
			inds[j] = i + 1
		end
	end
	
	-----------------------------
	return verts,inds

end
	

	
----------------------------------------------------------------------------------

function mm_make_circle(radius)	--return verts,inds
	
	num_points = 32
	step = math.rad(360.0/num_points)

	verts = {}
	inds = {}
	j = 0
	for i = 1, num_points do
		verts[i] = {(radius * math.cos(i * step)), (radius * math.sin(i * step))}
	end

	for i = 0, 30 do
		
		j = j + 1
		inds[j] = i 
		j = j + 1
		inds[j] = i + 1
	end
	j=j+1
	inds[j] =31
	j=j+1
	inds[j] =0

	-----------------------------
	return verts,inds

end


function mm_make_circle_4(radius)	--return verts,inds
	
	num_points = 64--32
	step = math.rad(360.0/num_points)

	verts = {}
	inds = {}
	j = 0
	for i = 1, num_points do
		verts[i] = {(radius * math.cos(i * step)), (radius * math.sin(i * step))}
	end

	for i = 7, 22 do		--64
	
		j = j + 1
		inds[j] = i 
		j = j + 1
		inds[j] = i + 1
	end
	
	return verts,inds

end


function mm_make_circle_r2(radius)	--return verts,inds
	
	
	num_points = 32
	step = math.rad(360.0/num_points)

	verts = {}
	inds = {}
	j = 0
	for i = 1, num_points do
		verts[i] = {(radius * math.cos(i * step)), (radius * math.sin(i * step))}
	end

	for i = 7, 22 do		--64
	
		j = j + 1
		inds[j] = i 
		j = j + 1
		inds[j] = i + 1
	end

	return verts,inds

end



function mm_make_circle_r2_filled(radius)	--return verts,inds

	inner_radius = radius - 0.05
	outer_radius = radius + 0.05
	
	num_points = 32
	step = math.rad(360.0/num_points)

	verts = {}
	inds = {}
	j = 0
	for i = 1, num_points do
		verts[i] = {(outer_radius * math.cos(i * step)), (outer_radius * math.sin(i * step))}
	end
	
	for i = num_points+1, 2 * num_points do
		verts[i] = {(inner_radius * math.cos(i * step)), (inner_radius * math.sin(i * step))}
	end


	for i = 7, 22 do		
	
		j = j + 1
		inds[j] = i 
		j = j + 1
		inds[j] = i + 1
		
		j = j - 1 + 32
		inds[j] = i + 2
	end
	
	return verts,inds

end


	
