#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x660 | Ordinal: 1633
        void checkALimits(void);

    // RVA: 0x667 | Ordinal: 1640
        void checkFinsLimits(void);

    // RVA: 0x67C | Ordinal: 1661
        void checkSumErrorLimits(void);

    // RVA: 0x6AE | Ordinal: 1711
        void convErrorToA(void);

    // RVA: 0x6F6 | Ordinal: 1783
        void errToFins(void);

    // RVA: 0x792 | Ordinal: 1939
        void getDesc_(void);

    // RVA: 0x845 | Ordinal: 2118
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x942 | Ordinal: 2371
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA09 | Ordinal: 2570
        void getPNError(void);

    // RVA: 0xA2D | Ordinal: 2606
        void getPursError(void);

    // RVA: 0xB23 | Ordinal: 2852
        void readInputData(double);

    // RVA: 0xB4D | Ordinal: 2894
        void readMinInputData(double);

    // RVA: 0xB5D | Ordinal: 2910
        void registerStateData(void);

    // RVA: 0xBE7 | Ordinal: 3048
        void saveStepInputData(void);

    // RVA: 0xBEA | Ordinal: 3051
        void scaleErrorToA(void);

    // RVA: 0xCFA | Ordinal: 3323
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WACTAUTOPILOT_HPP
