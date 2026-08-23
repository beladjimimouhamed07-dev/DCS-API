#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockNOTDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockNOTDescriptor
{
public:

    // RVA: 0x268 | Ordinal: 617
        void __create_instance(void);

    // RVA: 0x2BA | Ordinal: 699
        void clone(void) const;

    // RVA: 0x2EF | Ordinal: 752
        void create(class Lua::Loader *);

    // RVA: 0x32B | Ordinal: 812
        void getBlockClassNameS(void);

    // RVA: 0x360 | Ordinal: 865
        void getBlockTypeName(void) const;

    // RVA: 0x390 | Ordinal: 913
        void getBlockTypeNameS(void);

    // RVA: 0x3C4 | Ordinal: 965
        void getClassName(void) const;

    // RVA: 0x41C | Ordinal: 1053
        void getInputPorts_(void) const;

    // RVA: 0x453 | Ordinal: 1108
        void getInputWires_(void) const;

    // RVA: 0x49E | Ordinal: 1183
        void getOutputPorts_(void) const;

    // RVA: 0x4D4 | Ordinal: 1237
        void getOutputWires_(void) const;

    // RVA: 0x506 | Ordinal: 1287
        void getParametersList(void);

    // RVA: 0xEF | Ordinal: 240
        void wBlockNOTDescriptor(class wBlockNOTDescriptor &&);

    // RVA: 0xF0 | Ordinal: 241
        void wBlockNOTDescriptor(class wBlockNOTDescriptor const &);

    // RVA: 0xF1 | Ordinal: 242
        void wBlockNOTDescriptor(void);

    // RVA: 0x15F | Ordinal: 352
        void _wBlockNOTDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKNOTDESCRIPTOR_HPP
