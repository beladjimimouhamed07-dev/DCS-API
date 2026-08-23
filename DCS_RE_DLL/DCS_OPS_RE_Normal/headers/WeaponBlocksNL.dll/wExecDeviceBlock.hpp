#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x6F8 | Ordinal: 1785
        void execSchedFunc_(void);

    // RVA: 0x706 | Ordinal: 1799
        void functionAtPosition_(class Math::Vector<3, double> const &);

    // RVA: 0x7DB | Ordinal: 2012
        void getDesc_(void);

    // RVA: 0x88E | Ordinal: 2191
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x98B | Ordinal: 2444
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA64 | Ordinal: 2661
        void handleCollision_(bool);

    // RVA: 0xA6C | Ordinal: 2669
        void handleTDDSignal_(class Math::Vector<3, double> const &);

    // RVA: 0xB06 | Ordinal: 2823
        void processFunctionConditions_(void);

    // RVA: 0xB13 | Ordinal: 2836
        void processSimState_(double &);

    // RVA: 0xB97 | Ordinal: 2968
        void registerStateData(void);

    // RVA: 0xBEC | Ordinal: 3053
        void scheduleFunction_(void);

    // RVA: 0xCC0 | Ordinal: 3265
        void setSelfDestrDly_(double);

    // RVA: 0xDC7 | Ordinal: 3528
        void updateCurrDly_(void);

    // RVA: 0xEF | Ordinal: 240
        void wExecDeviceBlock(class wExecDeviceBlock &&);

    // RVA: 0xF0 | Ordinal: 241
        void wExecDeviceBlock(class wExecDeviceDesc const *, class wSimulationSystem *);

    // RVA: 0x239 | Ordinal: 570
        void _wExecDeviceBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WEXECDEVICEBLOCK_HPP
