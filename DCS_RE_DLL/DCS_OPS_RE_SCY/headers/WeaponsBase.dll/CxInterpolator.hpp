#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: CxInterpolator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class CxInterpolator
{
public:

    // RVA: 0x1 | Ordinal: 2
        void CxInterpolator(double, double, double, double, double);

    // RVA: 0x2 | Ordinal: 3
        void CxInterpolator(double const *);

    // RVA: 0x3 | Ordinal: 4
        void CxInterpolator(void);

    // RVA: 0xDF | Ordinal: 224
        void calcCx(double) const;

    // RVA: 0x1AC | Ordinal: 429
        void getRawCx(void) const;

    // RVA: 0x1EA | Ordinal: 491
        void init(double const *);

    // RVA: 0x46 | Ordinal: 71
        void _CxInterpolator(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_CXINTERPOLATOR_HPP
