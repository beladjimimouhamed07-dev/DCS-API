#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wFMGuidedBombDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wFMGuidedBombDescriptor
{
public:

    // RVA: 0x462 | Ordinal: 1123
        void __create_instance(void);

    // RVA: 0x699 | Ordinal: 1690
        void clone(void) const;

    // RVA: 0x6D0 | Ordinal: 1745
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x731 | Ordinal: 1842
        void getBlockClassNameS(void);

    // RVA: 0x74A | Ordinal: 1867
        void getBlockTypeName(void) const;

    // RVA: 0x761 | Ordinal: 1890
        void getBlockTypeNameS(void);

    // RVA: 0x779 | Ordinal: 1914
        void getClassName(void) const;

    // RVA: 0x8F6 | Ordinal: 2295
        void getInputPorts_(void) const;

    // RVA: 0x90D | Ordinal: 2318
        void getInputWires_(void) const;

    // RVA: 0x9F3 | Ordinal: 2548
        void getOutputPorts_(void) const;

    // RVA: 0xA0A | Ordinal: 2571
        void getOutputWires_(void) const;

    // RVA: 0xA24 | Ordinal: 2597
        void getParametersList(void);

    // RVA: 0xC7E | Ordinal: 3199
        void serialize(class wBlockSerializer &);

    // RVA: 0x112 | Ordinal: 275
        void wFMGuidedBombDescriptor(class wFMGuidedBombDescriptor &&);

    // RVA: 0x113 | Ordinal: 276
        void wFMGuidedBombDescriptor(class wFMGuidedBombDescriptor const &);

    // RVA: 0x114 | Ordinal: 277
        void wFMGuidedBombDescriptor(void);

    // RVA: 0x246 | Ordinal: 583
        void _wFMGuidedBombDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WFMGUIDEDBOMBDESCRIPTOR_HPP
