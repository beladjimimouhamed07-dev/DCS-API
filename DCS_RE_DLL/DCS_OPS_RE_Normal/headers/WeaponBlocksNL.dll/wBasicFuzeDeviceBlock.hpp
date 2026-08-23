#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wBasicFuzeDeviceBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBasicFuzeDeviceBlock
{
public:

    // RVA: 0x486 | Ordinal: 1159
        void __getInputPorts(void);

    // RVA: 0x51F | Ordinal: 1312
        void __getOutputPorts(void);

    // RVA: 0x7AE | Ordinal: 1967
        void getDesc_(void);

    // RVA: 0x861 | Ordinal: 2146
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x95E | Ordinal: 2399
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA9B | Ordinal: 2716
        void init_randoms(int);

    // RVA: 0xAB1 | Ordinal: 2738
        void isOwnerInstance_(void);

    // RVA: 0xB12 | Ordinal: 2835
        void processSimState_(double &);

    // RVA: 0xB79 | Ordinal: 2938
        void registerStateData(void);

    // RVA: 0xDC8 | Ordinal: 3529
        void updateDbgGeometry_(void);

    // RVA: 0x62 | Ordinal: 99
        void wBasicFuzeDeviceBlock(class wBasicFuzeDeviceBlock const &);

    // RVA: 0x63 | Ordinal: 100
        void wBasicFuzeDeviceBlock(class wBasicFuzeDeviceDesc const *, class wSimulationSystem *);

    // RVA: 0x204 | Ordinal: 517
        void _wBasicFuzeDeviceBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WBASICFUZEDEVICEBLOCK_HPP
