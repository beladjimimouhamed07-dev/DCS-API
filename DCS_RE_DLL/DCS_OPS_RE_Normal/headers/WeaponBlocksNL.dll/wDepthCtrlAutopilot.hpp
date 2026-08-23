#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wDepthCtrlAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDepthCtrlAutopilot
{
public:

    // RVA: 0x4A8 | Ordinal: 1193
        void __getInputPorts(void);

    // RVA: 0x541 | Ordinal: 1346
        void __getOutputPorts(void);

    // RVA: 0x5F0 | Ordinal: 1521
        void calcHorCtrlVal(void);

    // RVA: 0x646 | Ordinal: 1607
        void calcVertCtrlVal(void);

    // RVA: 0x64E | Ordinal: 1615
        void calcXCtrlVal(void);

    // RVA: 0x669 | Ordinal: 1642
        void checkFinsLimits(void);

    // RVA: 0x6A9 | Ordinal: 1706
        void convCtrlValByRoll(void);

    // RVA: 0x7D0 | Ordinal: 2001
        void getDesc_(void);

    // RVA: 0x883 | Ordinal: 2180
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x980 | Ordinal: 2433
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB38 | Ordinal: 2873
        void readInputData(void);

    // RVA: 0xB8E | Ordinal: 2959
        void registerStateData(void);

    // RVA: 0xC73 | Ordinal: 3188
        void setHeadingCmd(double);

    // RVA: 0xD2E | Ordinal: 3375
        void simulate(double);

    // RVA: 0xC3 | Ordinal: 196
        void wDepthCtrlAutopilot(class wDepthCtrlAutopilot &&);

    // RVA: 0xC4 | Ordinal: 197
        void wDepthCtrlAutopilot(class wDepthCtrlAutopilot const &);

    // RVA: 0xC5 | Ordinal: 198
        void wDepthCtrlAutopilot(class wDepthCtrlAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x228 | Ordinal: 553
        void _wDepthCtrlAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDEPTHCTRLAUTOPILOT_HPP
