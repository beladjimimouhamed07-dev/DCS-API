/*
 * CockpitBase.dll class reconstruction
 * Function: ~avDate
 * Address : 7ffada5f2250
 * Role    : destructor
 * Vtable slots: 14, 15, 19, 31, 32
 */


/* public: __cdecl cockpit::avDate::~avDate(void) __ptr64 */

void __thiscall cockpit::avDate::~avDate(avDate *this)

{
                    /* 0x1e2250  757  ??1avDate@cockpit@@QEAA@XZ
                       0x1e2250  809  ??1avMotor@cockpit@@QEAA@XZ
                       0x1e2250  810  ??1avMotor_Additive@cockpit@@QEAA@XZ
                       0x1e2250  865  ??1avTrackData@cockpit@@QEAA@XZ
                       0x1e2250  1941  ?DropSnar@avAN_ALE_40V@cockpit@@MEAAXEHD@Z
                       0x1e2250  1942  ?DropSnar@avChaffFlareDispencer@cockpit@@MEAAXEHD@Z
                       0x1e2250  2004  ?InitContainersPayload@avAN_ALE_40V@cockpit@@MEAAXXZ
                       0x1e2250  2005  ?InitContainersPayload@avChaffFlareDispencer@cockpit@@MEAAXXZ
                       0x1e2250  2095  ?OnBeginFrame@ccIndicatorBake@cockpit@@MEAAXXZ
                       0x1e2250  2099
                       ?OnCockpitEvent@avDevice@cockpit@@UEAAXAEBV?$basic_string@D@ed@@AEBV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                       0x1e2250  2101
                       ?OnCockpitEvent@avILS@cockpit@@UEAAXAEBV?$basic_string@D@ed@@AEBV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                       0x1e2250  2105
                       ?OnCockpitEvent@avTACAN@cockpit@@UEAAXAEBV?$basic_string@D@ed@@AEBV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                       0x1e2250  2106
                       ?OnCockpitEvent@ccDrawable@cockpit@@UEAAXAEBV?$basic_string@D@ed@@AEBV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                       0x1e2250  2126  ?OnPowerOn@avBaseIKP@cockpit@@MEAAXPEBUCSignalInfo@lwl@@@Z
                       0x1e2250  2129  ?PrepareParser@ccIndicator@cockpit@@MEAAXXZ
                       0x1e2250  2134  ?RegisterInScript@ccDrawable@cockpit@@MEAAXPEAUlua_State@@@Z
                       0x1e2250  2154  ?SetCommand@avADI@cockpit@@UEAAXHM@Z
                       0x1e2250  2156  ?SetCommand@avAHRS@cockpit@@UEAAXHM@Z
                       0x1e2250  2165  ?SetCommand@avBiruzaGuidanceModule@cockpit@@UEAAXHM@Z
                       0x1e2250  2167  ?SetCommand@avDNS@cockpit@@UEAAXHM@Z
                       0x1e2250  2169  ?SetCommand@avDevice@cockpit@@UEAAXHM@Z
                       0x1e2250  2171  ?SetCommand@avEkranControl@cockpit@@UEAAXHM@Z
                       0x1e2250  2172  ?SetCommand@avElectroMagneticDetector@cockpit@@UEAAXHM@Z
                       0x1e2250  2173  ?SetCommand@avHSI@cockpit@@UEAAXHM@Z
                       0x1e2250  2180  ?SetCommand@avINS@cockpit@@UEAAXHM@Z
                       0x1e2250  2187  ?SetCommand@avMLWS@cockpit@@UEAAXHM@Z
                       0x1e2250  2188  ?SetCommand@avMarkerReceiver@cockpit@@UEAAXHM@Z
                       0x1e2250  2189  ?SetCommand@avMechCompass@cockpit@@UEAAXHM@Z
                       0x1e2250  2191  ?SetCommand@avMechanicClock@cockpit@@UEAAXHM@Z
                       0x1e2250  2196  ?SetCommand@avRadarAltimeterBase@cockpit@@UEAAXHM@Z
                       0x1e2250  2203  ?SetCommand@avTW_Prime@cockpit@@UEAAXHM@Z
                       0x1e2250  2214  ?SetCommand@ccDrawable@cockpit@@UEAAXHM@Z
                       0x1e2250  2387  ?apply@ceSimple@cockpit@@UEAAXXZ
                       0x1e2250  2392  ?applyDifferentialCorrection@SNS_GPS@cockpit@@QEAAX_N@Z
                       0x1e2250  2432
                       ?brakes_value_actual@ccControlsIndicatorBase@cockpit@@SAXPEAVElement@2@PEAVccDrawable@2@AEBV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                       0x1e2250  2438  ?break_lock@eqAGM_65E@cockpit@@UEAAXXZ
                       0x1e2250  2604  ?checkAllSignals@avEkranControl@cockpit@@MEAAXXZ
                       0x1e2250  2605  ?checkAllSignals@avVMS@cockpit@@MEAAXXZ
                       0x1e2250  2666  ?check_camera_position@avKneeboard@cockpit@@MEAAXXZ
                       0x1e2250  2667  ?check_camera_scale@avKneeboard@cockpit@@MEAAXXZ
                       0x1e2250  2811  ?connect_electric@avBaseASP_3@cockpit@@MEAAXXZ
                       0x1e2250  2834  ?control@ccIndicator@cockpit@@UEAAXXZ
                       0x1e2250  2883  ?create_elements_controllers_map@ccIndicator@cockpit@@UEAAXXZ
                       0x1e2250  2991
                       ?draw_temporal_set@ccIndicator@cockpit@@UEAAXPEAVElement@2@IE@Z
                       0x1e2250  3043
                       ?external_parse@avDevice@cockpit@@UEAAXAEAVModelParser@Graphics@@AEBV?$wPosition3@M@@PEAVeffectState@4@@Z
                       0x1e2250  4205
                       ?get_screen_params@ccIndicator@cockpit@@UEAAXAEAV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                       0x1e2250  4419  ?imgui_render@ceFont@cockpit@@UEAAXXZ
                       0x1e2250  4420  ?imgui_update@SNS_GPS@cockpit@@QEAAXXZ
                       0x1e2250  4451  ?initLimits@avIgla_seeker@cockpit@@IEAAXXZ
                       0x1e2250  4452  ?initLimits@avR60Seeker@cockpit@@IEAAXXZ
                       0x1e2250  4453  ?initLimits@avR73seeker@cockpit@@IEAAXXZ
                       0x1e2250  4454  ?initLimits@avSidewinderSeeker@cockpit@@IEAAXXZ
                       0x1e2250  4480
                       ?init_geometry@ceFont@cockpit@@UEAAXAEAVRenderObjectDyn@Graphics@@@Z
                       0x1e2250  5032  ?load_dials@DynamicBaseRadio@cockpit@@UEAAXAEAVConfig@Lua@@@Z
                       0x1e2250  5034  ?load_dials@avRadio_MAC@cockpit@@MEAAXAEAVConfig@Lua@@@Z
                       0x1e2250  5045  ?load_presets@avR_828@cockpit@@MEAAXXZ
                       0x1e2250  5057  ?log@ceHint@cockpit@@UEAAXAEAV?$basic_string@D@ed@@_N@Z
                       0x1e2250  5060  ?log_self@ceSimple@cockpit@@MEAAXAEAV?$basic_string@D@ed@@@Z
                       0x1e2250  5168  ?onAddTo@ccPanelGauge@cockpit@@UEAAXPEAVccMainPanel@2@@Z
                       0x1e2250  5171  ?onAxesStop@avIgla_seeker@cockpit@@MEAAXXZ
                       0x1e2250  5180
                       ?onDamage@AIGunnersManager@gunner_AI@@UEAAXW4wcCoalitionName@@IIIM@Z
                       0x1e2250  5199  ?onPowerOff@avTACAN@cockpit@@MEAAXPEBUCSignalInfo@lwl@@@Z
                       0x1e2250  5200  ?onPowerOn@avTACAN@cockpit@@MEAAXPEBUCSignalInfo@lwl@@@Z
                       0x1e2250  5207  ?onRemoveFrom@ccPanelGauge@cockpit@@UEAAXPEAVccMainPanel@2@@Z
                       0x1e2250  5227  ?on_frequency_changed@avBaseARC@cockpit@@MEAAXXZ
                       0x1e2250  5228  ?on_frequency_changed@avBaseRadio@cockpit@@MEAAXXZ
                       0x1e2250  5250  ?on_update_position@avPlatform@cockpit@@MEAAXN@Z
                       0x1e2250  5277
                       ?parking_brake@ccControlsIndicatorBase@cockpit@@SAXPEAVElement@2@PEAVccDrawable@2@AEBV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                       0x1e2250  5282
                       ?parse_for_render@ccMainPanel@cockpit@@UEAAXAEBV?$wPosition3@M@@AEAVModelParser@Graphics@@@Z
                       0x1e2250  5294  ?perform_update@ccMouseHandler@cockpit@@MEAAXXZ
                       0x1e2250  5312  ?postProcess@avRWRearly@cockpit@@MEAAXXZ
                       0x1e2250  5341  ?post_initialize@avDevice@cockpit@@UEAAXXZ
                       0x1e2250  5343  ?post_initialize@avEkranControl@cockpit@@UEAAXXZ
                       0x1e2250  5346  ?post_initialize@avFMProxyBase@cockpit@@UEAAXXZ
                       0x1e2250  5353  ?post_initialize@avINSinterface@navigation@cockpit@@QEAAXXZ
                       0x1e2250  5360  ?post_initialize@avKneeboard@cockpit@@UEAAXXZ
                       0x1e2250  5362  ?post_initialize@avMechanicAccelerometer@cockpit@@UEAAXXZ
                       0x1e2250  5365  ?post_initialize@avRadarAltimeterBase@cockpit@@UEAAXXZ
                       0x1e2250  5366  ?post_initialize@avSNS_GPS_Listener@cockpit@@UEAAXXZ
                       0x1e2250  5382  ?post_initialize@ccCrewIndicatorBase@cockpit@@UEAAXXZ
                       0x1e2250  5383  ?post_initialize@ccDrawable@cockpit@@UEAAXXZ
                       0x1e2250  5384  ?post_initialize@ccIndicator@cockpit@@UEAAXXZ
                       0x1e2250  5385  ?post_initialize@ccK14GunSight@cockpit@@UEAAXXZ
                       0x1e2250  5386  ?post_initialize@ccMainPanel@cockpit@@UEAAXXZ
                       0x1e2250  5394  ?precreate@ceHint@cockpit@@UEAAXXZ
                       0x1e2250  5418  ?prolongate@avTVSensor@cockpit@@MEAAXN@Z
                       0x1e2250  5424  ?pushAnglesForAlignment@avIMUv2@cockpit@@QEAAXVVec3d@osg@@@Z
                       0x1e2250  5451  ?pushTrueAirSpeed@avINSinterface@navigation@cockpit@@QEAAXN@Z
                       0x1e2250  5504  ?recalculate_gyro_mode@avTVSensor@cockpit@@MEAAXXZ
                       0x1e2250  5543  ?release@avAPN_209@cockpit@@UEAAXXZ
                       0x1e2250  5563  ?release@avMarkerReceiver@cockpit@@UEAAXXZ
                       0x1e2250  5566  ?release@avNavigation_MAC@cockpit@@UEAAXXZ
                       0x1e2250  5575  ?release@avTW_Prime@cockpit@@UEAAXXZ
                       0x1e2250  5582  ?release@avVMS@cockpit@@UEAAXXZ
                       0x1e2250  5640  ?repeat@avVMS_ALMAZ_UP@cockpit@@MEAAXXZ
                       0x1e2250  5709  ?save_dials@DynamicBaseRadio@cockpit@@UEBAXXZ
                       0x1e2250  5711  ?save_dials@avRadio_MAC@cockpit@@MEBAXXZ
                       0x1e2250  5727  ?scan_stop@avTVSensor@cockpit@@MEAAXXZ
                       0x1e2250  5734  ?search@avA2GRadar@cockpit@@UEAAXXZ
                       0x1e2250  5743  ?search@eqAGM_65E@cockpit@@UEAAXXZ
                       0x1e2250  5757
                       ?self_render@ceSimple@cockpit@@MEAAXAEAVccIndicationRenderParser@2@@Z
                       0x1e2250  5761  ?selftest@avVMS@cockpit@@UEAAXXZ
                       0x1e2250  6108  ?setToCheckGeometry@ceHint@cockpit@@UEAAX_N@Z
                       0x1e2250  6148
                       ?setWorkingConstellation@SNSinterface@cockpit@@QEAAXV?$initializer_list@H@std@@@Z
                       0x1e2250  6216  ?set_contrast@ceHint@cockpit@@UEAAXM@Z
                       0x1e2250  6266  ?set_draw@GestureComplex@cockpit@@UEAAX_N@Z
                       0x1e2250  6276  ?set_external_designation@avBasicSensor@cockpit@@UEAAX_N0@Z
                       0x1e2250  6285  ?set_forced_color@ceHint@cockpit@@UEAAXAEBVVec3f@osg@@@Z
                       0x1e2250  6286  ?set_forced_color@ceHint@cockpit@@UEAAXMMM@Z
                       0x1e2250  6303  ?set_geometry_child@ceHint@cockpit@@UEAAXPEAVElement@2@@Z
                       0x1e2250  6305  ?set_geometry_host@ceHint@cockpit@@UEAAXPEAVElement@2@@Z
                       0x1e2250  6353
                       ?set_mat_params@ceFont@cockpit@@UEAAXAEBVccIndicationRenderParser@2@PEAVRenderObject@Graphics@@@Z
                       0x1e2250  6407  ?set_position@ceHint@cockpit@@UEAAXAEBV?$wPosition3@M@@@Z
                       0x1e2250  6468  ?set_system@SNS_GPS@cockpit@@UEAAXI@Z
                       0x1e2250  6470  ?set_system@SNSv2@cockpit@@UEAAXI@Z
                       0x1e2250  6491  ?set_use_contrast@ceHint@cockpit@@UEAAX_N@Z
                       0x1e2250  6494  ?set_use_forced_color@ceHint@cockpit@@UEAAX_N@Z
                       0x1e2250  6497  ?set_use_root_params@ceHint@cockpit@@UEAAX_N@Z
                       0x1e2250  6499  ?set_use_temporal_set@ceHint@cockpit@@UEAAX_NI@Z
                       0x1e2250  6514  ?setchild_element@ceHint@cockpit@@UEAAXPEAVElement@2@@Z
                       0x1e2250  6521  ?setparent_element@ceHint@cockpit@@UEAAXPEAVElement@2@@Z
                       0x1e2250  6550  ?simulate_loop_antenna@avBaseARC@cockpit@@MEAAXN@Z
                       0x1e2250  6551  ?simulate_signal_strength@avBaseARC@cockpit@@MEAAXN@Z
                       0x1e2250  6558  ?slaveToDirection@avIRSensor@cockpit@@UEAAXAEBVVec3d@osg@@@Z
                       0x1e2250  6618  ?startSlew@avIgla_seeker@cockpit@@MEAAXXZ
                       0x1e2250  6631  ?start_search@eqAGM_65E@cockpit@@IEAAXXZ
                       0x1e2250  6667  ?stop_search@eqAGM_65E@cockpit@@IEAAXXZ
                       0x1e2250  6748  ?trySetCommunicator@avIntercom@cockpit@@MEAAXI@Z
                       0x1e2250  6749  ?trySetCommunicator@avIntercomV2@cockpit@@MEAAXI@Z
                       0x1e2250  6822  ?update@avBasicOxygenSystemInterface@cockpit@@UEAAXXZ
                       0x1e2250  6828  ?update@avDevice@cockpit@@UEAAXXZ
                       0x1e2250  6844  ?update@avKneeboard@cockpit@@UEAAXXZ
                       0x1e2250  6996  ?update_communicator_state@avVHF_FuG16ZY@cockpit@@MEAAXXZ
                       0x1e2250  7085  ?zoom_in@eqAGM_65E@cockpit@@UEAAXXZ
                       0x1e2250  7089  ?zoom_out@eqAGM_65E@cockpit@@UEAAXXZ
                       0x1e2250  7129  ed_cockpit_voip_enable_bare_voice
                       0x1e2250  7135  ed_cockpit_voip_modify_crew_bare_voice_volume */
  return;
}

