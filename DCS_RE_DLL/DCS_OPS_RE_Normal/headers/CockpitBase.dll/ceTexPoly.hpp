#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceTexPoly
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceTexPoly
{
public:

    // RVA: 0x844 | Ordinal: 2117
        void OnFirstTime(void);

    // RVA: 0x956 | Ordinal: 2391
        void apply(void);

    // RVA: 0x9EE | Ordinal: 2543
        void calculate_texcoords(class Graphics::RenderObject *);

    // RVA: 0x249 | Ordinal: 586
        void ceTexPoly(class cockpit::ceTexPoly const &);

    // RVA: 0x24A | Ordinal: 587
        void ceTexPoly(void);

    // RVA: 0xAA0 | Ordinal: 2721
        void class_name(void) const;

    // RVA: 0xB28 | Ordinal: 2857
        void copy(void);

    // RVA: 0xE0A | Ordinal: 3595
        void getState(void) const;

    // RVA: 0xE4C | Ordinal: 3661
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0x17B9 | Ordinal: 6074
        void setState(int);

    // RVA: 0x17FB | Ordinal: 6140
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x3A3 | Ordinal: 932
        void _ceTexPoly(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CETEXPOLY_HPP
