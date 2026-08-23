#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wLCAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wLCAutopilot
{
public:

    // RVA: 0x4CF | Ordinal: 1232
        void __getInputPorts(void);

    // RVA: 0x568 | Ordinal: 1385
        void __getOutputPorts(void);

    // RVA: 0x7FF | Ordinal: 2048
        void getDesc_(void);

    // RVA: 0x8B3 | Ordinal: 2228
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9B0 | Ordinal: 2481
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBD6 | Ordinal: 3031
        void registerStateData(void);

    // RVA: 0xD9A | Ordinal: 3483
        void simulate(double);

    // RVA: 0x152 | Ordinal: 339
        void wLCAutopilot(class wLCAutopilot &&);

    // RVA: 0x153 | Ordinal: 340
        void wLCAutopilot(class wLCAutopilot const &);

    // RVA: 0x154 | Ordinal: 341
        void wLCAutopilot(class wLCAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x25F | Ordinal: 608
        void _wLCAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WLCAUTOPILOT_HPP
