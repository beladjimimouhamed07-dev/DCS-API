#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wACtAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wACtAutopilot
{
public:

    // RVA: 0x43C | Ordinal: 1085
        void AToFins(void);

    // RVA: 0x46A | Ordinal: 1131
        void __getInputPorts(void);

    // RVA: 0x503 | Ordinal: 1284
        void __getOutputPorts(void);

    // RVA: 0x5C7 | Ordinal: 1480
        void calcCtrlVal(void);

    // RVA: 0x5CC | Ordinal: 1485
        void calcCtrlXVal(void);

    // RVA: 0x632 | Ordinal: 1587
        void calcSumError(void);

    // RVA: 0x662 | Ordinal: 1635
        void checkALimits(void);

    // RVA: 0x669 | Ordinal: 1642
        void checkFinsLimits(void);

    // RVA: 0x67F | Ordinal: 1664
        void checkSumErrorLimits(void);

    // RVA: 0x6B2 | Ordinal: 1715
        void convErrorToA(void);

    // RVA: 0x6FA | Ordinal: 1787
        void errToFins(void);

    // RVA: 0x79A | Ordinal: 1947
        void getDesc_(void);

    // RVA: 0x84E | Ordinal: 2127
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x94B | Ordinal: 2380
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA12 | Ordinal: 2579
        void getPNError(void);

    // RVA: 0xA36 | Ordinal: 2615
        void getPursError(void);

    // RVA: 0xB4D | Ordinal: 2894
        void readInputData(double);

    // RVA: 0xB77 | Ordinal: 2936
        void readMinInputData(double);

    // RVA: 0xB87 | Ordinal: 2952
        void registerStateData(void);

    // RVA: 0xC27 | Ordinal: 3112
        void saveStepInputData(void);

    // RVA: 0xC2A | Ordinal: 3115
        void scaleErrorToA(void);

    // RVA: 0xD45 | Ordinal: 3398
        void simulate(double);

    // RVA: 0x6 | Ordinal: 7
        void wACtAutopilot(class wACtAutopilot &&);

    // RVA: 0x7 | Ordinal: 8
        void wACtAutopilot(class wACtAutopilot const &);

    // RVA: 0x8 | Ordinal: 9
        void wACtAutopilot(class wACtAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1E3 | Ordinal: 484
        void _wACtAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WACTAUTOPILOT_HPP
