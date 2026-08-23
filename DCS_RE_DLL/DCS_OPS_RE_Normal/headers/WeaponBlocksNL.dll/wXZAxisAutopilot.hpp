#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wXZAxisAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wXZAxisAutopilot
{
public:

    // RVA: 0x501 | Ordinal: 1282
        void __getInputPorts(void);

    // RVA: 0x59A | Ordinal: 1435
        void __getOutputPorts(void);

    // RVA: 0x5F6 | Ordinal: 1527
        void calcHorCtrlVal(void);

    // RVA: 0x64C | Ordinal: 1613
        void calcVertCtrlVal(void);

    // RVA: 0x829 | Ordinal: 2090
        void getDesc_(void);

    // RVA: 0x8DC | Ordinal: 2269
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D9 | Ordinal: 2522
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBD8 | Ordinal: 3033
        void registerStateData(void);

    // RVA: 0xBDC | Ordinal: 3037
        void resetJumpState(bool);

    // RVA: 0xD7A | Ordinal: 3451
        void simulate(double);

    // RVA: 0xDD4 | Ordinal: 3541
        void updatePIDcoeffs(void);

    // RVA: 0x1DF | Ordinal: 480
        void wXZAxisAutopilot(class wXZAxisAutopilot &&);

    // RVA: 0x1E0 | Ordinal: 481
        void wXZAxisAutopilot(class wXZAxisAutopilot const &);

    // RVA: 0x1E1 | Ordinal: 482
        void wXZAxisAutopilot(class wXZAxisAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x294 | Ordinal: 661
        void _wXZAxisAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WXZAXISAUTOPILOT_HPP
