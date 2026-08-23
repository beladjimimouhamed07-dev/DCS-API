#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x715 | Ordinal: 1814
        void getAccelLimit(double, double);

    // RVA: 0x7A4 | Ordinal: 1957
        void getDesc_(void);

    // RVA: 0x858 | Ordinal: 2137
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x918 | Ordinal: 2329
        void getK1(double, double);

    // RVA: 0x91F | Ordinal: 2336
        void getK2(double, double);

    // RVA: 0x923 | Ordinal: 2340
        void getK3(double, double);

    // RVA: 0x925 | Ordinal: 2342
        void getK4(double, double);

    // RVA: 0x955 | Ordinal: 2390
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA42 | Ordinal: 2627
        void getRelativeDensity(double);

    // RVA: 0xA64 | Ordinal: 2661
        void getTm(double, double);

    // RVA: 0xA78 | Ordinal: 2681
        void handleInputData(double, double);

    // RVA: 0xB91 | Ordinal: 2962
        void registerStateData(void);

    // RVA: 0xD4B | Ordinal: 3404
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAP_ACCEL_BASE_HPP
