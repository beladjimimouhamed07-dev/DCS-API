#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: BendixStrombergPressureCarburettor666
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class BendixStrombergPressureCarburettor666
{
public:

    // RVA: 0x8 | Ordinal: 9
        void BendixStrombergPressureCarburettor666(class EagleFM::dcswwii::propulsion::BendixStrombergPressureCarburettor666 const &);

    // RVA: 0x9 | Ordinal: 10
        void BendixStrombergPressureCarburettor666(class EagleFM::dcswwii::propulsion::PistonEngine *, class EagleFM::FuelPipeline *, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &);

    // RVA: 0x3CF | Ordinal: 976
        void getValve(void);

    // RVA: 0x4F4 | Ordinal: 1269
        void repair(void);

    // RVA: 0x59F | Ordinal: 1440
        void setValve(enum EagleFM::dcswwii::propulsion::BendixStrombergPressureCarburettor666::ValveStates, float);

    // RVA: 0x5CC | Ordinal: 1485
        void simulate(double);

    // RVA: 0x5F2 | Ordinal: 1523
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0xE3 | Ordinal: 228
        void _BendixStrombergPressureCarburettor666(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_BENDIXSTROMBERGPRESSURECARBURETTOR666_HPP
