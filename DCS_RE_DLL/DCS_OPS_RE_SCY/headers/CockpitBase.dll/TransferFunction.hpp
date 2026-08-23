#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: TransferFunction
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class TransferFunction
{
public:

    // RVA: 0x89 | Ordinal: 138
        void TransferFunction(class cockpit::TransferFunction const &);

    // RVA: 0x8A | Ordinal: 139
        void TransferFunction(void);

    // RVA: 0xCB9 | Ordinal: 3258
        void getFunctionValue(void) const;

    // RVA: 0x1153 | Ordinal: 4436
        void init(double, double, double, double);

    // RVA: 0x1617 | Ordinal: 5656
        void reset(void);

    // RVA: 0x173F | Ordinal: 5952
        void setK(double);

    // RVA: 0x17D9 | Ordinal: 6106
        void setTimeConstant1(double);

    // RVA: 0x17DA | Ordinal: 6107
        void setTimeConstant2(double);

    // RVA: 0x1A8B | Ordinal: 6796
        void update(double, double);

    // RVA: 0x2C0 | Ordinal: 705
        void _TransferFunction(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_TRANSFERFUNCTION_HPP
