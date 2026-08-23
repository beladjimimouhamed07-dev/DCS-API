#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: TransferFunctionAperiodic
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class TransferFunctionAperiodic
{
public:

    // RVA: 0x79B | Ordinal: 1948
        void GetA(void) const;

    // RVA: 0x7A2 | Ordinal: 1955
        void GetB(void) const;

    // RVA: 0x7B3 | Ordinal: 1972
        void GetGamma(void) const;

    // RVA: 0x8B | Ordinal: 140
        void TransferFunctionAperiodic(class cockpit::TransferFunctionAperiodic &&);

    // RVA: 0x8C | Ordinal: 141
        void TransferFunctionAperiodic(class cockpit::TransferFunctionAperiodic const &);

    // RVA: 0x8D | Ordinal: 142
        void TransferFunctionAperiodic(void);

    // RVA: 0x2C1 | Ordinal: 706
        void _TransferFunctionAperiodic(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_TRANSFERFUNCTIONAPERIODIC_HPP
