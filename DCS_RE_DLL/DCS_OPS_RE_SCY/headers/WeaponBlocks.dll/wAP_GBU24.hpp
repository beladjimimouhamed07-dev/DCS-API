#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7AB | Ordinal: 1964
        void getDesc_(void);

    // RVA: 0x85F | Ordinal: 2144
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x95C | Ordinal: 2397
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB54 | Ordinal: 2901
        void readInputData(double);

    // RVA: 0xB98 | Ordinal: 2969
        void registerStateData(void);

    // RVA: 0xD52 | Ordinal: 3411
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAP_GBU24_HPP
