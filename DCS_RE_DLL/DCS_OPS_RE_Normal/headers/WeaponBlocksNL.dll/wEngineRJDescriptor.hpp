#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wEngineRJDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineRJDescriptor
{
public:

    // RVA: 0x45B | Ordinal: 1116
        void __create_instance(void);

    // RVA: 0x68E | Ordinal: 1679
        void clone(void) const;

    // RVA: 0x6C5 | Ordinal: 1734
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x721 | Ordinal: 1826
        void getBlockClassNameS(void);

    // RVA: 0x73A | Ordinal: 1851
        void getBlockTypeName(void) const;

    // RVA: 0x751 | Ordinal: 1874
        void getBlockTypeNameS(void);

    // RVA: 0x769 | Ordinal: 1898
        void getClassName(void) const;

    // RVA: 0x8E5 | Ordinal: 2278
        void getInputPorts_(void) const;

    // RVA: 0x8FC | Ordinal: 2301
        void getInputWires_(void) const;

    // RVA: 0x9E2 | Ordinal: 2531
        void getOutputPorts_(void) const;

    // RVA: 0x9F9 | Ordinal: 2554
        void getOutputWires_(void) const;

    // RVA: 0xA13 | Ordinal: 2580
        void getParametersList(void);

    // RVA: 0xC2F | Ordinal: 3120
        void serialize(class wBlockSerializer &);

    // RVA: 0xE2 | Ordinal: 227
        void wEngineRJDescriptor(class wEngineRJDescriptor &&);

    // RVA: 0xE3 | Ordinal: 228
        void wEngineRJDescriptor(class wEngineRJDescriptor const &);

    // RVA: 0xE4 | Ordinal: 229
        void wEngineRJDescriptor(void);

    // RVA: 0x234 | Ordinal: 565
        void _wEngineRJDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WENGINERJDESCRIPTOR_HPP
