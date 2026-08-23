#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wFMBombDragDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wFMBombDragDescriptor
{
public:

    // RVA: 0x45F | Ordinal: 1120
        void __create_instance(void);

    // RVA: 0x693 | Ordinal: 1684
        void clone(void) const;

    // RVA: 0x6C9 | Ordinal: 1738
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x726 | Ordinal: 1831
        void getBlockClassNameS(void);

    // RVA: 0x73F | Ordinal: 1856
        void getBlockTypeName(void) const;

    // RVA: 0x756 | Ordinal: 1879
        void getBlockTypeNameS(void);

    // RVA: 0x76E | Ordinal: 1903
        void getClassName(void) const;

    // RVA: 0x8EA | Ordinal: 2283
        void getInputPorts_(void) const;

    // RVA: 0x901 | Ordinal: 2306
        void getInputWires_(void) const;

    // RVA: 0x9E7 | Ordinal: 2536
        void getOutputPorts_(void) const;

    // RVA: 0x9FE | Ordinal: 2559
        void getOutputWires_(void) const;

    // RVA: 0xA18 | Ordinal: 2585
        void getParametersList(void);

    // RVA: 0x101 | Ordinal: 258
        void wFMBombDragDescriptor(class wFMBombDragDescriptor &&);

    // RVA: 0x102 | Ordinal: 259
        void wFMBombDragDescriptor(class wFMBombDragDescriptor const &);

    // RVA: 0x103 | Ordinal: 260
        void wFMBombDragDescriptor(void);

    // RVA: 0x240 | Ordinal: 577
        void _wFMBombDragDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WFMBOMBDRAGDESCRIPTOR_HPP
