#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockP2WDesc<double>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockP2WDesc_double_
{
public:

    // RVA: 0x256 | Ordinal: 599
        void __create_instance(void);

    // RVA: 0x2A6 | Ordinal: 679
        void clone(void) const;

    // RVA: 0x2DB | Ordinal: 732
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x319 | Ordinal: 794
        void getBlockClassNameS(void);

    // RVA: 0x34C | Ordinal: 845
        void getBlockTypeName(void) const;

    // RVA: 0x37E | Ordinal: 895
        void getBlockTypeNameS(void);

    // RVA: 0x3B0 | Ordinal: 945
        void getClassName(void) const;

    // RVA: 0x408 | Ordinal: 1033
        void getInputPorts_(void) const;

    // RVA: 0x440 | Ordinal: 1089
        void getInputWires_(void) const;

    // RVA: 0x48B | Ordinal: 1164
        void getOutputPorts_(void) const;

    // RVA: 0x4C1 | Ordinal: 1218
        void getOutputWires_(void) const;

    // RVA: 0x4F4 | Ordinal: 1269
        void getParametersList(void);

    // RVA: 0xAC | Ordinal: 173
        void wBlockP2WDesc_double_(class wBlockP2WDesc<double> &&);

    // RVA: 0xAD | Ordinal: 174
        void wBlockP2WDesc_double_(class wBlockP2WDesc<double> const &);

    // RVA: 0xAE | Ordinal: 175
        void wBlockP2WDesc_double_(void);

    // RVA: 0x147 | Ordinal: 328
        void _wBlockP2WDesc_double_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKP2WDESC_DOUBLE_HPP
