#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockORDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockORDescriptor
{
public:

    // RVA: 0x26A | Ordinal: 619
        void __create_instance(void);

    // RVA: 0x2BC | Ordinal: 701
        void clone(void) const;

    // RVA: 0x2F1 | Ordinal: 754
        void create(class Lua::Loader *);

    // RVA: 0x32D | Ordinal: 814
        void getBlockClassNameS(void);

    // RVA: 0x362 | Ordinal: 867
        void getBlockTypeName(void) const;

    // RVA: 0x392 | Ordinal: 915
        void getBlockTypeNameS(void);

    // RVA: 0x3C6 | Ordinal: 967
        void getClassName(void) const;

    // RVA: 0x41E | Ordinal: 1055
        void getInputPorts_(void) const;

    // RVA: 0x455 | Ordinal: 1110
        void getInputWires_(void) const;

    // RVA: 0x4A0 | Ordinal: 1185
        void getOutputPorts_(void) const;

    // RVA: 0x4D6 | Ordinal: 1239
        void getOutputWires_(void) const;

    // RVA: 0x508 | Ordinal: 1289
        void getParametersList(void);

    // RVA: 0xF5 | Ordinal: 246
        void wBlockORDescriptor(class wBlockORDescriptor &&);

    // RVA: 0xF6 | Ordinal: 247
        void wBlockORDescriptor(class wBlockORDescriptor const &);

    // RVA: 0xF7 | Ordinal: 248
        void wBlockORDescriptor(void);

    // RVA: 0x161 | Ordinal: 354
        void _wBlockORDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKORDESCRIPTOR_HPP
