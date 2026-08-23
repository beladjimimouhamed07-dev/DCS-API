#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: woATC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woATC
{
public:

    // RVA: 0x84 | Ordinal: 133
        void AddElevator(int, enum ElevatorTypes);

    // RVA: 0x86 | Ordinal: 135
        void AddTerminalPoint(int, int, float, float, float, unsigned int);

    // RVA: 0x87 | Ordinal: 136
        void Can_Client_TakeOff(struct ClientData const &);

    // RVA: 0x8D | Ordinal: 142
        void Clean_Taxi(unsigned int);

    // RVA: 0x8E | Ordinal: 143
        void Clean_Terminals(unsigned char);

    // RVA: 0x92 | Ordinal: 147
        void Control(void);

    // RVA: 0x9C | Ordinal: 157
        void Determine_ShipRunwayNumForTO(unsigned int);

    // RVA: 0xA9 | Ordinal: 170
        void Get_BirthValid(void);

    // RVA: 0xAB | Ordinal: 172
        void Get_HelBirthValid(int);

    // RVA: 0xB0 | Ordinal: 177
        void Get_Landing_Point(class wPosition3<float> *, unsigned int);

    // RVA: 0xB1 | Ordinal: 178
        void Get_Landing_RW_Point(class MovingObject *, int, int);

    // RVA: 0xB6 | Ordinal: 183
        void Get_ShipRunwayNumForTO(unsigned int);

    // RVA: 0xB7 | Ordinal: 184
        void Get_TO_RW_Point(int &);

    // RVA: 0xB9 | Ordinal: 186
        void Get_TakeOff_Point(class wPosition3<float> *, unsigned int);

    // RVA: 0xBA | Ordinal: 187
        void Get_Taxi(unsigned int);

    // RVA: 0xBB | Ordinal: 188
        void Get_TaxiForTO(unsigned int, int &);

    // RVA: 0xBC | Ordinal: 189
        void Get_Taxi_Elevator_Out(unsigned int);

    // RVA: 0xC1 | Ordinal: 194
        void Glide_Slope(unsigned int) const;

    // RVA: 0xC5 | Ordinal: 198
        void Init0(void);

    // RVA: 0xC9 | Ordinal: 202
        void Init_Terminals(void);

    // RVA: 0xD4 | Ordinal: 213
        void RequestCrewPermission(class IwoLA *, enum wGroundCrew::GroundCrewRequest) const;

    // RVA: 0xD5 | Ordinal: 214
        void Reset_BirthValid(class cPointerTemplate<class wControl> const &);

    // RVA: 0xD6 | Ordinal: 215
        void Reset_HelBirthValid(class cPointerTemplate<class wControl> const &, int);

    // RVA: 0xD8 | Ordinal: 217
        void SetParking(int, class MovingObject *);

    // RVA: 0xD9 | Ordinal: 218
        void Set_BirthValid(class cPointerTemplate<class wControl> const &);

    // RVA: 0xDA | Ordinal: 219
        void Set_HelBirthValid(class cPointerTemplate<class wControl> const &);

    // RVA: 0xDB | Ordinal: 220
        void TakeOffTaxiRoute(void);

    // RVA: 0xE6 | Ordinal: 231
        void acquireFreeShipSpawnTerm_(unsigned int, unsigned int, class ed::basic_string<char> const &, bool, float);

    // RVA: 0xE7 | Ordinal: 232
        void acquireFreeShipTerm_(unsigned int);

    // RVA: 0xE8 | Ordinal: 233
        void acquireFreeTerm_(unsigned int, bool);

    // RVA: 0xEE | Ordinal: 239
        void addClientRWCrossing(unsigned int, int);

    // RVA: 0xF8 | Ordinal: 249
        void add_taxi_crew_client(class MovingObject *, struct TaxiPoint *);

    // RVA: 0xFA | Ordinal: 251
        void applyClientStatus(struct ClientData &, enum ClientStatus);

    // RVA: 0xFE | Ordinal: 255
        void autoCaptureIsOn(void) const;

    // RVA: 0x102 | Ordinal: 259
        void calculateACLS_TrafficControl(struct ClientData &, class Parameter const *);

    // RVA: 0x106 | Ordinal: 263
        void canClientProceedToRunway(unsigned int);

    // RVA: 0x107 | Ordinal: 264
        void canClientShipTaxi(unsigned int);

    // RVA: 0x108 | Ordinal: 265
        void canClientSopEngineOnParking(unsigned int);

    // RVA: 0x109 | Ordinal: 266
        void canClientSpawnOnTerminal(unsigned int);

    // RVA: 0x10A | Ordinal: 267
        void canDelay(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &) const;

    // RVA: 0x10B | Ordinal: 268
        void canInterrupt(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &) const;

    // RVA: 0x10C | Ordinal: 269
        void canRemove(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &) const;

    // RVA: 0x10D | Ordinal: 270
        void canStartLanding(void) const;

    // RVA: 0x10E | Ordinal: 271
        void canStartTakeoff(void) const;

    // RVA: 0x110 | Ordinal: 273
        void canTaxiingClientProceedToElevator(unsigned int);

    // RVA: 0x111 | Ordinal: 274
        void canUnitSpawnOnTerminalByType(class ed::basic_string<char> const &, float);

    // RVA: 0x112 | Ordinal: 275
        void checkAllowCrossing(class woLABase *, int const (&)[2]);

    // RVA: 0x113 | Ordinal: 276
        void checkAllowLandingForHelicopters(class woLABase *);

    // RVA: 0x115 | Ordinal: 278
        void checkAnyTermForObject(unsigned int);

    // RVA: 0x116 | Ordinal: 279
        void checkClosestToRW(unsigned int, double, int) const;

    // RVA: 0x117 | Ordinal: 280
        void checkIlluminationsConditions(void);

    // RVA: 0x118 | Ordinal: 281
        void checkObjectCrossing(unsigned int, int (&)[2]);

    // RVA: 0x11B | Ordinal: 284
        void checkRadio(void);

    // RVA: 0x11C | Ordinal: 285
        void checkRadioResource(void) const;

    // RVA: 0x124 | Ordinal: 293
        void checkandUpdateDistTOVpp(class woLABase *, float);

    // RVA: 0x12C | Ordinal: 301
        void controlClientGroups(void);

    // RVA: 0x12D | Ordinal: 302
        void controlClientsStatus(void);

    // RVA: 0x12E | Ordinal: 303
        void controlElevators(void);

    // RVA: 0x12F | Ordinal: 304
        void controlLanding(double &, unsigned int &);

    // RVA: 0x130 | Ordinal: 305
        void controlNonClients(void);

    // RVA: 0x131 | Ordinal: 306
        void controlRepair(void);

    // RVA: 0x132 | Ordinal: 307
        void controlRunwayOpen(void);

    // RVA: 0x133 | Ordinal: 308
        void controlSpotLights(void);

    // RVA: 0x134 | Ordinal: 309
        void controlTakeoff(void);

    // RVA: 0x135 | Ordinal: 310
        void controlTakeoffAndLanding(void);

    // RVA: 0x136 | Ordinal: 311
        void controlTaxi(void);

    // RVA: 0x137 | Ordinal: 312
        void controlTaxingGroup(struct GroupTaxi &);

    // RVA: 0x13B | Ordinal: 316
        void createFromCurrToRW(unsigned int);

    // RVA: 0x13D | Ordinal: 318
        void createFromCurrToTerminal(unsigned int);

    // RVA: 0x13F | Ordinal: 320
        void createLandingTaxiRoute(unsigned int);

    // RVA: 0x141 | Ordinal: 322
        void createRestoreLandingTaxi(unsigned int);

    // RVA: 0x143 | Ordinal: 324
        void createRestoreTakeOffTaxi(unsigned int);

    // RVA: 0x145 | Ordinal: 326
        void createTakeOffTaxiRoute(unsigned int);

    // RVA: 0x14B | Ordinal: 332
        void crew_assign_plane(class wCarrierCrew *, class woLABase *, int, bool);

    // RVA: 0x14E | Ordinal: 335
        void deck_crew_notify_land(void);

    // RVA: 0x151 | Ordinal: 338
        void dist_to_Runway(int &, class wPosition3<float> const &) const;

    // RVA: 0x152 | Ordinal: 339
        void distribute_coalition(class Lua::Config &);

    // RVA: 0x153 | Ordinal: 340
        void distribute_group(class Lua::Config &, int);

    // RVA: 0x154 | Ordinal: 341
        void distribute_plane_gates(void);

    // RVA: 0x155 | Ordinal: 342
        void distribute_unit(class Lua::Config &, int, char const *, int);

    // RVA: 0x159 | Ordinal: 346
        void enableCaptureThisBase(bool);

    // RVA: 0x15A | Ordinal: 347
        void erase_client(class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<unsigned int const, struct ClientData>>>>);

    // RVA: 0x15B | Ordinal: 348
        void fillClientsInitState(class std::map<unsigned int, struct ClientInitState, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, struct ClientInitState>>> &);

    // RVA: 0x15D | Ordinal: 350
        void fillRunwaysStartOrder(class std::map<unsigned int, int, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, int>>> &);

    // RVA: 0x15E | Ordinal: 351
        void fillTerminalsState(class ed::vector<struct TerminalState, class ed::allocator<struct TerminalState>> &);

    // RVA: 0x160 | Ordinal: 353
        void forEachTerminal(class std::function<bool __cdecl(class wsAdrTerminal const *)>) const;

    // RVA: 0x164 | Ordinal: 357
        void freeClient(class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<unsigned int const, struct ClientData>>>>);

    // RVA: 0x165 | Ordinal: 358
        void freeClient(struct ClientData &);

    // RVA: 0x166 | Ordinal: 359
        void freeUnusedTerminalAcquirement(unsigned int);

    // RVA: 0x173 | Ordinal: 372
        void getAircraftShedule(unsigned int, class taxiwaysDispatcher::AircraftSchedule &);

    // RVA: 0x17A | Ordinal: 379
        void getBubbleState(int);

    // RVA: 0x17B | Ordinal: 380
        void getCarrierRunwayStartNum(unsigned int);

    // RVA: 0x17C | Ordinal: 381
        void getCatapultShuttlePos(int, float) const;

    // RVA: 0x17D | Ordinal: 382
        void getClient(unsigned int);

    // RVA: 0x17E | Ordinal: 383
        void getClient(unsigned int, struct ClientData &) const;

    // RVA: 0x17F | Ordinal: 384
        void getClientLandingNumber(unsigned int);

    // RVA: 0x180 | Ordinal: 385
        void getClientRunwayPosition(struct ClientData const &, bool &, int (&)[2]);

    // RVA: 0x181 | Ordinal: 386
        void getClientRunwayPosition(unsigned int, bool &, int (&)[2]);

    // RVA: 0x182 | Ordinal: 387
        void getClientVelocity(struct ClientData const &) const;

    // RVA: 0x183 | Ordinal: 388
        void getClients(void) const;

    // RVA: 0x187 | Ordinal: 392
        void getCurrentAircraftPoR(unsigned int, struct edterrain::PointOnRoad &);

    // RVA: 0x188 | Ordinal: 393
        void getCurrentClientHookToEye(void);

    // RVA: 0x18E | Ordinal: 399
        void getDistToAircraftRunwayRemain(unsigned int);

    // RVA: 0x190 | Ordinal: 401
        void getElevatorByClientID(unsigned int);

    // RVA: 0x191 | Ordinal: 402
        void getElevatorByTerminal(class wsAdrTerminal *);

    // RVA: 0x192 | Ordinal: 403
        void getElevatorHeight(int);

    // RVA: 0x193 | Ordinal: 404
        void getElevatorState(int);

    // RVA: 0x195 | Ordinal: 406
        void getForcedTerminalByClient_(unsigned int, bool);

    // RVA: 0x196 | Ordinal: 407
        void getFoulDeck(void) const;

    // RVA: 0x197 | Ordinal: 408
        void getFreeCatapultsNum(void);

    // RVA: 0x198 | Ordinal: 409
        void getFreeTerminalByClient_(class ed::basic_string<char> const &, class ed::basic_string<char> const &, float);

    // RVA: 0x19A | Ordinal: 411
        void getGlideSlopeOccupant(void) const;

    // RVA: 0x19B | Ordinal: 412
        void getGlideSlopeOccupants(void) const;

    // RVA: 0x19D | Ordinal: 414
        void getGlideslopeBA(void) const;

    // RVA: 0x1A1 | Ordinal: 418
        void getHookToEye(struct Aircraft_Descriptor const *);

    // RVA: 0x1A4 | Ordinal: 421
        void getInitCoalition(void) const;

    // RVA: 0x1A8 | Ordinal: 425
        void getLSOManualControlOverride(void);

    // RVA: 0x1A9 | Ordinal: 426
        void getLandingClient(struct ClientData const &, struct LandingClient &);

    // RVA: 0x1AF | Ordinal: 432
        void getMarshalClients(void) const;

    // RVA: 0x1B1 | Ordinal: 434
        void getMarshalStackClientEAT(unsigned int);

    // RVA: 0x1B5 | Ordinal: 438
        void getMaxMarshalStackDist(void);

    // RVA: 0x1B7 | Ordinal: 440
        void getMyTerminal(class MovingObject *);

    // RVA: 0x1B9 | Ordinal: 442
        void getNearCrossroad(unsigned int, bool);

    // RVA: 0x1BA | Ordinal: 443
        void getNearRunwayCrossroad(unsigned int);

    // RVA: 0x1BF | Ordinal: 448
        void getOwnerName(void) const;

    // RVA: 0x1C0 | Ordinal: 449
        void getParkingObjID(int);

    // RVA: 0x1C5 | Ordinal: 454
        void getRWDir(class osg::Vec3d &, bool);

    // RVA: 0x1CD | Ordinal: 462
        void getRadioDeviceCallback(void);

    // RVA: 0x1CE | Ordinal: 463
        void getRadioSilentMode(void);

    // RVA: 0x1D0 | Ordinal: 465
        void getRecoveryCASE(void);

    // RVA: 0x1D4 | Ordinal: 469
        void getShieldFlag(int);

    // RVA: 0x1D5 | Ordinal: 470
        void getShipFreeTerminalForTeleport(unsigned int, unsigned int, class ed::basic_string<char> const &);

    // RVA: 0x1D6 | Ordinal: 471
        void getShipFreeTerminalsForGroupHeliSpawn(void);

    // RVA: 0x1D7 | Ordinal: 472
        void getShipFreeTerminalsForGroupSpawn(void);

    // RVA: 0x1D8 | Ordinal: 473
        void getShipHeliTerminalByClient(unsigned int, bool);

    // RVA: 0x1D9 | Ordinal: 474
        void getShipSpawnFreeTerminalByClient_(unsigned int, unsigned int, class ed::basic_string<char> const &, float);

    // RVA: 0x1DA | Ordinal: 475
        void getShipSpawnTerminalByClient_(unsigned int, unsigned int, class ed::basic_string<char> const &, bool, float);

    // RVA: 0x1DB | Ordinal: 476
        void getShipTerminalByClient_(unsigned int, bool);

    // RVA: 0x1DC | Ordinal: 477
        void getSomeoneOnLandingGlideslope(void);

    // RVA: 0x1DF | Ordinal: 480
        void getT4(float, float) const;

    // RVA: 0x1E0 | Ordinal: 481
        void getT4(void) const;

    // RVA: 0x1E3 | Ordinal: 484
        void getTanGlideslopeBA(void) const;

    // RVA: 0x1E6 | Ordinal: 487
        void getTerminal(unsigned int, int, int);

    // RVA: 0x1E7 | Ordinal: 488
        void getTerminalAtElevatorNum(unsigned int);

    // RVA: 0x1E9 | Ordinal: 490
        void getTerminalByClient(unsigned int, bool);

    // RVA: 0x1EA | Ordinal: 491
        void getTerminalByClientPoint_(unsigned int, class osg::Vec3d const &);

    // RVA: 0x1EB | Ordinal: 492
        void getTerminalByClient_(class ed::basic_string<char> const &, class ed::basic_string<char> const &, bool, float);

    // RVA: 0x1EC | Ordinal: 493
        void getTerminalByClient_(unsigned int, class ed::basic_string<char> const &, bool);

    // RVA: 0x1ED | Ordinal: 494
        void getTerminalByClient_(unsigned int, bool);

    // RVA: 0x1EE | Ordinal: 495
        void getTerminalByCrossName(class ed::basic_string<char> const &, int) const;

    // RVA: 0x1EF | Ordinal: 496
        void getTerminalByIndexOrID(int, class ed::basic_string<char> const &, int) const;

    // RVA: 0x1F1 | Ordinal: 498
        void getTerminalByTermIndex_(int) const;

    // RVA: 0x1F0 | Ordinal: 497
        void getTerminalByTermIndex_0(int) const;

    // RVA: 0x1F2 | Ordinal: 499
        void getTerminalList(void);

    // RVA: 0x1F3 | Ordinal: 500
        void getTerminalWOLA(int);

    // RVA: 0x1F4 | Ordinal: 501
        void getTime_Dest(void) const;

    // RVA: 0x1F9 | Ordinal: 506
        void getUseLAWidth(void);

    // RVA: 0x1FD | Ordinal: 510
        void getWaveOffLights(void) const;

    // RVA: 0x1FE | Ordinal: 511
        void get_Elevator_Height(unsigned int);

    // RVA: 0x215 | Ordinal: 534
        void get_parent_as_airdrome(void);

    // RVA: 0x216 | Ordinal: 535
        void get_parent_as_airdrome(void) const;

    // RVA: 0x223 | Ordinal: 548
        void hasClientWaveOffStatus(unsigned int) const;

    // RVA: 0x224 | Ordinal: 549
        void haveFreeTerminalForClient(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x225 | Ordinal: 550
        void haveFreeTerminalForClient(void);

    // RVA: 0x226 | Ordinal: 551
        void helli_birth_clients_sum(void) const;

    // RVA: 0x22C | Ordinal: 557
        void initClientStatus(unsigned int, struct ClientInitState const &);

    // RVA: 0x22D | Ordinal: 558
        void initCommunicator(int, double);

    // RVA: 0x22F | Ordinal: 560
        void initResourceRequirements(void);

    // RVA: 0x231 | Ordinal: 562
        void initialize_HAI_terms(void);

    // RVA: 0x232 | Ordinal: 563
        void initialize_ship_terms(void);

    // RVA: 0x236 | Ordinal: 567
        void isAdrTermObstructedFor(class wsAdrTerminal *, class ed::basic_string<char> const &, class ed::basic_string<char> const &, float) const;

    // RVA: 0x237 | Ordinal: 568
        void isAdrTermObstructedFor(class wsAdrTerminal *, class woLABase *) const;

    // RVA: 0x238 | Ordinal: 569
        void isAdrTermObstructedForDynamicAirdromeSpawn(class wsAdrTerminal *, class ed::basic_string<char> const &, class ed::basic_string<char> const &, float) const;

    // RVA: 0x23A | Ordinal: 571
        void isCatapultShuttleOnStartPosition(int);

    // RVA: 0x23B | Ordinal: 572
        void isClientAtElevator(unsigned int);

    // RVA: 0x23C | Ordinal: 573
        void isClientLanding(unsigned int);

    // RVA: 0x23D | Ordinal: 574
        void isCrossingBlocker(enum ClientStatus);

    // RVA: 0x240 | Ordinal: 577
        void isEnablePointTakeOff(class wsAdrTerminal const *, class ed::basic_string<char> const &) const;

    // RVA: 0x245 | Ordinal: 582
        void isNeedToRecalculateTaxiways(enum ClientStatus);

    // RVA: 0x247 | Ordinal: 584
        void isPointObstructedFor(class osg::Vec3f const &, class woLABase *) const;

    // RVA: 0x248 | Ordinal: 585
        void isPointObstructedFor(class wsAdrTerminal const *, class woLABase *) const;

    // RVA: 0x249 | Ordinal: 586
        void isPointTakeOffAirbase(class wsAdrTerminal *) const;

    // RVA: 0x24A | Ordinal: 587
        void isRunWayDamaged(void) const;

    // RVA: 0x24E | Ordinal: 591
        void isRunWayOpen(void) const;

    // RVA: 0x251 | Ordinal: 594
        void isRunwayFree(void) const;

    // RVA: 0x252 | Ordinal: 595
        void isRunwayFreeFor(struct ClientData const &) const;

    // RVA: 0x253 | Ordinal: 596
        void isShipRunwayFree(class woLABase *, unsigned int, float) const;

    // RVA: 0x254 | Ordinal: 597
        void isSomeoneRunwayCrossing(int (&)[2]);

    // RVA: 0x256 | Ordinal: 599
        void isTaxiToTakeoffPermit(unsigned int) const;

    // RVA: 0x257 | Ordinal: 600
        void isTermValidForObject(class wsAdrTerminal *, class woLABase *) const;

    // RVA: 0x258 | Ordinal: 601
        void isTerminalNotSuitableByWeight(int, class ed::basic_string<char> const &, float) const;

    // RVA: 0x269 | Ordinal: 618
        void marshalStackClientParams(unsigned int, int &, float &, float &);

    // RVA: 0x26D | Ordinal: 622
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x27A | Ordinal: 635
        void obtainDistToRW(class wsAdrTerminal *);

    // RVA: 0x27F | Ordinal: 640
        void onMessage(struct ClientData &, enum ATCMessage);

    // RVA: 0x280 | Ordinal: 641
        void onMessage(unsigned int, enum ATCMessage);

    // RVA: 0x281 | Ordinal: 642
        void onObjectCreate(unsigned int);

    // RVA: 0x282 | Ordinal: 643
        void onObjectDestroy(unsigned int);

    // RVA: 0x283 | Ordinal: 644
        void onRepairProcess(void) const;

    // RVA: 0x285 | Ordinal: 646
        void onTouchDown(class woLABase *);

    // RVA: 0x288 | Ordinal: 649
        void onWorldSpawnComplete(void);

    // RVA: 0x296 | Ordinal: 663
        void playShipSound(class ed::basic_string<char> const &);

    // RVA: 0x29C | Ordinal: 669
        void procClientMessage(unsigned int, enum ATCMessage);

    // RVA: 0x2A2 | Ordinal: 675
        void procInitClients(class std::map<unsigned int, struct ClientInitState, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, struct ClientInitState>>> const &);

    // RVA: 0x2A5 | Ordinal: 678
        void procInitStatus(struct AirbaseInitState const &);

    // RVA: 0x2A6 | Ordinal: 679
        void procInitTerminals(class ed::vector<struct TerminalState, class ed::allocator<struct TerminalState>> const &);

    // RVA: 0x2A8 | Ordinal: 681
        void procLSOSync(unsigned int, int, bool);

    // RVA: 0x2AA | Ordinal: 683
        void procMarshalClient(unsigned int, bool, int);

    // RVA: 0x2B7 | Ordinal: 696
        void procRequestTerminalForSpawn(unsigned int, unsigned int, class ed::basic_string<char> const &, float);

    // RVA: 0x2B8 | Ordinal: 697
        void procRunwaysStartOrder(class std::map<unsigned int, int, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, int>>> const &);

    // RVA: 0x2BA | Ordinal: 699
        void procSendRadioMessage(unsigned int, enum wMsg);

    // RVA: 0x2BC | Ordinal: 701
        void procSetClientStatus(unsigned int, enum ClientStatus);

    // RVA: 0x2C9 | Ordinal: 714
        void procTerminalStatus(unsigned int, int, int, bool);

    // RVA: 0x2CE | Ordinal: 719
        void processMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x2D2 | Ordinal: 723
        void recalculateTaxiwaydata(class ed::vector<class taxiwaysDispatcher::AircraftSchedule, class ed::allocator<class taxiwaysDispatcher::AircraftSchedule>> const &, class ed::vector<class taxiwaysDispatcher::AircraftSchedule, class ed::allocator<class taxiwaysDispatcher::AircraftSchedule>> &);

    // RVA: 0x2D5 | Ordinal: 726
        void removeCrossingVpp(unsigned int);

    // RVA: 0x2DF | Ordinal: 736
        void return_object_from_terminal_to_warehouse_and_free(class wsBasicTerminal &, class IwWarehouse *);

    // RVA: 0x2E7 | Ordinal: 744
        void selectAndAcquireHAITerminal(unsigned int);

    // RVA: 0x2E8 | Ordinal: 745
        void sendACLSMessage(unsigned int, int, class Parameter const *);

    // RVA: 0x2E9 | Ordinal: 746
        void sendMessage(enum wMsg, class MovingObject *);

    // RVA: 0x2EA | Ordinal: 747
        void sendPilotLandingDataToAirWing(struct PilotLandingData const &);

    // RVA: 0x2ED | Ordinal: 750
        void setATC(class wAirbase *, int);

    // RVA: 0x2EE | Ordinal: 751
        void setATCComm(double, enum wModulation, int);

    // RVA: 0x2F2 | Ordinal: 755
        void setBubbleCommand(int, int);

    // RVA: 0x2F3 | Ordinal: 756
        void setClientSpawnOnFreeTerminal(unsigned int, class ed::basic_string<char> const &, float);

    // RVA: 0x2F4 | Ordinal: 757
        void setClientSpawnOnTerminal(unsigned int);

    // RVA: 0x2F5 | Ordinal: 758
        void setClientSpawnOnTerminalByPoint(unsigned int, class osg::Vec3f const &);

    // RVA: 0x2F6 | Ordinal: 759
        void setClientSpawnOnTerminalMiss(unsigned int, class ed::basic_string<char> const &, float);

    // RVA: 0x2F7 | Ordinal: 760
        void setClientStatus(struct ClientData &, enum ClientStatus, enum wMsg);

    // RVA: 0x2F8 | Ordinal: 761
        void setClientStatusClient(struct ClientData &, enum ClientStatus);

    // RVA: 0x2F9 | Ordinal: 762
        void setClientStatusServer(struct ClientData &, enum ClientStatus, enum wMsg);

    // RVA: 0x2FE | Ordinal: 767
        void setDistToAircraftRunwayRemain(unsigned int, float);

    // RVA: 0x2FF | Ordinal: 768
        void setElevatorCommand(int, int);

    // RVA: 0x304 | Ordinal: 773
        void setIFLOSCutAndWaveOffLights(float, float);

    // RVA: 0x305 | Ordinal: 774
        void setIFLOSGlideslopeAngle(float);

    // RVA: 0x307 | Ordinal: 776
        void setInitCoalition(enum wcCoalitionName);

    // RVA: 0x309 | Ordinal: 778
        void setLSOManualControlOverride(bool);

    // RVA: 0x30C | Ordinal: 781
        void setRadioSilentMode(bool);

    // RVA: 0x30F | Ordinal: 784
        void setRunwayNumberToClient(unsigned int, int);

    // RVA: 0x310 | Ordinal: 785
        void setShelterDoor(class wsAdrTerminal const *, bool);

    // RVA: 0x311 | Ordinal: 786
        void setShieldFlag(int, bool);

    // RVA: 0x316 | Ordinal: 791
        void setTime_Dest(double);

    // RVA: 0x330 | Ordinal: 817
        void teleport_aircraft(class wPosition3<double>, unsigned int);

    // RVA: 0x333 | Ordinal: 820
        void timeStep(void);

    // RVA: 0x336 | Ordinal: 823
        void transmitMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class std::bitset<32>);

    // RVA: 0x337 | Ordinal: 824
        void tryPlaceClientsInShipTerminals(class ed::vector<unsigned int, class ed::allocator<unsigned int>> const &);

    // RVA: 0x339 | Ordinal: 826
        void updateCoalition(void);

    // RVA: 0x33D | Ordinal: 830
        void updateRWCrossingOnRW(struct ClientData &);

    // RVA: 0x33E | Ordinal: 831
        void updateTermObstructions(void);

    // RVA: 0x342 | Ordinal: 835
        void useNewDispatcher(void);

    // RVA: 0x343 | Ordinal: 836
        void valid_terminal_type(class wsAdrTerminal *, struct Aircraft_Descriptor const *, bool) const;

    // RVA: 0x22 | Ordinal: 35
        void woATC(void);

    // RVA: 0x3B | Ordinal: 60
        void _woATC(void);
};

// DCS_OPS_RE_FLIGHT.DLL_WOATC_HPP
