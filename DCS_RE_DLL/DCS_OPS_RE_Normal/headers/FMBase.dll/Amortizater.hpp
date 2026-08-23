#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Amortizater
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Amortizater
{
public:

    // RVA: 0x19 | Ordinal: 26
        void Amortizater(struct EagleFM::AmortizaterInit const &);

    // RVA: 0x1A | Ordinal: 27
        void Amortizater(void);

    // RVA: 0x4C3 | Ordinal: 1220
        void getAmortizaterProp(void) const;

    // RVA: 0x566 | Ordinal: 1383
        void getForce(void) const;

    // RVA: 0x5B3 | Ordinal: 1460
        void getLength(void) const;

    // RVA: 0x5C6 | Ordinal: 1479
        void getMaxLength(void) const;

    // RVA: 0x5CA | Ordinal: 1483
        void getMinLength(void) const;

    // RVA: 0x710 | Ordinal: 1809
        void init(struct EagleFM::AmortizaterInit const &);

    // RVA: 0x80F | Ordinal: 2064
        void setBasicLength(double);

    // RVA: 0x897 | Ordinal: 2200
        void setLength(double, bool);

    // RVA: 0x8A0 | Ordinal: 2209
        void setMaxLength(double);

    // RVA: 0x8A3 | Ordinal: 2212
        void setMinLength(double);

    // RVA: 0x906 | Ordinal: 2311
        void setStockSpeed(double);

    // RVA: 0x94B | Ordinal: 2380
        void simulate(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_AMORTIZATER_HPP
