#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x68D | Ordinal: 1678
        void clone(void) const;

    // RVA: 0x6B7 | Ordinal: 1720
        void copyData(class wEngineDescriptor const &);

    // RVA: 0x6C4 | Ordinal: 1733
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x720 | Ordinal: 1825
        void getBlockClassNameS(void);

    // RVA: 0x739 | Ordinal: 1850
        void getBlockTypeName(void) const;

    // RVA: 0x750 | Ordinal: 1873
        void getBlockTypeNameS(void);

    // RVA: 0x768 | Ordinal: 1897
        void getClassName(void) const;

    // RVA: 0x779 | Ordinal: 1914
        void getColor(void) const;

    // RVA: 0x8E4 | Ordinal: 2277
        void getInputPorts_(void) const;

    // RVA: 0x8FB | Ordinal: 2300
        void getInputWires_(void) const;

    // RVA: 0x9E1 | Ordinal: 2530
        void getOutputPorts_(void) const;

    // RVA: 0x9F8 | Ordinal: 2553
        void getOutputWires_(void) const;

    // RVA: 0xA12 | Ordinal: 2579
        void getParametersList(void);

    // RVA: 0xC2E | Ordinal: 3119
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WENGINEDESCRIPTOR_HPP
