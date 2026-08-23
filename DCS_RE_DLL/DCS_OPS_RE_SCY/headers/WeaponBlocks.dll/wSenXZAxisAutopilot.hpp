#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wSenXZAxisAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSenXZAxisAutopilot
{
public:

    // RVA: 0x4EC | Ordinal: 1261
        void __getInputPorts(void);

    // RVA: 0x585 | Ordinal: 1414
        void __getOutputPorts(void);

    // RVA: 0x64B | Ordinal: 1612
        void calcVertCtrlVal(void);

    // RVA: 0x81C | Ordinal: 2077
        void getDesc_(void);

    // RVA: 0x8D0 | Ordinal: 2257
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9CD | Ordinal: 2510
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBEE | Ordinal: 3055
        void registerStateData(void);

    // RVA: 0x1A3 | Ordinal: 420
        void wSenXZAxisAutopilot(class wSenXZAxisAutopilot &&);

    // RVA: 0x1A4 | Ordinal: 421
        void wSenXZAxisAutopilot(class wSenXZAxisAutopilot const &);

    // RVA: 0x1A5 | Ordinal: 422
        void wSenXZAxisAutopilot(class wSenXZAxisAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x27E | Ordinal: 639
        void _wSenXZAxisAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WSENXZAXISAUTOPILOT_HPP
