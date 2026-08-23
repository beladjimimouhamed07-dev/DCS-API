#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockANDDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockANDDescriptor
{
public:

    // RVA: 0x25F | Ordinal: 608
        void __create_instance(void);

    // RVA: 0x2B1 | Ordinal: 690
        void clone(void) const;

    // RVA: 0x2E6 | Ordinal: 743
        void create(class Lua::Loader *);

    // RVA: 0x322 | Ordinal: 803
        void getBlockClassNameS(void);

    // RVA: 0x357 | Ordinal: 856
        void getBlockTypeName(void) const;

    // RVA: 0x387 | Ordinal: 904
        void getBlockTypeNameS(void);

    // RVA: 0x3BB | Ordinal: 956
        void getClassName(void) const;

    // RVA: 0x413 | Ordinal: 1044
        void getInputPorts_(void) const;

    // RVA: 0x44A | Ordinal: 1099
        void getInputWires_(void) const;

    // RVA: 0x495 | Ordinal: 1174
        void getOutputPorts_(void) const;

    // RVA: 0x4CB | Ordinal: 1228
        void getOutputWires_(void) const;

    // RVA: 0x4FD | Ordinal: 1278
        void getParametersList(void);

    // RVA: 0xD3 | Ordinal: 212
        void wBlockANDDescriptor(class wBlockANDDescriptor &&);

    // RVA: 0xD4 | Ordinal: 213
        void wBlockANDDescriptor(class wBlockANDDescriptor const &);

    // RVA: 0xD5 | Ordinal: 214
        void wBlockANDDescriptor(void);

    // RVA: 0x155 | Ordinal: 342
        void _wBlockANDDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKANDDESCRIPTOR_HPP
