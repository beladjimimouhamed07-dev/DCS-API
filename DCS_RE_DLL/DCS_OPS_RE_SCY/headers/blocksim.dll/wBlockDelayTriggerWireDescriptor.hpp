#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockDelayTriggerWireDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockDelayTriggerWireDescriptor
{
public:

    // RVA: 0x264 | Ordinal: 613
        void __create_instance(void);

    // RVA: 0x2B6 | Ordinal: 695
        void clone(void) const;

    // RVA: 0x2EB | Ordinal: 748
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x327 | Ordinal: 808
        void getBlockClassNameS(void);

    // RVA: 0x35C | Ordinal: 861
        void getBlockTypeName(void) const;

    // RVA: 0x38C | Ordinal: 909
        void getBlockTypeNameS(void);

    // RVA: 0x3C0 | Ordinal: 961
        void getClassName(void) const;

    // RVA: 0x418 | Ordinal: 1049
        void getInputPorts_(void) const;

    // RVA: 0x44F | Ordinal: 1104
        void getInputWires_(void) const;

    // RVA: 0x49A | Ordinal: 1179
        void getOutputPorts_(void) const;

    // RVA: 0x4D0 | Ordinal: 1233
        void getOutputWires_(void) const;

    // RVA: 0x502 | Ordinal: 1283
        void getParametersList(void);

    // RVA: 0xE1 | Ordinal: 226
        void wBlockDelayTriggerWireDescriptor(class wBlockDelayTriggerWireDescriptor &&);

    // RVA: 0xE2 | Ordinal: 227
        void wBlockDelayTriggerWireDescriptor(class wBlockDelayTriggerWireDescriptor const &);

    // RVA: 0xE3 | Ordinal: 228
        void wBlockDelayTriggerWireDescriptor(void);

    // RVA: 0x15A | Ordinal: 347
        void _wBlockDelayTriggerWireDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKDELAYTRIGGERWIREDESCRIPTOR_HPP
