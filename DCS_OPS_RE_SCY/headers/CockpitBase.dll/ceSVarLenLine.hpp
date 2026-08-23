#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceSVarLenLine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceSVarLenLine
{
public:

    // RVA: 0x951 | Ordinal: 2386
        void apply(void);

    // RVA: 0x240 | Ordinal: 577
        void ceSVarLenLine(class cockpit::ceSVarLenLine const &);

    // RVA: 0x241 | Ordinal: 578
        void ceSVarLenLine(void);

    // RVA: 0xA9C | Ordinal: 2717
        void class_name(void) const;

    // RVA: 0xB23 | Ordinal: 2852
        void copy(void);

    // RVA: 0xE47 | Ordinal: 3656
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0xF9D | Ordinal: 3998
        void get_length(void) const;

    // RVA: 0x156A | Ordinal: 5483
        void readVertsFromParser(void);

    // RVA: 0x157E | Ordinal: 5503
        void recalcVerts(void);

    // RVA: 0x1610 | Ordinal: 5649
        void rescale(void);

    // RVA: 0x17F6 | Ordinal: 6135
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x18C2 | Ordinal: 6339
        void set_length(float);

    // RVA: 0x1B1D | Ordinal: 6942
        void updateMaxLen(void);

    // RVA: 0x39F | Ordinal: 928
        void _ceSVarLenLine(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CESVARLENLINE_HPP
