#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wMActivityControlBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wMActivityControlBlock
{
public:

    // RVA: 0x4D2 | Ordinal: 1235
        void __getInputPorts(void);

    // RVA: 0x56B | Ordinal: 1388
        void __getOutputPorts(void);

    // RVA: 0x802 | Ordinal: 2051
        void getDesc_(void);

    // RVA: 0x8B6 | Ordinal: 2231
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9B3 | Ordinal: 2484
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB16 | Ordinal: 2839
        void onDisableSensorPortVal(bool);

    // RVA: 0xB17 | Ordinal: 2840
        void onDisableWarheadPortVal(bool);

    // RVA: 0xB18 | Ordinal: 2841
        void onEngOnPortVal(bool);

    // RVA: 0xB1D | Ordinal: 2846
        void onSuppressExplosionPortVal(bool);

    // RVA: 0xBD9 | Ordinal: 3034
        void registerStateData(void);

    // RVA: 0xD9D | Ordinal: 3486
        void simulate(double);

    // RVA: 0x15B | Ordinal: 348
        void wMActivityControlBlock(class wMActivityControlBlock &&);

    // RVA: 0x15C | Ordinal: 349
        void wMActivityControlBlock(class wMActivityControlBlock const &);

    // RVA: 0x15D | Ordinal: 350
        void wMActivityControlBlock(class wMActivityControlBlockDescriptor const *, class wSimulationSystem *);

    // RVA: 0x262 | Ordinal: 611
        void _wMActivityControlBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WMACTIVITYCONTROLBLOCK_HPP
