#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: woShip
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woShip
{
public:

    // RVA: 0x91 | Ordinal: 146
        void AddATC(int, float);

    // RVA: 0x9A | Ordinal: 155
        void ChangePos(class wPosition3<float> const &);

    // RVA: 0x9C | Ordinal: 157
        void CheckIfPlaceholderNeeded(class ed::basic_string<char> &, struct Ship_Descriptor **);

    // RVA: 0xA2 | Ordinal: 163
        void Class(void) const;

    // RVA: 0xAB | Ordinal: 172
        void CommandSet(int);

    // RVA: 0xAC | Ordinal: 173
        void CommandSet(int, double);

    // RVA: 0xB0 | Ordinal: 177
        void ControlActive(int);

    // RVA: 0xB1 | Ordinal: 178
        void ControlDisturbance(int);

    // RVA: 0xB3 | Ordinal: 180
        void Course(void);

    // RVA: 0xC1 | Ordinal: 194
        void GetCommander(void) const;

    // RVA: 0xC4 | Ordinal: 197
        void GetDrawArguments(void);

    // RVA: 0xC7 | Ordinal: 200
        void GetKillRadius(class osg::Vec3f const &, class wsType const &, float *);

    // RVA: 0xD4 | Ordinal: 213
        void GetPoint(double);

    // RVA: 0xD5 | Ordinal: 214
        void GetPoint(void);

    // RVA: 0xDA | Ordinal: 219
        void GetRunwayPosition(int) const;

    // RVA: 0xDB | Ordinal: 220
        void GetSquadron(void);

    // RVA: 0xDC | Ordinal: 221
        void Get_ElevatorTaxis(void);

    // RVA: 0xDD | Ordinal: 222
        void Get_HelicopterTaxis(void);

    // RVA: 0xDE | Ordinal: 223
        void Get_Taxis(void);

    // RVA: 0xDF | Ordinal: 224
        void Get_TaxisForTO(void);

    // RVA: 0xE0 | Ordinal: 225
        void Glide_Slope(unsigned int) const;

    // RVA: 0xE9 | Ordinal: 234
        void Is_Target(void);

    // RVA: 0xEE | Ordinal: 239
        void Life(float);

    // RVA: 0xEF | Ordinal: 240
        void Life(void) const;

    // RVA: 0xF1 | Ordinal: 242
        void LinkToTarget(unsigned int, unsigned int);

    // RVA: 0xFC | Ordinal: 253
        void Parse(class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0x102 | Ordinal: 259
        void Position(double);

    // RVA: 0x107 | Ordinal: 264
        void PostCollisionProcessing(struct wsCollisionData *);

    // RVA: 0x10B | Ordinal: 268
        void PrintTrace(void);

    // RVA: 0x10E | Ordinal: 271
        void RearmingAllowed(void) const;

    // RVA: 0x113 | Ordinal: 276
        void Roll(void);

    // RVA: 0x119 | Ordinal: 282
        void SetModel(class Graphics::ModelPtr);

    // RVA: 0x11C | Ordinal: 285
        void SetShieldFlag(int, bool);

    // RVA: 0x11E | Ordinal: 287
        void SetWheelchocksFlag(int, bool);

    // RVA: 0x11F | Ordinal: 288
        void StabilizedRollPitchLCS_to_GCS(class wPosition3<double> &);

    // RVA: 0x124 | Ordinal: 293
        void Tang(void);

    // RVA: 0x127 | Ordinal: 296
        void _addPath(struct AI::Route *, enum EnumPathPosition);

    // RVA: 0x129 | Ordinal: 298
        void _addTask(class AI::Task *, enum wConst, unsigned int, class osg::Vec3f const &);

    // RVA: 0x131 | Ordinal: 306
        void activateACLS(void);

    // RVA: 0x133 | Ordinal: 308
        void activateBeacon(class ed::basic_string<char> const &, class ed::basic_string<char> const &, unsigned __int64, double, int, int, double, bool);

    // RVA: 0x136 | Ordinal: 311
        void activateLink4(double);

    // RVA: 0x139 | Ordinal: 314
        void addDeckRolling(class wPosition3<float> &, double) const;

    // RVA: 0x13B | Ordinal: 316
        void addDescent(unsigned int, int);

    // RVA: 0x14F | Ordinal: 336
        void airbossAutomaticSpeedAndDir(void);

    // RVA: 0x150 | Ordinal: 337
        void airbossAutomaticSpeedAndDirCompleted(void);

    // RVA: 0x151 | Ordinal: 338
        void airbossOrderDir(double);

    // RVA: 0x152 | Ordinal: 339
        void airbossOrderDirCompleted(void);

    // RVA: 0x153 | Ordinal: 340
        void airbossOrderSpeed(int);

    // RVA: 0x154 | Ordinal: 341
        void airbossOrderSpeedCompleted(void);

    // RVA: 0x155 | Ordinal: 342
        void allowShoot(float) const;

    // RVA: 0x156 | Ordinal: 343
        void analizeObstacles(class osg::Vec3f &);

    // RVA: 0x157 | Ordinal: 344
        void animateFlightDeck(double);

    // RVA: 0x15E | Ordinal: 351
        void beginFlood(void);

    // RVA: 0x15F | Ordinal: 352
        void bigShip(void);

    // RVA: 0x16E | Ordinal: 367
        void can_TacticalDir(void) const;

    // RVA: 0x171 | Ordinal: 370
        void can_manual(void) const;

    // RVA: 0x173 | Ordinal: 372
        void can_tacticalSpeed(void) const;

    // RVA: 0x176 | Ordinal: 375
        void checkAddGroupDescent(unsigned int, bool, bool);

    // RVA: 0x177 | Ordinal: 376
        void checkAirbossMessage(double, float);

    // RVA: 0x178 | Ordinal: 377
        void checkCollision(class MovingObject *);

    // RVA: 0x179 | Ordinal: 378
        void checkCollisionWithSeeshore(void);

    // RVA: 0x17A | Ordinal: 379
        void checkDescentBayOnVisible(void);

    // RVA: 0x17D | Ordinal: 382
        void checkForUpdates(float);

    // RVA: 0x17E | Ordinal: 383
        void checkIlluminationsConditions(void);

    // RVA: 0x183 | Ordinal: 388
        void checkPlaneHookHitch(class woLABase *, double);

    // RVA: 0x186 | Ordinal: 391
        void check_shipDamageVFXs_flooded(class wPosition3<float> const &, float);

    // RVA: 0x18F | Ordinal: 400
        void clearLandingPlane(class MovingObject *);

    // RVA: 0x193 | Ordinal: 404
        void clearTACAN(void);

    // RVA: 0x19C | Ordinal: 413
        void control(double &);

    // RVA: 0x19D | Ordinal: 414
        void controlAngularVelocity(class osg::Vec3f, double);

    // RVA: 0x19E | Ordinal: 415
        void controlDeckRolling(double);

    // RVA: 0x1A0 | Ordinal: 417
        void controlDrawArguments(double &);

    // RVA: 0x1A1 | Ordinal: 418
        void controlFlightDeck(void);

    // RVA: 0x1A2 | Ordinal: 419
        void controlLinearVelocity(double);

    // RVA: 0x1AD | Ordinal: 430
        void create(struct woShip::InitShip *, class wcSquadron *);

    // RVA: 0x1AF | Ordinal: 432
        void createAirBoss(void);

    // RVA: 0x1B0 | Ordinal: 433
        void createAirWing(class Lua::Config *, class ed::basic_string<char> const &);

    // RVA: 0x1B3 | Ordinal: 436
        void createControlActivity(void);

    // RVA: 0x1B6 | Ordinal: 439
        void createDatalink(enum DatalinkTypes);

    // RVA: 0x1B7 | Ordinal: 440
        void createDatalink(void);

    // RVA: 0x1B8 | Ordinal: 441
        void createElevatorSoundSource(class osg::Vec3d const &);

    // RVA: 0x1B9 | Ordinal: 442
        void createEmptyRouteMission(class osg::Vec3f const &, unsigned int);

    // RVA: 0x1C1 | Ordinal: 450
        void createRandomDamageVFX(struct wsCollisionData const *);

    // RVA: 0x1CC | Ordinal: 461
        void deactivateACLS(void);

    // RVA: 0x1CE | Ordinal: 463
        void deactivateBeacon(class ed::basic_string<char> const &);

    // RVA: 0x1D1 | Ordinal: 466
        void deactivateLink4(void);

    // RVA: 0x1D3 | Ordinal: 468
        void deactivateStationHQGeometry(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x1D4 | Ordinal: 469
        void debugLights(void);

    // RVA: 0x1E4 | Ordinal: 485
        void destroy(bool);

    // RVA: 0x1E9 | Ordinal: 490
        void destroy_(void);

    // RVA: 0x1ED | Ordinal: 494
        void doControl(double &);

    // RVA: 0x1FA | Ordinal: 507
        void executeTask(double);

    // RVA: 0x203 | Ordinal: 516
        void flood(double);

    // RVA: 0x206 | Ordinal: 519
        void formDrawArguments(void);

    // RVA: 0x20B | Ordinal: 524
        void getATC(void) const;

    // RVA: 0x211 | Ordinal: 530
        void getAimPoint(void);

    // RVA: 0x213 | Ordinal: 532
        void getAirBossRoom(void);

    // RVA: 0x215 | Ordinal: 534
        void getAllowAirboss(void) const;

    // RVA: 0x216 | Ordinal: 535
        void getAllowLso(void) const;

    // RVA: 0x219 | Ordinal: 538
        void getAmmo(void) const;

    // RVA: 0x21C | Ordinal: 541
        void getArmoredInterface(void) const;

    // RVA: 0x21D | Ordinal: 542
        void getArrestingGearsCount(void);

    // RVA: 0x220 | Ordinal: 545
        void getBrakeDistance(void);

    // RVA: 0x222 | Ordinal: 547
        void getBubbleState(int);

    // RVA: 0x227 | Ordinal: 552
        void getCameraViewPoint(bool);

    // RVA: 0x22A | Ordinal: 555
        void getCatapultShuttlePos(int, float);

    // RVA: 0x22F | Ordinal: 560
        void getCordAnchors(int, class osg::Vec3f &, class osg::Vec3f &);

    // RVA: 0x238 | Ordinal: 569
        void getCurrentRoute(void);

    // RVA: 0x23B | Ordinal: 572
        void getDatalinkCommunicator(enum DatalinkTypes) const;

    // RVA: 0x23D | Ordinal: 574
        void getDatalinkTerminal(unsigned char) const;

    // RVA: 0x244 | Ordinal: 581
        void getDetectable(void);

    // RVA: 0x24D | Ordinal: 590
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x24F | Ordinal: 592
        void getDrawArgumentsValue(int);

    // RVA: 0x250 | Ordinal: 593
        void getElevatorState(int);

    // RVA: 0x251 | Ordinal: 594
        void getElevatorY(int);

    // RVA: 0x254 | Ordinal: 597
        void getEmissionFrequencies(void) const;

    // RVA: 0x25D | Ordinal: 606
        void getFindingDistance(void) const;

    // RVA: 0x269 | Ordinal: 618
        void getGearNum(void) const;

    // RVA: 0x26A | Ordinal: 619
        void getGlisserParamByVelocity(float) const;

    // RVA: 0x26D | Ordinal: 622
        void getGotoWaypoint(void);

    // RVA: 0x26F | Ordinal: 624
        void getGroupNameNet(void) const;

    // RVA: 0x279 | Ordinal: 634
        void getHeight(void) const;

    // RVA: 0x27A | Ordinal: 635
        void getHoldbackBarDnPos(int, float);

    // RVA: 0x27B | Ordinal: 636
        void getHoldbackBarState(int);

    // RVA: 0x27C | Ordinal: 637
        void getHoldbackBarUpPos(int);

    // RVA: 0x27F | Ordinal: 640
        void getInboundAircraft(void);

    // RVA: 0x282 | Ordinal: 643
        void getInternalCargoConst(void) const;

    // RVA: 0x285 | Ordinal: 646
        void getKillingDistance(void) const;

    // RVA: 0x287 | Ordinal: 648
        void getLSOCameraGlobalPosition(double);

    // RVA: 0x28E | Ordinal: 655
        void getLevelDeck(void) const;

    // RVA: 0x28F | Ordinal: 656
        void getListObstacles(void);

    // RVA: 0x293 | Ordinal: 660
        void getMass(void) const;

    // RVA: 0x297 | Ordinal: 664
        void getMaxShipVelocity(void);

    // RVA: 0x2A2 | Ordinal: 675
        void getN_obj(void) const;

    // RVA: 0x2A6 | Ordinal: 679
        void getNetControl(int);

    // RVA: 0x2A9 | Ordinal: 682
        void getNetRoute(void);

    // RVA: 0x2AF | Ordinal: 688
        void getNumDoorAnimaion(void) const;

    // RVA: 0x2B0 | Ordinal: 689
        void getNumParking(void) const;

    // RVA: 0x2B7 | Ordinal: 696
        void getOpticalLandingSystem(void);

    // RVA: 0x2C4 | Ordinal: 709
        void getRCS(float, class osg::Vec3f const &) const;

    // RVA: 0x2C7 | Ordinal: 712
        void getRWdirForPurpose(enum wAirbase::E_RWdirPurpose, unsigned int) const;

    // RVA: 0x2CB | Ordinal: 716
        void getRadiationToTarget(unsigned int, float &, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> *) const;

    // RVA: 0x2CC | Ordinal: 717
        void getRadioBeacon(void);

    // RVA: 0x2CD | Ordinal: 718
        void getRadioBeaconGlideslope(void);

    // RVA: 0x2CE | Ordinal: 719
        void getRadioBeaconLocalizer(void);

    // RVA: 0x2CF | Ordinal: 720
        void getRadioFrequencys(class ed::basic_string<char> &);

    // RVA: 0x2D3 | Ordinal: 724
        void getRelativeLife(void) const;

    // RVA: 0x2DA | Ordinal: 731
        void getScanRadarDirection(void) const;

    // RVA: 0x2DB | Ordinal: 732
        void getServiceSystem(void);

    // RVA: 0x2DC | Ordinal: 733
        void getShieldFlag(int);

    // RVA: 0x2DD | Ordinal: 734
        void getShipLength(void) const;

    // RVA: 0x2E4 | Ordinal: 741
        void getSpeedByAirbossOrderId(enum woShip::ESpeedTerm);

    // RVA: 0x2E5 | Ordinal: 742
        void getStationHQ(class std::basic_string_view<char, struct std::char_traits<char>>, bool);

    // RVA: 0x2E6 | Ordinal: 743
        void getStationHQ(void);

    // RVA: 0x2E9 | Ordinal: 746
        void getStatus(struct ShipStatus &);

    // RVA: 0x2EA | Ordinal: 747
        void getTVCameraGlobalPosition(double);

    // RVA: 0x2F1 | Ordinal: 754
        void getTemperature(class osg::Vec3f &) const;

    // RVA: 0x2F2 | Ordinal: 755
        void getTemperature(float) const;

    // RVA: 0x30A | Ordinal: 779
        void getWeaponStatus(class Mail::Writer &);

    // RVA: 0x30C | Ordinal: 781
        void get_swing_vels(double &, double &, double &) const;

    // RVA: 0x30E | Ordinal: 783
        void get_swings(double &, double &, double &) const;

    // RVA: 0x31C | Ordinal: 797
        void hideHoldbackBar(int);

    // RVA: 0x31F | Ordinal: 800
        void humanControlRelease(void);

    // RVA: 0x321 | Ordinal: 802
        void humanControlTake(void);

    // RVA: 0x331 | Ordinal: 818
        void initArrestingGears(void);

    // RVA: 0x336 | Ordinal: 823
        void initObject(struct woShip::InitShip const *);

    // RVA: 0x33F | Ordinal: 832
        void initTrail(void);

    // RVA: 0x347 | Ordinal: 840
        void isCatapultShuttleInStartPos(int);

    // RVA: 0x356 | Ordinal: 855
        void isMaster(void);

    // RVA: 0x357 | Ordinal: 856
        void isOnSea(unsigned char);

    // RVA: 0x358 | Ordinal: 857
        void isOnWater(unsigned char);

    // RVA: 0x35D | Ordinal: 862
        void isRadiatedByRadar(unsigned int, float &) const;

    // RVA: 0x35F | Ordinal: 864
        void isRunWayOpen(void) const;

    // RVA: 0x361 | Ordinal: 866
        void isStaying(void) const;

    // RVA: 0x363 | Ordinal: 868
        void isStayingEx(void) const;

    // RVA: 0x366 | Ordinal: 871
        void isUncontrollableFlag(void) const;

    // RVA: 0x36A | Ordinal: 875
        void is_master_arm_off(void) const;

    // RVA: 0x36C | Ordinal: 877
        void is_master_arm_off_or_deactivating(void) const;

    // RVA: 0x36E | Ordinal: 879
        void is_master_arm_on(bool) const;

    // RVA: 0x371 | Ordinal: 882
        void is_master_arm_on_or_activating(void) const;

    // RVA: 0x37D | Ordinal: 894
        void levelUnlevel(bool, bool);

    // RVA: 0x37E | Ordinal: 895
        void linkShadowmapsToLights(void);

    // RVA: 0x382 | Ordinal: 899
        void loadAndCreateExhausts(class Lua::Config &);

    // RVA: 0x383 | Ordinal: 900
        void loadArrestingGears(class Lua::Config &);

    // RVA: 0x384 | Ordinal: 901
        void loadCargo(float);

    // RVA: 0x385 | Ordinal: 902
        void loadICLS(class Lua::Config &);

    // RVA: 0x387 | Ordinal: 904
        void loadRunwaysAndTaxiRoutes(class Lua::Config &);

    // RVA: 0x389 | Ordinal: 906
        void loadTACAN(class Lua::Config &);

    // RVA: 0x3A2 | Ordinal: 931
        void master_arm_off(bool);

    // RVA: 0x3A4 | Ordinal: 933
        void master_arm_on(bool);

    // RVA: 0x3AB | Ordinal: 940
        void motion(double);

    // RVA: 0x3AE | Ordinal: 943
        void netActivate(int);

    // RVA: 0x3B6 | Ordinal: 951
        void netCreate(struct InitNetShip const &, class Mail::Reader);

    // RVA: 0x3BB | Ordinal: 956
        void netDestroy(void);

    // RVA: 0x3C5 | Ordinal: 966
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x3DB | Ordinal: 988
        void netNextTime(double &);

    // RVA: 0x3DD | Ordinal: 990
        void netSendCreate(unsigned char);

    // RVA: 0x3E2 | Ordinal: 995
        void netSendUpdate(int, int, int &);

    // RVA: 0x3E7 | Ordinal: 1000
        void net_hideHoldbackbar(int);

    // RVA: 0x3EF | Ordinal: 1008
        void nextStep(double);

    // RVA: 0x3F2 | Ordinal: 1011
        void nextTime(double &);

    // RVA: 0x3F3 | Ordinal: 1012
        void obstaclesProcessing(class osg::Vec3f &);

    // RVA: 0x3F4 | Ordinal: 1013
        void onAirbossLightsControl(int, int, int, bool);

    // RVA: 0x3F5 | Ordinal: 1014
        void onAirbossMapMsg(int, int, int, int);

    // RVA: 0x3F6 | Ordinal: 1015
        void onAirbossSetMonitorBrightness(int, float);

    // RVA: 0x3F9 | Ordinal: 1018
        void onNetHumanTakeControl(bool, bool, int);

    // RVA: 0x3FA | Ordinal: 1019
        void onTouchDown(class woLABase *);

    // RVA: 0x400 | Ordinal: 1025
        void populate_carrier_crew(void);

    // RVA: 0x402 | Ordinal: 1027
        void prepareForRendering(void);

    // RVA: 0x404 | Ordinal: 1029
        void procActivateACLS(void);

    // RVA: 0x406 | Ordinal: 1031
        void procActivateBeacon(class ed::basic_string<char> const &, class ed::basic_string<char> const &, unsigned __int64, double, int, int, double, bool);

    // RVA: 0x409 | Ordinal: 1034
        void procActivateLink4(double);

    // RVA: 0x40C | Ordinal: 1037
        void procAddDescent(unsigned int, int);

    // RVA: 0x40D | Ordinal: 1038
        void procCarrierLightsForcedMode(char);

    // RVA: 0x40E | Ordinal: 1039
        void procCommandFromStationHQ(struct StationHQCommandData const &);

    // RVA: 0x411 | Ordinal: 1042
        void procDeactivateACLS(void);

    // RVA: 0x413 | Ordinal: 1044
        void procDeactivateBeacon(class ed::basic_string<char> const &);

    // RVA: 0x416 | Ordinal: 1047
        void procDeactivateLink4(void);

    // RVA: 0x41A | Ordinal: 1051
        void procRemoveDescent(unsigned int, unsigned int, float, float, float, float);

    // RVA: 0x41D | Ordinal: 1054
        void procReserveDescent(unsigned int, bool);

    // RVA: 0x42E | Ordinal: 1071
        void receiveBriefingRoomBecomeLector(class ed::basic_string<char> const &, unsigned int);

    // RVA: 0x42F | Ordinal: 1072
        void receiveBriefingRoomLectorPCButton(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int);

    // RVA: 0x430 | Ordinal: 1073
        void receiveBriefingRoomMapEvent(class ed::basic_string<char> const &, int, int, int, int, int);

    // RVA: 0x431 | Ordinal: 1074
        void receiveBriefingRoomState(class ed::basic_string<char> const &, unsigned int, int, int);

    // RVA: 0x433 | Ordinal: 1076
        void receiveCommandFromStationHQ(struct StationHQCommandData const &);

    // RVA: 0x435 | Ordinal: 1078
        void recoil(int, class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0x442 | Ordinal: 1091
        void removeDescent(unsigned int, unsigned int, class osg::Vec2d const &, class osg::Vec2d const &);

    // RVA: 0x44C | Ordinal: 1101
        void removeTargetToAI(unsigned int);

    // RVA: 0x44F | Ordinal: 1104
        void renderUpdate(int);

    // RVA: 0x450 | Ordinal: 1105
        void requestDeckCrewPermission(class IwoLA *, enum wGroundCrew::GroundCrewRequest);

    // RVA: 0x455 | Ordinal: 1110
        void requestStationHQGeometry(class std::basic_string_view<char, struct std::char_traits<char>>, bool);

    // RVA: 0x467 | Ordinal: 1128
        void runaroundFromCollision(class MovingObject *);

    // RVA: 0x46B | Ordinal: 1132
        void sendActivate(int);

    // RVA: 0x46D | Ordinal: 1134
        void sendBriefingRoomBecomeLector(class ed::basic_string<char> const &, unsigned int);

    // RVA: 0x46E | Ordinal: 1135
        void sendBriefingRoomState(unsigned int, class ed::basic_string<char> const &, unsigned int, int, int);

    // RVA: 0x472 | Ordinal: 1139
        void sendCreate(class IwNetObject *, int);

    // RVA: 0x475 | Ordinal: 1142
        void sendGotoWaypointIdxAI(int);

    // RVA: 0x477 | Ordinal: 1144
        void sendPPLI(void);

    // RVA: 0x479 | Ordinal: 1146
        void sendRouteAI(struct AI::Route *);

    // RVA: 0x47A | Ordinal: 1147
        void sendUTM(void);

    // RVA: 0x47D | Ordinal: 1150
        void setAI_OFF(void);

    // RVA: 0x480 | Ordinal: 1153
        void setAI_ON(void);

    // RVA: 0x482 | Ordinal: 1155
        void setAddPropertiesList(class std::unordered_map<class ed::basic_string<char>, struct customUnitProperty, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, struct customUnitProperty>>> *);

    // RVA: 0x484 | Ordinal: 1157
        void setAirbossSelectedElementName(class ed::basic_string<char> const &);

    // RVA: 0x486 | Ordinal: 1159
        void setAlarmToAI(int, int);

    // RVA: 0x487 | Ordinal: 1160
        void setAlarmUpdateAI(int, int);

    // RVA: 0x488 | Ordinal: 1161
        void setAllowAirboss(bool);

    // RVA: 0x489 | Ordinal: 1162
        void setAllowLso(bool);

    // RVA: 0x48B | Ordinal: 1164
        void setBubbleCommand(int, int);

    // RVA: 0x490 | Ordinal: 1169
        void setCarrierLightsForcedMode(char);

    // RVA: 0x49E | Ordinal: 1183
        void setDepthToAI(double, int);

    // RVA: 0x49F | Ordinal: 1184
        void setDepthUpdateAI(double, int);

    // RVA: 0x4A4 | Ordinal: 1189
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x4A7 | Ordinal: 1192
        void setDrawArgumentValue(int, float);

    // RVA: 0x4A8 | Ordinal: 1193
        void setElevatorCommand(int, int);

    // RVA: 0x4AF | Ordinal: 1200
        void setForcedTacticalSpeed(bool);

    // RVA: 0x4B1 | Ordinal: 1202
        void setFormationToAI(int, int);

    // RVA: 0x4B2 | Ordinal: 1203
        void setFormationUpdateAI(int, int);

    // RVA: 0x4B6 | Ordinal: 1207
        void setGotoWaypointIdx(int);

    // RVA: 0x4BB | Ordinal: 1212
        void setIdLeader(unsigned int);

    // RVA: 0x4BC | Ordinal: 1213
        void setIgnoreShoal(bool);

    // RVA: 0x4BF | Ordinal: 1216
        void setLandingPlane(class MovingObject *);

    // RVA: 0x4C6 | Ordinal: 1223
        void setNetRoute(struct AI::Route *);

    // RVA: 0x4C8 | Ordinal: 1225
        void setNetRouteIdx(int);

    // RVA: 0x4CA | Ordinal: 1227
        void setOLSCutAndWaveOffLights(float, float);

    // RVA: 0x4CB | Ordinal: 1228
        void setOLSGlideslopeAngle(float);

    // RVA: 0x4D2 | Ordinal: 1235
        void setPathToAI(struct PathPointsNAV const &, int);

    // RVA: 0x4D3 | Ordinal: 1236
        void setPathUpdateAI(struct AI::Route *);

    // RVA: 0x4D8 | Ordinal: 1241
        void setRequiredDepth(float);

    // RVA: 0x4DA | Ordinal: 1243
        void setRoeToAI(int, int);

    // RVA: 0x4DB | Ordinal: 1244
        void setRoeUpdateAI(int, int);

    // RVA: 0x4E5 | Ordinal: 1254
        void setSpeedToAI(double, bool, int);

    // RVA: 0x4E8 | Ordinal: 1257
        void setSpeedUpdateAI(double, int);

    // RVA: 0x4E9 | Ordinal: 1258
        void setSquadron(class wcSquadron *);

    // RVA: 0x4EA | Ordinal: 1259
        void setSquadron(struct woShip::InitShip const *, class wcSquadron *);

    // RVA: 0x4EC | Ordinal: 1261
        void setStatus(struct ShipStatus const &);

    // RVA: 0x4EF | Ordinal: 1264
        void setTacticalDir(class osg::Vec2d const &, double);

    // RVA: 0x4F1 | Ordinal: 1266
        void setTacticalSpeed(double);

    // RVA: 0x4F3 | Ordinal: 1268
        void setTargetToAI(struct TargetPointNAV const &);

    // RVA: 0x4F5 | Ordinal: 1270
        void setTaskMotion(enum ShipTaskMotion);

    // RVA: 0x4F9 | Ordinal: 1274
        void setTopSpeedHandicap(double);

    // RVA: 0x4FE | Ordinal: 1279
        void setVelocityRequested(float);

    // RVA: 0x501 | Ordinal: 1282
        void setWeaponStatus(class Mail::Reader);

    // RVA: 0x504 | Ordinal: 1285
        void sitOnShoal(float);

    // RVA: 0x509 | Ordinal: 1290
        void sound_init(class Lua::Config &, bool);

    // RVA: 0x50D | Ordinal: 1294
        void sound_uninit(void);

    // RVA: 0x510 | Ordinal: 1297
        void sound_update(void);

    // RVA: 0x517 | Ordinal: 1304
        void startShipMessageSound(class ed::basic_string<char> const &);

    // RVA: 0x520 | Ordinal: 1313
        void stopShipMessageSound(void);

    // RVA: 0x52B | Ordinal: 1324
        void tacticalDir(void) const;

    // RVA: 0x52D | Ordinal: 1326
        void tacticalDirArrived(void) const;

    // RVA: 0x52F | Ordinal: 1328
        void tacticalDirFixed(void) const;

    // RVA: 0x531 | Ordinal: 1330
        void tacticalSpeed(void) const;

    // RVA: 0x535 | Ordinal: 1334
        void takeDamage(float, unsigned char, class ed::basic_string<char> const &, unsigned int, unsigned int);

    // RVA: 0x544 | Ordinal: 1349
        void tryToAddDescent(unsigned int, int, bool);

    // RVA: 0x548 | Ordinal: 1353
        void tryToRemoveDescent(unsigned int, float, float, float, float);

    // RVA: 0x54D | Ordinal: 1358
        void uninitObject(void);

    // RVA: 0x559 | Ordinal: 1370
        void updateCatapults(bool);

    // RVA: 0x55B | Ordinal: 1372
        void updateCords(void);

    // RVA: 0x568 | Ordinal: 1385
        void updateObstacles(class MovingObject *);

    // RVA: 0x56D | Ordinal: 1390
        void updateShipTrail(void);

    // RVA: 0x56F | Ordinal: 1392
        void updateStatus(struct InitNetShip const &);

    // RVA: 0x57C | Ordinal: 1405
        void waiting(double);

    // RVA: 0x580 | Ordinal: 1409
        void width(void) const;

    // RVA: 0x28 | Ordinal: 41
        void woShip(void);

    // RVA: 0x3D | Ordinal: 62
        void _woShip(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_WOSHIP_HPP
