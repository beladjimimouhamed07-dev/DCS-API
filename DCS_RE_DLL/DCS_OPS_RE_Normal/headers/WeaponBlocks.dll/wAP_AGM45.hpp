#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wAP_AGM45
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAP_AGM45
{
public:

    // RVA: 0x477 | Ordinal: 1144
        void __getInputPorts(void);

    // RVA: 0x510 | Ordinal: 1297
        void __getOutputPorts(void);

    // RVA: 0x768 | Ordinal: 1897
        void getCP(double);

    // RVA: 0x7A7 | Ordinal: 1960
        void getDesc_(void);

    // RVA: 0x85B | Ordinal: 2140
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x958 | Ordinal: 2393
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA89 | Ordinal: 2698
        void initEASBypass(bool);

    // RVA: 0xA90 | Ordinal: 2705
        void initGBias(bool);

    // RVA: 0xB94 | Ordinal: 2965
        void registerStateData(void);

    // RVA: 0xD4E | Ordinal: 3407
        void simulate(double);

    // RVA: 0x34 | Ordinal: 53
        void wAP_AGM45(class wAP_AGM45 const &);

    // RVA: 0x35 | Ordinal: 54
        void wAP_AGM45(class wAP_AGM45_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1F4 | Ordinal: 501
        void _wAP_AGM45(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAP_AGM45_HPP
