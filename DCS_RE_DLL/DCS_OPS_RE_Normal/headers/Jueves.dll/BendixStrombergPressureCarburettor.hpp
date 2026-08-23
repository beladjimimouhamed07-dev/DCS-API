#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: BendixStrombergPressureCarburettor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class BendixStrombergPressureCarburettor
{
public:

    // RVA: 0xA | Ordinal: 11
        void BendixStrombergPressureCarburettor(class EagleFM::dcswwii::propulsion::BendixStrombergPressureCarburettor const &);

    // RVA: 0xB | Ordinal: 12
        void BendixStrombergPressureCarburettor(class EagleFM::dcswwii::propulsion::PistonEngine *, class EagleFM::FuelPipeline *, double &, double &, double &, double &, double &, double &, double &, double &, double &);

    // RVA: 0x4F5 | Ordinal: 1270
        void repair(void);

    // RVA: 0x5A0 | Ordinal: 1441
        void setValve(enum EagleFM::dcswwii::propulsion::BendixStrombergPressureCarburettor::ValveStates);

    // RVA: 0x5CD | Ordinal: 1486
        void simulate(double);

    // RVA: 0x5F3 | Ordinal: 1524
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0xE4 | Ordinal: 229
        void _BendixStrombergPressureCarburettor(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_BENDIXSTROMBERGPRESSURECARBURETTOR_HPP
