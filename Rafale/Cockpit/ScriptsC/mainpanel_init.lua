shape_name = "Cockpit_Rafale-C"

draw_pilot			= false
render_debug_info	= false

local default_view	= SnapViews[1][13]

mirrors_data =
{
--{x=0.420374006 y=-0.107384428 z=-0.297454894 }
	center_point		= {0.250, 0.05,0}, --Y, Z, X
	width 		 		= 1, --0.265
	aspect 		 		= 3, --1.5
	rotation 	 		= math.rad(-23.5),--13.5
	animation_speed		= 2.0, --2.0
	arg_value_when_on	= 1.0,
	flaps =
	{
		"pnt_497",
		"pnt_498",
		"pnt_499",
	}
}

local default_view		= SnapViews[1][13]
local eye_pos			= ViewSettings.Cockpit[1].EyePoint[1] or 0;
local default_v_angle	= math.rad(default_view.vAngle)
local default_x			= eye_pos * math.cos(default_v_angle) + default_view.x_trans
local default_y			= eye_pos * math.sin(default_v_angle) + default_view.y_trans
local default_z			= default_view.z_trans

desired_fight_adjustment =
{
	x	= 0.152   - default_x,
	y	= -0.001   - default_y,
	z	= 0.0295  - default_z,
	v_angle = -4.0 - default_v_angle
}

controllers = LoRegisterPanelControls()
---------------------------------------------------------------
-- CONTROLLERS
---------------------------------------------------------------
local function rad_(value)
	return math.rad(value)
end

local function CreateGaugeLocal(arg, input, output, controller, params)
	local gauge			= CreateGauge()
	gauge.arg_number	= arg
	gauge.input			= input
	gauge.output		= output
	gauge.controller	= controller

	if params ~= nil then
		gauge.params = params
	end

	return gauge
end

local function CreateSimpleGauge(arg, controller, params)
	local gauge = CreateGaugeLocal(arg, {-1.0, 1.0}, {-1.0, 1.0}, controller, params)
	return gauge
end

local function CreateConnectedGauge(external_arg, arg, input, output)
	local gauge			= CreateGauge("external_arg")
	gauge.external_arg	= external_arg
	gauge.arg_number	= arg
	gauge.input			= input
	gauge.output		= output
	return gauge
end

local function CreateSimpleConnectedGauge(external_arg, arg)
	local gauge = CreateConnectedGauge(external_arg, arg, {-1.0, 1.0}, {-1.0, 1.0})
	return gauge
end

-- PLT animations ----------------------------------------------------
pilot_draw	= CreateSimpleGauge(540, controllers.pilot_draw)

PLT_HeadTurnAz			= CreateSimpleConnectedGauge(39, 890)
PLT_HeadTurnEl			= CreateSimpleConnectedGauge(99, 891)
PLT_HeadTilt			= CreateSimpleConnectedGauge(533, 933)

PLT_ControlStickPitch	= CreateSimpleConnectedGauge(500, 900)
PLT_ControlStickRoll	= CreateSimpleConnectedGauge(501, 901)
PLT_Throttle			= CreateSimpleConnectedGauge(502, 902)
PLT_Throttle_correction	= CreateSimpleConnectedGauge(499, 899)
PLT_Rudder				= CreateSimpleConnectedGauge(503, 903)
PLT_LeftWheelBrake		= CreateSimpleConnectedGauge(505, 905)
PLT_RightWheelBrake		= CreateSimpleConnectedGauge(504, 904)

PLT_SaluteToRight		= CreateSimpleConnectedGauge(520, 920)
PLT_SaluteToLeft		= CreateSimpleConnectedGauge(521, 921)
PLT_CatapultLaunch		= CreateSimpleConnectedGauge(522, 922)

PLT_NVG_RaiseLower		= CreateSimpleConnectedGauge(506, 906)
PLT_JHMCS_RaiseLower	= CreateSimpleConnectedGauge(507, 907)
PLT_Visor_RaiseLower	= CreateSimpleConnectedGauge(508, 908)
PLT_HelmetMountedKit	= CreateSimpleConnectedGauge(509, 909)

PLT_Breath				= CreateSimpleConnectedGauge(523, 923)
PLT_Shaking				= CreateSimpleConnectedGauge(524, 924)

PLT_BodyShift_X			= CreateSimpleConnectedGauge(530, 930)
PLT_BodyShift_Z			= CreateSimpleConnectedGauge(531, 931)
PLT_BodyShift_Y			= CreateSimpleConnectedGauge(532, 932)

PLT_MaskHose_X			= CreateSimpleConnectedGauge(534, 934)
PLT_MaskHose_Z			= CreateSimpleConnectedGauge(535, 935)
PLT_MaskHose_Y			= CreateSimpleConnectedGauge(536, 936)

-- CANOPY ----------------------------------------------------
Canopy		= CreateSimpleConnectedGauge(38, 181)

-- MIRRORS ----------------------------------------------------
function create_mirror(arg_)
	local _mirrors_draw			= CreateGauge()
	_mirrors_draw.arg_number	= arg_
	_mirrors_draw.input			= {0,1}
	_mirrors_draw.output		= {0,1}
	_mirrors_draw.controller	= controllers.mirrors_draw
	return _mirrors_draw
end
create_mirror(497)
create_mirror(498)
create_mirror(499)

-- CAMERA ADJUSTMENT ------------------------------------------
CameraAdjustment	= CreateSimpleGauge(503, controllers.CameraAdjustment)

-- CONTROLS ---------------------------------------------------
StickPitch			= CreateSimpleConnectedGauge(395, 71)
StickRoll			= CreateSimpleConnectedGauge(396, 74)


need_to_be_closed = true -- close lua state after initialization

dofile(LockOn_Options.common_script_path.."tools.lua")

