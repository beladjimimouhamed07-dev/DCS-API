#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x66B | Ordinal: 1644
        void checkFinsLimits(void);

    // RVA: 0x6AD | Ordinal: 1710
        void convCtrlValByRoll(void);

    // RVA: 0x7D8 | Ordinal: 2009
        void getDesc_(void);

    // RVA: 0x88C | Ordinal: 2189
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x989 | Ordinal: 2442
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB62 | Ordinal: 2915
        void readInputData(void);

    // RVA: 0xBB8 | Ordinal: 3001
        void registerStateData(void);

    // RVA: 0xCBD | Ordinal: 3262
        void setHeadingCmd(double);

    // RVA: 0xD79 | Ordinal: 3450
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDEPTHCTRLAUTOPILOT_HPP
