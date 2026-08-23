#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: OilSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class OilSystem
{
public:

    // RVA: 0x4C | Ordinal: 77
        void OilSystem(class EagleFM::dcswwii::propulsion::OilSystem const &);

    // RVA: 0x4D | Ordinal: 78
        void OilSystem(class EagleFM::dcswwii::propulsion::PistonEngine *, double);

    // RVA: 0x2D6 | Ordinal: 727
        void applyNewOilLeakTau(double);

    // RVA: 0x369 | Ordinal: 874
        void getDrag(void);

    // RVA: 0x39C | Ordinal: 925
        void getParameter(int);

    // RVA: 0x3A4 | Ordinal: 933
        void getPressure(void);

    // RVA: 0x3C8 | Ordinal: 969
        void getTemperature(int);

    // RVA: 0x3D0 | Ordinal: 977
        void getViscFrictionK(void);

    // RVA: 0x409 | Ordinal: 1034
        void initPreStart(void);

    // RVA: 0x4D0 | Ordinal: 1233
        void process(class EagleFM::Radiator *, class Math::Vector<3, double> const &, class EagleFM::Heat::HeatBody, double, double, double, double, int);

    // RVA: 0x4D1 | Ordinal: 1234
        void process(class EagleFM::Radiator *, double, double, double, class EagleFM::Heat::HeatBody, double, double, double, double, int);

    // RVA: 0x504 | Ordinal: 1285
        void repair(void);

    // RVA: 0x5E2 | Ordinal: 1507
        void simulate(double);

    // RVA: 0x601 | Ordinal: 1538
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0x103 | Ordinal: 260
        void _OilSystem(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_OILSYSTEM_HPP
