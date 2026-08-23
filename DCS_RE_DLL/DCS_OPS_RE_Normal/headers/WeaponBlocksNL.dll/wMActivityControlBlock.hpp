#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7FA | Ordinal: 2043
        void getDesc_(void);

    // RVA: 0x8AD | Ordinal: 2222
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9AA | Ordinal: 2475
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAEE | Ordinal: 2799
        void onDisableSensorPortVal(bool);

    // RVA: 0xAEF | Ordinal: 2800
        void onDisableWarheadPortVal(bool);

    // RVA: 0xAF0 | Ordinal: 2801
        void onEngOnPortVal(bool);

    // RVA: 0xAF5 | Ordinal: 2806
        void onSuppressExplosionPortVal(bool);

    // RVA: 0xBAF | Ordinal: 2992
        void registerStateData(void);

    // RVA: 0xD52 | Ordinal: 3411
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WMACTIVITYCONTROLBLOCK_HPP
