dofile(LockOn_Options.script_path.."MFD/pages/ccMFD_MOD_definitions.lua")
local function show(o)
    o.element_params=o.element_params or {}
    table.insert(o.element_params,"MM_MFD_PAGE_RBE2")
    o.controllers=o.controllers or {}
    table.insert(o.controllers,{"parameter_in_range",#o.element_params-1,0.5,1.5})
    o.parent_element=o.parent_element or "mfd_base"
    o.level=MDF_DEFAULT_LEVEL
    Add(o)
end
local bg=CreateElement("ceMeshPoly");bg.primitivetype="triangles";bg.vertices={{-.74,.74},{.74,.74},{.74,-.74},{-.74,-.74}};bg.indices={0,1,2,0,2,3};bg.material=MFCD_BG_BLACK;show(bg)
local function ring(r)
 local c=CreateElement("ceMeshPoly");c.primitivetype="lines";c.vertices={};c.indices={}
 for i=0,63 do local a=2*math.pi*i/64;local b=2*math.pi*(i+1)/64;c.vertices[#c.vertices+1]={r*math.sin(a),r*math.cos(a)};c.vertices[#c.vertices+1]={r*math.sin(b),r*math.cos(b)};c.indices[#c.indices+1]=2*i;c.indices[#c.indices+1]=2*i+1 end
 c.material=MFCD_GREEN_50;show(c)
end
ring(.25);ring(.5);ring(.75)
local title=CreateElement("ceStringPoly");title.material=MFD_BTN_FONT;title.stringdefs=mfd_txt_head_stringdefs;title.alignment="CenterCenter";title.value="RBE2";title.init_pos={0,.78};show(title)
local function mode_label(text,val)
 local o=CreateElement("ceStringPoly");o.material=MFD_BTN_FONT;o.stringdefs=mfd_txt_box_stringdefs;o.alignment="LeftTop";o.value=text;o.init_pos={-.70,.68};o.element_params={"RBE2_MODE","MM_MFD_PAGE_RBE2"};o.controllers={{"parameter_in_range",0,val-.1,val+.1},{"parameter_in_range",1,.5,1.5}};Add(o)
end
mode_label("RWS",1);mode_label("TWS",2);mode_label("STT",3);mode_label("GMT",4);mode_label("SAR",5)
local rt=CreateElement("ceStringPoly");rt.material=MFD_BTN_FONT;rt.stringdefs=mfd_txt_box_stringdefs;rt.alignment="RightTop";rt.formats={"%3.0f NM"};rt.init_pos={.70,.68};rt.element_params={"RBE2_RANGE","MM_MFD_PAGE_RBE2"};rt.controllers={{"text_using_parameter",0,0},{"parameter_in_range",1,.5,1.5}};Add(rt)
for i=1,16 do
 local id=string.format("%02d",i)
 local d=CreateElement("ceMeshPoly");d.primitivetype="lines";d.vertices={{-.018,0},{.018,0},{0,-.018},{0,.018}};d.indices={0,1,2,3};d.material=MFCD_GREEN
 d.element_params={"RBE2_TRACK_"..id.."_X","RBE2_TRACK_"..id.."_Y","RBE2_TRACK_"..id.."_VIS","MM_MFD_PAGE_RBE2"}
 d.controllers={{"move_left_right_using_parameter",0,.74},{"move_up_down_using_parameter",1,.74},{"parameter_in_range",2,.5,1.5},{"parameter_in_range",3,.5,1.5}};d.parent_element="mfd_base";d.level=MDF_DEFAULT_LEVEL;Add(d)
end
local c=CreateElement("ceMeshPoly");c.primitivetype="lines";c.vertices={{-.025,0},{.025,0},{0,-.025},{0,.025}};c.indices={0,1,2,3};c.material=MFCD_CURSOR;c.element_params={"RBE2_TDC_AZ","RBE2_TDC_EL","MM_MFD_PAGE_RBE2"};c.controllers={{"move_left_right_using_parameter",0,.74},{"move_up_down_using_parameter",1,.74},{"parameter_in_range",2,.5,1.5}};c.parent_element="mfd_base";c.level=MDF_DEFAULT_LEVEL;Add(c)
