#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wJSOWAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wJSOWAutopilot
{
public:

    // RVA: 0x4CE | Ordinal: 1231
        void __getInputPorts(void);

    // RVA: 0x567 | Ordinal: 1384
        void __getOutputPorts(void);

    // RVA: 0x5F4 | Ordinal: 1525
        void calcHorCtrlVal(void);

    // RVA: 0x649 | Ordinal: 1610
        void calcVertCtrlVal(void);

    // RVA: 0x66E | Ordinal: 1647
        void checkFinsLimits(void);

    // RVA: 0x6F8 | Ordinal: 1785
        void endJumpManeuver(void);

    // RVA: 0x7FE | Ordinal: 2047
        void getDesc_(void);

    // RVA: 0x8B2 | Ordinal: 2227
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9AF | Ordinal: 2480
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB02 | Ordinal: 2819
        void jumpProcess(void);

    // RVA: 0xB69 | Ordinal: 2922
        void readInputData(void);

    // RVA: 0xBD5 | Ordinal: 3030
        void registerStateData(void);

    // RVA: 0xCD6 | Ordinal: 3287
        void setLoftMode(int);

    // RVA: 0xCDA | Ordinal: 3291
        void setLoftPower(int);

    // RVA: 0xD99 | Ordinal: 3482
        void simulate(double);

    // RVA: 0xE22 | Ordinal: 3619
        void updatePIDcoeffs(void);

    // RVA: 0x14F | Ordinal: 336
        void wJSOWAutopilot(class wJSOWAutopilot &&);

    // RVA: 0x150 | Ordinal: 337
        void wJSOWAutopilot(class wJSOWAutopilot const &);

    // RVA: 0x151 | Ordinal: 338
        void wJSOWAutopilot(class wJSOWAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x25E | Ordinal: 607
        void _wJSOWAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WJSOWAUTOPILOT_HPP
