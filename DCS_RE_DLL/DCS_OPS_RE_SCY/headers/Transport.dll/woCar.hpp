#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: woCar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woCar
{
public:

    // RVA: 0x96 | Ordinal: 151
        void CFF_adjustTargetPoint(class woTargetPoint *, float, float, float);

    // RVA: 0x9B | Ordinal: 156
        void CheckIfPlaceholderNeeded(class ed::basic_string<char> &, struct Vehicle_Descriptor **);

    // RVA: 0xA7 | Ordinal: 168
        void CommandSet(int);

    // RVA: 0xA8 | Ordinal: 169
        void CommandSet(int, double);

    // RVA: 0xB2 | Ordinal: 179
        void Course(void);

    // RVA: 0xB4 | Ordinal: 181
        void Degrade(bool, class wPosition3<float> const *, bool);

    // RVA: 0xBB | Ordinal: 188
        void ForcePosition(class wPosition3<double> const &);

    // RVA: 0xBE | Ordinal: 191
        void GetColumn(void);

    // RVA: 0xC0 | Ordinal: 193
        void GetCommander(void) const;

    // RVA: 0xC2 | Ordinal: 195
        void GetConnector(class ed::basic_string<char> &);

    // RVA: 0xC3 | Ordinal: 196
        void GetDrawArguments(void);

    // RVA: 0xC6 | Ordinal: 199
        void GetKillRadius(class osg::Vec3f const &, class wsType const &, float *);

    // RVA: 0xCA | Ordinal: 203
        void GetModel(void);

    // RVA: 0xCE | Ordinal: 207
        void GetPoint(double);

    // RVA: 0xCF | Ordinal: 208
        void GetPoint(void);

    // RVA: 0xD7 | Ordinal: 216
        void GetPosition(void);

    // RVA: 0xE6 | Ordinal: 231
        void IsTarget(class MovingObject *) const;

    // RVA: 0xE7 | Ordinal: 232
        void IsWarehouse(void);

    // RVA: 0xE8 | Ordinal: 233
        void Is_Target(void);

    // RVA: 0xEB | Ordinal: 236
        void Life(float);

    // RVA: 0xEC | Ordinal: 237
        void Life(void) const;

    // RVA: 0xF0 | Ordinal: 241
        void LinkToTarget(unsigned int, unsigned int);

    // RVA: 0xF3 | Ordinal: 244
        void Nx(void) const;

    // RVA: 0xF4 | Ordinal: 245
        void Ny(void) const;

    // RVA: 0xF5 | Ordinal: 246
        void Nz(void) const;

    // RVA: 0xFE | Ordinal: 255
        void Position(double);

    // RVA: 0xFF | Ordinal: 256
        void Position(void);

    // RVA: 0x105 | Ordinal: 262
        void PostCollisionProcessing(struct wsCollisionData *);

    // RVA: 0x109 | Ordinal: 266
        void PrintTrace(void);

    // RVA: 0x10D | Ordinal: 270
        void RearmingAllowed(void) const;

    // RVA: 0x10F | Ordinal: 272
        void RegisterCar(void);

    // RVA: 0x112 | Ordinal: 275
        void Roll(void);

    // RVA: 0x114 | Ordinal: 277
        void SetCommand(class SwitchEPLRS const *);

    // RVA: 0x115 | Ordinal: 278
        void SetDrawArg(unsigned int, float, float, float);

    // RVA: 0x116 | Ordinal: 279
        void SetDrawArg_cyclic(unsigned int, float, float, float);

    // RVA: 0x117 | Ordinal: 280
        void SetIdPusk(unsigned int);

    // RVA: 0x118 | Ordinal: 281
        void SetInstantAlarmState(int);

    // RVA: 0x123 | Ordinal: 292
        void Tang(void);

    // RVA: 0x125 | Ordinal: 294
        void UnregisterCar(void);

    // RVA: 0x132 | Ordinal: 307
        void activateBeacon(class ed::basic_string<char> const &, class ed::basic_string<char> const &, unsigned __int64, double, int, int, double, bool);

    // RVA: 0x134 | Ordinal: 309
        void activateGuidanceSystem(int, int, double, double, unsigned int);

    // RVA: 0x135 | Ordinal: 310
        void activateJammer(int, int, double, double, int, double, double);

    // RVA: 0x137 | Ordinal: 312
        void activateRSBN(int, class ed::basic_string<char> const &);

    // RVA: 0x13A | Ordinal: 315
        void addDescent(unsigned int, int);

    // RVA: 0x13F | Ordinal: 320
        void addHeatToPart(int, float);

    // RVA: 0x14C | Ordinal: 333
        void agony(double &);

    // RVA: 0x14E | Ordinal: 335
        void agonyHuman(double &);

    // RVA: 0x159 | Ordinal: 346
        void attachModels(bool);

    // RVA: 0x15A | Ordinal: 347
        void attachTrailer(void);

    // RVA: 0x15B | Ordinal: 348
        void beginAgony(bool);

    // RVA: 0x160 | Ordinal: 353
        void calcBotEngineAndTransmissionParams(float);

    // RVA: 0x161 | Ordinal: 354
        void calcSwingBody(double);

    // RVA: 0x163 | Ordinal: 356
        void canBeTrailer(void) const;

    // RVA: 0x16C | Ordinal: 365
        void can_TacticalDir(void) const;

    // RVA: 0x16F | Ordinal: 368
        void can_manual(void) const;

    // RVA: 0x175 | Ordinal: 374
        void checkAddGroupDescent(unsigned int, bool, bool);

    // RVA: 0x17B | Ordinal: 380
        void checkForChanges(double);

    // RVA: 0x17C | Ordinal: 381
        void checkForUpdates(double);

    // RVA: 0x180 | Ordinal: 385
        void checkLeveling(void);

    // RVA: 0x181 | Ordinal: 386
        void checkMissileThreat(double &);

    // RVA: 0x185 | Ordinal: 390
        void checkTow(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x188 | Ordinal: 393
        void cleanHitchData(void);

    // RVA: 0x195 | Ordinal: 406
        void clearVOIP(void);

    // RVA: 0x196 | Ordinal: 407
        void client_disconnect(void *);

    // RVA: 0x197 | Ordinal: 408
        void commCreateUpdate(int, unsigned char, float, double, float, enum wModulation);

    // RVA: 0x19B | Ordinal: 412
        void control(double &);

    // RVA: 0x19F | Ordinal: 416
        void controlDrawArguments(double &);

    // RVA: 0x1AB | Ordinal: 428
        void create(struct woCar::InitCar *, class wcColumn *);

    // RVA: 0x1B1 | Ordinal: 434
        void createControlActivity(int);

    // RVA: 0x1B4 | Ordinal: 437
        void createDatalink(class ed::basic_string<char> const &);

    // RVA: 0x1B5 | Ordinal: 438
        void createDatalink(enum DatalinkTypes, class ed::basic_string<char> const &);

    // RVA: 0x1CD | Ordinal: 462
        void deactivateBeacon(class ed::basic_string<char> const &);

    // RVA: 0x1CF | Ordinal: 464
        void deactivateGuidanceSystem(void);

    // RVA: 0x1D0 | Ordinal: 465
        void deactivateJammer(void);

    // RVA: 0x1D2 | Ordinal: 467
        void deactivateRSBN(void);

    // RVA: 0x1E2 | Ordinal: 483
        void destroy(bool);

    // RVA: 0x1E7 | Ordinal: 488
        void destroy_(void);

    // RVA: 0x1EA | Ordinal: 491
        void dettachTrailer(void);

    // RVA: 0x1EC | Ordinal: 493
        void disembarking(unsigned int);

    // RVA: 0x1EF | Ordinal: 496
        void doNetHumanTakeControl(bool, bool, int);

    // RVA: 0x1F1 | Ordinal: 498
        void drawLights(void);

    // RVA: 0x1F2 | Ordinal: 499
        void drawLocator(double);

    // RVA: 0x1F3 | Ordinal: 500
        void drawSwingBody(double);

    // RVA: 0x1F4 | Ordinal: 501
        void drawTracks(double);

    // RVA: 0x1F5 | Ordinal: 502
        void drawWheels(double);

    // RVA: 0x1F8 | Ordinal: 505
        void ecm_update(double &);

    // RVA: 0x1F9 | Ordinal: 506
        void effects(void);

    // RVA: 0x1FB | Ordinal: 508
        void explode(bool);

    // RVA: 0x200 | Ordinal: 513
        void findGoodPoint(class osg::Vec3d const &, double, class osg::Vec2d const &, class osg::Vec2d const &);

    // RVA: 0x201 | Ordinal: 514
        void findGoodPoint(void *);

    // RVA: 0x204 | Ordinal: 517
        void forcedPositionUpdate(void);

    // RVA: 0x205 | Ordinal: 518
        void formDrawArguments(void);

    // RVA: 0x207 | Ordinal: 520
        void formDrawArguments_nonsim(void);

    // RVA: 0x209 | Ordinal: 522
        void fullAmmoReset(void);

    // RVA: 0x20C | Ordinal: 525
        void getAcceleratorState(void) const;

    // RVA: 0x20E | Ordinal: 527
        void getAddProps(void) const;

    // RVA: 0x20F | Ordinal: 528
        void getAimPoint(void);

    // RVA: 0x217 | Ordinal: 536
        void getAllowedDustEffect(void);

    // RVA: 0x218 | Ordinal: 537
        void getAmmo(void) const;

    // RVA: 0x21B | Ordinal: 540
        void getArmoredInterface(void) const;

    // RVA: 0x221 | Ordinal: 546
        void getBrakeState(void) const;

    // RVA: 0x225 | Ordinal: 550
        void getCameraViewPoint(bool);

    // RVA: 0x22C | Ordinal: 557
        void getCockpitName(void) const;

    // RVA: 0x22D | Ordinal: 558
        void getCommunicator(void);

    // RVA: 0x22E | Ordinal: 559
        void getCommunicator_c(void) const;

    // RVA: 0x233 | Ordinal: 564
        void getCrewManager(void) const;

    // RVA: 0x234 | Ordinal: 565
        void getCrewMemberName(int) const;

    // RVA: 0x235 | Ordinal: 566
        void getCriticalArgumentIDs(void) const;

    // RVA: 0x236 | Ordinal: 567
        void getCruiseControl(void) const;

    // RVA: 0x23A | Ordinal: 571
        void getDatalinkCommunicator(enum DatalinkTypes) const;

    // RVA: 0x23C | Ordinal: 573
        void getDatalinkTerminal(unsigned char) const;

    // RVA: 0x241 | Ordinal: 578
        void getDescentCap(void);

    // RVA: 0x243 | Ordinal: 580
        void getDetectable(void);

    // RVA: 0x245 | Ordinal: 582
        void getDetectionPoint(void);

    // RVA: 0x24A | Ordinal: 587
        void getDiffInitAddProperties(class Mail::Writer &);

    // RVA: 0x24C | Ordinal: 589
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x253 | Ordinal: 596
        void getEmissionFrequencies(void) const;

    // RVA: 0x256 | Ordinal: 599
        void getEngineRPM(void);

    // RVA: 0x257 | Ordinal: 600
        void getEngineState(bool);

    // RVA: 0x25C | Ordinal: 605
        void getFindingDistance(void) const;

    // RVA: 0x268 | Ordinal: 617
        void getGearNum(void) const;

    // RVA: 0x26E | Ordinal: 623
        void getGreenSmokeCount(void);

    // RVA: 0x270 | Ordinal: 625
        void getGuidanceAreaOfResponsibility(class osg::Vec3d &, int &) const;

    // RVA: 0x271 | Ordinal: 626
        void getGuidanceChannel(void) const;

    // RVA: 0x272 | Ordinal: 627
        void getGuidanceRadarProviderIds(class ed::vector<unsigned int, class ed::allocator<unsigned int>> &) const;

    // RVA: 0x273 | Ordinal: 628
        void getGuidanceRadarTargets(class ed::vector<struct woGuidanceSystemState::RadarTargetData, class ed::allocator<struct woGuidanceSystemState::RadarTargetData>> &);

    // RVA: 0x274 | Ordinal: 629
        void getGuidanceSystemState(void);

    // RVA: 0x275 | Ordinal: 630
        void getGuidanceSystemState(void) const;

    // RVA: 0x276 | Ordinal: 631
        void getGuidanceTargetLinks(class ed::vector<struct woGuidanceSystemState::TargetLinkData, class ed::allocator<struct woGuidanceSystemState::TargetLinkData>> &);

    // RVA: 0x277 | Ordinal: 632
        void getHandbrake(void) const;

    // RVA: 0x278 | Ordinal: 633
        void getHeight(void) const;

    // RVA: 0x27E | Ordinal: 639
        void getIllumination(class osg::Vec3f const &) const;

    // RVA: 0x280 | Ordinal: 641
        void getInfantryAnimator(void) const;

    // RVA: 0x281 | Ordinal: 642
        void getInternalCargoConst(void) const;

    // RVA: 0x283 | Ordinal: 644
        void getIsUnregistered(void);

    // RVA: 0x284 | Ordinal: 645
        void getKillingDistance(void) const;

    // RVA: 0x286 | Ordinal: 647
        void getKillingDistanceMin(void) const;

    // RVA: 0x290 | Ordinal: 657
        void getLocalPoint(double);

    // RVA: 0x296 | Ordinal: 663
        void getMaxPitchAndRoll(void);

    // RVA: 0x29D | Ordinal: 670
        void getMyMobility(void) const;

    // RVA: 0x29E | Ordinal: 671
        void getMyPlatoonStatus(struct PlatoonStatus &) const;

    // RVA: 0x2A0 | Ordinal: 673
        void getMyTruck(void);

    // RVA: 0x2A1 | Ordinal: 674
        void getN_obj(void) const;

    // RVA: 0x2A3 | Ordinal: 676
        void getName(void);

    // RVA: 0x2AB | Ordinal: 684
        void getNextGearNum(void) const;

    // RVA: 0x2AE | Ordinal: 687
        void getNormalizedEngineRPM(void);

    // RVA: 0x2B8 | Ordinal: 697
        void getOrangeSmokeCount(void);

    // RVA: 0x2BE | Ordinal: 703
        void getPositionInParentSpace(double);

    // RVA: 0x2C0 | Ordinal: 705
        void getPositionUsingMode(void) const;

    // RVA: 0x2C2 | Ordinal: 707
        void getRCS(float, class osg::Vec3f const &) const;

    // RVA: 0x2C5 | Ordinal: 710
        void getRSBNChannel(void) const;

    // RVA: 0x2C6 | Ordinal: 711
        void getRSBNcallsign(void) const;

    // RVA: 0x2CA | Ordinal: 715
        void getRadiationToTarget(unsigned int, float &, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> *) const;

    // RVA: 0x2D0 | Ordinal: 721
        void getRedSmokeCount(void);

    // RVA: 0x2D1 | Ordinal: 722
        void getRelativeLife(void) const;

    // RVA: 0x2D4 | Ordinal: 725
        void getRelocated(void) const;

    // RVA: 0x2D9 | Ordinal: 730
        void getScanRadarDirection(void) const;

    // RVA: 0x2E2 | Ordinal: 739
        void getSkill(void) const;

    // RVA: 0x2E7 | Ordinal: 744
        void getStatus(struct CarStatus &);

    // RVA: 0x2EB | Ordinal: 748
        void getTargetDataInfo(void);

    // RVA: 0x2ED | Ordinal: 750
        void getTargetStateForCar(struct STargetData &);

    // RVA: 0x2EF | Ordinal: 752
        void getTemperature(class osg::Vec3f const &) const;

    // RVA: 0x2F0 | Ordinal: 753
        void getTemperature(float) const;

    // RVA: 0x2F4 | Ordinal: 757
        void getTemperatures(void) const;

    // RVA: 0x2F6 | Ordinal: 759
        void getTransportId(void) const;

    // RVA: 0x303 | Ordinal: 772
        void getVolumeEffectBox(class Math::Box<2, float> *) const;

    // RVA: 0x304 | Ordinal: 773
        void getWarehouse(void);

    // RVA: 0x309 | Ordinal: 778
        void getWeaponStatus(class Mail::Writer &);

    // RVA: 0x30B | Ordinal: 780
        void get_swing_vels(double &, double &, double &) const;

    // RVA: 0x30D | Ordinal: 782
        void get_swings(double &, double &, double &) const;

    // RVA: 0x310 | Ordinal: 785
        void groundHit(void);

    // RVA: 0x315 | Ordinal: 790
        void guidanceSystemUpdate(double &);

    // RVA: 0x317 | Ordinal: 792
        void hasAvailableCrewPosition(void) const;

    // RVA: 0x318 | Ordinal: 793
        void hasDriverView(void) const;

    // RVA: 0x319 | Ordinal: 794
        void hasGuidanceSystem(void) const;

    // RVA: 0x31A | Ordinal: 795
        void hasRSBN(void) const;

    // RVA: 0x31B | Ordinal: 796
        void hasUnfinishedRoute(void) const;

    // RVA: 0x31D | Ordinal: 798
        void humanCheckImpact(double);

    // RVA: 0x31E | Ordinal: 799
        void humanControlRelease(void);

    // RVA: 0x320 | Ordinal: 801
        void humanControlTake(void);

    // RVA: 0x322 | Ordinal: 803
        void humanDriver(void) const;

    // RVA: 0x323 | Ordinal: 804
        void humanDriverControlRelease(void);

    // RVA: 0x324 | Ordinal: 805
        void humanDriverControlTake(int);

    // RVA: 0x325 | Ordinal: 806
        void humanMasterArm(bool);

    // RVA: 0x326 | Ordinal: 807
        void humanNextStep(double &);

    // RVA: 0x330 | Ordinal: 817
        void initAirDropCar(unsigned int, class wPosition3<float> const &, class osg::Vec3f const &);

    // RVA: 0x334 | Ordinal: 821
        void initObject(struct woCar::InitCar const *);

    // RVA: 0x33B | Ordinal: 828
        void initPositionCar(float, float, float, bool, bool);

    // RVA: 0x33C | Ordinal: 829
        void initPositionCarWithParent(class osg::Vec3d const &, float);

    // RVA: 0x340 | Ordinal: 833
        void initVOIP(void);

    // RVA: 0x341 | Ordinal: 834
        void initWaterTrail(void);

    // RVA: 0x345 | Ordinal: 838
        void isAutomaticTransmission(void) const;

    // RVA: 0x351 | Ordinal: 850
        void isHumanControlled(void) const;

    // RVA: 0x35A | Ordinal: 859
        void isPlayerCanDrive(void) const;

    // RVA: 0x35C | Ordinal: 861
        void isRadiatedByRadar(unsigned int, float &) const;

    // RVA: 0x369 | Ordinal: 874
        void is_master_arm_off(void) const;

    // RVA: 0x36B | Ordinal: 876
        void is_master_arm_off_or_deactivating(void) const;

    // RVA: 0x36D | Ordinal: 878
        void is_master_arm_on(bool) const;

    // RVA: 0x370 | Ordinal: 881
        void is_master_arm_on_or_activating(void) const;

    // RVA: 0x375 | Ordinal: 886
        void killMoveActivity(void);

    // RVA: 0x37C | Ordinal: 893
        void levelUnlevel(bool, bool);

    // RVA: 0x386 | Ordinal: 903
        void loadRSBN(class Lua::Config &);

    // RVA: 0x388 | Ordinal: 905
        void loadTACAN(class Lua::Config &);

    // RVA: 0x38A | Ordinal: 907
        void localPosition(double);

    // RVA: 0x38F | Ordinal: 912
        void makeCommunicator(void);

    // RVA: 0x390 | Ordinal: 913
        void manageLocatorRotation(double &);

    // RVA: 0x39F | Ordinal: 928
        void markGroup(bool, class osg::Vec3d const &);

    // RVA: 0x3A1 | Ordinal: 930
        void master_arm_off(bool);

    // RVA: 0x3A3 | Ordinal: 932
        void master_arm_on(bool);

    // RVA: 0x3AD | Ordinal: 942
        void netActivate(int);

    // RVA: 0x3AF | Ordinal: 944
        void netActivateAI(int);

    // RVA: 0x3B0 | Ordinal: 945
        void netAgonyTime(double);

    // RVA: 0x3B1 | Ordinal: 946
        void netCommCreateUpdate(int, unsigned char, float, double, float, enum wModulation);

    // RVA: 0x3B4 | Ordinal: 949
        void netCreate(struct InitNetCar const &, class Mail::Reader);

    // RVA: 0x3B9 | Ordinal: 954
        void netDestroy(void);

    // RVA: 0x3BE | Ordinal: 959
        void netDiscard(void);

    // RVA: 0x3C0 | Ordinal: 961
        void netEngineStartStop(bool);

    // RVA: 0x3C3 | Ordinal: 964
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x3C8 | Ordinal: 969
        void netGetHost(void) const;

    // RVA: 0x3CA | Ordinal: 971
        void netHackCoalition(struct lua_State *, class ed::basic_string<char> const &, struct woCar::InitCar *);

    // RVA: 0x3D8 | Ordinal: 985
        void netLocatorAnimationOnOff(bool);

    // RVA: 0x3D9 | Ordinal: 986
        void netNextTime(double &);

    // RVA: 0x3E0 | Ordinal: 993
        void netSendUpdate(int, int, int &);

    // RVA: 0x3E3 | Ordinal: 996
        void netSetTrailerId(unsigned int);

    // RVA: 0x3E4 | Ordinal: 997
        void netSetTransportationState(bool);

    // RVA: 0x3E5 | Ordinal: 998
        void netSetTruckId(unsigned int);

    // RVA: 0x3E8 | Ordinal: 1001
        void net_master_arm_off(void);

    // RVA: 0x3E9 | Ordinal: 1002
        void net_master_arm_on(void);

    // RVA: 0x3F0 | Ordinal: 1009
        void nextTime(double &);

    // RVA: 0x3F7 | Ordinal: 1016
        void onFullAmmoResetComplete(double &);

    // RVA: 0x3F8 | Ordinal: 1017
        void onNetHumanTakeControl(bool, bool, int);

    // RVA: 0x3FB | Ordinal: 1020
        void onWaterMotion(class wPosition3<float> &, double);

    // RVA: 0x3FC | Ordinal: 1021
        void openedCockpit(void) const;

    // RVA: 0x401 | Ordinal: 1026
        void prepareForRendering(void);

    // RVA: 0x405 | Ordinal: 1030
        void procActivateBeacon(class ed::basic_string<char> const &, class ed::basic_string<char> const &, unsigned __int64, double, int, int, double, bool);

    // RVA: 0x407 | Ordinal: 1032
        void procActivateGuidanceSystem(int, int, double, double, unsigned int);

    // RVA: 0x408 | Ordinal: 1033
        void procActivateJammer(int, int, double, double, int, double, double);

    // RVA: 0x40A | Ordinal: 1035
        void procActivateRSBN(int, class ed::basic_string<char> const &);

    // RVA: 0x40B | Ordinal: 1036
        void procAddDescent(unsigned int, int);

    // RVA: 0x40F | Ordinal: 1040
        void procCompliteParachuting(void);

    // RVA: 0x410 | Ordinal: 1041
        void procDatalinkStatusMsg(bool, class ed::basic_string<char> const &);

    // RVA: 0x412 | Ordinal: 1043
        void procDeactivateBeacon(class ed::basic_string<char> const &);

    // RVA: 0x414 | Ordinal: 1045
        void procDeactivateGuidanceSystem(void);

    // RVA: 0x415 | Ordinal: 1046
        void procDeactivateJammer(void);

    // RVA: 0x417 | Ordinal: 1048
        void procDeactivateRSBN(void);

    // RVA: 0x418 | Ordinal: 1049
        void procMsgFindGoodPoint(bool, float, float);

    // RVA: 0x419 | Ordinal: 1050
        void procRemoveDescent(unsigned int, unsigned int, float, float, float, float);

    // RVA: 0x41B | Ordinal: 1052
        void procRemovePriorityPointForGCI(void);

    // RVA: 0x41C | Ordinal: 1053
        void procReserveDescent(unsigned int, bool);

    // RVA: 0x41E | Ordinal: 1055
        void procSetPriorityPointForGCI(double, double, int);

    // RVA: 0x41F | Ordinal: 1056
        void procStartParachuting(void);

    // RVA: 0x421 | Ordinal: 1058
        void radioDeviceCallbackPtr(void);

    // RVA: 0x425 | Ordinal: 1062
        void reArmingFromWH(void);

    // RVA: 0x426 | Ordinal: 1063
        void reLocated(class osg::Vec2d const &, double, class osg::Vec2d const &);

    // RVA: 0x42D | Ordinal: 1070
        void rearming(double &);

    // RVA: 0x432 | Ordinal: 1075
        void receiveColorSmoke(class osg::Vec3f const &, int);

    // RVA: 0x434 | Ordinal: 1077
        void recoil(int, class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0x436 | Ordinal: 1079
        void redeployment(void);

    // RVA: 0x43A | Ordinal: 1083
        void refreshGuidanceAreaOfResponsibilityInfo(int, int, double, double, class ed::vector<unsigned int, class ed::allocator<unsigned int>>);

    // RVA: 0x43B | Ordinal: 1084
        void refreshGuidanceAreaOfResponsibilityInfoNet(int, int, double, double, unsigned int, unsigned int, unsigned int);

    // RVA: 0x441 | Ordinal: 1090
        void removeDescent(unsigned int, unsigned int, class osg::Vec2d const &, class osg::Vec2d const &);

    // RVA: 0x44A | Ordinal: 1099
        void removePriorityPointForGCI(void);

    // RVA: 0x44E | Ordinal: 1103
        void removeWaterTrail(void);

    // RVA: 0x451 | Ordinal: 1106
        void requestDeployedState(double &);

    // RVA: 0x452 | Ordinal: 1107
        void requestFindGoodPoint(unsigned int, class osg::Vec3d const &, class osg::Vec2d const &, double, double, double, double, class osg::Vec2d const &);

    // RVA: 0x453 | Ordinal: 1108
        void requestForDisembark(unsigned int);

    // RVA: 0x454 | Ordinal: 1109
        void requestForEmbark(unsigned int, float);

    // RVA: 0x456 | Ordinal: 1111
        void requestTransportationState(double &);

    // RVA: 0x45F | Ordinal: 1120
        void resetMoveActivity(bool);

    // RVA: 0x461 | Ordinal: 1122
        void resetPhysCarParams(void);

    // RVA: 0x466 | Ordinal: 1127
        void runAway(void);

    // RVA: 0x46A | Ordinal: 1131
        void searchForAvailableWarehouse(void);

    // RVA: 0x470 | Ordinal: 1137
        void sendCarIdForUpdate(unsigned int, int);

    // RVA: 0x471 | Ordinal: 1138
        void sendColorSmoke(class osg::Vec3f const &, int);

    // RVA: 0x473 | Ordinal: 1140
        void sendDatalinkStatusMsg(bool, class ed::basic_string<char> const &);

    // RVA: 0x476 | Ordinal: 1143
        void sendPPLI(void);

    // RVA: 0x478 | Ordinal: 1145
        void sendReserveDescent(unsigned int, bool);

    // RVA: 0x47B | Ordinal: 1148
        void setAI_OFF(void);

    // RVA: 0x47E | Ordinal: 1151
        void setAI_ON(void);

    // RVA: 0x481 | Ordinal: 1154
        void setAddPropertiesList(class std::unordered_map<class ed::basic_string<char>, struct customUnitProperty, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, struct customUnitProperty>>> *);

    // RVA: 0x48E | Ordinal: 1167
        void setCarIdForUpdate(unsigned int, int);

    // RVA: 0x492 | Ordinal: 1171
        void setColumn(class wcColumn *);

    // RVA: 0x493 | Ordinal: 1172
        void setColumn(struct woCar::InitCar const *, class wcColumn *);

    // RVA: 0x49D | Ordinal: 1182
        void setDemoralizedStance(bool);

    // RVA: 0x4A1 | Ordinal: 1186
        void setDiffInitAddProperties(class Mail::Reader &);

    // RVA: 0x4A3 | Ordinal: 1188
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x4A6 | Ordinal: 1191
        void setDrawArgumentValue(int, float);

    // RVA: 0x4C2 | Ordinal: 1219
        void setN_obj(int);

    // RVA: 0x4D5 | Ordinal: 1238
        void setPriorityPointForGCI(double, double, int);

    // RVA: 0x4D7 | Ordinal: 1240
        void setRelocated(class osg::Vec2d);

    // RVA: 0x4E0 | Ordinal: 1249
        void setRunAwayPoint(class osg::Vec3f const &);

    // RVA: 0x4E3 | Ordinal: 1252
        void setSoldierHeadVisible(bool);

    // RVA: 0x4EB | Ordinal: 1260
        void setStatus(struct CarStatus const &);

    // RVA: 0x4F4 | Ordinal: 1269
        void setTargetWho(int, int);

    // RVA: 0x4F7 | Ordinal: 1272
        void setTimeWaitExt(double);

    // RVA: 0x4FA | Ordinal: 1275
        void setTrailerToTruck(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d const &);

    // RVA: 0x4FC | Ordinal: 1277
        void setTransportationState(bool);

    // RVA: 0x500 | Ordinal: 1281
        void setWeaponStatus(class Mail::Reader);

    // RVA: 0x503 | Ordinal: 1284
        void sink(double &);

    // RVA: 0x507 | Ordinal: 1288
        void smoke_up(double &);

    // RVA: 0x508 | Ordinal: 1289
        void sound_init(void);

    // RVA: 0x50A | Ordinal: 1291
        void sound_load(class Lua::Config &);

    // RVA: 0x50B | Ordinal: 1292
        void sound_smoke_play(void);

    // RVA: 0x50C | Ordinal: 1293
        void sound_uninit(void);

    // RVA: 0x50E | Ordinal: 1295
        void sound_update(double &);

    // RVA: 0x50F | Ordinal: 1296
        void sound_update(void);

    // RVA: 0x511 | Ordinal: 1298
        void spawnColorFlare(int);

    // RVA: 0x515 | Ordinal: 1302
        void startLocator(void);

    // RVA: 0x516 | Ordinal: 1303
        void startRearming(void);

    // RVA: 0x51B | Ordinal: 1308
        void stopAndRemoveFromAIGroup(void);

    // RVA: 0x51C | Ordinal: 1309
        void stopLocator(void);

    // RVA: 0x51D | Ordinal: 1310
        void stopLocatorToDefault(void);

    // RVA: 0x521 | Ordinal: 1314
        void stopWipers(double &);

    // RVA: 0x532 | Ordinal: 1331
        void takeColorSmoke(int);

    // RVA: 0x533 | Ordinal: 1332
        void takeDamage(float, unsigned int, unsigned int);

    // RVA: 0x536 | Ordinal: 1335
        void takeMoraleHit(float, class osg::Vec3f const &);

    // RVA: 0x543 | Ordinal: 1348
        void tryToAddDescent(unsigned int, int);

    // RVA: 0x545 | Ordinal: 1350
        void tryToDisEmbark(class wControl *);

    // RVA: 0x546 | Ordinal: 1351
        void tryToEmbark(class wControl *);

    // RVA: 0x547 | Ordinal: 1352
        void tryToRemoveDescent(unsigned int, float, float, float, float);

    // RVA: 0x54A | Ordinal: 1355
        void turnSpeed(void) const;

    // RVA: 0x54C | Ordinal: 1357
        void uninitObject(void);

    // RVA: 0x551 | Ordinal: 1362
        void unwrap(void);

    // RVA: 0x55C | Ordinal: 1373
        void updateCriticalArgumentIDs(void);

    // RVA: 0x55F | Ordinal: 1376
        void updateDeadHeatSigniture(double &, class woCarDebris *);

    // RVA: 0x560 | Ordinal: 1377
        void updateDescentPostion(void);

    // RVA: 0x563 | Ordinal: 1380
        void updateGuidanceRadarTargetInfo(unsigned int, double, double, double, double, int, int);

    // RVA: 0x564 | Ordinal: 1381
        void updateGuidanceTargetInfo(unsigned int, unsigned int);

    // RVA: 0x56E | Ordinal: 1391
        void updateStatus(struct InitNetCar const &);

    // RVA: 0x571 | Ordinal: 1394
        void updateTargetInfo(unsigned int, struct STargetData const &);

    // RVA: 0x575 | Ordinal: 1398
        void useMarkedSmoke(bool, class osg::Vec3d const &);

    // RVA: 0x57D | Ordinal: 1406
        void warmUp(float);

    // RVA: 0x581 | Ordinal: 1410
        void windScreenWipers(double &);

    // RVA: 0x24 | Ordinal: 37
        void woCar(void);

    // RVA: 0x582 | Ordinal: 1411
        void wrap(void);

    // RVA: 0x39 | Ordinal: 58
        void _woCar(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_WOCAR_HPP
