#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x79B | Ordinal: 1948
        void getDesc_(void);

    // RVA: 0x84F | Ordinal: 2128
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x94C | Ordinal: 2381
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB4E | Ordinal: 2895
        void readInputData(double);

    // RVA: 0xB88 | Ordinal: 2953
        void registerStateData(void);

    // RVA: 0xCD3 | Ordinal: 3284
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WACTLOFTAUTOPILOT_HPP
