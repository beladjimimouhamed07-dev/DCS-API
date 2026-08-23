#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wAP_ACCEL_BASE
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAP_ACCEL_BASE
{
public:

    // RVA: 0x474 | Ordinal: 1141
        void __getInputPorts(void);

    // RVA: 0x50D | Ordinal: 1294
        void __getOutputPorts(void);

    // RVA: 0x612 | Ordinal: 1555
        void calcPitchYawCmd(class Math::Vector<3, double> const &);

    // RVA: 0x624 | Ordinal: 1573
        void calcRollCmd(double);

    // RVA: 0x70E | Ordinal: 1807
        void getAccelLimit(double, double);

    // RVA: 0x79C | Ordinal: 1949
        void getDesc_(void);

    // RVA: 0x84F | Ordinal: 2128
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x90F | Ordinal: 2320
        void getK1(double, double);

    // RVA: 0x916 | Ordinal: 2327
        void getK2(double, double);

    // RVA: 0x91A | Ordinal: 2331
        void getK3(double, double);

    // RVA: 0x91C | Ordinal: 2333
        void getK4(double, double);

    // RVA: 0x94C | Ordinal: 2381
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA37 | Ordinal: 2616
        void getRelativeDensity(double);

    // RVA: 0xA55 | Ordinal: 2646
        void getTm(double, double);

    // RVA: 0xA69 | Ordinal: 2666
        void handleInputData(double, double);

    // RVA: 0xB67 | Ordinal: 2920
        void registerStateData(void);

    // RVA: 0xD00 | Ordinal: 3329
        void simulate(double);

    // RVA: 0x2B | Ordinal: 44
        void wAP_ACCEL_BASE(class wAP_ACCEL_BASE &&);

    // RVA: 0x2C | Ordinal: 45
        void wAP_ACCEL_BASE(class wAP_ACCEL_BASE const &);

    // RVA: 0x2D | Ordinal: 46
        void wAP_ACCEL_BASE(class wAP_ACCEL_BASE_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1F1 | Ordinal: 498
        void _wAP_ACCEL_BASE(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAP_ACCEL_BASE_HPP
