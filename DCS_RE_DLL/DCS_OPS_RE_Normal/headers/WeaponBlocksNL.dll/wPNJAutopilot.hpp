#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x66E | Ordinal: 1647
        void checkFinsLimits(void);

    // RVA: 0x6F5 | Ordinal: 1782
        void endJumpManeuver(void);

    // RVA: 0x804 | Ordinal: 2053
        void getDesc_(void);

    // RVA: 0x8B7 | Ordinal: 2232
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9B4 | Ordinal: 2485
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xADC | Ordinal: 2781
        void jumpProcess(void);

    // RVA: 0xB44 | Ordinal: 2885
        void readInputData(void);

    // RVA: 0xBB7 | Ordinal: 3000
        void registerStateData(void);

    // RVA: 0xC91 | Ordinal: 3218
        void setLoftPowerK(double);

    // RVA: 0xD5B | Ordinal: 3420
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WPNJAUTOPILOT_HPP
