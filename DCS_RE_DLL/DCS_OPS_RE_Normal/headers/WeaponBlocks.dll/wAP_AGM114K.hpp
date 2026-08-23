#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7A5 | Ordinal: 1958
        void getDesc_(void);

    // RVA: 0x859 | Ordinal: 2138
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x919 | Ordinal: 2330
        void getK1(double);

    // RVA: 0x956 | Ordinal: 2391
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB04 | Ordinal: 2821
        void limit(double, double, double);

    // RVA: 0xB51 | Ordinal: 2898
        void readInputData(double);

    // RVA: 0xB92 | Ordinal: 2963
        void registerStateData(void);

    // RVA: 0xCCE | Ordinal: 3279
        void setLaunchMode(int);

    // RVA: 0xD1A | Ordinal: 3355
        void setStartPitch(double);

    // RVA: 0xD4C | Ordinal: 3405
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAP_AGM114K_HPP
