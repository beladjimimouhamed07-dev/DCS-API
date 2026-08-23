#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x831 | Ordinal: 2098
        void getDesc_(void);

    // RVA: 0x8E5 | Ordinal: 2278
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9E2 | Ordinal: 2531
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xC02 | Ordinal: 3075
        void registerStateData(void);

    // RVA: 0xC06 | Ordinal: 3079
        void resetJumpState(bool);

    // RVA: 0xDC5 | Ordinal: 3526
        void simulate(double);

    // RVA: 0xE23 | Ordinal: 3620
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WXZAXISAUTOPILOT_HPP
