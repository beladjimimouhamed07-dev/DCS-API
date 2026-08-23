#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockP2WDesc<bool>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockP2WDesc_bool_
{
public:

    // RVA: 0x258 | Ordinal: 601
        void __create_instance(void);

    // RVA: 0x2A8 | Ordinal: 681
        void clone(void) const;

    // RVA: 0x2DD | Ordinal: 734
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x31B | Ordinal: 796
        void getBlockClassNameS(void);

    // RVA: 0x34E | Ordinal: 847
        void getBlockTypeName(void) const;

    // RVA: 0x380 | Ordinal: 897
        void getBlockTypeNameS(void);

    // RVA: 0x3B2 | Ordinal: 947
        void getClassName(void) const;

    // RVA: 0x40A | Ordinal: 1035
        void getInputPorts_(void) const;

    // RVA: 0x442 | Ordinal: 1091
        void getInputWires_(void) const;

    // RVA: 0x48D | Ordinal: 1166
        void getOutputPorts_(void) const;

    // RVA: 0x4C3 | Ordinal: 1220
        void getOutputWires_(void) const;

    // RVA: 0x4F6 | Ordinal: 1271
        void getParametersList(void);

    // RVA: 0xB2 | Ordinal: 179
        void wBlockP2WDesc_bool_(class wBlockP2WDesc<bool> &&);

    // RVA: 0xB3 | Ordinal: 180
        void wBlockP2WDesc_bool_(class wBlockP2WDesc<bool> const &);

    // RVA: 0xB4 | Ordinal: 181
        void wBlockP2WDesc_bool_(void);

    // RVA: 0x149 | Ordinal: 330
        void _wBlockP2WDesc_bool_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKP2WDESC_BOOL_HPP
