#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wExecDeviceBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wExecDeviceBlock
{
public:

    // RVA: 0x4B3 | Ordinal: 1204
        void __getInputPorts(void);

    // RVA: 0x54C | Ordinal: 1357
        void __getOutputPorts(void);

    // RVA: 0x6FC | Ordinal: 1789
        void execSchedFunc_(void);

    // RVA: 0x70C | Ordinal: 1805
        void functionAtPosition_(class Math::Vector<3, double> const &);

    // RVA: 0x7E3 | Ordinal: 2020
        void getDesc_(void);

    // RVA: 0x897 | Ordinal: 2200
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x994 | Ordinal: 2453
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA73 | Ordinal: 2676
        void handleCollision_(bool);

    // RVA: 0xA7B | Ordinal: 2684
        void handleTDDSignal_(class Math::Vector<3, double> const &);

    // RVA: 0xB30 | Ordinal: 2865
        void processFunctionConditions_(void);

    // RVA: 0xB3D | Ordinal: 2878
        void processSimState_(double &);

    // RVA: 0xBC1 | Ordinal: 3010
        void registerStateData(void);

    // RVA: 0xC2C | Ordinal: 3117
        void scheduleFunction_(void);

    // RVA: 0xD0A | Ordinal: 3339
        void setSelfDestrDly_(double);

    // RVA: 0xE16 | Ordinal: 3607
        void updateCurrDly_(void);

    // RVA: 0xEF | Ordinal: 240
        void wExecDeviceBlock(class wExecDeviceBlock &&);

    // RVA: 0xF0 | Ordinal: 241
        void wExecDeviceBlock(class wExecDeviceDesc const *, class wSimulationSystem *);

    // RVA: 0x239 | Ordinal: 570
        void _wExecDeviceBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WEXECDEVICEBLOCK_HPP
