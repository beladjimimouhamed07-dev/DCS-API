#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wAP_GBU15
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAP_GBU15
{
public:

    // RVA: 0x47A | Ordinal: 1147
        void __getInputPorts(void);

    // RVA: 0x513 | Ordinal: 1300
        void __getOutputPorts(void);

    // RVA: 0x611 | Ordinal: 1554
        void calcPitchCommand(double);

    // RVA: 0x7AA | Ordinal: 1963
        void getDesc_(void);

    // RVA: 0x85E | Ordinal: 2143
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x95B | Ordinal: 2396
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB97 | Ordinal: 2968
        void registerStateData(void);

    // RVA: 0xD51 | Ordinal: 3410
        void simulate(double);

    // RVA: 0x3C | Ordinal: 61
        void wAP_GBU15(class wAP_GBU15 &&);

    // RVA: 0x3D | Ordinal: 62
        void wAP_GBU15(class wAP_GBU15 const &);

    // RVA: 0x3E | Ordinal: 63
        void wAP_GBU15(class wAP_GBU15_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1F7 | Ordinal: 504
        void _wAP_GBU15(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAP_GBU15_HPP
