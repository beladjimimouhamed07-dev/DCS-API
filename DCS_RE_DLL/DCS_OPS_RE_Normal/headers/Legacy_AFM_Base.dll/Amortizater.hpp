#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Amortizater
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Amortizater
{
public:

    // RVA: 0xF | Ordinal: 16
        void Amortizater(class AFM::Amortizater &&);

    // RVA: 0x10 | Ordinal: 17
        void Amortizater(class AFM::Amortizater const &);

    // RVA: 0x11 | Ordinal: 18
        void Amortizater(void);

    // RVA: 0x340 | Ordinal: 833
        void Construct(void);

    // RVA: 0x398 | Ordinal: 921
        void Create(void);

    // RVA: 0x4D1 | Ordinal: 1234
        void Simulation(double);

    // RVA: 0x55D | Ordinal: 1374
        void calcStockSpeedFlagOff(void);

    // RVA: 0x55E | Ordinal: 1375
        void calcStockSpeedFlagOn(void);

    // RVA: 0x582 | Ordinal: 1411
        void getBackDamperForceFactor(double *);

    // RVA: 0x585 | Ordinal: 1414
        void getBasicLength(double *);

    // RVA: 0x59A | Ordinal: 1435
        void getDirectDamperForceFactor(double *);

    // RVA: 0x5A8 | Ordinal: 1449
        void getForce(double *);

    // RVA: 0x6B4 | Ordinal: 1717
        void getLength(double *);

    // RVA: 0x6CD | Ordinal: 1742
        void getMaxLength(double *);

    // RVA: 0x6DC | Ordinal: 1757
        void getMinLength(double *);

    // RVA: 0x740 | Ordinal: 1857
        void getSpringForceFactor(double *);

    // RVA: 0x743 | Ordinal: 1860
        void getStockSpeed(double *);

    // RVA: 0x788 | Ordinal: 1929
        void setBackDamperForceFactor(double);

    // RVA: 0x78C | Ordinal: 1933
        void setBasicLength(double);

    // RVA: 0x7A1 | Ordinal: 1954
        void setDirectDamperForceFactor(double);

    // RVA: 0x7B3 | Ordinal: 1972
        void setForce(double);

    // RVA: 0x7FE | Ordinal: 2047
        void setLength(double);

    // RVA: 0x814 | Ordinal: 2069
        void setMaxLength(double);

    // RVA: 0x824 | Ordinal: 2085
        void setMinLength(double);

    // RVA: 0x87E | Ordinal: 2175
        void setReduceLength(double);

    // RVA: 0x8C0 | Ordinal: 2241
        void setSpringForceFactor(double);

    // RVA: 0x8C2 | Ordinal: 2243
        void setSpringForceFactorRate(double);

    // RVA: 0x8C4 | Ordinal: 2245
        void setStaticForce(double);

    // RVA: 0x8C6 | Ordinal: 2247
        void setStockSpeed(double);

    // RVA: 0x107 | Ordinal: 264
        void _Amortizater(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_AMORTIZATER_HPP
