local res = external_profile("Config/Input/Aircrafts/base_keyboard_binding.lua")

local MM_DevID 	= 6,	--MFD MOD device ID
local  MM_Cat 	= 'MFD',	--MFD MOD category

ignore_features(res.keyCommands,{
"a2aBVR"
})
local VikhrOnly = _('(Dual "Vikhr" launch)')
join(res.keyCommands,{

-- Autopilot
{combos = {{key = 'A'}}, down = iCommandPlaneAutopilot, name = _('Autopilot'), category = _('Autopilot')},
{combos = {{key = 'H'}}, down = iCommandPlaneSAUHBarometric, name = _('Autopilot - Barometric Altitude Hold \'H\''), category = _('Autopilot')},
{combos = {{key = 'A', reformers = {'LAlt'}}}, down = iCommandPlaneAutopilotOverrideOn, up = iCommandPlaneAutopilotOverrideOff, name = _('Autopilot override'), category = _('Autopilot')},
{combos = {{key = '1', reformers = {'LAlt'}}}, down = iCommandPlaneStabTangBank, name = _('Autopilot - Attitude Hold'), category = _('Autopilot')},
{combos = {{key = '2', reformers = {'LAlt'}}}, down = iCommandPlaneStabHbarBank, name = _('Autopilot - Altitude And Roll Hold'), category = _('Autopilot')},
{combos = {{key = '3', reformers = {'LAlt'}}}, down = iCommandPlaneStabHorizon,	name = _('Autopilot - Transition To Level Flight Control'), category = _('Autopilot')},
{combos = {{key = '4', reformers = {'LAlt'}}}, down = iCommandPlaneStabHbar, name = _('Autopilot - Barometric Altitude Hold'), category = _('Autopilot')},
{combos = {{key = '5', reformers = {'LAlt'}}}, down = iCommandPlaneStabHrad, name = _('Autopilot - Radar Altitude Hold'), category = _('Autopilot')},
{combos = {{key = '6', reformers = {'LAlt'}}}, down = iCommandPlaneRouteAutopilot, name = _('Autopilot - \'Route following\''), category = _('Autopilot')},
{combos = {{key = '9', reformers = {'LAlt'}}}, down = iCommandPlaneStabCancel, name = _('Autopilot Disengage'), category = _('Autopilot')},

-- Systems
--{combos = {{key = 'R', reformers = {'LCtrl'}}}, down = iCommandPlaneAirRefuel, name = _('Refueling Boom'), category = _('Systems')},
{combos = {{key = 'R', reformers = {'LAlt'}}}, down = iCommandPlaneJettisonFuelTanks, name = _('Jettison Fuel Tanks'), category = _('Systems')},
{combos = {{key = '6'}}, down = iCommandPlaneModeFI0, name = _('(6) Longitudinal Missile Aiming Mode'), category = _('Modes')},
{combos = {{key = '8'}}, down = iCommandPlaneModeGrid, name = _('(8) Gunsight Reticle Switch'), category = _('Modes')},


{combos = {{key = 'H', reformers = {'RShift'}}}, down = iCommandPlaneHUDFilterOnOff, name = _('HUD Color Filter On/Off'), category = _('Systems')},

-- Sensors
{combos = defaultDeviceAssignmentFor("lock_aircraft"), down = iCommandPlaneChangeLock, up = iCommandPlaneChangeLockUp, name = _('Target Lock'), category = _('Sensors')},
{combos = defaultDeviceAssignmentFor("unlock_target"), down = iCommandSensorReset, name = _('Target Unlock'), category = _('Sensors')},
{combos = {{key = 'I'}}, down = iCommandPlaneRadarOnOff, name = _('ELINT Pod On/Off'), category = _('Sensors')},
--{combos = {{key = 'I', reformers = {'RAlt'}}}, down = iCommandPlaneRadarChangeMode, name = _('Radar RWS/TWS Mode Select'), category = _('Sensors')},
{combos = {{key = 'I', reformers = {'RCtrl'}}}, down = iCommandPlaneRadarCenter, name = _('Target Designator To Center'), category = _('Sensors')},
--{combos = {{key = 'I', reformers = {'RShift'}}}, down = iCommandPlaneChangeRadarPRF, name = _('Radar Pulse Repeat Frequency Select'), category = _('Sensors')},
{combos = {{key = 'O'}}, down = iCommandPlaneEOSOnOff, name = _('Electro-Optical System On/Off'), category = _('Sensors')},
{combos = {{key = 'O', reformers = {'RShift'}}}, down = iCommandPlaneLaserRangerOnOff, name = _('Laser Ranger On/Off'), category = _('Sensors')},
{combos = {{key = 'O', reformers = {'RCtrl'}}}, down = iCommandPlaneNightTVOnOff, name = _('Night Vision (FLIR or LLTV) On/Off'), category = _('Sensors')},
{combos = {{key = ';'}}, pressed = iCommandPlaneRadarUp, up = iCommandPlaneRadarStop, name = _('Target Designator Up'), category = _('Sensors')},
{combos = {{key = '.'}}, pressed = iCommandPlaneRadarDown, up = iCommandPlaneRadarStop, name = _('Target Designator Down'), category = _('Sensors')},
{combos = {{key = ','}}, pressed = iCommandPlaneRadarLeft, up = iCommandPlaneRadarStop, name = _('Target Designator Left'), category = _('Sensors')},
{combos = {{key = '/'}}, pressed = iCommandPlaneRadarRight, up = iCommandPlaneRadarStop, name = _('Target Designator Right'), category = _('Sensors')},
--{combos = {{key = ';', reformers = {'RShift'}}}, pressed = iCommandSelecterUp, up = iCommandSelecterStop, name = _('Scan Zone Up'), category = _('Sensors')},
--{combos = {{key = '.', reformers = {'RShift'}}}, pressed = iCommandSelecterDown, up = iCommandSelecterStop, name = _('Scan Zone Down'), category = _('Sensors')},
--{combos = {{key = ',', reformers = {'RShift'}}}, pressed = iCommandSelecterLeft, up = iCommandSelecterStop, name = _('Scan Zone Left'), category = _('Sensors')},
--{combos = {{key = '/', reformers = {'RShift'}}}, pressed = iCommandSelecterRight, up = iCommandSelecterStop, name = _('Scan Zone Right'), category = _('Sensors')},
{combos = {{key = '='}}, down = iCommandPlaneZoomIn, name = _('Display Zoom In'), category = _('Sensors')},
{combos = {{key = '-'}}, down = iCommandPlaneZoomOut, name = _('Display Zoom Out'), category = _('Sensors')},
{combos = {{key = ']', reformers = {'RAlt'}}}, down = iCommandDecreaseRadarScanArea, name = _('Target Size / Gunpod Elevation Decrease Stepping'), category = _('Sensors')},
{combos = {{key = '[', reformers = {'RAlt'}}}, down = iCommandIncreaseRadarScanArea, name = _('Target Size / Gunpod Elevation Increase Stepping'), category = _('Sensors')},
{combos = {{key = ']', reformers = {'RCtrl'}}}, pressed = iCommandPlaneIncreaseBase_Distance, up = iCommandPlaneStopBase_Distance, name = _('Target Size / Gunpod Elevation Increase'), category = _('Sensors')},
{combos = {{key = '[', reformers = {'RCtrl'}}}, pressed = iCommandPlaneDecreaseBase_Distance, up = iCommandPlaneStopBase_Distance, name = _('Target Size / Gunpod Elevation Decrease'), category = _('Sensors')},
{combos = {{key = 'R', reformers = {'RShift'}}}, down = iCommandChangeRWRMode, name = _('RWR/SPO Mode Select'), category = _('Sensors')},
{combos = {{key = ',', reformers = {'RAlt'}}}, down = iCommandPlaneThreatWarnSoundVolumeDown, name = _('RWR/SPO Sound Signals Volume Down'), category = _('Sensors')},
{combos = {{key = '.', reformers = {'RAlt'}}}, down = iCommandPlaneThreatWarnSoundVolumeUp, name = _('RWR/SPO Sound Signals Volume Up'), category = _('Sensors')},

-- Weapons                                                                        
{combos = {{key = 'V', reformers = {'LCtrl'}}}, down = iCommandPlaneSalvoOnOff, name = _('Salvo Mode')..' '..VikhrOnly, category = _('Weapons')},
--{combos = defaultDeviceAssignmentFor("weapon_release_button"), down = iCommandPlanePickleOn,	up = iCommandPlanePickleOff, name = _('Weapon Release'), category = _('Weapons')},
{combos = {{key = 'C', reformers = {'LShift'}}}, down = iCommandChangeGunRateOfFire, name = _('Cut Of Burst select'), category = _('Weapons')},
{combos = {{key = 'Space', reformers = {'LCtrl'}}}, down = iCommandChangeRippleQuantity, name = _('Ripple Quantity Select/SPPU select'), category = _('Weapons')},
{combos = {{key = 'V'}}, down = iCommandChangeRippleInterval, name = _('Ripple Interval Increase'), category = _('Weapons')},
{combos = {{key = 'V', reformers = {'LShift'}}}, down = iCommandChangeRippleIntervalDown, name = _('Ripple Interval Decrease'), category = _('Weapons')},

-- Countermeasures
{combos = {{key = 'E', reformers = {'LShift'}}}, down = iCommandActiveIRJamming, name = _('IR Jamming'), category = _('Countermeasures')},

-- RADIO 1
{down = iCommandDynamicRadioPushToTalkEnableVoice, up = iCommandDynamicRadioPushToTalkDisableVoice, value_down = 0.1, value_up = 0.0, name = _('r.1 VoIP PTT'), category = {_('Radio'), _('Radio 1')} },
{down = iCommandDynamicRadioModulationNext, value_down = 0.1, value_up = 0.0, name = _('r.1 Modulation change'), category = {_('Radio'), _('Radio 1')} },
{down = iCommandDynamicRadioFreqChangeSelectorNext, value_down = 0.1, value_up = 0.0, name = _('r.1 Frequency change selector'), category = {_('Radio'), _('Radio 1')} },
{down = iCommandDynamicRadioFrequencyUp, value_down = 0.1, value_up = 0.0, name = _('r.1 Frequency up'), category = {_('Radio'), _('Radio 1')} },
{down = iCommandDynamicRadioFrequencyDown, value_down = 0.1, value_up = 0.0, name = _('r.1 Frequency down'), category = {_('Radio'), _('Radio 1')} },
{down = iCommandDynamicRadioChannelIncrease, value_down = 0.1, value_up = 0.0, name = _('r.1 Channel increase'), category = {_('Radio'), _('Radio 1')} },
{down = iCommandDynamicRadioChannelDecrease, value_down = 0.1, value_up = 0.0, name = _('r.1 Channel decrease'), category = {_('Radio'), _('Radio 1')} },
{down = iCommandDynamicRadioGuardChangeNext, value_down = 0.1, value_up = 0.0, name = _('r.1 Guard change'), category = {_('Radio'), _('Radio 1')} },
{down = iCommandDynamicRadioEncryptionOnOff, value_down = 0.1, value_up = 0.0, name = _('r.1 Encryption On/Off'), category = {_('Radio'), _('Radio 1')} },
{down = iCommandDynamicRadioPowerChangeNext, value_down = 0.1, value_up = 0.0, name = _('r.1 Power change'), category = {_('Radio'), _('Radio 1')} },
{down = iCommandDynamicRadioSquelchOnOff, value_down = 0.1, value_up = 0.0, name = _('r.1 Squelch On/Off'), category = {_('Radio'), _('Radio 1')} },
{down = iCommandDynamicRadioVolumeUp, value_down = 0.1, value_up = 0.0, name = _('r.1 Volume up'), category = {_('Radio'), _('Radio 1')} },
{down = iCommandDynamicRadioVolumeDown, value_down = 0.1, value_up = 0.0, name = _('r.1 Volume down'), category = {_('Radio'), _('Radio 1')} },
{down = iCommandDynamicRadioBalanceLeft, value_down = 0.1, value_up = 0.0, name = _('r.1 Balance left'), category = {_('Radio'), _('Radio 1')} },
{down = iCommandDynamicRadioBalanceRight, value_down = 0.1, value_up = 0.0, name = _('r.1 Balance right'), category = {_('Radio'), _('Radio 1')} },

-- RADIO 2
{down = iCommandDynamicRadioPushToTalkEnableVoice, up = iCommandDynamicRadioPushToTalkDisableVoice, value_down = 0.2, value_up = 0.0, name = _('r.2 VoIP PTT'), category = {_('Radio'), _('Radio 2')} },
{down = iCommandDynamicRadioModulationNext, value_down = 0.2, value_up = 0.0, name = _('r.2 Modulation change'), category = {_('Radio'), _('Radio 2')}},
{down = iCommandDynamicRadioFreqChangeSelectorNext, value_down = 0.2, value_up = 0.0, name = _('r.2 Frequency change selector'), category = {_('Radio'), _('Radio 2')}},
{down = iCommandDynamicRadioFrequencyUp, value_down = 0.2, value_up = 0.0, name = _('r.2 Frequency up'), category = {_('Radio'), _('Radio 2')}},
{down = iCommandDynamicRadioFrequencyDown, value_down = 0.2, value_up = 0.0, name = _('r.2 Frequency down'), category = {_('Radio'), _('Radio 2')}},
{down = iCommandDynamicRadioChannelIncrease, value_down = 0.2, value_up = 0.0, name = _('r.2 Channel increase'), category = {_('Radio'), _('Radio 2')}},
{down = iCommandDynamicRadioChannelDecrease, value_down = 0.2, value_up = 0.0, name = _('r.2 Channel decrease'), category = {_('Radio'), _('Radio 2')}},
{down = iCommandDynamicRadioGuardChangeNext, value_down = 0.2, value_up = 0.0, name = _('r.2 Guard change'), category = {_('Radio'), _('Radio 2')}},
{down = iCommandDynamicRadioEncryptionOnOff, value_down = 0.2, value_up = 0.0, name = _('r.2 Encryption On/Off'), category = {_('Radio'), _('Radio 2')}},
{down = iCommandDynamicRadioPowerChangeNext, value_down = 0.2, value_up = 0.0, name = _('r.2 Power change'), category = {_('Radio'), _('Radio 2')}},
{down = iCommandDynamicRadioSquelchOnOff, value_down = 0.2, value_up = 0.0, name = _('r.2 Squelch On/Off'), category = {_('Radio'), _('Radio 2')}},
{down = iCommandDynamicRadioVolumeUp, value_down = 0.2, value_up = 0.0, name = _('r.2 Volume up'), category = {_('Radio'), _('Radio 2')}},
{down = iCommandDynamicRadioVolumeDown, value_down = 0.2, value_up = 0.0, name = _('r.2 Volume down'), category = {_('Radio'), _('Radio 2')}},
{down = iCommandDynamicRadioBalanceLeft, value_down = 0.2, value_up = 0.0, name = _('r.2 Balance left'), category = {_('Radio'), _('Radio 2')}},
{down = iCommandDynamicRadioBalanceRight, value_down = 0.2, value_up = 0.0, name = _('r.2 Balance right'), category = {_('Radio'), _('Radio 2')}},




--MFD MOD-------------------------------------------------------------------------------------------------------------------------------------------
{down = 3001, up = 3001, cockpit_device_id = MM_DevID, value_down = 1.0, value_up = 0.0, name = _('MFD UP')  	, category = _(MM_Cat)},
{down = 3002, up = 3002, cockpit_device_id = MM_DevID, value_down = 1.0, value_up = 0.0, name = _('MFD RIGHT')  , category = _(MM_Cat)},
{down = 3003, up = 3003, cockpit_device_id = MM_DevID, value_down = 1.0, value_up = 0.0, name = _('MFD DOWN')  	, category = _(MM_Cat)},
{down = 3004, up = 3004, cockpit_device_id = MM_DevID, value_down = 1.0, value_up = 0.0, name = _('MFD LEFT')  	, category = _(MM_Cat)},

{down = 3005, up = 3005, cockpit_device_id = MM_DevID, value_down = 1.0, value_up = 0.0, name = _('MFD ENTER')  , category = _(MM_Cat)},
{down = 3006, up = 3006, cockpit_device_id = MM_DevID, value_down = 1.0, value_up = 0.0, name = _('MFD CANCEL') , category = _(MM_Cat)},
----------------------------------------------------------------------------------------------------------------------------------------------------

})
return res

