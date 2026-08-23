#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x795 | Ordinal: 1942
        void getDesc_(void);

    // RVA: 0x848 | Ordinal: 2121
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x945 | Ordinal: 2374
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB60 | Ordinal: 2913
        void registerStateData(void);

    // RVA: 0xD7E | Ordinal: 3455
        void simulateDt(double, double);

    // RVA: 0xD84 | Ordinal: 3461
        void simulateFlight(double, double);

    // RVA: 0xD8A | Ordinal: 3467
        void simulateRail(double, double);

    // RVA: 0x11 | Ordinal: 18
        void wAFMGuidedWeapon(class wAFMGuidedWeapon const &);

    // RVA: 0x12 | Ordinal: 19
        void wAFMGuidedWeapon(class wAFMGuidedWeaponDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1E7 | Ordinal: 488
        void _wAFMGuidedWeapon(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAFMGUIDEDWEAPON_HPP
