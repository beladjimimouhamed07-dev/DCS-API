#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x784 | Ordinal: 1925
        void getCx0(double);

    // RVA: 0x7E0 | Ordinal: 2017
        void getDesc_(void);

    // RVA: 0x82E | Ordinal: 2095
        void getDynVisc_(void);

    // RVA: 0x82F | Ordinal: 2096
        void getEnvRho_(void);

    // RVA: 0x83F | Ordinal: 2112
        void getHostObjPtr_(void);

    // RVA: 0x893 | Ordinal: 2196
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x90D | Ordinal: 2318
        void getInterpVal(class ed::vector<double, class ed::allocator<double>> const &, double, bool);

    // RVA: 0x91D | Ordinal: 2334
        void getKinVisc_(void);

    // RVA: 0x92D | Ordinal: 2350
        void getMass_(void);

    // RVA: 0x990 | Ordinal: 2449
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAAD | Ordinal: 2734
        void isInFlight_(void);

    // RVA: 0xAF1 | Ordinal: 2802
        void onFreeze(bool);

    // RVA: 0xAF4 | Ordinal: 2805
        void onRebound(class Math::Vector<3, double> const &);

    // RVA: 0xAF8 | Ordinal: 2809
        void onWarheadPenetration(class Math::Vector<3, double> const &);

    // RVA: 0xB03 | Ordinal: 2820
        void procWaterForceTorque_(class Math::Vector<3, double> &, class Math::Vector<3, double> &);

    // RVA: 0xB0D | Ordinal: 2830
        void processNonAerodynForces_(class Math::Vector<3, double> &);

    // RVA: 0xB9A | Ordinal: 2971
        void registerStateData(void);

    // RVA: 0xC45 | Ordinal: 3142
        void setAngularVelocity(class Math::Vector<3, double> const &);

    // RVA: 0xCB7 | Ordinal: 3256
        void setRotation(struct Math::Rotation3<double> const &);

    // RVA: 0xD3A | Ordinal: 3387
        void simulate(double);

    // RVA: 0xD80 | Ordinal: 3457
        void simulateDt(double, double);

    // RVA: 0x104 | Ordinal: 261
        void wFMBombRocket(class wFMBombRocket const &);

    // RVA: 0x105 | Ordinal: 262
        void wFMBombRocket(class wFMBombRocketDescriptor const *, class wSimulationSystem *);

    // RVA: 0x241 | Ordinal: 578
        void _wFMBombRocket(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WFMBOMBROCKET_HPP
