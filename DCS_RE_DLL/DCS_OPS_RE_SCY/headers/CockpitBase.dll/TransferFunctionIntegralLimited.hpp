#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: TransferFunctionIntegralLimited
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class TransferFunctionIntegralLimited
{
public:

    // RVA: 0x97 | Ordinal: 152
        void TransferFunctionIntegralLimited(class cockpit::TransferFunctionIntegralLimited &&);

    // RVA: 0x98 | Ordinal: 153
        void TransferFunctionIntegralLimited(class cockpit::TransferFunctionIntegralLimited const &);

    // RVA: 0x99 | Ordinal: 154
        void TransferFunctionIntegralLimited(void);

    // RVA: 0x1754 | Ordinal: 5973
        void setMinMaxValue(double, double);

    // RVA: 0x1A8C | Ordinal: 6797
        void update(double, double);

    // RVA: 0x2C5 | Ordinal: 710
        void _TransferFunctionIntegralLimited(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_TRANSFERFUNCTIONINTEGRALLIMITED_HPP
