-- this is used to find initial assignment  for joystick  with   defaultDeviceAssignmentFor in cases  when  diff file  is not provided by module 
local default_assignments = {
	["default"] = 
	{
		pitch = 'JOY_Y',
		roll = 'JOY_X',
		rudder = 'JOY_RZ',
		thrust = 'JOY_Z',
		fire = 'JOY_BTN1',
	}
}


local function INVERTED(key_)
	return
	{
		key		= key_,
		filter	= 
		{
			curvature 	= {0},
			deadzone  	= 0,
			invert 		= true,
			saturationX = 1,
			saturationY = 1,
			slider 		= false,
		},
	}
end


default_assignments["Keyboard"] = 
{
	pitch_up 					= {key = 'Up'},
	pitch_down 					= {key = 'Down'},
	roll_left 					= {key = 'Left'},
	roll_right 					= {key = 'Right'},
	rudder_left 				= {key = 'Z'},
	rudder_right 				= {key = 'X'},
	thrust_up 					= {key = 'Num+'},
	thrust_down 				= {key = 'Num-'},
	plane_trim_up 				= {key = '.', reformers = {'RCtrl'}},
	plane_trim_down 			= {key = ';', reformers = {'RCtrl'}},
	plane_trim_left 			= {key = ',', reformers = {'RCtrl'}},
	plane_trim_right 			= {key = '/', reformers = {'RCtrl'}},
	plane_gear 					= {key = 'G'},
	plane_flaps_off 			= {key = 'F', reformers = {'LCtrl'}},
	plane_flaps_on 				= {key = 'F', reformers = {'LShift'}},
	airbrake 					= {key = 'B'},
	wheel_brake 				= {key = 'W'},
	left_wheel_brake 			= {key = 'W', reformers = {'LCtrl'}},
	right_wheel_brake 			= {key = 'W', reformers = {'LAlt'}},
	plane_eject 				= {key = 'E', reformers = {'LCtrl'}},
	plane_mode_nav 				= {key = '1'},
	plane_mode_bvr 				= {key = '2'},
	plane_mode_ground 			= {key = '7'},
	lock_aircraft 				= {key = 'Enter'},    
	unlock_target 				= {key = 'Back'},
	plane_change_weapon 		= {key = 'D'},
	fire 						= {key = 'Space'},
	weapon_release_button 		= {key = 'Space', reformers = {'RAlt'}},
	drop_countermeasures 		= {key = 'Q'},
	electronic_countermeasures 	= {key = 'E'},
	radio_menu 					= {key = '\\'},
	chat 						= {key = 'Tab'},
}

default_assignments["CH PRO PEDALS USB "] = --note space on the end , it comes from vendor
{
	rudder	= 'JOY_Z',
}

default_assignments["CH PRO THROTTLE USB "] = --note space on the end , it comes from vendor
{
	thrust	= 'JOY_Z',
}

default_assignments	["Defender COBRA M5 USB Joystick"] = 
{
	thrust	= 'JOY_SLIDER1',
	pitch	= 'JOY_Y',
	roll	= 'JOY_X',
	rudder	= 'JOY_RZ',
	fire	= 'JOY_BTN1',
}

default_assignments	["Saitek Pro Flight X-55 Rhino Stick"] =
{
	pitch	= 'JOY_Y',
	roll	= 'JOY_X',
	rudder	= 'JOY_RZ',
	fire	= 'JOY_BTN1',
}

default_assignments	["Saitek Pro Flight X-55 Rhino Throttle"] = 
{
	thrust		 = 'JOY_X',
	thrust_left	 = 'JOY_X',
	thrust_right = 'JOY_Y',
}

default_assignments	["VKBsim Black Box "] = --note space on the end , it comes from vendor
{
	rudder	= 'JOY_RX',
}

default_assignments	["VKBsim Gladiator "] = --note space on the end , it comes from vendor
{
	pitch	= 'JOY_Y',
	roll	= 'JOY_X',
	thrust  = INVERTED("JOY_Z"),
}

default_assignments	["SideWinder Force Feedback 2 Joystick"] = 
{ 
	thrust	= 'JOY_SLIDER1',
	pitch	= 'JOY_Y',
	roll	= 'JOY_X',
	rudder	= 'JOY_RZ',
	fire	= 'JOY_BTN1',
}

default_assignments	["R-VPC Stick MT-50CM2"] = 
{
	pitch	= 'JOY_Y',
	roll	= 'JOY_X',
	rudder	= 'JOY_Z',
	fire	= 'JOY_BTN1',
}

default_assignments	["L-VPC Throttle MT-50CM3"] = 
{
	thrust		 = INVERTED('JOY_RX'),
	thrust_left	 = INVERTED('JOY_RX'),
	thrust_right = INVERTED('JOY_RY'),
}

default_assignments	["Throttle - HOTAS Warthog"] = 
{
	thrust		 = "JOY_RZ",
	thrust_left  = "JOY_RZ",
	thrust_right = "JOY_Z",	
}

default_assignments	["Joystick - HOTAS Warthog"] =
{
	pitch	= 'JOY_Y',
	roll	= 'JOY_X',
	fire	= 'JOY_BTN1',
}


default_assignments["VPC-Throttle"]				  = default_assignments["L-VPC Throttle MT-50CM3"]
default_assignments["VPC Throttle MT-50CM3"]	  = default_assignments["L-VPC Throttle MT-50CM3"]
default_assignments["LEFT VPC Throttle MT-50CM3"] = default_assignments["L-VPC Throttle MT-50CM3"]

default_assignments["RIGHT VPC Stick MT-50CM2"]   = default_assignments["R-VPC Stick MT-50CM2"]
default_assignments["RIGHT VPC Stick WarBRD"]	  = default_assignments["R-VPC Stick MT-50CM2"]
default_assignments["VPC WarBRD + MT50"]		  = default_assignments["R-VPC Stick MT-50CM2"]

default_assignments["VPC Rudder Pedals"] =
{
	rudder  = "JOY_Z"
}

return default_assignments
