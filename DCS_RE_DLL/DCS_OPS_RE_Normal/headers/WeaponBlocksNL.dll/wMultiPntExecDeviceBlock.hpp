#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wMultiPntExecDeviceBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wMultiPntExecDeviceBlock
{
public:

    // RVA: 0x4D8 | Ordinal: 1241
        void __getInputPorts(void);

    // RVA: 0x571 | Ordinal: 1394
        void __getOutputPorts(void);

    // RVA: 0x6F9 | Ordinal: 1786
        void execSchedFunc_(void);

    // RVA: 0x6FB | Ordinal: 1788
        void executeExpiredDelay_(void);

    // RVA: 0x708 | Ordinal: 1801
        void functionAtPosition_(class Math::Vector<3, double> const &);

    // RVA: 0x800 | Ordinal: 2049
        void getDesc_(void);

    // RVA: 0x8B3 | Ordinal: 2228
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9B0 | Ordinal: 2481
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA65 | Ordinal: 2662
        void handleCollision_(bool);

    // RVA: 0xA6D | Ordinal: 2670
        void handleTDDSignal_(class Math::Vector<3, double> const &);

    // RVA: 0xB08 | Ordinal: 2825
        void processFunctionConditions_(void);

    // RVA: 0xB14 | Ordinal: 2837
        void processSimState_(double &);

    // RVA: 0xBD9 | Ordinal: 3034
        void removeSchedFunc_(class Math::Vector<3, double> const &);

    // RVA: 0xBED | Ordinal: 3054
        void scheduleFunction_(void);

    // RVA: 0xCC1 | Ordinal: 3266
        void setSelfDestrDly_(double);

    // RVA: 0x16C | Ordinal: 365
        void wMultiPntExecDeviceBlock(class wMultiPntExecDeviceDesc const *, class wSimulationSystem *);

    // RVA: 0x268 | Ordinal: 617
        void _wMultiPntExecDeviceBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WMULTIPNTEXECDEVICEBLOCK_HPP
