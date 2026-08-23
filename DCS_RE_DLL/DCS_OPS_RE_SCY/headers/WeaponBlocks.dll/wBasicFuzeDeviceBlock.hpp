#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7B6 | Ordinal: 1975
        void getDesc_(void);

    // RVA: 0x86A | Ordinal: 2155
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x967 | Ordinal: 2408
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAB2 | Ordinal: 2739
        void init_randoms(int);

    // RVA: 0xAD7 | Ordinal: 2776
        void isOwnerInstance_(void);

    // RVA: 0xB3C | Ordinal: 2877
        void processSimState_(double &);

    // RVA: 0xBA3 | Ordinal: 2980
        void registerStateData(void);

    // RVA: 0xE17 | Ordinal: 3608
        void updateDbgGeometry_(void);

    // RVA: 0x62 | Ordinal: 99
        void wBasicFuzeDeviceBlock(class wBasicFuzeDeviceBlock const &);

    // RVA: 0x63 | Ordinal: 100
        void wBasicFuzeDeviceBlock(class wBasicFuzeDeviceDesc const *, class wSimulationSystem *);

    // RVA: 0x204 | Ordinal: 517
        void _wBasicFuzeDeviceBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WBASICFUZEDEVICEBLOCK_HPP
