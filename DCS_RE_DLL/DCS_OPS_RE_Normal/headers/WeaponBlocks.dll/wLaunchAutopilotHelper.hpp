#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wLaunchAutopilotHelper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wLaunchAutopilotHelper
{
public:

    // RVA: 0x4D1 | Ordinal: 1234
        void __getInputPorts(void);

    // RVA: 0x56A | Ordinal: 1387
        void __getOutputPorts(void);

    // RVA: 0x801 | Ordinal: 2050
        void getDesc_(void);

    // RVA: 0x8B5 | Ordinal: 2230
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9B2 | Ordinal: 2483
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xACC | Ordinal: 2765
        void isAltCheckFailed_(void);

    // RVA: 0xADD | Ordinal: 2782
        void isSequenceCompleted_(double);

    // RVA: 0xB00 | Ordinal: 2817
        void isVelCheckFailed_(void);

    // RVA: 0xBD8 | Ordinal: 3033
        void registerStateData(void);

    // RVA: 0xD9C | Ordinal: 3485
        void simulate(double);

    // RVA: 0x158 | Ordinal: 345
        void wLaunchAutopilotHelper(class wLaunchAutopilotHelper &&);

    // RVA: 0x159 | Ordinal: 346
        void wLaunchAutopilotHelper(class wLaunchAutopilotHelper const &);

    // RVA: 0x15A | Ordinal: 347
        void wLaunchAutopilotHelper(class wLaunchAutopilotHelperDescriptor const *, class wSimulationSystem *);

    // RVA: 0x261 | Ordinal: 610
        void _wLaunchAutopilotHelper(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WLAUNCHAUTOPILOTHELPER_HPP
