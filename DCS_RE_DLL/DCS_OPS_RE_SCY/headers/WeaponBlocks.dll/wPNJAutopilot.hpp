#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wPNJAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wPNJAutopilot
{
public:

    // RVA: 0x4DC | Ordinal: 1245
        void __getInputPorts(void);

    // RVA: 0x575 | Ordinal: 1398
        void __getOutputPorts(void);

    // RVA: 0x5F5 | Ordinal: 1526
        void calcHorCtrlVal(void);

    // RVA: 0x64A | Ordinal: 1611
        void calcVertCtrlVal(void);

    // RVA: 0x670 | Ordinal: 1649
        void checkFinsLimits(void);

    // RVA: 0x6F9 | Ordinal: 1786
        void endJumpManeuver(void);

    // RVA: 0x80C | Ordinal: 2061
        void getDesc_(void);

    // RVA: 0x8C0 | Ordinal: 2241
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9BD | Ordinal: 2494
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB03 | Ordinal: 2820
        void jumpProcess(void);

    // RVA: 0xB6E | Ordinal: 2927
        void readInputData(void);

    // RVA: 0xBE1 | Ordinal: 3042
        void registerStateData(void);

    // RVA: 0xCDB | Ordinal: 3292
        void setLoftPowerK(double);

    // RVA: 0xDA6 | Ordinal: 3495
        void simulate(double);

    // RVA: 0x175 | Ordinal: 374
        void wPNJAutopilot(class wPNJAutopilot &&);

    // RVA: 0x176 | Ordinal: 375
        void wPNJAutopilot(class wPNJAutopilot const &);

    // RVA: 0x177 | Ordinal: 376
        void wPNJAutopilot(class wPNJAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x26C | Ordinal: 621
        void _wPNJAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WPNJAUTOPILOT_HPP
