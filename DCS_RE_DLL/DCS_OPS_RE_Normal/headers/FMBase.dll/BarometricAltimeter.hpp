#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: BarometricAltimeter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class BarometricAltimeter
{
public:

    // RVA: 0x28 | Ordinal: 41
        void BarometricAltimeter(class EagleFM::IPitotStatic const *const);

    // RVA: 0x4D8 | Ordinal: 1241
        void getBarometricAltitude(void) const;

    // RVA: 0x4D9 | Ordinal: 1242
        void getBasicAtmoPressureHg(void) const;

    // RVA: 0x63D | Ordinal: 1598
        void getReferenceAltitudeToISA(void) const;

    // RVA: 0x80D | Ordinal: 2062
        void setBasicAtmoPressureHg(double);

    // RVA: 0x8C5 | Ordinal: 2246
        void setPito(class EagleFM::IPitotStatic const *);

    // RVA: 0x94E | Ordinal: 2383
        void simulate(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_BAROMETRICALTIMETER_HPP
