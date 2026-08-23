#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceHWLine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceHWLine
{
public:

    // RVA: 0x83D | Ordinal: 2110
        void OnFirstTime(void);

    // RVA: 0x9EC | Ordinal: 2541
        void calculate_texcoords(class Graphics::RenderObject *);

    // RVA: 0x232 | Ordinal: 563
        void ceHWLine(class cockpit::ceHWLine const &);

    // RVA: 0x233 | Ordinal: 564
        void ceHWLine(void);

    // RVA: 0xA95 | Ordinal: 2710
        void class_name(void) const;

    // RVA: 0xB1C | Ordinal: 2845
        void copy(void);

    // RVA: 0xE40 | Ordinal: 3649
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0xF9C | Ordinal: 3997
        void get_length(void) const;

    // RVA: 0x160C | Ordinal: 5645
        void rescale(void);

    // RVA: 0x1678 | Ordinal: 5753
        void self_render(class cockpit::ccIndicationRenderParser &);

    // RVA: 0x17EF | Ordinal: 6128
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x18C1 | Ordinal: 6338
        void set_length(float);

    // RVA: 0x1908 | Ordinal: 6409
        void set_position_to_render(void);

    // RVA: 0x398 | Ordinal: 921
        void _ceHWLine(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CEHWLINE_HPP
