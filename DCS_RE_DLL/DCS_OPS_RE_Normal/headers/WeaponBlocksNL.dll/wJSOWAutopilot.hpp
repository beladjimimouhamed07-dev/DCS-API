#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x66C | Ordinal: 1645
        void checkFinsLimits(void);

    // RVA: 0x6F4 | Ordinal: 1781
        void endJumpManeuver(void);

    // RVA: 0x7F6 | Ordinal: 2039
        void getDesc_(void);

    // RVA: 0x8A9 | Ordinal: 2218
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A6 | Ordinal: 2471
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xADB | Ordinal: 2780
        void jumpProcess(void);

    // RVA: 0xB3F | Ordinal: 2880
        void readInputData(void);

    // RVA: 0xBAB | Ordinal: 2988
        void registerStateData(void);

    // RVA: 0xC8C | Ordinal: 3213
        void setLoftMode(int);

    // RVA: 0xC90 | Ordinal: 3217
        void setLoftPower(int);

    // RVA: 0xD4E | Ordinal: 3407
        void simulate(double);

    // RVA: 0xDD3 | Ordinal: 3540
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WJSOWAUTOPILOT_HPP
