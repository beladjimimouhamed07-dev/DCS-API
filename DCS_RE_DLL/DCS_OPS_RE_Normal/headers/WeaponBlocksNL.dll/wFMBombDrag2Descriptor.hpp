#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x692 | Ordinal: 1683
        void clone(void) const;

    // RVA: 0x6C8 | Ordinal: 1737
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x725 | Ordinal: 1830
        void getBlockClassNameS(void);

    // RVA: 0x73E | Ordinal: 1855
        void getBlockTypeName(void) const;

    // RVA: 0x755 | Ordinal: 1878
        void getBlockTypeNameS(void);

    // RVA: 0x76D | Ordinal: 1902
        void getClassName(void) const;

    // RVA: 0x8E9 | Ordinal: 2282
        void getInputPorts_(void) const;

    // RVA: 0x900 | Ordinal: 2305
        void getInputWires_(void) const;

    // RVA: 0x9E6 | Ordinal: 2535
        void getOutputPorts_(void) const;

    // RVA: 0x9FD | Ordinal: 2558
        void getOutputWires_(void) const;

    // RVA: 0xA17 | Ordinal: 2584
        void getParametersList(void);

    // RVA: 0xC32 | Ordinal: 3123
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WFMBOMBDRAG2DESCRIPTOR_HPP
