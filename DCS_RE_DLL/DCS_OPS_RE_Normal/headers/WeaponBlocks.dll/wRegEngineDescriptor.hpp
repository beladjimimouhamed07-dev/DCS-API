#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x69E | Ordinal: 1695
        void clone(void) const;

    // RVA: 0x6D5 | Ordinal: 1750
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x736 | Ordinal: 1847
        void getBlockClassNameS(void);

    // RVA: 0x74F | Ordinal: 1872
        void getBlockTypeName(void) const;

    // RVA: 0x766 | Ordinal: 1895
        void getBlockTypeNameS(void);

    // RVA: 0x77E | Ordinal: 1919
        void getClassName(void) const;

    // RVA: 0x8FB | Ordinal: 2300
        void getInputPorts_(void) const;

    // RVA: 0x912 | Ordinal: 2323
        void getInputWires_(void) const;

    // RVA: 0x9F8 | Ordinal: 2553
        void getOutputPorts_(void) const;

    // RVA: 0xA0F | Ordinal: 2576
        void getOutputWires_(void) const;

    // RVA: 0xA29 | Ordinal: 2602
        void getParametersList(void);

    // RVA: 0xC80 | Ordinal: 3201
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WREGENGINEDESCRIPTOR_HPP
