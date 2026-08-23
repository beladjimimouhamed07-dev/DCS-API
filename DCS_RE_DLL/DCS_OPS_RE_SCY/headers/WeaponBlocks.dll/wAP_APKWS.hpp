#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7A9 | Ordinal: 1962
        void getDesc_(void);

    // RVA: 0x85D | Ordinal: 2142
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x91B | Ordinal: 2332
        void getK1(double);

    // RVA: 0x95A | Ordinal: 2395
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA6E | Ordinal: 2671
        void getVt(double);

    // RVA: 0xB06 | Ordinal: 2823
        void limit(double, double, double);

    // RVA: 0xB53 | Ordinal: 2900
        void readInputData(double);

    // RVA: 0xB96 | Ordinal: 2967
        void registerStateData(void);

    // RVA: 0xD50 | Ordinal: 3409
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAP_APKWS_HPP
