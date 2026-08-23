#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockVectorPickerDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockVectorPickerDescriptor
{
public:

    // RVA: 0x26E | Ordinal: 623
        void __create_instance(void);

    // RVA: 0x2C0 | Ordinal: 705
        void clone(void) const;

    // RVA: 0x2C5 | Ordinal: 710
        void component(void) const;

    // RVA: 0x2F5 | Ordinal: 758
        void create(class Lua::Loader *);

    // RVA: 0x331 | Ordinal: 818
        void getBlockClassNameS(void);

    // RVA: 0x366 | Ordinal: 871
        void getBlockTypeName(void) const;

    // RVA: 0x396 | Ordinal: 919
        void getBlockTypeNameS(void);

    // RVA: 0x3CA | Ordinal: 971
        void getClassName(void) const;

    // RVA: 0x422 | Ordinal: 1059
        void getInputPorts_(void) const;

    // RVA: 0x459 | Ordinal: 1114
        void getInputWires_(void) const;

    // RVA: 0x4A4 | Ordinal: 1189
        void getOutputPorts_(void) const;

    // RVA: 0x4DA | Ordinal: 1243
        void getOutputWires_(void) const;

    // RVA: 0x50C | Ordinal: 1293
        void getParametersList(void);

    // RVA: 0x104 | Ordinal: 261
        void wBlockVectorPickerDescriptor(class wBlockVectorPickerDescriptor &&);

    // RVA: 0x105 | Ordinal: 262
        void wBlockVectorPickerDescriptor(class wBlockVectorPickerDescriptor const &);

    // RVA: 0x106 | Ordinal: 263
        void wBlockVectorPickerDescriptor(void);

    // RVA: 0x166 | Ordinal: 359
        void _wBlockVectorPickerDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKVECTORPICKERDESCRIPTOR_HPP
