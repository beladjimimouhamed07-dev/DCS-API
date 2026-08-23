#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6E4 | Ordinal: 1765
        void dbgInfoProc(class Math::Vector<3, double> const &);

    // RVA: 0x6E9 | Ordinal: 1770
        void deployWingsProc(bool);

    // RVA: 0x789 | Ordinal: 1930
        void getCx0(double);

    // RVA: 0x79C | Ordinal: 1949
        void getDesc_(void);

    // RVA: 0x838 | Ordinal: 2105
        void getFMParams(class Math::Vector<3, double> const &, double, double *, double *, double *, double *);

    // RVA: 0x850 | Ordinal: 2129
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x94D | Ordinal: 2382
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA56 | Ordinal: 2647
        void getStartCx0(double);

    // RVA: 0xB89 | Ordinal: 2954
        void registerStateData(void);

    // RVA: 0xDC8 | Ordinal: 3529
        void simulateDt(double, double);

    // RVA: 0xDCE | Ordinal: 3535
        void simulateFlight(double, double);

    // RVA: 0xDD4 | Ordinal: 3541
        void simulateRail(double, double);

    // RVA: 0xC | Ordinal: 13
        void wAFMGuidedWeapon2(class wAFMGuidedWeapon2 const &);

    // RVA: 0xD | Ordinal: 14
        void wAFMGuidedWeapon2(class wAFMGuidedWeapon2Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1E5 | Ordinal: 486
        void _wAFMGuidedWeapon2(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAFMGUIDEDWEAPON2_HPP
