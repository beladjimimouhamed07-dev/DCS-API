#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockANDtriggerDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockANDtriggerDescriptor
{
public:

    // RVA: 0x260 | Ordinal: 609
        void __create_instance(void);

    // RVA: 0x2B2 | Ordinal: 691
        void clone(void) const;

    // RVA: 0x2E7 | Ordinal: 744
        void create(class Lua::Loader *);

    // RVA: 0x323 | Ordinal: 804
        void getBlockClassNameS(void);

    // RVA: 0x358 | Ordinal: 857
        void getBlockTypeName(void) const;

    // RVA: 0x388 | Ordinal: 905
        void getBlockTypeNameS(void);

    // RVA: 0x3BC | Ordinal: 957
        void getClassName(void) const;

    // RVA: 0x414 | Ordinal: 1045
        void getInputPorts_(void) const;

    // RVA: 0x44B | Ordinal: 1100
        void getInputWires_(void) const;

    // RVA: 0x496 | Ordinal: 1175
        void getOutputPorts_(void) const;

    // RVA: 0x4CC | Ordinal: 1229
        void getOutputWires_(void) const;

    // RVA: 0x4FE | Ordinal: 1279
        void getParametersList(void);

    // RVA: 0xD6 | Ordinal: 215
        void wBlockANDtriggerDescriptor(class wBlockANDtriggerDescriptor &&);

    // RVA: 0xD7 | Ordinal: 216
        void wBlockANDtriggerDescriptor(class wBlockANDtriggerDescriptor const &);

    // RVA: 0xD8 | Ordinal: 217
        void wBlockANDtriggerDescriptor(void);

    // RVA: 0x156 | Ordinal: 343
        void _wBlockANDtriggerDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKANDTRIGGERDESCRIPTOR_HPP
