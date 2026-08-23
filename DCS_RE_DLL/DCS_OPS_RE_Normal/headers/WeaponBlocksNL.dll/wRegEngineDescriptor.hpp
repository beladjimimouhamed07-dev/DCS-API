#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wRegEngineDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wRegEngineDescriptor
{
public:

    // RVA: 0x467 | Ordinal: 1128
        void __create_instance(void);

    // RVA: 0x69B | Ordinal: 1692
        void clone(void) const;

    // RVA: 0x6D1 | Ordinal: 1746
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x72E | Ordinal: 1839
        void getBlockClassNameS(void);

    // RVA: 0x747 | Ordinal: 1864
        void getBlockTypeName(void) const;

    // RVA: 0x75E | Ordinal: 1887
        void getBlockTypeNameS(void);

    // RVA: 0x776 | Ordinal: 1911
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

    // RVA: 0xC37 | Ordinal: 3128
        void serialize(class wBlockSerializer &);

    // RVA: 0x18A | Ordinal: 395
        void wRegEngineDescriptor(class wRegEngineDescriptor &&);

    // RVA: 0x18B | Ordinal: 396
        void wRegEngineDescriptor(class wRegEngineDescriptor const &);

    // RVA: 0x18C | Ordinal: 397
        void wRegEngineDescriptor(void);

    // RVA: 0x274 | Ordinal: 629
        void _wRegEngineDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WREGENGINEDESCRIPTOR_HPP
