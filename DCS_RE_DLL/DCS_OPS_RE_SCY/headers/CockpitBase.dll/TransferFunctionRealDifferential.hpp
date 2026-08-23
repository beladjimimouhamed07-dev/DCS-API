#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: TransferFunctionRealDifferential
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class TransferFunctionRealDifferential
{
public:

    // RVA: 0x79F | Ordinal: 1952
        void GetA(void) const;

    // RVA: 0x7A6 | Ordinal: 1959
        void GetB(void) const;

    // RVA: 0x7B7 | Ordinal: 1976
        void GetGamma(void) const;

    // RVA: 0x9A | Ordinal: 155
        void TransferFunctionRealDifferential(class cockpit::TransferFunctionRealDifferential &&);

    // RVA: 0x9B | Ordinal: 156
        void TransferFunctionRealDifferential(class cockpit::TransferFunctionRealDifferential const &);

    // RVA: 0x9C | Ordinal: 157
        void TransferFunctionRealDifferential(void);

    // RVA: 0x2C6 | Ordinal: 711
        void _TransferFunctionRealDifferential(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_TRANSFERFUNCTIONREALDIFFERENTIAL_HPP
