#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccMapObjectsBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccMapObjectsBuffer
{
public:

    // RVA: 0x92F | Ordinal: 2352
        void add_waypoint(class cockpit::avMovingMapPoint *, bool);

    // RVA: 0x20E | Ordinal: 527
        void ccMapObjectsBuffer(class cockpit::ccMapObjectsBuffer const &);

    // RVA: 0x20F | Ordinal: 528
        void ccMapObjectsBuffer(unsigned int);

    // RVA: 0xB8B | Ordinal: 2956
        void draw(class cockpit::ccIndicationRenderParser &, unsigned char);

    // RVA: 0x10CA | Ordinal: 4299
        void get_template_by_index(unsigned int);

    // RVA: 0x121A | Ordinal: 4635
        void initialize(class cockpit::ccIndicator *, struct lua_State *, char const *);

    // RVA: 0x157D | Ordinal: 5502
        void rebuild(class cockpit::Element *);

    // RVA: 0x161D | Ordinal: 5662
        void reset(void);

    // RVA: 0x1837 | Ordinal: 6200
        void set_cache(unsigned int);

    // RVA: 0x387 | Ordinal: 904
        void _ccMapObjectsBuffer(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCMAPOBJECTSBUFFER_HPP
