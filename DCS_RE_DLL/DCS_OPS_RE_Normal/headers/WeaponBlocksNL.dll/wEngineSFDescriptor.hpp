#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wEngineSFDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineSFDescriptor
{
public:

    // RVA: 0x45C | Ordinal: 1117
        void __create_instance(void);

    // RVA: 0x68F | Ordinal: 1680
        void clone(void) const;

    // RVA: 0x6C6 | Ordinal: 1735
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x722 | Ordinal: 1827
        void getBlockClassNameS(void);

    // RVA: 0x73B | Ordinal: 1852
        void getBlockTypeName(void) const;

    // RVA: 0x752 | Ordinal: 1875
        void getBlockTypeNameS(void);

    // RVA: 0x76A | Ordinal: 1899
        void getClassName(void) const;

    // RVA: 0x8E6 | Ordinal: 2279
        void getInputPorts_(void) const;

    // RVA: 0x8FD | Ordinal: 2302
        void getInputWires_(void) const;

    // RVA: 0x9E3 | Ordinal: 2532
        void getOutputPorts_(void) const;

    // RVA: 0x9FA | Ordinal: 2555
        void getOutputWires_(void) const;

    // RVA: 0xA14 | Ordinal: 2581
        void getParametersList(void);

    // RVA: 0xC30 | Ordinal: 3121
        void serialize(class wBlockSerializer &);

    // RVA: 0xE7 | Ordinal: 232
        void wEngineSFDescriptor(class wEngineSFDescriptor &&);

    // RVA: 0xE8 | Ordinal: 233
        void wEngineSFDescriptor(class wEngineSFDescriptor const &);

    // RVA: 0xE9 | Ordinal: 234
        void wEngineSFDescriptor(void);

    // RVA: 0x236 | Ordinal: 567
        void _wEngineSFDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WENGINESFDESCRIPTOR_HPP
