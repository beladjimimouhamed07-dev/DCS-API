#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wAFMGuidedWeaponExtFinsCalc
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAFMGuidedWeaponExtFinsCalc
{
public:

    // RVA: 0x46E | Ordinal: 1135
        void __getInputPorts(void);

    // RVA: 0x507 | Ordinal: 1288
        void __getOutputPorts(void);

    // RVA: 0x5BE | Ordinal: 1471
        void calcAoA(class Math::Vector<3, double>, double *, double *);

    // RVA: 0x600 | Ordinal: 1537
        void calcLocAeroForce(void);

    // RVA: 0x601 | Ordinal: 1538
        void calcLocTorque(void);

    // RVA: 0x62E | Ordinal: 1583
        void calcSideN(class Math::Vector<3, double> const &);

    // RVA: 0x70C | Ordinal: 1805
        void getA1trim(double);

    // RVA: 0x70D | Ordinal: 1806
        void getA2trim(double);

    // RVA: 0x782 | Ordinal: 1923
        void getCx0(double);

    // RVA: 0x786 | Ordinal: 1927
        void getCxB(double);

    // RVA: 0x787 | Ordinal: 1928
        void getCya(double);

    // RVA: 0x788 | Ordinal: 1929
        void getCza(double);

    // RVA: 0x796 | Ordinal: 1943
        void getDesc_(void);

    // RVA: 0x849 | Ordinal: 2122
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x90C | Ordinal: 2317
        void getInterpVal(class ed::vector<double, class ed::allocator<double>> const &, double, bool);

    // RVA: 0x90E | Ordinal: 2319
        void getK1(double);

    // RVA: 0x915 | Ordinal: 2326
        void getK2(double);

    // RVA: 0x92C | Ordinal: 2349
        void getMass_(void);

    // RVA: 0x935 | Ordinal: 2358
        void getMya(double);

    // RVA: 0x936 | Ordinal: 2359
        void getMyw(double);

    // RVA: 0x937 | Ordinal: 2360
        void getMza(double);

    // RVA: 0x938 | Ordinal: 2361
        void getMzw(double);

    // RVA: 0x946 | Ordinal: 2375
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAF3 | Ordinal: 2804
        void onRebound(class Math::Vector<3, double> const &);

    // RVA: 0xAF7 | Ordinal: 2808
        void onWarheadPenetration(class Math::Vector<3, double> const &);

    // RVA: 0xAFA | Ordinal: 2811
        void paramA(double);

    // RVA: 0xAFB | Ordinal: 2812
        void paramAX(double, double);

    // RVA: 0xAFC | Ordinal: 2813
        void paramMA(double, double, double);

    // RVA: 0xB5B | Ordinal: 2908
        void regRandoms(void);

    // RVA: 0xB61 | Ordinal: 2914
        void registerStateData(void);

    // RVA: 0xC44 | Ordinal: 3141
        void setAngularVelocity(class Math::Vector<3, double> const &);

    // RVA: 0xCB5 | Ordinal: 3254
        void setRotation(struct Math::Rotation3<double> const &);

    // RVA: 0xCFB | Ordinal: 3324
        void simulate(double);

    // RVA: 0xD85 | Ordinal: 3462
        void simulateFlight(double, double);

    // RVA: 0xD8B | Ordinal: 3468
        void simulateRail(double, double);

    // RVA: 0x16 | Ordinal: 23
        void wAFMGuidedWeaponExtFinsCalc(class wAFMGuidedWeaponExtFinsCalc const &);

    // RVA: 0x17 | Ordinal: 24
        void wAFMGuidedWeaponExtFinsCalc(class wAFMGuidedWeaponExtFinsCalcDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1E9 | Ordinal: 490
        void _wAFMGuidedWeaponExtFinsCalc(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAFMGUIDEDWEAPONEXTFINSCALC_HPP
