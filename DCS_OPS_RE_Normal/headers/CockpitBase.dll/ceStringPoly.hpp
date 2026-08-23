#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceStringPoly
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceStringPoly
{
public:

    // RVA: 0x843 | Ordinal: 2116
        void OnFirstTime(void);

    // RVA: 0x8E2 | Ordinal: 2275
        void UTF8_substr_buffer(unsigned __int64, unsigned __int64);

    // RVA: 0x954 | Ordinal: 2389
        void apply(void);

    // RVA: 0x95C | Ordinal: 2397
        void apply_text(void);

    // RVA: 0x246 | Ordinal: 583
        void ceStringPoly(void);

    // RVA: 0xAD4 | Ordinal: 2773
        void clear_string(void);

    // RVA: 0xB26 | Ordinal: 2855
        void copy(void);

    // RVA: 0xE4A | Ordinal: 3659
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0x13C4 | Ordinal: 5061
        void log_self(class ed::basic_string<char> &);

    // RVA: 0x1513 | Ordinal: 5396
        void precreate(void);

    // RVA: 0x1613 | Ordinal: 5652
        void rescale(void);

    // RVA: 0x163D | Ordinal: 5694
        void reverse_video(bool);

    // RVA: 0x167E | Ordinal: 5759
        void self_render(class cockpit::ccIndicationRenderParser &);

    // RVA: 0x17F9 | Ordinal: 6138
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x1829 | Ordinal: 6186
        void set_background_forced_color(float, float, float);

    // RVA: 0x1891 | Ordinal: 6290
        void set_formatted_string(char const *, ...);

    // RVA: 0x18D4 | Ordinal: 6357
        void set_mat_params(class cockpit::ccIndicationRenderParser const &, class Graphics::RenderObject *);

    // RVA: 0x18D7 | Ordinal: 6360
        void set_material(class ed::basic_string<char> const &);

    // RVA: 0x193B | Ordinal: 6460
        void set_strcat(char const *, ...);

    // RVA: 0x193D | Ordinal: 6462
        void set_strcat_by_predefined_format(int, ...);

    // RVA: 0x193F | Ordinal: 6464
        void set_string(class ed::basic_string<char> const &);

    // RVA: 0x1940 | Ordinal: 6465
        void set_string(char const *);

    // RVA: 0x1941 | Ordinal: 6466
        void set_string_by_predefined_format(int, ...);

    // RVA: 0x1AF5 | Ordinal: 6902
        void update(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CESTRINGPOLY_HPP
