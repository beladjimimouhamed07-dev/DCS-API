#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: chart_item
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class chart_item
{
public:

    // RVA: 0x8F4 | Ordinal: 2293
        void add(class cockpit::Element *);

    // RVA: 0x24B | Ordinal: 588
        void chart_item(class cockpit::chart_item const &);

    // RVA: 0x24C | Ordinal: 589
        void chart_item(void);

    // RVA: 0xB8F | Ordinal: 2960
        void draw(class cockpit::ccIndicationRenderParser &, unsigned char);

    // RVA: 0x12D4 | Ordinal: 4821
        void l_AABB(struct lua_State *);

    // RVA: 0x12D8 | Ordinal: 4825
        void l_OBB(struct lua_State *);

    // RVA: 0x12D9 | Ordinal: 4826
        void l_add_element(struct lua_State *);

    // RVA: 0x12DB | Ordinal: 4828
        void l_center(struct lua_State *);

    // RVA: 0x1596 | Ordinal: 5527
        void register_metatable(struct lua_State *);

    // RVA: 0x18C4 | Ordinal: 6341
        void set_limits(double, double, double, double);

    // RVA: 0x18DC | Ordinal: 6365
        void set_metatable(struct lua_State *);

    // RVA: 0x1AF6 | Ordinal: 6903
        void update(void);

    // RVA: 0x3A4 | Ordinal: 933
        void _chart_item(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CHART_ITEM_HPP
