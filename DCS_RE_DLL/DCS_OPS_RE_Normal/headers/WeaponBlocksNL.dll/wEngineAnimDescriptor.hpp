#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x68B | Ordinal: 1676
        void clone(void) const;

    // RVA: 0x6C2 | Ordinal: 1731
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x71E | Ordinal: 1823
        void getBlockClassNameS(void);

    // RVA: 0x737 | Ordinal: 1848
        void getBlockTypeName(void) const;

    // RVA: 0x74E | Ordinal: 1871
        void getBlockTypeNameS(void);

    // RVA: 0x766 | Ordinal: 1895
        void getClassName(void) const;

    // RVA: 0x8E2 | Ordinal: 2275
        void getInputPorts_(void) const;

    // RVA: 0x8F9 | Ordinal: 2298
        void getInputWires_(void) const;

    // RVA: 0x9DF | Ordinal: 2528
        void getOutputPorts_(void) const;

    // RVA: 0x9F6 | Ordinal: 2551
        void getOutputWires_(void) const;

    // RVA: 0xA10 | Ordinal: 2577
        void getParametersList(void);

    // RVA: 0xC2C | Ordinal: 3117
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WENGINEANIMDESCRIPTOR_HPP
