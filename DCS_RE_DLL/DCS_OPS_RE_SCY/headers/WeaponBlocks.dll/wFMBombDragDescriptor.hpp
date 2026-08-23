#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x696 | Ordinal: 1687
        void clone(void) const;

    // RVA: 0x6CD | Ordinal: 1742
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x72E | Ordinal: 1839
        void getBlockClassNameS(void);

    // RVA: 0x747 | Ordinal: 1864
        void getBlockTypeName(void) const;

    // RVA: 0x75E | Ordinal: 1887
        void getBlockTypeNameS(void);

    // RVA: 0x776 | Ordinal: 1911
        void getClassName(void) const;

    // RVA: 0x8F3 | Ordinal: 2292
        void getInputPorts_(void) const;

    // RVA: 0x90A | Ordinal: 2315
        void getInputWires_(void) const;

    // RVA: 0x9F0 | Ordinal: 2545
        void getOutputPorts_(void) const;

    // RVA: 0xA07 | Ordinal: 2568
        void getOutputWires_(void) const;

    // RVA: 0xA21 | Ordinal: 2594
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WFMBOMBDRAGDESCRIPTOR_HPP
