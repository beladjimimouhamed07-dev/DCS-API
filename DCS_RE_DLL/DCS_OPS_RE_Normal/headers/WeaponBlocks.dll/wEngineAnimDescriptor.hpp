#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wEngineAnimDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineAnimDescriptor
{
public:

    // RVA: 0x458 | Ordinal: 1113
        void __create_instance(void);

    // RVA: 0x68E | Ordinal: 1679
        void clone(void) const;

    // RVA: 0x6C6 | Ordinal: 1735
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x726 | Ordinal: 1831
        void getBlockClassNameS(void);

    // RVA: 0x73F | Ordinal: 1856
        void getBlockTypeName(void) const;

    // RVA: 0x756 | Ordinal: 1879
        void getBlockTypeNameS(void);

    // RVA: 0x76E | Ordinal: 1903
        void getClassName(void) const;

    // RVA: 0x8EB | Ordinal: 2284
        void getInputPorts_(void) const;

    // RVA: 0x902 | Ordinal: 2307
        void getInputWires_(void) const;

    // RVA: 0x9E8 | Ordinal: 2537
        void getOutputPorts_(void) const;

    // RVA: 0x9FF | Ordinal: 2560
        void getOutputWires_(void) const;

    // RVA: 0xA19 | Ordinal: 2586
        void getParametersList(void);

    // RVA: 0xC75 | Ordinal: 3190
        void serialize(class wBlockSerializer &);

    // RVA: 0xD0 | Ordinal: 209
        void wEngineAnimDescriptor(class wEngineAnimDescriptor &&);

    // RVA: 0xD1 | Ordinal: 210
        void wEngineAnimDescriptor(class wEngineAnimDescriptor const &);

    // RVA: 0xD2 | Ordinal: 211
        void wEngineAnimDescriptor(void);

    // RVA: 0x22D | Ordinal: 558
        void _wEngineAnimDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WENGINEANIMDESCRIPTOR_HPP
