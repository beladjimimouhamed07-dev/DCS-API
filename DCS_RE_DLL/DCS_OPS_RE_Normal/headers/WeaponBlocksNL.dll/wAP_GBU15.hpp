#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7A2 | Ordinal: 1955
        void getDesc_(void);

    // RVA: 0x855 | Ordinal: 2134
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x952 | Ordinal: 2387
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB6D | Ordinal: 2926
        void registerStateData(void);

    // RVA: 0xD06 | Ordinal: 3335
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAP_GBU15_HPP
