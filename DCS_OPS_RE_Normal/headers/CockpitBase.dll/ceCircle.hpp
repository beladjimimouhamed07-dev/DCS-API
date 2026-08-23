#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceCircle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceCircle
{
public:

    // RVA: 0x94D | Ordinal: 2382
        void apply(void);

    // RVA: 0x22B | Ordinal: 556
        void ceCircle(class cockpit::ceCircle const &);

    // RVA: 0x22C | Ordinal: 557
        void ceCircle(void);

    // RVA: 0xA93 | Ordinal: 2708
        void class_name(void) const;

    // RVA: 0xB1A | Ordinal: 2843
        void copy(void);

    // RVA: 0xE3E | Ordinal: 3647
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0x160B | Ordinal: 5644
        void rescale(void);

    // RVA: 0x17ED | Ordinal: 6126
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x181B | Ordinal: 6172
        void set_arc_end(float);

    // RVA: 0x181C | Ordinal: 6173
        void set_arc_gap_len(float);

    // RVA: 0x181D | Ordinal: 6174
        void set_arc_segment_len(float);

    // RVA: 0x181E | Ordinal: 6175
        void set_arc_start(float);

    // RVA: 0x191B | Ordinal: 6428
        void set_radius_inner(float);

    // RVA: 0x191C | Ordinal: 6429
        void set_radius_outer(float);

    // RVA: 0x395 | Ordinal: 918
        void _ceCircle(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CECIRCLE_HPP
