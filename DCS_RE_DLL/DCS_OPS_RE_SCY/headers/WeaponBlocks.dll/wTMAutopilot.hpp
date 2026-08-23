#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x822 | Ordinal: 2083
        void getDesc_(void);

    // RVA: 0x8D6 | Ordinal: 2263
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D3 | Ordinal: 2516
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xCD7 | Ordinal: 3288
        void setLoftMode(int);

    // RVA: 0xDB6 | Ordinal: 3511
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WTMAUTOPILOT_HPP
