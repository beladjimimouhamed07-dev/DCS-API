#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockP2WDesc<int>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockP2WDesc_int_
{
public:

    // RVA: 0x255 | Ordinal: 598
        void __create_instance(void);

    // RVA: 0x2A5 | Ordinal: 678
        void clone(void) const;

    // RVA: 0x2DA | Ordinal: 731
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x318 | Ordinal: 793
        void getBlockClassNameS(void);

    // RVA: 0x34B | Ordinal: 844
        void getBlockTypeName(void) const;

    // RVA: 0x37D | Ordinal: 894
        void getBlockTypeNameS(void);

    // RVA: 0x3AF | Ordinal: 944
        void getClassName(void) const;

    // RVA: 0x407 | Ordinal: 1032
        void getInputPorts_(void) const;

    // RVA: 0x43F | Ordinal: 1088
        void getInputWires_(void) const;

    // RVA: 0x48A | Ordinal: 1163
        void getOutputPorts_(void) const;

    // RVA: 0x4C0 | Ordinal: 1217
        void getOutputWires_(void) const;

    // RVA: 0x4F3 | Ordinal: 1268
        void getParametersList(void);

    // RVA: 0xA9 | Ordinal: 170
        void wBlockP2WDesc_int_(class wBlockP2WDesc<int> &&);

    // RVA: 0xAA | Ordinal: 171
        void wBlockP2WDesc_int_(class wBlockP2WDesc<int> const &);

    // RVA: 0xAB | Ordinal: 172
        void wBlockP2WDesc_int_(void);

    // RVA: 0x146 | Ordinal: 327
        void _wBlockP2WDesc_int_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKP2WDESC_INT_HPP
