#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wAP_APKWS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAP_APKWS
{
public:

    // RVA: 0x479 | Ordinal: 1146
        void __getInputPorts(void);

    // RVA: 0x512 | Ordinal: 1299
        void __getOutputPorts(void);

    // RVA: 0x5E9 | Ordinal: 1514
        void calcGuidanceCmd(double);

    // RVA: 0x615 | Ordinal: 1558
        void calcPitchYawCmd(double);

    // RVA: 0x627 | Ordinal: 1576
        void calcRollCmd(double);

    // RVA: 0x7A1 | Ordinal: 1954
        void getDesc_(void);

    // RVA: 0x854 | Ordinal: 2133
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x912 | Ordinal: 2323
        void getK1(double);

    // RVA: 0x951 | Ordinal: 2386
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA5F | Ordinal: 2656
        void getVt(double);

    // RVA: 0xADF | Ordinal: 2784
        void limit(double, double, double);

    // RVA: 0xB29 | Ordinal: 2858
        void readInputData(double);

    // RVA: 0xB6C | Ordinal: 2925
        void registerStateData(void);

    // RVA: 0xD05 | Ordinal: 3334
        void simulate(double);

    // RVA: 0x39 | Ordinal: 58
        void wAP_APKWS(class wAP_APKWS &&);

    // RVA: 0x3A | Ordinal: 59
        void wAP_APKWS(class wAP_APKWS const &);

    // RVA: 0x3B | Ordinal: 60
        void wAP_APKWS(class wAP_APKWS_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1F6 | Ordinal: 503
        void _wAP_APKWS(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAP_APKWS_HPP
