#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wInertialGlideFPAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wInertialGlideFPAutopilot
{
public:

    // RVA: 0x4CD | Ordinal: 1230
        void __getInputPorts(void);

    // RVA: 0x566 | Ordinal: 1383
        void __getOutputPorts(void);

    // RVA: 0x5F3 | Ordinal: 1524
        void calcHorCtrlVal(void);

    // RVA: 0x7FD | Ordinal: 2046
        void getDesc_(void);

    // RVA: 0x8B1 | Ordinal: 2226
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9AE | Ordinal: 2479
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB68 | Ordinal: 2921
        void readInputData(void);

    // RVA: 0xD0E | Ordinal: 3343
        void setSensorOnGlideHeight(bool);

    // RVA: 0xD98 | Ordinal: 3481
        void simulate(double);

    // RVA: 0x14C | Ordinal: 333
        void wInertialGlideFPAutopilot(class wInertialGlideFPAutopilot &&);

    // RVA: 0x14D | Ordinal: 334
        void wInertialGlideFPAutopilot(class wInertialGlideFPAutopilot const &);

    // RVA: 0x14E | Ordinal: 335
        void wInertialGlideFPAutopilot(class wInertialGlideFPAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x25D | Ordinal: 606
        void _wInertialGlideFPAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WINERTIALGLIDEFPAUTOPILOT_HPP
