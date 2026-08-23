#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceParsedElement
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceParsedElement
{
public:

    // RVA: 0x840 | Ordinal: 2113
        void OnFirstTime(void);

    // RVA: 0x94F | Ordinal: 2384
        void apply(void);

    // RVA: 0x23A | Ordinal: 571
        void ceParsedElement(class cockpit::ceParsedElement const &);

    // RVA: 0x23B | Ordinal: 572
        void ceParsedElement(void);

    // RVA: 0xA99 | Ordinal: 2714
        void class_name(void) const;

    // RVA: 0xB20 | Ordinal: 2849
        void copy(void);

    // RVA: 0xCC3 | Ordinal: 3268
        void getGeometry(void) const;

    // RVA: 0xE44 | Ordinal: 3653
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0x1569 | Ordinal: 5482
        void readVertsFromParser(void);

    // RVA: 0x160F | Ordinal: 5648
        void rescale(void);

    // RVA: 0x161E | Ordinal: 5663
        void reset(void);

    // RVA: 0x167B | Ordinal: 5756
        void self_render(class cockpit::ccIndicationRenderParser &);

    // RVA: 0x17F3 | Ordinal: 6132
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x39C | Ordinal: 925
        void _ceParsedElement(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CEPARSEDELEMENT_HPP
