#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wFMBombRocket
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wFMBombRocket
{
public:

    // RVA: 0x4B8 | Ordinal: 1209
        void __getInputPorts(void);

    // RVA: 0x551 | Ordinal: 1362
        void __getOutputPorts(void);

    // RVA: 0x5D2 | Ordinal: 1491
        void calcDecelerationForce_(class Math::Vector<3, double> const &);

    // RVA: 0x5DC | Ordinal: 1501
        void calcForceTorque_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double, class Math::Vector<3, double> &, class Math::Vector<3, double> &);

    // RVA: 0x5E2 | Ordinal: 1507
        void calcForce_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double);

    // RVA: 0x642 | Ordinal: 1603
        void calcTorque_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double);

    // RVA: 0x78C | Ordinal: 1933
        void getCx0(double);

    // RVA: 0x7E8 | Ordinal: 2025
        void getDesc_(void);

    // RVA: 0x836 | Ordinal: 2103
        void getDynVisc_(void);

    // RVA: 0x837 | Ordinal: 2104
        void getEnvRho_(void);

    // RVA: 0x847 | Ordinal: 2120
        void getHostObjPtr_(void);

    // RVA: 0x89C | Ordinal: 2205
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x916 | Ordinal: 2327
        void getInterpVal(class ed::vector<double, class ed::allocator<double>> const &, double, bool);

    // RVA: 0x926 | Ordinal: 2343
        void getKinVisc_(void);

    // RVA: 0x936 | Ordinal: 2359
        void getMass_(void);

    // RVA: 0x999 | Ordinal: 2458
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xABD | Ordinal: 2750
        void init_randoms(int);

    // RVA: 0xAD3 | Ordinal: 2772
        void isInFlight_(void);

    // RVA: 0xB19 | Ordinal: 2842
        void onFreeze(bool);

    // RVA: 0xB1C | Ordinal: 2845
        void onRebound(class Math::Vector<3, double> const &);

    // RVA: 0xB20 | Ordinal: 2849
        void onWarheadPenetration(class Math::Vector<3, double> const &);

    // RVA: 0xB2D | Ordinal: 2862
        void procWaterForceTorque_(class Math::Vector<3, double> &, class Math::Vector<3, double> &);

    // RVA: 0xB37 | Ordinal: 2872
        void processNonAerodynForces_(class Math::Vector<3, double> &);

    // RVA: 0xBC4 | Ordinal: 3013
        void registerStateData(void);

    // RVA: 0xC8F | Ordinal: 3216
        void setAngularVelocity(class Math::Vector<3, double> const &);

    // RVA: 0xD01 | Ordinal: 3330
        void setRotation(struct Math::Rotation3<double> const &);

    // RVA: 0xD85 | Ordinal: 3462
        void simulate(double);

    // RVA: 0xDCB | Ordinal: 3532
        void simulateDt(double, double);

    // RVA: 0x104 | Ordinal: 261
        void wFMBombRocket(class wFMBombRocket const &);

    // RVA: 0x105 | Ordinal: 262
        void wFMBombRocket(class wFMBombRocketDescriptor const *, class wSimulationSystem *);

    // RVA: 0x241 | Ordinal: 578
        void _wFMBombRocket(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WFMBOMBROCKET_HPP
