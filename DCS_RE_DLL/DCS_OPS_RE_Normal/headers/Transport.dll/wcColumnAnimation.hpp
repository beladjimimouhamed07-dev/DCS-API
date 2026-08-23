#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: wcColumnAnimation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wcColumnAnimation
{
public:

    // RVA: 0x9E | Ordinal: 159
        void Class(void) const;

    // RVA: 0xA5 | Ordinal: 166
        void Coalition(void) const;

    // RVA: 0xAE | Ordinal: 175
        void Control(void);

    // RVA: 0xB7 | Ordinal: 184
        void EventBlock(struct EventBase const *) const;

    // RVA: 0x141 | Ordinal: 322
        void addMember(class woCharacterHuman *);

    // RVA: 0x146 | Ordinal: 327
        void addToAIColumn(unsigned int);

    // RVA: 0x149 | Ordinal: 330
        void afterCreatePath(bool);

    // RVA: 0x14B | Ordinal: 332
        void afterCreatePathMSG(bool, bool);

    // RVA: 0x165 | Ordinal: 358
        void canForceRiver(void) const;

    // RVA: 0x16A | Ordinal: 363
        void canSwim(void) const;

    // RVA: 0x191 | Ordinal: 402
        void clearPath(void);

    // RVA: 0x1A9 | Ordinal: 426
        void create(struct lua_State *, class IwcCountry *, bool, unsigned char);

    // RVA: 0x1BB | Ordinal: 444
        void createNetPath(class std::map<float, struct RoutePoint, struct std::less<float>, class ed::allocator<struct std::pair<float const, struct RoutePoint>>> const &);

    // RVA: 0x1BD | Ordinal: 446
        void createPathAndUnits(class Lua::Config &, unsigned char);

    // RVA: 0x1BF | Ordinal: 448
        void createPathEnd(int, bool);

    // RVA: 0x1C6 | Ordinal: 455
        void currentAlarmState(void) const;

    // RVA: 0x1C8 | Ordinal: 457
        void currentFormation(void) const;

    // RVA: 0x1CA | Ordinal: 459
        void currentROE(void) const;

    // RVA: 0x1E0 | Ordinal: 481
        void destroy(bool);

    // RVA: 0x1E6 | Ordinal: 487
        void destroyObjectOnPath(unsigned int);

    // RVA: 0x232 | Ordinal: 563
        void getCreatePathRetValue(void);

    // RVA: 0x239 | Ordinal: 570
        void getCurrentSpeed(void) const;

    // RVA: 0x23F | Ordinal: 576
        void getDesc(void) const;

    // RVA: 0x248 | Ordinal: 585
        void getDetector(void);

    // RVA: 0x260 | Ordinal: 609
        void getFordingDepth(void) const;

    // RVA: 0x266 | Ordinal: 615
        void getFreeFormPos(class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> const &, class ed::basic_string<char> const &);

    // RVA: 0x289 | Ordinal: 650
        void getLeader(void) const;

    // RVA: 0x28D | Ordinal: 654
        void getLeaderNumWP(void) const;

    // RVA: 0x2B2 | Ordinal: 691
        void getObject(unsigned __int64) const;

    // RVA: 0x2B6 | Ordinal: 695
        void getObstacles(void) const;

    // RVA: 0x2E0 | Ordinal: 737
        void getSize(void) const;

    // RVA: 0x2FA | Ordinal: 763
        void getUnit(int) const;

    // RVA: 0x32C | Ordinal: 813
        void initActionBlocks(bool);

    // RVA: 0x32D | Ordinal: 814
        void initActivity(void);

    // RVA: 0x33E | Ordinal: 831
        void initRoute(class AI::Mission *);

    // RVA: 0x34B | Ordinal: 844
        void isDead(void) const;

    // RVA: 0x34F | Ordinal: 848
        void isFOTargetsAssignable(void) const;

    // RVA: 0x379 | Ordinal: 890
        void leaderPointOnRoadParam(struct edterrain::PointOnRoad &) const;

    // RVA: 0x3A8 | Ordinal: 937
        void maxSlopeAngle(void) const;

    // RVA: 0x3B3 | Ordinal: 948
        void netCreate(unsigned int, enum wcCoalitionName, bool, unsigned int, class ed::basic_string<char> const &, struct ColumnStatus const &);

    // RVA: 0x3B8 | Ordinal: 953
        void netDestroy(void);

    // RVA: 0x3BD | Ordinal: 958
        void netDiscard(void);

    // RVA: 0x3C2 | Ordinal: 963
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x3C7 | Ordinal: 968
        void netGetHost(void) const;

    // RVA: 0x3D2 | Ordinal: 979
        void netInputStatus(struct ColumnStatus const &);

    // RVA: 0x3D5 | Ordinal: 982
        void netInputUpdateLocation(class osg::Vec3f const &, class osg::Quatf const &, float const &);

    // RVA: 0x3D7 | Ordinal: 984
        void netIsMaster(void) const;

    // RVA: 0x3DF | Ordinal: 992
        void netSendUpdate(int, int, int &);

    // RVA: 0x3E6 | Ordinal: 999
        void netUpdate(double &);

    // RVA: 0x445 | Ordinal: 1094
        void removeFromAIColumn(unsigned int);

    // RVA: 0x447 | Ordinal: 1096
        void removeMember(unsigned int);

    // RVA: 0x45D | Ordinal: 1118
        void resetCreatePathRetValue(void);

    // RVA: 0x465 | Ordinal: 1126
        void routeSpeed(void) const;

    // RVA: 0x469 | Ordinal: 1130
        void scheduleActivitiesStart(void);

    // RVA: 0x491 | Ordinal: 1170
        void setCoalition(enum wcCoalitionName);

    // RVA: 0x4DD | Ordinal: 1246
        void setRoute(class std::map<float, struct RoutePoint, struct std::less<float>, class ed::allocator<struct std::pair<float const, struct RoutePoint>>> &);

    // RVA: 0x519 | Ordinal: 1306
        void state(void) const;

    // RVA: 0x524 | Ordinal: 1317
        void subscribeTakeControlEvent(void);

    // RVA: 0x550 | Ordinal: 1361
        void unsubscribeTakeControlEvent(void);

    // RVA: 0x555 | Ordinal: 1366
        void update(double &);

    // RVA: 0x1E | Ordinal: 31
        void wcColumnAnimation(void);

    // RVA: 0x36 | Ordinal: 55
        void _wcColumnAnimation(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_WCCOLUMNANIMATION_HPP
