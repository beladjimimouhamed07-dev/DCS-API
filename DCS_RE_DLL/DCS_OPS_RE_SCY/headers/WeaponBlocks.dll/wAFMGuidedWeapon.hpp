#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wAFMGuidedWeapon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAFMGuidedWeapon
{
public:

    // RVA: 0x46D | Ordinal: 1134
        void __getInputPorts(void);

    // RVA: 0x506 | Ordinal: 1287
        void __getOutputPorts(void);

    // RVA: 0x5DA | Ordinal: 1499
        void calcForceTorque_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double, class Math::Vector<3, double> &, class Math::Vector<3, double> &);

    // RVA: 0x5DE | Ordinal: 1503
        void calcForce_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double);

    // RVA: 0x63F | Ordinal: 1600
        void calcTorque_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double);

    // RVA: 0x79D | Ordinal: 1950
        void getDesc_(void);

    // RVA: 0x851 | Ordinal: 2130
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x94E | Ordinal: 2383
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB8A | Ordinal: 2955
        void registerStateData(void);

    // RVA: 0xDC9 | Ordinal: 3530
        void simulateDt(double, double);

    // RVA: 0xDCF | Ordinal: 3536
        void simulateFlight(double, double);

    // RVA: 0xDD5 | Ordinal: 3542
        void simulateRail(double, double);

    // RVA: 0x11 | Ordinal: 18
        void wAFMGuidedWeapon(class wAFMGuidedWeapon const &);

    // RVA: 0x12 | Ordinal: 19
        void wAFMGuidedWeapon(class wAFMGuidedWeaponDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1E7 | Ordinal: 488
        void _wAFMGuidedWeapon(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAFMGUIDEDWEAPON_HPP
