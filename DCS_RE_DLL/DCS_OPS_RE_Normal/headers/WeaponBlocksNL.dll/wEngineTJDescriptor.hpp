#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wEngineTJDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineTJDescriptor
{
public:

    // RVA: 0x45D | Ordinal: 1118
        void __create_instance(void);

    // RVA: 0x690 | Ordinal: 1681
        void clone(void) const;

    // RVA: 0x6C7 | Ordinal: 1736
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x723 | Ordinal: 1828
        void getBlockClassNameS(void);

    // RVA: 0x73C | Ordinal: 1853
        void getBlockTypeName(void) const;

    // RVA: 0x753 | Ordinal: 1876
        void getBlockTypeNameS(void);

    // RVA: 0x76B | Ordinal: 1900
        void getClassName(void) const;

    // RVA: 0x8E7 | Ordinal: 2280
        void getInputPorts_(void) const;

    // RVA: 0x8FE | Ordinal: 2303
        void getInputWires_(void) const;

    // RVA: 0x9E4 | Ordinal: 2533
        void getOutputPorts_(void) const;

    // RVA: 0x9FB | Ordinal: 2556
        void getOutputWires_(void) const;

    // RVA: 0xA15 | Ordinal: 2582
        void getParametersList(void);

    // RVA: 0xC31 | Ordinal: 3122
        void serialize(class wBlockSerializer &);

    // RVA: 0xEC | Ordinal: 237
        void wEngineTJDescriptor(class wEngineTJDescriptor &&);

    // RVA: 0xED | Ordinal: 238
        void wEngineTJDescriptor(class wEngineTJDescriptor const &);

    // RVA: 0xEE | Ordinal: 239
        void wEngineTJDescriptor(void);

    // RVA: 0x238 | Ordinal: 569
        void _wEngineTJDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WENGINETJDESCRIPTOR_HPP
