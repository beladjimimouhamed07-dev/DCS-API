#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Galvanometer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Galvanometer
{
public:

    // RVA: 0x8E | Ordinal: 143
        void Galvanometer(class EagleFM::Galvanometer &&);

    // RVA: 0x8F | Ordinal: 144
        void Galvanometer(class EagleFM::Galvanometer const &);

    // RVA: 0x90 | Ordinal: 145
        void Galvanometer(void);

    // RVA: 0x719 | Ordinal: 1818
        void init(double, double, class EagleFM::Elec::Consumer *, double, double);

    // RVA: 0x95D | Ordinal: 2398
        void simulate(double);

    // RVA: 0x1A8 | Ordinal: 425
        void _Galvanometer(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_GALVANOMETER_HPP
