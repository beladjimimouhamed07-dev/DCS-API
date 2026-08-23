#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccMovingMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccMovingMap
{
public:

    // RVA: 0x211 | Ordinal: 530
        void ccMovingMap(class cockpit::ccMovingMap const &);

    // RVA: 0x212 | Ordinal: 531
        void ccMovingMap(void);

    // RVA: 0xA67 | Ordinal: 2664
        void check_availability(unsigned int) const;

    // RVA: 0xA6C | Ordinal: 2669
        void check_charts(unsigned int, double);

    // RVA: 0xB7C | Ordinal: 2941
        void distribute_elements(void);

    // RVA: 0xB8C | Ordinal: 2957
        void draw(class cockpit::ccIndicationRenderParser &, unsigned char);

    // RVA: 0xC30 | Ordinal: 3121
        void get(void);

    // RVA: 0xEBE | Ordinal: 3775
        void get_bound(void) const;

    // RVA: 0xEF7 | Ordinal: 3832
        void get_current_level(void) const;

    // RVA: 0xFC9 | Ordinal: 4042
        void get_minimum_cell(void) const;

    // RVA: 0x12DE | Ordinal: 4831
        void l_create_chart(struct lua_State *);

    // RVA: 0x1320 | Ordinal: 4897
        void l_get_render_to_texture(struct lua_State *);

    // RVA: 0x137B | Ordinal: 4988
        void l_set_render_to_texture(struct lua_State *);

    // RVA: 0x1552 | Ordinal: 5459
        void push_to_remove(class cockpit::Element *);

    // RVA: 0x1584 | Ordinal: 5509
        void reg_in_reusable_state(struct lua_State *);

    // RVA: 0x15E7 | Ordinal: 5608
        void render(class cockpit::ccIndicationRenderParser &, unsigned char);

    // RVA: 0x184B | Ordinal: 6220
        void set_current_level(unsigned int);

    // RVA: 0x18CD | Ordinal: 6350
        void set_map_availability(bool);

    // RVA: 0x1A4B | Ordinal: 6732
        void to_texture(void) const;

    // RVA: 0x389 | Ordinal: 906
        void _ccMovingMap(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCMOVINGMAP_HPP
