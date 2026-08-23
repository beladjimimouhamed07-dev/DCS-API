#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: RotorGear
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class RotorGear
{
public:

    // RVA: 0x128 | Ordinal: 297
        void RotorGear(class EagleFM::RotorGear const &);

    // RVA: 0x129 | Ordinal: 298
        void RotorGear(class EagleFM::Rotor *, class EagleFM::TurboShaft *, class EagleFM::TurboShaft *, double, double);

    // RVA: 0x497 | Ordinal: 1176
        void doSimulate(void);

    // RVA: 0x631 | Ordinal: 1586
        void getRPM(void) const;

    // RVA: 0x63A | Ordinal: 1595
        void getReductorMOI(void) const;

    // RVA: 0x63B | Ordinal: 1596
        void getReductorMoment(void) const;

    // RVA: 0x63C | Ordinal: 1597
        void getReductorN(void) const;

    // RVA: 0x1D5 | Ordinal: 470
        void _RotorGear(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_ROTORGEAR_HPP
