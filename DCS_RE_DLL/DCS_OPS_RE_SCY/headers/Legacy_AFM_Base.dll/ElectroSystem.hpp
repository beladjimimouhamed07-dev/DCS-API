#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: ElectroSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class ElectroSystem
{
public:

    // RVA: 0x352 | Ordinal: 851
        void Construct(void);

    // RVA: 0x3AC | Ordinal: 941
        void Create(void);

    // RVA: 0x4B | Ordinal: 76
        void ElectroSystem(class AFM::ElectroSystem &&);

    // RVA: 0x4C | Ordinal: 77
        void ElectroSystem(class AFM::ElectroSystem const &);

    // RVA: 0x4D | Ordinal: 78
        void ElectroSystem(void);

    // RVA: 0x43A | Ordinal: 1083
        void InitInTheFlight(void);

    // RVA: 0x445 | Ordinal: 1094
        void InitOnTheParking(void);

    // RVA: 0x44C | Ordinal: 1101
        void InitOnTheRunway(void);

    // RVA: 0x4DC | Ordinal: 1245
        void Simulation(double);

    // RVA: 0x5D7 | Ordinal: 1496
        void getIPointerBatteryOutputWire(class AFM::Wire **);

    // RVA: 0x5D8 | Ordinal: 1497
        void getIPointerBatteryPowerSwitch(class AFM::Switch **);

    // RVA: 0x5EF | Ordinal: 1520
        void getIPointerDirectCurrentBus(class AFM::Wire **);

    // RVA: 0x5FC | Ordinal: 1533
        void getIPointerGearSelector(class AFM::Selector **);

    // RVA: 0x5FD | Ordinal: 1534
        void getIPointerGearSelectorInputWire(class AFM::Wire **);

    // RVA: 0x619 | Ordinal: 1562
        void getIPointerLandingLightOffWire(class AFM::Wire **);

    // RVA: 0x61A | Ordinal: 1563
        void getIPointerLandingLightOnWire(class AFM::Wire **);

    // RVA: 0x61B | Ordinal: 1564
        void getIPointerLandingLightSelector(class AFM::Selector **);

    // RVA: 0x62F | Ordinal: 1584
        void getIPointerLeftLandingLightLamp(class AFM::Lamp **);

    // RVA: 0x630 | Ordinal: 1585
        void getIPointerLeftLandingLightLampWire(class AFM::Wire **);

    // RVA: 0x631 | Ordinal: 1586
        void getIPointerLeftNavigationLightLamp(class AFM::Lamp **);

    // RVA: 0x63B | Ordinal: 1596
        void getIPointerNavigationLightLampsWire(class AFM::Wire **);

    // RVA: 0x63C | Ordinal: 1597
        void getIPointerNavigationLightSelector(class AFM::Selector **);

    // RVA: 0x669 | Ordinal: 1642
        void getIPointerRightLandingLightLamp(class AFM::Lamp **);

    // RVA: 0x66A | Ordinal: 1643
        void getIPointerRightLandingLightLampWire(class AFM::Wire **);

    // RVA: 0x66B | Ordinal: 1644
        void getIPointerRightNavigationLightLamp(class AFM::Lamp **);

    // RVA: 0x688 | Ordinal: 1673
        void getIPointerTailNavigationLightLamp(class AFM::Lamp **);

    // RVA: 0x6AE | Ordinal: 1711
        void getLeftLandingLightPhase(double *);

    // RVA: 0x6AF | Ordinal: 1712
        void getLeftLandingLightUpDownFailureFactor(double *);

    // RVA: 0x70B | Ordinal: 1804
        void getRightLandingLightPhase(double *);

    // RVA: 0x70C | Ordinal: 1805
        void getRightLandingLightUpDownFailureFactor(double *);

    // RVA: 0x7F8 | Ordinal: 2041
        void setLeftLandingLightPhase(double);

    // RVA: 0x7F9 | Ordinal: 2042
        void setLeftLandingLightUpDownFailureFactor(double);

    // RVA: 0x886 | Ordinal: 2183
        void setRightLandingLightPhase(double);

    // RVA: 0x887 | Ordinal: 2184
        void setRightLandingLightUpDownFailureFactor(double);

    // RVA: 0x11B | Ordinal: 284
        void _ElectroSystem(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_ELECTROSYSTEM_HPP
