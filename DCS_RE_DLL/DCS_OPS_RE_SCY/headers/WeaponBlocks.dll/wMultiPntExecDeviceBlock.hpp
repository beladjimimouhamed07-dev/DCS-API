#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6FD | Ordinal: 1790
        void execSchedFunc_(void);

    // RVA: 0x6FF | Ordinal: 1792
        void executeExpiredDelay_(void);

    // RVA: 0x70E | Ordinal: 1807
        void functionAtPosition_(class Math::Vector<3, double> const &);

    // RVA: 0x808 | Ordinal: 2057
        void getDesc_(void);

    // RVA: 0x8BC | Ordinal: 2237
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9B9 | Ordinal: 2490
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA74 | Ordinal: 2677
        void handleCollision_(bool);

    // RVA: 0xA7C | Ordinal: 2685
        void handleTDDSignal_(class Math::Vector<3, double> const &);

    // RVA: 0xB32 | Ordinal: 2867
        void processFunctionConditions_(void);

    // RVA: 0xB3E | Ordinal: 2879
        void processSimState_(double &);

    // RVA: 0xC03 | Ordinal: 3076
        void removeSchedFunc_(class Math::Vector<3, double> const &);

    // RVA: 0xC2D | Ordinal: 3118
        void scheduleFunction_(void);

    // RVA: 0xD0B | Ordinal: 3340
        void setSelfDestrDly_(double);

    // RVA: 0x16C | Ordinal: 365
        void wMultiPntExecDeviceBlock(class wMultiPntExecDeviceDesc const *, class wSimulationSystem *);

    // RVA: 0x268 | Ordinal: 617
        void _wMultiPntExecDeviceBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WMULTIPNTEXECDEVICEBLOCK_HPP
