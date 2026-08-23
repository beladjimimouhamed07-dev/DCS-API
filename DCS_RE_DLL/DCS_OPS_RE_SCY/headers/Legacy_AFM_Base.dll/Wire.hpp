#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Wire
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Wire
{
public:

    // RVA: 0x37D | Ordinal: 894
        void Construct(void);

    // RVA: 0x3E5 | Ordinal: 998
        void Create(void);

    // RVA: 0xF9 | Ordinal: 250
        void Wire(class AFM::Wire &&);

    // RVA: 0xFA | Ordinal: 251
        void Wire(class AFM::Wire const &);

    // RVA: 0xFB | Ordinal: 252
        void Wire(void);

    // RVA: 0x597 | Ordinal: 1432
        void getCurrent(double *);

    // RVA: 0x79E | Ordinal: 1951
        void setCurrent(double);

    // RVA: 0x155 | Ordinal: 342
        void _Wire(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_WIRE_HPP
