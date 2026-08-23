#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wAFMTorpedo
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAFMTorpedo
{
public:

    // RVA: 0x46F | Ordinal: 1136
        void __getInputPorts(void);

    // RVA: 0x508 | Ordinal: 1289
        void __getOutputPorts(void);

    // RVA: 0x5DB | Ordinal: 1500
        void calcForceTorque_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double, class Math::Vector<3, double> &, class Math::Vector<3, double> &);

    // RVA: 0x5DF | Ordinal: 1504
        void calcForce_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double);

    // RVA: 0x640 | Ordinal: 1601
        void calcTorque_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double);

    // RVA: 0x780 | Ordinal: 1921
        void getCoeffByDepth(double, double);

    // RVA: 0x794 | Ordinal: 1941
        void getDepth(void);

    // RVA: 0x79F | Ordinal: 1952
        void getDesc_(void);

    // RVA: 0x853 | Ordinal: 2132
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x950 | Ordinal: 2385
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB28 | Ordinal: 2857
        void procFlightInputData(double);

    // RVA: 0xB29 | Ordinal: 2858
        void procFlightRM(double, bool);

    // RVA: 0xB8C | Ordinal: 2957
        void registerStateData(void);

    // RVA: 0xC4C | Ordinal: 3149
        void sendFlightCalculatedData(void);

    // RVA: 0xC8A | Ordinal: 3211
        void setAirWaterParameters(void);

    // RVA: 0xCE2 | Ordinal: 3299
        void setMidInputData(void);

    // RVA: 0xDCA | Ordinal: 3531
        void simulateDt(double, double);

    // RVA: 0xDD1 | Ordinal: 3538
        void simulateFlight(double, double);

    // RVA: 0xDD7 | Ordinal: 3544
        void simulateRail(double, double);

    // RVA: 0xDDE | Ordinal: 3551
        void splashSim(double);

    // RVA: 0x1B | Ordinal: 28
        void wAFMTorpedo(class wAFMTorpedo const &);

    // RVA: 0x1C | Ordinal: 29
        void wAFMTorpedo(class wAFMTorpedoDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1EB | Ordinal: 492
        void _wAFMTorpedo(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAFMTORPEDO_HPP
