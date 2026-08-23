#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wFMBombDrag2Descriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wFMBombDrag2Descriptor
{
public:

    // RVA: 0x45E | Ordinal: 1119
        void __create_instance(void);

    // RVA: 0x695 | Ordinal: 1686
        void clone(void) const;

    // RVA: 0x6CC | Ordinal: 1741
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x72D | Ordinal: 1838
        void getBlockClassNameS(void);

    // RVA: 0x746 | Ordinal: 1863
        void getBlockTypeName(void) const;

    // RVA: 0x75D | Ordinal: 1886
        void getBlockTypeNameS(void);

    // RVA: 0x775 | Ordinal: 1910
        void getClassName(void) const;

    // RVA: 0x8F2 | Ordinal: 2291
        void getInputPorts_(void) const;

    // RVA: 0x909 | Ordinal: 2314
        void getInputWires_(void) const;

    // RVA: 0x9EF | Ordinal: 2544
        void getOutputPorts_(void) const;

    // RVA: 0xA06 | Ordinal: 2567
        void getOutputWires_(void) const;

    // RVA: 0xA20 | Ordinal: 2593
        void getParametersList(void);

    // RVA: 0xC7B | Ordinal: 3196
        void serialize(class wBlockSerializer &);

    // RVA: 0xFB | Ordinal: 252
        void wFMBombDrag2Descriptor(class wFMBombDrag2Descriptor &&);

    // RVA: 0xFC | Ordinal: 253
        void wFMBombDrag2Descriptor(class wFMBombDrag2Descriptor const &);

    // RVA: 0xFD | Ordinal: 254
        void wFMBombDrag2Descriptor(void);

    // RVA: 0x23E | Ordinal: 575
        void _wFMBombDrag2Descriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WFMBOMBDRAG2DESCRIPTOR_HPP
