#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7F5 | Ordinal: 2038
        void getDesc_(void);

    // RVA: 0x8A8 | Ordinal: 2217
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A5 | Ordinal: 2470
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB3E | Ordinal: 2879
        void readInputData(void);

    // RVA: 0xCC4 | Ordinal: 3269
        void setSensorOnGlideHeight(bool);

    // RVA: 0xD4D | Ordinal: 3406
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WINERTIALGLIDEFPAUTOPILOT_HPP
