#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockDelayTriggerDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockDelayTriggerDescriptor
{
public:

    // RVA: 0x262 | Ordinal: 611
        void __create_instance(void);

    // RVA: 0x2B4 | Ordinal: 693
        void clone(void) const;

    // RVA: 0x2E9 | Ordinal: 746
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x325 | Ordinal: 806
        void getBlockClassNameS(void);

    // RVA: 0x35A | Ordinal: 859
        void getBlockTypeName(void) const;

    // RVA: 0x38A | Ordinal: 907
        void getBlockTypeNameS(void);

    // RVA: 0x3BE | Ordinal: 959
        void getClassName(void) const;

    // RVA: 0x416 | Ordinal: 1047
        void getInputPorts_(void) const;

    // RVA: 0x44D | Ordinal: 1102
        void getInputWires_(void) const;

    // RVA: 0x498 | Ordinal: 1177
        void getOutputPorts_(void) const;

    // RVA: 0x4CE | Ordinal: 1231
        void getOutputWires_(void) const;

    // RVA: 0x500 | Ordinal: 1281
        void getParametersList(void);

    // RVA: 0xDB | Ordinal: 220
        void wBlockDelayTriggerDescriptor(class wBlockDelayTriggerDescriptor &&);

    // RVA: 0xDC | Ordinal: 221
        void wBlockDelayTriggerDescriptor(class wBlockDelayTriggerDescriptor const &);

    // RVA: 0xDD | Ordinal: 222
        void wBlockDelayTriggerDescriptor(void);

    // RVA: 0x158 | Ordinal: 345
        void _wBlockDelayTriggerDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKDELAYTRIGGERDESCRIPTOR_HPP
