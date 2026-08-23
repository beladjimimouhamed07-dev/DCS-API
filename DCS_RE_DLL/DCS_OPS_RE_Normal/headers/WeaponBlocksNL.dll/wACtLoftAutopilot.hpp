#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wACtLoftAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wACtLoftAutopilot
{
public:

    // RVA: 0x46B | Ordinal: 1132
        void __getInputPorts(void);

    // RVA: 0x504 | Ordinal: 1285
        void __getOutputPorts(void);

    // RVA: 0x633 | Ordinal: 1588
        void calcSumError(void);

    // RVA: 0x793 | Ordinal: 1940
        void getDesc_(void);

    // RVA: 0x846 | Ordinal: 2119
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x943 | Ordinal: 2372
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB24 | Ordinal: 2853
        void readInputData(double);

    // RVA: 0xB5E | Ordinal: 2911
        void registerStateData(void);

    // RVA: 0xC89 | Ordinal: 3210
        void setLoft(int);

    // RVA: 0x9 | Ordinal: 10
        void wACtLoftAutopilot(class wACtLoftAutopilot &&);

    // RVA: 0xA | Ordinal: 11
        void wACtLoftAutopilot(class wACtLoftAutopilot const &);

    // RVA: 0xB | Ordinal: 12
        void wACtLoftAutopilot(class wACtLoftAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1E4 | Ordinal: 485
        void _wACtLoftAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WACTLOFTAUTOPILOT_HPP
