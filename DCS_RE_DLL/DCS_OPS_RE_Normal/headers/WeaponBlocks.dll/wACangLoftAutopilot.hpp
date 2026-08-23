#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wACangLoftAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wACangLoftAutopilot
{
public:

    // RVA: 0x469 | Ordinal: 1130
        void __getInputPorts(void);

    // RVA: 0x502 | Ordinal: 1283
        void __getOutputPorts(void);

    // RVA: 0x5CB | Ordinal: 1484
        void calcCtrlXVal(void);

    // RVA: 0x630 | Ordinal: 1585
        void calcStartParams(void);

    // RVA: 0x631 | Ordinal: 1586
        void calcSumError(void);

    // RVA: 0x67E | Ordinal: 1663
        void checkSumErrorLimits(void);

    // RVA: 0x6B1 | Ordinal: 1714
        void convErrorToA(void);

    // RVA: 0x799 | Ordinal: 1946
        void getDesc_(void);

    // RVA: 0x84D | Ordinal: 2126
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x94A | Ordinal: 2379
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB4C | Ordinal: 2893
        void readInputData(double);

    // RVA: 0xB76 | Ordinal: 2935
        void readMinInputData(double);

    // RVA: 0xB86 | Ordinal: 2951
        void registerStateData(void);

    // RVA: 0xCBB | Ordinal: 3260
        void setHeadingCmd(double);

    // RVA: 0xCD2 | Ordinal: 3283
        void setLoft(int);

    // RVA: 0xCD8 | Ordinal: 3289
        void setLoftPitch(double);

    // RVA: 0xCDC | Ordinal: 3293
        void setLoftTrig(double);

    // RVA: 0xD44 | Ordinal: 3397
        void simulate(double);

    // RVA: 0x3 | Ordinal: 4
        void wACangLoftAutopilot(class wACangLoftAutopilot &&);

    // RVA: 0x4 | Ordinal: 5
        void wACangLoftAutopilot(class wACangLoftAutopilot const &);

    // RVA: 0x5 | Ordinal: 6
        void wACangLoftAutopilot(class wACangLoftAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1E2 | Ordinal: 483
        void _wACangLoftAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WACANGLOFTAUTOPILOT_HPP
