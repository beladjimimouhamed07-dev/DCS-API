#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wGuidedClusterDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGuidedClusterDescriptor
{
public:

    // RVA: 0x464 | Ordinal: 1125
        void __create_instance(void);

    // RVA: 0x698 | Ordinal: 1689
        void clone(void) const;

    // RVA: 0x6CE | Ordinal: 1743
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x72B | Ordinal: 1836
        void getBlockClassNameS(void);

    // RVA: 0x744 | Ordinal: 1861
        void getBlockTypeName(void) const;

    // RVA: 0x75B | Ordinal: 1884
        void getBlockTypeNameS(void);

    // RVA: 0x773 | Ordinal: 1908
        void getClassName(void) const;

    // RVA: 0x8EF | Ordinal: 2288
        void getInputPorts_(void) const;

    // RVA: 0x906 | Ordinal: 2311
        void getInputWires_(void) const;

    // RVA: 0x9EC | Ordinal: 2541
        void getOutputPorts_(void) const;

    // RVA: 0xA03 | Ordinal: 2564
        void getOutputWires_(void) const;

    // RVA: 0xA1D | Ordinal: 2590
        void getParametersList(void);

    // RVA: 0xC36 | Ordinal: 3127
        void serialize(class wBlockSerializer &);

    // RVA: 0x137 | Ordinal: 312
        void wGuidedClusterDescriptor(class wGuidedClusterDescriptor const &);

    // RVA: 0x138 | Ordinal: 313
        void wGuidedClusterDescriptor(void);

    // RVA: 0x255 | Ordinal: 598
        void _wGuidedClusterDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WGUIDEDCLUSTERDESCRIPTOR_HPP
