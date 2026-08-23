#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wAP_GBU24
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAP_GBU24
{
public:

    // RVA: 0x47B | Ordinal: 1148
        void __getInputPorts(void);

    // RVA: 0x514 | Ordinal: 1301
        void __getOutputPorts(void);

    // RVA: 0x5C1 | Ordinal: 1474
        void calcBumpCmd(double);

    // RVA: 0x5EA | Ordinal: 1515
        void calcGuidanceCmd(double);

    // RVA: 0x616 | Ordinal: 1559
        void calcPitchYawCmd(double);

    // RVA: 0x628 | Ordinal: 1577
        void calcRollCmd(double);

    // RVA: 0x7A3 | Ordinal: 1956
        void getDesc_(void);

    // RVA: 0x856 | Ordinal: 2135
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x953 | Ordinal: 2388
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB2A | Ordinal: 2859
        void readInputData(double);

    // RVA: 0xB6E | Ordinal: 2927
        void registerStateData(void);

    // RVA: 0xD07 | Ordinal: 3336
        void simulate(double);

    // RVA: 0x3F | Ordinal: 64
        void wAP_GBU24(class wAP_GBU24 &&);

    // RVA: 0x40 | Ordinal: 65
        void wAP_GBU24(class wAP_GBU24 const &);

    // RVA: 0x41 | Ordinal: 66
        void wAP_GBU24(class wAP_GBU24_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1F8 | Ordinal: 505
        void _wAP_GBU24(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAP_GBU24_HPP
