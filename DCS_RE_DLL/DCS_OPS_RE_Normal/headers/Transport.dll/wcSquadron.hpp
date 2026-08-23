#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: wcSquadron
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wcSquadron
{
public:

    // RVA: 0x9F | Ordinal: 160
        void Class(void) const;

    // RVA: 0xA6 | Ordinal: 167
        void Coalition(void) const;

    // RVA: 0xAF | Ordinal: 176
        void Control(void);

    // RVA: 0xC9 | Ordinal: 202
        void GetLastWaypointId(void) const;

    // RVA: 0x11D | Ordinal: 286
        void SetTaskSquadron(int);

    // RVA: 0x12D | Ordinal: 302
        void _deleteTask(unsigned int);

    // RVA: 0x12E | Ordinal: 303
        void _deleteTask(class AI::Task *);

    // RVA: 0x142 | Ordinal: 323
        void addMember(class woShip *);

    // RVA: 0x144 | Ordinal: 325
        void addTargetTask(unsigned int, class AI::Task *);

    // RVA: 0x162 | Ordinal: 355
        void calculateElementMotionSquadron(double &);

    // RVA: 0x19A | Ordinal: 411
        void control(double &);

    // RVA: 0x1AA | Ordinal: 427
        void create(struct lua_State *, class IwcCountry *, bool, unsigned char);

    // RVA: 0x1D6 | Ordinal: 471
        void deleteShips(void);

    // RVA: 0x1D9 | Ordinal: 474
        void deleteTargetTask(unsigned int);

    // RVA: 0x1DA | Ordinal: 475
        void deleteUIRoute(void);

    // RVA: 0x1E1 | Ordinal: 482
        void destroy(bool);

    // RVA: 0x237 | Ordinal: 568
        void getCurrentRoute(void);

    // RVA: 0x240 | Ordinal: 577
        void getDesc(void) const;

    // RVA: 0x249 | Ordinal: 586
        void getDetector(void);

    // RVA: 0x26B | Ordinal: 620
        void getGotoIndex(void);

    // RVA: 0x26C | Ordinal: 621
        void getGotoWaypoint(void);

    // RVA: 0x28A | Ordinal: 651
        void getLeader(void) const;

    // RVA: 0x28B | Ordinal: 652
        void getLeaderId(void);

    // RVA: 0x2A5 | Ordinal: 678
        void getNetControl(int);

    // RVA: 0x2A7 | Ordinal: 680
        void getNetControls(void);

    // RVA: 0x2A8 | Ordinal: 681
        void getNetRoute(void) const;

    // RVA: 0x2AA | Ordinal: 683
        void getNetRouteIdx(void);

    // RVA: 0x2B3 | Ordinal: 692
        void getObject(unsigned __int64) const;

    // RVA: 0x2D6 | Ordinal: 727
        void getRoute(void);

    // RVA: 0x2D8 | Ordinal: 729
        void getRoutesize(void);

    // RVA: 0x2E1 | Ordinal: 738
        void getSize(void) const;

    // RVA: 0x2F7 | Ordinal: 760
        void getTumblingDistance(void);

    // RVA: 0x2FB | Ordinal: 764
        void getUnit(int) const;

    // RVA: 0x2FC | Ordinal: 765
        void getUnitById(unsigned int) const;

    // RVA: 0x300 | Ordinal: 769
        void getVectorStrivePoint(void);

    // RVA: 0x302 | Ordinal: 771
        void getVelocitySquadron(void);

    // RVA: 0x328 | Ordinal: 809
        void informShipsAboutLeader(unsigned int);

    // RVA: 0x32B | Ordinal: 812
        void init(struct lua_State *, unsigned char);

    // RVA: 0x34C | Ordinal: 845
        void isDead(void) const;

    // RVA: 0x376 | Ordinal: 887
        void leaderIsDead(void);

    // RVA: 0x448 | Ordinal: 1097
        void removeMember(class woShip *);

    // RVA: 0x48A | Ordinal: 1163
        void setAltitudeToGroup(double, bool, bool);

    // RVA: 0x49A | Ordinal: 1179
        void setCountry(struct lua_State *, class IwcCountry *, unsigned char, bool);

    // RVA: 0x4A0 | Ordinal: 1185
        void setDetector(class woShip *);

    // RVA: 0x4B5 | Ordinal: 1206
        void setGotoIndex(int);

    // RVA: 0x4C5 | Ordinal: 1222
        void setNetRoute(struct AI::Route *);

    // RVA: 0x4C7 | Ordinal: 1224
        void setNetRouteIdx(int);

    // RVA: 0x4CD | Ordinal: 1230
        void setOnOff(bool);

    // RVA: 0x4CF | Ordinal: 1232
        void setOption(unsigned int, class Parameter const &);

    // RVA: 0x4DE | Ordinal: 1247
        void setRoute(class ed::vector<struct TaxiPoint, class ed::allocator<struct TaxiPoint>> const &);

    // RVA: 0x4E7 | Ordinal: 1256
        void setSpeedToGroup(double, bool);

    // RVA: 0x51A | Ordinal: 1307
        void state(void) const;

    // RVA: 0x573 | Ordinal: 1396
        void updateVelocitySquadron(void);

    // RVA: 0x22 | Ordinal: 35
        void wcSquadron(class wcSquadron const &);

    // RVA: 0x23 | Ordinal: 36
        void wcSquadron(void);

    // RVA: 0x38 | Ordinal: 57
        void _wcSquadron(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_WCSQUADRON_HPP
