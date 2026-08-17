local res = external_profile("Config/Input/Aircrafts/base_joystick_binding.lua")
ignore_features(res.keyCommands,{
"a2aBVR"
})
local VikhrOnly = _('(Dual "Vikhr" launch)')
join(res.keyCommands,{

-- Autopilot
{down = iCommandPlaneAutopilot, name = _('Autopilot'), category = _('Autopilot')},
{down = iCommandPlaneSAUHBarometric, name = _('Autopilot - Barometric Altitude Hold \'H\''), category = _('Autopilot')},
{down = iCommandPlaneAutopilotOverrideOn, up = iCommandPlaneAutopilotOverrideOff, name = _('Autopilot override'), category = _('Autopilot')},
{down = iCommandPlaneStabTangBank, name = _('Autopilot - Attitude Hold'), category = _('Autopilot')},
{down = iCommandPlaneStabHbarBank, name = _('Autopilot - Altitude And Roll Hold'), category = _('Autopilot')},
{down = iCommandPlaneStabHorizon,	name = _('Autopilot - Transition To Level Flight Control'), category = _('Autopilot')},
{down = iCommandPlaneStabHbar, name = _('Autopilot - Barometric Altitude Hold'), category = _('Autopilot')},
{down = iCommandPlaneStabHrad, name = _('Autopilot - Radar Altitude Hold'), category = _('Autopilot')},
{down = iCommandPlaneRouteAutopilot, name = _('Autopilot - \'Route following\''), category = _('Autopilot')},
{down = iCommandPlaneStabCancel, name = _('Autopilot Disengage'), category = _('Autopilot')},

-- Systems
{down = iCommandPlaneJettisonFuelTanks, name = _('Jettison Fuel Tanks'), category = _('Systems')},
{down = iCommandPlaneHUDFilterOnOff, name = _('HUD Color Filter On/Off'), category = _('Systems')},

-- Modes
{down = iCommandPlaneModeFI0, name = _('(6) Longitudinal Missile Aiming Mode'), category = _('Modes')},
{down = iCommandPlaneModeGrid, name = _('(8) Gunsight Reticle Switch'), category = _('Modes')},

-- Sensors
{down = iCommandPlaneChangeLock, up = iCommandPlaneChangeLockUp, name = _('Target Lock'), category = _('Sensors')},
{down = iCommandSensorReset, name = _('Target Unlock'), category = _('Sensors')},
{down = iCommandPlaneRadarOnOff, name = _('ELINT Pod On/Off'), category = _('Sensors')},
{down = iCommandPlaneRadarCenter, name = _('Target Designator To Center'), category = _('Sensors')},
{down = iCommandPlaneEOSOnOff, name = _('Electro-Optical System On/Off'), category = _('Sensors')},
{down = iCommandPlaneLaserRangerOnOff, name = _('Laser Ranger On/Off'), category = _('Sensors')},
{down = iCommandPlaneNightTVOnOff, name = _('Night Vision (FLIR or LLTV) On/Off'), category = _('Sensors')},
{pressed = iCommandPlaneRadarUp, up = iCommandPlaneRadarStop, name = _('Target Designator Up'), category = _('Sensors')},
{pressed = iCommandPlaneRadarDown, up = iCommandPlaneRadarStop, name = _('Target Designator Down'), category = _('Sensors')},
{pressed = iCommandPlaneRadarLeft, up = iCommandPlaneRadarStop, name = _('Target Designator Left'), category = _('Sensors')},
{pressed = iCommandPlaneRadarRight, up = iCommandPlaneRadarStop, name = _('Target Designator Right'), category = _('Sensors')},

{down = iCommandPlaneZoomIn, name = _('Display Zoom In'), category = _('Sensors')},
{down = iCommandPlaneZoomOut, name = _('Display Zoom Out'), category = _('Sensors')},
{down = iCommandDecreaseRadarScanArea, name = _('Target Size / Gunpod Elevation Decrease Stepping'), category = _('Sensors')},
{down = iCommandIncreaseRadarScanArea, name = _('Target Size / Gunpod Elevation Increase Stepping'), category = _('Sensors')},
{pressed = iCommandPlaneIncreaseBase_Distance, up = iCommandPlaneStopBase_Distance, name = _('Target Size / Gunpod Elevation Increase'), category = _('Sensors')},
{pressed = iCommandPlaneDecreaseBase_Distance, up = iCommandPlaneStopBase_Distance, name = _('Target Size / Gunpod Elevation Decrease'), category = _('Sensors')},
{down = iCommandChangeRWRMode, name = _('RWR/SPO Mode Select'), category = _('Sensors')},
{down = iCommandPlaneThreatWarnSoundVolumeDown, name = _('RWR/SPO Sound Signals Volume Down'), category = _('Sensors')},
{down = iCommandPlaneThreatWarnSoundVolumeUp, name = _('RWR/SPO Sound Signals Volume Up'), category = _('Sensors')},

-- Weapons                                                                        
{down = iCommandPlaneSalvoOnOff, name = _('Salvo Mode')..' '..VikhrOnly, category = _('Weapons')},
--{combos = defaultDeviceAssignmentFor("weapon_release_button"), down = iCommandPlanePickleOn,	up = iCommandPlanePickleOff, name = _('Weapon Release'), category = _('Weapons')},
{down = iCommandChangeGunRateOfFire, name = _('Cut Of Burst select'), category = _('Weapons')},
{down = iCommandChangeRippleQuantity, name = _('Ripple Quantity Select/SPPU select'), category = _('Weapons')},
{down = iCommandChangeRippleInterval, name = _('Ripple Interval Increase'), category = _('Weapons')},
{down = iCommandChangeRippleIntervalDown, name = _('Ripple Interval Decrease'), category = _('Weapons')},

-- Countermeasures
{down = iCommandActiveIRJamming, name = _('IR Jamming'), category = _('Countermeasures')},

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

})

return res

