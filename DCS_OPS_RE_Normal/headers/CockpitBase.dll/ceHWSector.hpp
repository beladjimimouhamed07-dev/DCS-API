#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceHWSector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceHWSector
{
public:

    // RVA: 0x83E | Ordinal: 2111
        void OnFirstTime(void);

    // RVA: 0x9ED | Ordinal: 2542
        void calculate_texcoords(class Graphics::RenderObject *, char);

    // RVA: 0x234 | Ordinal: 565
        void ceHWSector(class cockpit::ceHWSector const &);

    // RVA: 0x235 | Ordinal: 566
        void ceHWSector(void);

    // RVA: 0xA96 | Ordinal: 2711
        void class_name(void) const;

    // RVA: 0xB1D | Ordinal: 2846
        void copy(void);

    // RVA: 0xE41 | Ordinal: 3650
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0xE9F | Ordinal: 3744
        void get_angle(void) const;

    // RVA: 0x160D | Ordinal: 5646
        void rescale(void);

    // RVA: 0x1679 | Ordinal: 5754
        void self_render(class cockpit::ccIndicationRenderParser &);

    // RVA: 0x17F0 | Ordinal: 6129
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x1819 | Ordinal: 6170
        void set_angle(float);

    // RVA: 0x1909 | Ordinal: 6410
        void set_position_to_render(void);

    // RVA: 0x399 | Ordinal: 922
        void _ceHWSector(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CEHWSECTOR_HPP
