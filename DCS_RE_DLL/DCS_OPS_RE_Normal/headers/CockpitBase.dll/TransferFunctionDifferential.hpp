#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: TransferFunctionDifferential
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class TransferFunctionDifferential
{
public:

    // RVA: 0x79C | Ordinal: 1949
        void GetA(void) const;

    // RVA: 0x7A3 | Ordinal: 1956
        void GetB(void) const;

    // RVA: 0x7B4 | Ordinal: 1973
        void GetGamma(void) const;

    // RVA: 0x8E | Ordinal: 143
        void TransferFunctionDifferential(class cockpit::TransferFunctionDifferential &&);

    // RVA: 0x8F | Ordinal: 144
        void TransferFunctionDifferential(class cockpit::TransferFunctionDifferential const &);

    // RVA: 0x90 | Ordinal: 145
        void TransferFunctionDifferential(void);

    // RVA: 0x2C2 | Ordinal: 707
        void _TransferFunctionDifferential(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_TRANSFERFUNCTIONDIFFERENTIAL_HPP
