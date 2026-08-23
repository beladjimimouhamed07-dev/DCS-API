#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x713 | Ordinal: 1812
        void getA1trim(double);

    // RVA: 0x714 | Ordinal: 1813
        void getA2trim(double);

    // RVA: 0x78A | Ordinal: 1931
        void getCx0(double);

    // RVA: 0x78E | Ordinal: 1935
        void getCxB(double);

    // RVA: 0x78F | Ordinal: 1936
        void getCya(double);

    // RVA: 0x790 | Ordinal: 1937
        void getCza(double);

    // RVA: 0x79E | Ordinal: 1951
        void getDesc_(void);

    // RVA: 0x852 | Ordinal: 2131
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x915 | Ordinal: 2326
        void getInterpVal(class ed::vector<double, class ed::allocator<double>> const &, double, bool);

    // RVA: 0x917 | Ordinal: 2328
        void getK1(double);

    // RVA: 0x91E | Ordinal: 2335
        void getK2(double);

    // RVA: 0x935 | Ordinal: 2358
        void getMass_(void);

    // RVA: 0x93E | Ordinal: 2367
        void getMya(double);

    // RVA: 0x93F | Ordinal: 2368
        void getMyw(double);

    // RVA: 0x940 | Ordinal: 2369
        void getMza(double);

    // RVA: 0x941 | Ordinal: 2370
        void getMzw(double);

    // RVA: 0x94F | Ordinal: 2384
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAB1 | Ordinal: 2738
        void init_randoms(int);

    // RVA: 0xB1B | Ordinal: 2844
        void onRebound(class Math::Vector<3, double> const &);

    // RVA: 0xB1F | Ordinal: 2848
        void onWarheadPenetration(class Math::Vector<3, double> const &);

    // RVA: 0xB22 | Ordinal: 2851
        void paramA(double);

    // RVA: 0xB23 | Ordinal: 2852
        void paramAX(double, double);

    // RVA: 0xB24 | Ordinal: 2853
        void paramMA(double, double, double);

    // RVA: 0xB85 | Ordinal: 2950
        void regRandoms(void);

    // RVA: 0xB8B | Ordinal: 2956
        void registerStateData(void);

    // RVA: 0xC8E | Ordinal: 3215
        void setAngularVelocity(class Math::Vector<3, double> const &);

    // RVA: 0xCFF | Ordinal: 3328
        void setRotation(struct Math::Rotation3<double> const &);

    // RVA: 0xD46 | Ordinal: 3399
        void simulate(double);

    // RVA: 0xDD0 | Ordinal: 3537
        void simulateFlight(double, double);

    // RVA: 0xDD6 | Ordinal: 3543
        void simulateRail(double, double);

    // RVA: 0x16 | Ordinal: 23
        void wAFMGuidedWeaponExtFinsCalc(class wAFMGuidedWeaponExtFinsCalc const &);

    // RVA: 0x17 | Ordinal: 24
        void wAFMGuidedWeaponExtFinsCalc(class wAFMGuidedWeaponExtFinsCalcDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1E9 | Ordinal: 490
        void _wAFMGuidedWeaponExtFinsCalc(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAFMGUIDEDWEAPONEXTFINSCALC_HPP
