#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: wHeliport
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wHeliport
{
public:

    // RVA: 0x8A | Ordinal: 139
        void Class(void) const;

    // RVA: 0x91 | Ordinal: 146
        void Control(void);

    // RVA: 0xA8 | Ordinal: 169
        void GetRunwayPosition(int) const;

    // RVA: 0xEF | Ordinal: 240
        void addLaunchPad(class lLandHeliport *);

    // RVA: 0x11A | Ordinal: 283
        void checkPointIsInServiceableArea(class osg::Vec3d const &) const;

    // RVA: 0x12B | Ordinal: 300
        void contolIllumination(void);

    // RVA: 0x138 | Ordinal: 313
        void create(unsigned int, struct wHeliportState const &, bool);

    // RVA: 0x15C | Ordinal: 349
        void fillNetHeliportInitState(struct heliportInitState &) const;

    // RVA: 0x1AA | Ordinal: 427
        void getLaunchPads(void) const;

    // RVA: 0x21A | Ordinal: 539
        void get_reference_points(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &) const;

    // RVA: 0x24D | Ordinal: 590
        void isRunWayOpen(void) const;

    // RVA: 0x27E | Ordinal: 639
        void onMessage(unsigned int, enum ATCMessage);

    // RVA: 0x2B5 | Ordinal: 694
        void procNetCreate(unsigned int, struct heliportInitState const &);

    // RVA: 0x2DE | Ordinal: 735
        void resourceIndependent(void) const;

    // RVA: 0x2FC | Ordinal: 765
        void setCoalition(enum wcCoalitionName);

    // RVA: 0x301 | Ordinal: 770
        void setHeliport(struct wHeliportState const &);

    // RVA: 0x326 | Ordinal: 807
        void spawnLaunchPad(class Lua::Config &, enum wcCoalitionName, int);

    // RVA: 0x327 | Ordinal: 808
        void spawnLaunchPadGroupDone(struct wHeliportState *);

    // RVA: 0x328 | Ordinal: 809
        void spawnLaunchPadGroupStep(struct wHeliport::spawnLaunchPadEntryData &);

    // RVA: 0x1B | Ordinal: 28
        void wHeliport(void);

    // RVA: 0x37 | Ordinal: 56
        void _wHeliport(void);
};

// DCS_OPS_RE_FLIGHT.DLL_WHELIPORT_HPP
