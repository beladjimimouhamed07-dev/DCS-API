#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: wAirdrome
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAirdrome
{
public:

    // RVA: 0x85 | Ordinal: 134
        void AddRunWay(class wPosition3<float> &, float, float, class wsType);

    // RVA: 0x88 | Ordinal: 137
        void Check_RunWayHit(class osg::Vec3f const &, int) const;

    // RVA: 0x89 | Ordinal: 138
        void Class(void) const;

    // RVA: 0x8C | Ordinal: 141
        void Clean_Taxi(unsigned int);

    // RVA: 0x90 | Ordinal: 145
        void Control(void);

    // RVA: 0x93 | Ordinal: 148
        void Control_Beacons(void);

    // RVA: 0x94 | Ordinal: 149
        void Control_Light(void);

    // RVA: 0x95 | Ordinal: 150
        void Control_Radar_Mail(void);

    // RVA: 0x96 | Ordinal: 151
        void Course(void);

    // RVA: 0x98 | Ordinal: 153
        void Create(int, class Lua::Config &);

    // RVA: 0x99 | Ordinal: 154
        void CreatePathOnAirfield(int, int, float, float, bool, class ed::vector<int, class ed::allocator<int>> const &, bool &);

    // RVA: 0x9A | Ordinal: 155
        void CreateRunWay(void);

    // RVA: 0x9B | Ordinal: 156
        void DeleteRunWay(void);

    // RVA: 0x9D | Ordinal: 158
        void FillProjectorList(class Lua::Config &);

    // RVA: 0x9F | Ordinal: 160
        void GetAirdromePlaceData(int, class Lua::Config &);

    // RVA: 0xA0 | Ordinal: 161
        void GetAirfieldCrossPoint(unsigned int, class osg::Vec3f *);

    // RVA: 0xA1 | Ordinal: 162
        void GetCrossRoadOnAirfield(unsigned int);

    // RVA: 0xA2 | Ordinal: 163
        void GetNumCrossRoadsOnAirfield(void);

    // RVA: 0xA3 | Ordinal: 164
        void GetPlacementData(void) const;

    // RVA: 0xA4 | Ordinal: 165
        void GetRoadOnAirfield(unsigned int);

    // RVA: 0xA5 | Ordinal: 166
        void GetRunWayID(int);

    // RVA: 0xA7 | Ordinal: 168
        void GetRunwayPosition(int) const;

    // RVA: 0xB2 | Ordinal: 179
        void Get_NumClosestRW(float, class osg::Vec3f const &);

    // RVA: 0xB4 | Ordinal: 181
        void Get_RW_Course_Number(bool, int *);

    // RVA: 0xB5 | Ordinal: 182
        void Get_RW_Number(bool) const;

    // RVA: 0xC2 | Ordinal: 195
        void Hrad(void);

    // RVA: 0xC8 | Ordinal: 201
        void Init(int, class Lua::Config &);

    // RVA: 0xCE | Ordinal: 207
        void OnOffProjector(bool);

    // RVA: 0xCF | Ordinal: 208
        void On_RunWay(class osg::Vec3f const &, int, int (&)[2]) const;

    // RVA: 0xD2 | Ordinal: 211
        void PostCollisionProcessing(struct wsCollisionData *);

    // RVA: 0xD7 | Ordinal: 216
        void SetATC(class Lua::Config &);

    // RVA: 0xED | Ordinal: 238
        void activateRwyNavaid(int, enum BeaconType, bool);

    // RVA: 0xFD | Ordinal: 254
        void attachBeaconToRunway(int, enum BeaconType, class osg::Vec3f);

    // RVA: 0x105 | Ordinal: 262
        void canClientProceedToRunway(unsigned int);

    // RVA: 0x119 | Ordinal: 282
        void checkPointIsInServiceableArea(class osg::Vec3d const &) const;

    // RVA: 0x125 | Ordinal: 294
        void clear(void);

    // RVA: 0x128 | Ordinal: 297
        void clear_communications(void);

    // RVA: 0x129 | Ordinal: 298
        void clear_site(bool);

    // RVA: 0x13A | Ordinal: 315
        void createFromCurrToRW(unsigned int);

    // RVA: 0x13C | Ordinal: 317
        void createFromCurrToTerminal(unsigned int);

    // RVA: 0x13E | Ordinal: 319
        void createLandingTaxiRoute(unsigned int);

    // RVA: 0x140 | Ordinal: 321
        void createRestoreLandingTaxi(unsigned int);

    // RVA: 0x142 | Ordinal: 323
        void createRestoreTakeOffTaxi(unsigned int);

    // RVA: 0x144 | Ordinal: 325
        void createTakeOffTaxiRoute(unsigned int);

    // RVA: 0x14A | Ordinal: 331
        void create_warehouse(class ed::basic_string<char> const &, class Lua::Config &);

    // RVA: 0x150 | Ordinal: 337
        void distToRunway(struct RunwayDirection const *, class osg::Vec3f const &, float &) const;

    // RVA: 0x156 | Ordinal: 343
        void doCloseDoor(unsigned int);

    // RVA: 0x157 | Ordinal: 344
        void doDamage(float, unsigned short);

    // RVA: 0x158 | Ordinal: 345
        void doOpenDoor(unsigned int);

    // RVA: 0x161 | Ordinal: 354
        void formVPPName(float);

    // RVA: 0x174 | Ordinal: 373
        void getAirdrome(unsigned int);

    // RVA: 0x175 | Ordinal: 374
        void getAirdromeByLev4(unsigned short);

    // RVA: 0x176 | Ordinal: 375
        void getAirdromeCount(void);

    // RVA: 0x177 | Ordinal: 376
        void getAirdromeIndex(class wAirdrome *);

    // RVA: 0x178 | Ordinal: 377
        void getAirdromeName(unsigned short, bool);

    // RVA: 0x186 | Ordinal: 391
        void getConfig(void);

    // RVA: 0x18A | Ordinal: 395
        void getDefaultCameraPosition(void) const;

    // RVA: 0x18B | Ordinal: 396
        void getDeniedStartRoads(class wPosition3<float> const &, int, class ed::vector<int, class ed::allocator<int>> &);

    // RVA: 0x18D | Ordinal: 398
        void getDisplayName(void) const;

    // RVA: 0x194 | Ordinal: 405
        void getFirstAliveRunWay(void);

    // RVA: 0x1A2 | Ordinal: 419
        void getId(void) const;

    // RVA: 0x1A3 | Ordinal: 420
        void getIlsFrequency(int);

    // RVA: 0x1B4 | Ordinal: 437
        void getMaxLength(void);

    // RVA: 0x1C6 | Ordinal: 455
        void getRWDirPos(struct RunwayDirection const *) const;

    // RVA: 0x1C7 | Ordinal: 456
        void getRWNumber(struct ClientData const &) const;

    // RVA: 0x1C8 | Ordinal: 457
        void getRWdir(int) const;

    // RVA: 0x1CA | Ordinal: 459
        void getRWdirForPurpose(enum wAirbase::E_RWdirPurpose, unsigned int) const;

    // RVA: 0x1CB | Ordinal: 460
        void getRWdirForPurposeRaw(enum wAirbase::E_RWdirPurpose, unsigned int) const;

    // RVA: 0x1CC | Ordinal: 461
        void getRadioBeacons(void);

    // RVA: 0x1D2 | Ordinal: 467
        void getRussianName(void) const;

    // RVA: 0x1D3 | Ordinal: 468
        void getShelterToggleList(void) const;

    // RVA: 0x1E1 | Ordinal: 482
        void getTacanChannel(void);

    // RVA: 0x1E4 | Ordinal: 485
        void getTaxiways(void);

    // RVA: 0x1E5 | Ordinal: 486
        void getTaxiways(void) const;

    // RVA: 0x1F5 | Ordinal: 502
        void getTraitWeightL(enum TraitsIdx, int) const;

    // RVA: 0x1F6 | Ordinal: 503
        void getTraitWeightT(enum TraitsIdx, int) const;

    // RVA: 0x1FF | Ordinal: 512
        void get_ICAO_Code(void) const;

    // RVA: 0x202 | Ordinal: 515
        void get_RW_SideOrientation(class ed::basic_string<char> const &);

    // RVA: 0x203 | Ordinal: 516
        void get_RW_data_by_name(class ed::basic_string<char> const &);

    // RVA: 0x214 | Ordinal: 533
        void get_param_value(unsigned int);

    // RVA: 0x227 | Ordinal: 552
        void helperIsRWpurposeLanding(int) const;

    // RVA: 0x228 | Ordinal: 553
        void helperIsRWpurposeTakeoff(int) const;

    // RVA: 0x22E | Ordinal: 559
        void initNavaids(void);

    // RVA: 0x230 | Ordinal: 561
        void initStaticTraits(void);

    // RVA: 0x235 | Ordinal: 566
        void isAbandoned(void) const;

    // RVA: 0x239 | Ordinal: 570
        void isAirdromeRadarValid(void);

    // RVA: 0x23E | Ordinal: 575
        void isCrossingRunway(struct RunwayDirection const *, class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0x244 | Ordinal: 581
        void isMilitary(void) const;

    // RVA: 0x246 | Ordinal: 583
        void isNumberedRunwayFree(int);

    // RVA: 0x24C | Ordinal: 589
        void isRunWayOpen(void) const;

    // RVA: 0x250 | Ordinal: 593
        void isRunwayFree(bool (__cdecl *)(class viObject *, class viSearch *, void *), void *, unsigned int);

    // RVA: 0x26E | Ordinal: 623
        void netGetHost(void) const;

    // RVA: 0x27C | Ordinal: 637
        void onFirstRun(void);

    // RVA: 0x287 | Ordinal: 648
        void onWorldSpawnComplete(enum spawnStageCompletion);

    // RVA: 0x28A | Ordinal: 651
        void on_element_disable(class lSiteElement *);

    // RVA: 0x290 | Ordinal: 657
        void openTermDoor(class wsAdrTerminal const *, bool);

    // RVA: 0x2A4 | Ordinal: 677
        void procInitStatus(struct AirdromeInitState const &);

    // RVA: 0x2BF | Ordinal: 704
        void procSetProjectorsOn(bool);

    // RVA: 0x2C0 | Ordinal: 705
        void procSetRunwayLights(unsigned char, unsigned char);

    // RVA: 0x2C1 | Ordinal: 706
        void procSetTaxiwayLights(bool);

    // RVA: 0x2D1 | Ordinal: 722
        void readApproachLightsConfig(class Lua::Config &);

    // RVA: 0x2FB | Ordinal: 764
        void setCoalition(enum wcCoalitionName);

    // RVA: 0x30E | Ordinal: 783
        void setRunwayLights(unsigned char, unsigned char);

    // RVA: 0x313 | Ordinal: 788
        void setState(unsigned char);

    // RVA: 0x317 | Ordinal: 792
        void setTraitWeightL(enum TraitsIdx, int, double);

    // RVA: 0x318 | Ordinal: 793
        void setTraitWeightT(enum TraitsIdx, int, double);

    // RVA: 0x325 | Ordinal: 806
        void spawn(void);

    // RVA: 0x33A | Ordinal: 827
        void updateDynamicTraits(void);

    // RVA: 0x33C | Ordinal: 829
        void updateNavaidActiveTrait(int, enum BeaconType, bool);

    // RVA: 0x16 | Ordinal: 23
        void wAirdrome(void);

    // RVA: 0x33 | Ordinal: 52
        void _wAirdrome(void);
};

// DCS_OPS_RE_FLIGHT.DLL_WAIRDROME_HPP
