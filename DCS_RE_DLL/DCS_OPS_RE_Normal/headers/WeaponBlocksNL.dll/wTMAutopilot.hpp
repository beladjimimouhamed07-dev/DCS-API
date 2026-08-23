#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wTMAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wTMAutopilot
{
public:

    // RVA: 0x4F2 | Ordinal: 1267
        void __getInputPorts(void);

    // RVA: 0x58B | Ordinal: 1420
        void __getOutputPorts(void);

    // RVA: 0x81A | Ordinal: 2075
        void getDesc_(void);

    // RVA: 0x8CD | Ordinal: 2254
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9CA | Ordinal: 2507
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xC8D | Ordinal: 3214
        void setLoftMode(int);

    // RVA: 0xD6B | Ordinal: 3436
        void simulate(double);

    // RVA: 0x1B4 | Ordinal: 437
        void wTMAutopilot(class wTMAutopilot &&);

    // RVA: 0x1B5 | Ordinal: 438
        void wTMAutopilot(class wTMAutopilot const &);

    // RVA: 0x1B6 | Ordinal: 439
        void wTMAutopilot(class wTMAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x284 | Ordinal: 645
        void _wTMAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WTMAUTOPILOT_HPP
