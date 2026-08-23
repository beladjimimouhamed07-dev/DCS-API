#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: FuelSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class FuelSystem
{
public:

    // RVA: 0x354 | Ordinal: 853
        void Construct(void);

    // RVA: 0x3AF | Ordinal: 944
        void Create(void);

    // RVA: 0x54 | Ordinal: 85
        void FuelSystem(class AFM::FuelSystem &&);

    // RVA: 0x55 | Ordinal: 86
        void FuelSystem(class AFM::FuelSystem const &);

    // RVA: 0x56 | Ordinal: 87
        void FuelSystem(void);

    // RVA: 0x475 | Ordinal: 1142
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x497 | Ordinal: 1176
        void LockLeftJetEngine(class AFM::JetEngine *);

    // RVA: 0x4A4 | Ordinal: 1189
        void LockRightJetEngine(class AFM::JetEngine *);

    // RVA: 0x4DD | Ordinal: 1246
        void Simulation(double);

    // RVA: 0x576 | Ordinal: 1399
        void getActiveTank(int *);

    // RVA: 0x5A4 | Ordinal: 1445
        void getFeedTankPumpDisplacement(double *);

    // RVA: 0x5BB | Ordinal: 1468
        void getFuel(int, double *);

    // RVA: 0x5BE | Ordinal: 1471
        void getFuelTankPerformance(int, double *);

    // RVA: 0x6ED | Ordinal: 1774
        void getNegativeGFactorFeedTankPumpDisplacement(double *);

    // RVA: 0x71B | Ordinal: 1820
        void getRotateInertiaFactors_scs(double *);

    // RVA: 0x759 | Ordinal: 1882
        void getUnlimitedFuel(void) const;

    // RVA: 0x77B | Ordinal: 1916
        void setActiveTank(int);

    // RVA: 0x7AE | Ordinal: 1967
        void setFeedTankPumpDisplacement(double);

    // RVA: 0x7C3 | Ordinal: 1988
        void setFuel(int, double);

    // RVA: 0x7C7 | Ordinal: 1992
        void setFuelTankPerformance(int, double *);

    // RVA: 0x835 | Ordinal: 2102
        void setNegativeGFactorFeedTankPumpDisplacement(double);

    // RVA: 0x89F | Ordinal: 2208
        void setRotateInertiaFactors_scs(double *);

    // RVA: 0x8E9 | Ordinal: 2282
        void setUnlimitedFuel(bool);

    // RVA: 0x11E | Ordinal: 287
        void _FuelSystem(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_FUELSYSTEM_HPP
