#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wAFMGuidedWeapon2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAFMGuidedWeapon2
{
public:

    // RVA: 0x46C | Ordinal: 1133
        void __getInputPorts(void);

    // RVA: 0x505 | Ordinal: 1286
        void __getOutputPorts(void);

    // RVA: 0x5BB | Ordinal: 1468
        void calcAddSw(double);

    // RVA: 0x5D9 | Ordinal: 1498
        void calcForceTorque_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double, class Math::Vector<3, double> &, class Math::Vector<3, double> &);

    // RVA: 0x5DD | Ordinal: 1502
        void calcForce_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double);

    // RVA: 0x62D | Ordinal: 1582
        void calcSideN(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double const &);

    // RVA: 0x63D | Ordinal: 1598
        void calcTorque2(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, double, double, double);

    // RVA: 0x63E | Ordinal: 1599
        void calcTorque_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double);

    // RVA: 0x654 | Ordinal: 1621
        void calc_Force_loc_v(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, double, double, double, double);

    // RVA: 0x6E0 | Ordinal: 1761
        void dbgInfoProc(class Math::Vector<3, double> const &);

    // RVA: 0x6E5 | Ordinal: 1766
        void deployWingsProc(bool);

    // RVA: 0x781 | Ordinal: 1922
        void getCx0(double);

    // RVA: 0x794 | Ordinal: 1941
        void getDesc_(void);

    // RVA: 0x830 | Ordinal: 2097
        void getFMParams(class Math::Vector<3, double> const &, double, double *, double *, double *, double *);

    // RVA: 0x847 | Ordinal: 2120
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x944 | Ordinal: 2373
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA47 | Ordinal: 2632
        void getStartCx0(double);

    // RVA: 0xB5F | Ordinal: 2912
        void registerStateData(void);

    // RVA: 0xD7D | Ordinal: 3454
        void simulateDt(double, double);

    // RVA: 0xD83 | Ordinal: 3460
        void simulateFlight(double, double);

    // RVA: 0xD89 | Ordinal: 3466
        void simulateRail(double, double);

    // RVA: 0xC | Ordinal: 13
        void wAFMGuidedWeapon2(class wAFMGuidedWeapon2 const &);

    // RVA: 0xD | Ordinal: 14
        void wAFMGuidedWeapon2(class wAFMGuidedWeapon2Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1E5 | Ordinal: 486
        void _wAFMGuidedWeapon2(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAFMGUIDEDWEAPON2_HPP
