#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x67B | Ordinal: 1660
        void checkSumErrorLimits(void);

    // RVA: 0x6AD | Ordinal: 1710
        void convErrorToA(void);

    // RVA: 0x791 | Ordinal: 1938
        void getDesc_(void);

    // RVA: 0x844 | Ordinal: 2117
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x941 | Ordinal: 2370
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB22 | Ordinal: 2851
        void readInputData(double);

    // RVA: 0xB4C | Ordinal: 2893
        void readMinInputData(double);

    // RVA: 0xB5C | Ordinal: 2909
        void registerStateData(void);

    // RVA: 0xC71 | Ordinal: 3186
        void setHeadingCmd(double);

    // RVA: 0xC88 | Ordinal: 3209
        void setLoft(int);

    // RVA: 0xC8E | Ordinal: 3215
        void setLoftPitch(double);

    // RVA: 0xC92 | Ordinal: 3219
        void setLoftTrig(double);

    // RVA: 0xCF9 | Ordinal: 3322
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WACANGLOFTAUTOPILOT_HPP
