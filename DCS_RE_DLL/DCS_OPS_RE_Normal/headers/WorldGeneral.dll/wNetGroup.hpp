#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wNetGroup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wNetGroup
{
public:

    // RVA: 0x53E | Ordinal: 1343
        void Class(void) const;

    // RVA: 0x546 | Ordinal: 1351
        void Coalition(void) const;

    // RVA: 0x6E2 | Ordinal: 1763
        void control(void);

    // RVA: 0x763 | Ordinal: 1892
        void deleteUIRoute(void);

    // RVA: 0x76D | Ordinal: 1902
        void destroy(bool);

    // RVA: 0x810 | Ordinal: 2065
        void getChilds(void) const;

    // RVA: 0x852 | Ordinal: 2131
        void getLeader(void) const;

    // RVA: 0x8C7 | Ordinal: 2248
        void getNetControl(int);

    // RVA: 0x8C8 | Ordinal: 2249
        void getNetControls(void);

    // RVA: 0x8C9 | Ordinal: 2250
        void getNetRoute(void);

    // RVA: 0x8D8 | Ordinal: 2265
        void getPos(void) const;

    // RVA: 0x8F5 | Ordinal: 2294
        void getSize(void) const;

    // RVA: 0x90C | Ordinal: 2317
        void getUnit(int) const;

    // RVA: 0x9AD | Ordinal: 2478
        void isDead(void) const;

    // RVA: 0x9CB | Ordinal: 2508
        void isUncontrolledFlag(void);

    // RVA: 0xA9D | Ordinal: 2718
        void onMemberBirth(class MovingObject *, int);

    // RVA: 0xA9E | Ordinal: 2719
        void onMemberDeath(class MovingObject *);

    // RVA: 0xBB1 | Ordinal: 2994
        void setLeader(class MovingObject *);

    // RVA: 0xBB7 | Ordinal: 3000
        void setNetRoute(struct AI::Route *);

    // RVA: 0xBB8 | Ordinal: 3001
        void setNetRouteIdx(int);

    // RVA: 0xBB9 | Ordinal: 3002
        void setNetUncontrolledFlag(bool);

    // RVA: 0xBFF | Ordinal: 3072
        void shutdown(void);

    // RVA: 0x1FA | Ordinal: 507
        void wNetGroup(class wNetGroup const &);

    // RVA: 0x1FB | Ordinal: 508
        void wNetGroup(enum wControlClass, class IwcCountry *);

    // RVA: 0x2D9 | Ordinal: 730
        void _wNetGroup(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WNETGROUP_HPP
