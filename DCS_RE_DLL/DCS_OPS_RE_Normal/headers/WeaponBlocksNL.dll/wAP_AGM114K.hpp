#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wAP_AGM114K
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAP_AGM114K
{
public:

    // RVA: 0x475 | Ordinal: 1142
        void __getInputPorts(void);

    // RVA: 0x50E | Ordinal: 1295
        void __getOutputPorts(void);

    // RVA: 0x5E7 | Ordinal: 1512
        void calcGuidanceCmd(double);

    // RVA: 0x603 | Ordinal: 1540
        void calcLoftCmd(double);

    // RVA: 0x613 | Ordinal: 1556
        void calcPitchYawCmd(double);

    // RVA: 0x625 | Ordinal: 1574
        void calcRollCmd(double);

    // RVA: 0x62C | Ordinal: 1581
        void calcScanCmd(double);

    // RVA: 0x79D | Ordinal: 1950
        void getDesc_(void);

    // RVA: 0x850 | Ordinal: 2129
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x910 | Ordinal: 2321
        void getK1(double);

    // RVA: 0x94D | Ordinal: 2382
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xADD | Ordinal: 2782
        void limit(double, double, double);

    // RVA: 0xB27 | Ordinal: 2856
        void readInputData(double);

    // RVA: 0xB68 | Ordinal: 2921
        void registerStateData(void);

    // RVA: 0xC84 | Ordinal: 3205
        void setLaunchMode(int);

    // RVA: 0xCCF | Ordinal: 3280
        void setStartPitch(double);

    // RVA: 0xD01 | Ordinal: 3330
        void simulate(double);

    // RVA: 0x2E | Ordinal: 47
        void wAP_AGM114K(class wAP_AGM114K &&);

    // RVA: 0x2F | Ordinal: 48
        void wAP_AGM114K(class wAP_AGM114K const &);

    // RVA: 0x30 | Ordinal: 49
        void wAP_AGM114K(class wAP_AGM114K_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1F2 | Ordinal: 499
        void _wAP_AGM114K(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAP_AGM114K_HPP
