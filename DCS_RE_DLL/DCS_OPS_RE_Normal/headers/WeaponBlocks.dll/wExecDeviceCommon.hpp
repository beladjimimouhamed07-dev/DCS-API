#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7E4 | Ordinal: 2021
        void getDesc_(void);

    // RVA: 0x898 | Ordinal: 2201
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x995 | Ordinal: 2454
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB2E | Ordinal: 2863
        void processArmConditions_(void);

    // RVA: 0xBC2 | Ordinal: 3011
        void registerStateData(void);

    // RVA: 0xCA4 | Ordinal: 3237
        void setDlyModeWrapper_(int);

    // RVA: 0xCA6 | Ordinal: 3239
        void setDlyValWrapper_(double);

    // RVA: 0xCEA | Ordinal: 3307
        void setOutputObjID_(unsigned int const &);

    // RVA: 0xD84 | Ordinal: 3461
        void simulate(double);

    // RVA: 0xE19 | Ordinal: 3610
        void updateMaxDelay_(void);

    // RVA: 0xF1 | Ordinal: 242
        void wExecDeviceCommon(class wExecDeviceCommon &&);

    // RVA: 0xF2 | Ordinal: 243
        void wExecDeviceCommon(class wExecDeviceCommonDesc const *, class wSimulationSystem *);

    // RVA: 0x23A | Ordinal: 571
        void _wExecDeviceCommon(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WEXECDEVICECOMMON_HPP
