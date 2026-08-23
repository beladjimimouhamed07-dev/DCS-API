#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x778 | Ordinal: 1913
        void getCoeffByDepth(double, double);

    // RVA: 0x78C | Ordinal: 1933
        void getDepth(void);

    // RVA: 0x797 | Ordinal: 1944
        void getDesc_(void);

    // RVA: 0x84A | Ordinal: 2123
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x947 | Ordinal: 2376
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAFF | Ordinal: 2816
        void procFlightInputData(double);

    // RVA: 0xB00 | Ordinal: 2817
        void procFlightRM(double, bool);

    // RVA: 0xB62 | Ordinal: 2915
        void registerStateData(void);

    // RVA: 0xC08 | Ordinal: 3081
        void sendFlightCalculatedData(void);

    // RVA: 0xC40 | Ordinal: 3137
        void setAirWaterParameters(void);

    // RVA: 0xC98 | Ordinal: 3225
        void setMidInputData(void);

    // RVA: 0xD7F | Ordinal: 3456
        void simulateDt(double, double);

    // RVA: 0xD86 | Ordinal: 3463
        void simulateFlight(double, double);

    // RVA: 0xD8C | Ordinal: 3469
        void simulateRail(double, double);

    // RVA: 0xD93 | Ordinal: 3476
        void splashSim(double);

    // RVA: 0x1B | Ordinal: 28
        void wAFMTorpedo(class wAFMTorpedo const &);

    // RVA: 0x1C | Ordinal: 29
        void wAFMTorpedo(class wAFMTorpedoDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1EB | Ordinal: 492
        void _wAFMTorpedo(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAFMTORPEDO_HPP
