#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockDelayTriggerMultipleDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockDelayTriggerMultipleDescriptor
{
public:

    // RVA: 0x263 | Ordinal: 612
        void __create_instance(void);

    // RVA: 0x2B5 | Ordinal: 694
        void clone(void) const;

    // RVA: 0x2EA | Ordinal: 747
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x326 | Ordinal: 807
        void getBlockClassNameS(void);

    // RVA: 0x35B | Ordinal: 860
        void getBlockTypeName(void) const;

    // RVA: 0x38B | Ordinal: 908
        void getBlockTypeNameS(void);

    // RVA: 0x3BF | Ordinal: 960
        void getClassName(void) const;

    // RVA: 0x417 | Ordinal: 1048
        void getInputPorts_(void) const;

    // RVA: 0x44E | Ordinal: 1103
        void getInputWires_(void) const;

    // RVA: 0x499 | Ordinal: 1178
        void getOutputPorts_(void) const;

    // RVA: 0x4CF | Ordinal: 1232
        void getOutputWires_(void) const;

    // RVA: 0x501 | Ordinal: 1282
        void getParametersList(void);

    // RVA: 0xDE | Ordinal: 223
        void wBlockDelayTriggerMultipleDescriptor(class wBlockDelayTriggerMultipleDescriptor &&);

    // RVA: 0xDF | Ordinal: 224
        void wBlockDelayTriggerMultipleDescriptor(class wBlockDelayTriggerMultipleDescriptor const &);

    // RVA: 0xE0 | Ordinal: 225
        void wBlockDelayTriggerMultipleDescriptor(void);

    // RVA: 0x159 | Ordinal: 346
        void _wBlockDelayTriggerMultipleDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKDELAYTRIGGERMULTIPLEDESCRIPTOR_HPP
