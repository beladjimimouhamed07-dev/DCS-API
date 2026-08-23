#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: AoA_transmitter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class AoA_transmitter
{
public:

    // RVA: 0x20 | Ordinal: 33
        void AoA_transmitter(class EagleFM::DynamicBody *);

    // RVA: 0x4C4 | Ordinal: 1221
        void getAngle(void) const;

    // RVA: 0x736 | Ordinal: 1847
        void initAoA(double, double);

    // RVA: 0x737 | Ordinal: 1848
        void initAoS(double, double);

    // RVA: 0x91F | Ordinal: 2336
        void setVind_l(class Math::Vector<3, double>);

    // RVA: 0x94C | Ordinal: 2381
        void simulate(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_AOA_TRANSMITTER_HPP
