#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x661 | Ordinal: 1634
        void checkALimits(void);

    // RVA: 0x66A | Ordinal: 1643
        void checkFinsLimits(void);

    // RVA: 0x6AF | Ordinal: 1712
        void convErrorToA(void);

    // RVA: 0x6F7 | Ordinal: 1784
        void errToFins(void);

    // RVA: 0x7D2 | Ordinal: 2003
        void getDesc_(void);

    // RVA: 0x885 | Ordinal: 2182
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x982 | Ordinal: 2435
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB39 | Ordinal: 2874
        void readInputData(double);

    // RVA: 0xB4E | Ordinal: 2895
        void readMinInputData(double);

    // RVA: 0xB90 | Ordinal: 2961
        void registerStateData(void);

    // RVA: 0xBE8 | Ordinal: 3049
        void saveStepInputData(void);

    // RVA: 0xBEB | Ordinal: 3052
        void scaleErrorToA(void);

    // RVA: 0xD30 | Ordinal: 3377
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDIVESTABAUTOPILOT_HPP
