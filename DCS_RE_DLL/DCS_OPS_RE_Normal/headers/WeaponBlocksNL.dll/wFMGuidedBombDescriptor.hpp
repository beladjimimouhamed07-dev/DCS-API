#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x696 | Ordinal: 1687
        void clone(void) const;

    // RVA: 0x6CC | Ordinal: 1741
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x729 | Ordinal: 1834
        void getBlockClassNameS(void);

    // RVA: 0x742 | Ordinal: 1859
        void getBlockTypeName(void) const;

    // RVA: 0x759 | Ordinal: 1882
        void getBlockTypeNameS(void);

    // RVA: 0x771 | Ordinal: 1906
        void getClassName(void) const;

    // RVA: 0x8ED | Ordinal: 2286
        void getInputPorts_(void) const;

    // RVA: 0x904 | Ordinal: 2309
        void getInputWires_(void) const;

    // RVA: 0x9EA | Ordinal: 2539
        void getOutputPorts_(void) const;

    // RVA: 0xA01 | Ordinal: 2562
        void getOutputWires_(void) const;

    // RVA: 0xA1B | Ordinal: 2588
        void getParametersList(void);

    // RVA: 0xC35 | Ordinal: 3126
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WFMGUIDEDBOMBDESCRIPTOR_HPP
