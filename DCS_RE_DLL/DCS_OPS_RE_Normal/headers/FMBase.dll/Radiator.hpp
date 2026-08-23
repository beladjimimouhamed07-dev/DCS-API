#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Radiator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Cooling {

class Radiator
{
public:

    // RVA: 0x117 | Ordinal: 280
        void Radiator(class EagleFM::Cooling::Radiator &&);

    // RVA: 0x118 | Ordinal: 281
        void Radiator(class EagleFM::Cooling::Radiator const &);

    // RVA: 0x119 | Ordinal: 282
        void Radiator(void);

    // RVA: 0x11A | Ordinal: 283
        void Radiator(struct EagleFM::FluidState const *);

    // RVA: 0x495 | Ordinal: 1174
        void doSimulate(double);

    // RVA: 0x4CD | Ordinal: 1230
        void getArea(void) const;

    // RVA: 0x52F | Ordinal: 1328
        void getDeltaT(void) const;

    // RVA: 0x539 | Ordinal: 1338
        void getDrag(void) const;

    // RVA: 0x565 | Ordinal: 1382
        void getFluidState(void) const;

    // RVA: 0x633 | Ordinal: 1588
        void getRadF(void) const;

    // RVA: 0x696 | Ordinal: 1687
        void getState(void);

    // RVA: 0x6C0 | Ordinal: 1729
        void getTube(void);

    // RVA: 0x72B | Ordinal: 1836
        void init(double, double, double, double, double, struct EagleFM::Radiator::Tube const &, bool, double, double, double);

    // RVA: 0x758 | Ordinal: 1881
        void initRad(struct EagleFM::Cooling::Radiator::InitRad const &);

    // RVA: 0x75B | Ordinal: 1884
        void initScoopLims(double, double);

    // RVA: 0x766 | Ordinal: 1895
        void initTemperature(double);

    // RVA: 0x767 | Ordinal: 1896
        void initTemperature(double, double, double);

    // RVA: 0x768 | Ordinal: 1897
        void initThermostat(float, float, float);

    // RVA: 0x7CE | Ordinal: 1999
        void repair(void);

    // RVA: 0x7E0 | Ordinal: 2017
        void reset(void);

    // RVA: 0x96B | Ordinal: 2412
        void simulate(double);

    // RVA: 0x96C | Ordinal: 2413
        void simulate(double, double);
};

} // namespace Cooling
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_RADIATOR_HPP
