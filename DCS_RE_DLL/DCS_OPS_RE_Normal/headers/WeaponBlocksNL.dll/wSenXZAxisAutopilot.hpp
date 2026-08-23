#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x814 | Ordinal: 2069
        void getDesc_(void);

    // RVA: 0x8C7 | Ordinal: 2248
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C4 | Ordinal: 2501
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBC4 | Ordinal: 3013
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WSENXZAXISAUTOPILOT_HPP
