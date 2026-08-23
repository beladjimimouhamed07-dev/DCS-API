#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: TransferFunctionForce
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class TransferFunctionForce
{
public:

    // RVA: 0x79D | Ordinal: 1950
        void GetA(void) const;

    // RVA: 0x7A4 | Ordinal: 1957
        void GetB(void) const;

    // RVA: 0x7B5 | Ordinal: 1974
        void GetGamma(void) const;

    // RVA: 0x91 | Ordinal: 146
        void TransferFunctionForce(class cockpit::TransferFunctionForce &&);

    // RVA: 0x92 | Ordinal: 147
        void TransferFunctionForce(class cockpit::TransferFunctionForce const &);

    // RVA: 0x93 | Ordinal: 148
        void TransferFunctionForce(void);

    // RVA: 0x2C3 | Ordinal: 708
        void _TransferFunctionForce(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_TRANSFERFUNCTIONFORCE_HPP
