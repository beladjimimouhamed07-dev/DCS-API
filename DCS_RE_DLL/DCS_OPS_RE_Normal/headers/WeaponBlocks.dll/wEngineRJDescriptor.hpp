#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x691 | Ordinal: 1682
        void clone(void) const;

    // RVA: 0x6C9 | Ordinal: 1738
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x729 | Ordinal: 1834
        void getBlockClassNameS(void);

    // RVA: 0x742 | Ordinal: 1859
        void getBlockTypeName(void) const;

    // RVA: 0x759 | Ordinal: 1882
        void getBlockTypeNameS(void);

    // RVA: 0x771 | Ordinal: 1906
        void getClassName(void) const;

    // RVA: 0x8EE | Ordinal: 2287
        void getInputPorts_(void) const;

    // RVA: 0x905 | Ordinal: 2310
        void getInputWires_(void) const;

    // RVA: 0x9EB | Ordinal: 2540
        void getOutputPorts_(void) const;

    // RVA: 0xA02 | Ordinal: 2563
        void getOutputWires_(void) const;

    // RVA: 0xA1C | Ordinal: 2589
        void getParametersList(void);

    // RVA: 0xC78 | Ordinal: 3193
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WENGINERJDESCRIPTOR_HPP
