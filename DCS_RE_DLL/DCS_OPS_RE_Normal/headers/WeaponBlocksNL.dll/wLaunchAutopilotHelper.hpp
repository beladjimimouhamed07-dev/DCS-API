#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7F9 | Ordinal: 2042
        void getDesc_(void);

    // RVA: 0x8AC | Ordinal: 2221
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A9 | Ordinal: 2474
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAA6 | Ordinal: 2727
        void isAltCheckFailed_(void);

    // RVA: 0xAB6 | Ordinal: 2743
        void isSequenceCompleted_(double);

    // RVA: 0xAD9 | Ordinal: 2778
        void isVelCheckFailed_(void);

    // RVA: 0xBAE | Ordinal: 2991
        void registerStateData(void);

    // RVA: 0xD51 | Ordinal: 3410
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WLAUNCHAUTOPILOTHELPER_HPP
