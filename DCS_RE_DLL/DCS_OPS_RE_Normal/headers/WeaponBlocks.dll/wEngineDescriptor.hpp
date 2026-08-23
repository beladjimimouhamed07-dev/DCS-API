#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wEngineDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineDescriptor
{
public:

    // RVA: 0x45A | Ordinal: 1115
        void __create_instance(void);

    // RVA: 0x690 | Ordinal: 1681
        void clone(void) const;

    // RVA: 0x6BB | Ordinal: 1724
        void copyData(class wEngineDescriptor const &);

    // RVA: 0x6C8 | Ordinal: 1737
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x728 | Ordinal: 1833
        void getBlockClassNameS(void);

    // RVA: 0x741 | Ordinal: 1858
        void getBlockTypeName(void) const;

    // RVA: 0x758 | Ordinal: 1881
        void getBlockTypeNameS(void);

    // RVA: 0x770 | Ordinal: 1905
        void getClassName(void) const;

    // RVA: 0x781 | Ordinal: 1922
        void getColor(void) const;

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

    // RVA: 0xC77 | Ordinal: 3192
        void serialize(class wBlockSerializer &);

    // RVA: 0xDD | Ordinal: 222
        void wEngineDescriptor(class wEngineDescriptor &&);

    // RVA: 0xDE | Ordinal: 223
        void wEngineDescriptor(class wEngineDescriptor const &);

    // RVA: 0xDF | Ordinal: 224
        void wEngineDescriptor(void);

    // RVA: 0x232 | Ordinal: 563
        void _wEngineDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WENGINEDESCRIPTOR_HPP
