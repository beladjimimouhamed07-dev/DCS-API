#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wDiveStabAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDiveStabAutopilot
{
public:

    // RVA: 0x43D | Ordinal: 1086
        void AToFins(void);

    // RVA: 0x4AA | Ordinal: 1195
        void __getInputPorts(void);

    // RVA: 0x543 | Ordinal: 1348
        void __getOutputPorts(void);

    // RVA: 0x5C8 | Ordinal: 1481
        void calcCtrlVal(void);

    // RVA: 0x5CD | Ordinal: 1486
        void calcCtrlXVal(void);

    // RVA: 0x634 | Ordinal: 1589
        void calcSumError(void);

    // RVA: 0x663 | Ordinal: 1636
        void checkALimits(void);

    // RVA: 0x66C | Ordinal: 1645
        void checkFinsLimits(void);

    // RVA: 0x6B3 | Ordinal: 1716
        void convErrorToA(void);

    // RVA: 0x6FB | Ordinal: 1788
        void errToFins(void);

    // RVA: 0x7DA | Ordinal: 2011
        void getDesc_(void);

    // RVA: 0x88E | Ordinal: 2191
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x98B | Ordinal: 2444
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB63 | Ordinal: 2916
        void readInputData(double);

    // RVA: 0xB78 | Ordinal: 2937
        void readMinInputData(double);

    // RVA: 0xBBA | Ordinal: 3003
        void registerStateData(void);

    // RVA: 0xC28 | Ordinal: 3113
        void saveStepInputData(void);

    // RVA: 0xC2B | Ordinal: 3116
        void scaleErrorToA(void);

    // RVA: 0xD7B | Ordinal: 3452
        void simulate(double);

    // RVA: 0xC9 | Ordinal: 202
        void wDiveStabAutopilot(class wDiveStabAutopilot &&);

    // RVA: 0xCA | Ordinal: 203
        void wDiveStabAutopilot(class wDiveStabAutopilot const &);

    // RVA: 0xCB | Ordinal: 204
        void wDiveStabAutopilot(class wDiveStabAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x22A | Ordinal: 555
        void _wDiveStabAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDIVESTABAUTOPILOT_HPP
