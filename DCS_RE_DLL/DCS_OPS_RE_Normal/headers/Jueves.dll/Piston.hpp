#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: Piston
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace pneumatics {

class Piston
{
public:

    // RVA: 0x54 | Ordinal: 85
        void Piston(class EagleFM::dcswwii::pneumatics::Piston const &);

    // RVA: 0x55 | Ordinal: 86
        void Piston(double, double, double, double, double, double, double, double, double, double);

    // RVA: 0x39E | Ordinal: 927
        void getPistonCrossSection(void);

    // RVA: 0x3AF | Ordinal: 944
        void getReducedTravel(void);

    // RVA: 0x55B | Ordinal: 1372
        void setIntakeValveOpening(double);

    // RVA: 0x57A | Ordinal: 1403
        void setReducedTravel(double);

    // RVA: 0x57C | Ordinal: 1405
        void setReturnForce(double);

    // RVA: 0x59B | Ordinal: 1436
        void setTravelTimeLimits(double, double);

    // RVA: 0x5E4 | Ordinal: 1509
        void simulate(double);

    // RVA: 0x106 | Ordinal: 263
        void _Piston(void);
};

} // namespace pneumatics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_PISTON_HPP
