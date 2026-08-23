#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wExecDeviceCommon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wExecDeviceCommon
{
public:

    // RVA: 0x4B4 | Ordinal: 1205
        void __getInputPorts(void);

    // RVA: 0x54D | Ordinal: 1358
        void __getOutputPorts(void);

    // RVA: 0x7DC | Ordinal: 2013
        void getDesc_(void);

    // RVA: 0x88F | Ordinal: 2192
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x98C | Ordinal: 2445
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB04 | Ordinal: 2821
        void processArmConditions_(void);

    // RVA: 0xB98 | Ordinal: 2969
        void registerStateData(void);

    // RVA: 0xC5A | Ordinal: 3163
        void setDlyModeWrapper_(int);

    // RVA: 0xC5C | Ordinal: 3165
        void setDlyValWrapper_(double);

    // RVA: 0xCA0 | Ordinal: 3233
        void setOutputObjID_(unsigned int const &);

    // RVA: 0xD39 | Ordinal: 3386
        void simulate(double);

    // RVA: 0xDCA | Ordinal: 3531
        void updateMaxDelay_(void);

    // RVA: 0xF1 | Ordinal: 242
        void wExecDeviceCommon(class wExecDeviceCommon &&);

    // RVA: 0xF2 | Ordinal: 243
        void wExecDeviceCommon(class wExecDeviceCommonDesc const *, class wSimulationSystem *);

    // RVA: 0x23A | Ordinal: 571
        void _wExecDeviceCommon(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WEXECDEVICECOMMON_HPP
