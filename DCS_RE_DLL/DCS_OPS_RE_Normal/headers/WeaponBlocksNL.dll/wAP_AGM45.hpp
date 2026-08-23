#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x760 | Ordinal: 1889
        void getCP(double);

    // RVA: 0x79F | Ordinal: 1952
        void getDesc_(void);

    // RVA: 0x852 | Ordinal: 2131
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x94F | Ordinal: 2384
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA77 | Ordinal: 2680
        void initEASBypass(bool);

    // RVA: 0xA7A | Ordinal: 2683
        void initGBias(bool);

    // RVA: 0xB6A | Ordinal: 2923
        void registerStateData(void);

    // RVA: 0xD03 | Ordinal: 3332
        void simulate(double);

    // RVA: 0x34 | Ordinal: 53
        void wAP_AGM45(class wAP_AGM45 const &);

    // RVA: 0x35 | Ordinal: 54
        void wAP_AGM45(class wAP_AGM45_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1F4 | Ordinal: 501
        void _wAP_AGM45(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAP_AGM45_HPP
