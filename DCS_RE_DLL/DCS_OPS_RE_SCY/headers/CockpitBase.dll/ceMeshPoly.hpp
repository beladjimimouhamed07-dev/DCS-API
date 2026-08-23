#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceMeshPoly
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceMeshPoly
{
public:

    // RVA: 0x83F | Ordinal: 2112
        void OnFirstTime(void);

    // RVA: 0x238 | Ordinal: 569
        void ceMeshPoly(class cockpit::ceMeshPoly const &);

    // RVA: 0x239 | Ordinal: 570
        void ceMeshPoly(void);

    // RVA: 0xA98 | Ordinal: 2713
        void class_name(void) const;

    // RVA: 0xB1F | Ordinal: 2848
        void copy(void);

    // RVA: 0xBC3 | Ordinal: 3012
        void editGeometry(void);

    // RVA: 0xCC2 | Ordinal: 3267
        void getGeometry(void) const;

    // RVA: 0xE43 | Ordinal: 3652
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0x122E | Ordinal: 4655
        void input_space_SRGB(void) const;

    // RVA: 0x160E | Ordinal: 5647
        void rescale(void);

    // RVA: 0x167A | Ordinal: 5755
        void self_render(class cockpit::ccIndicationRenderParser &);

    // RVA: 0x17F2 | Ordinal: 6131
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x39B | Ordinal: 924
        void _ceMeshPoly(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CEMESHPOLY_HPP
