#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x69B | Ordinal: 1692
        void clone(void) const;

    // RVA: 0x6D2 | Ordinal: 1747
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x733 | Ordinal: 1844
        void getBlockClassNameS(void);

    // RVA: 0x74C | Ordinal: 1869
        void getBlockTypeName(void) const;

    // RVA: 0x763 | Ordinal: 1892
        void getBlockTypeNameS(void);

    // RVA: 0x77B | Ordinal: 1916
        void getClassName(void) const;

    // RVA: 0x8F8 | Ordinal: 2297
        void getInputPorts_(void) const;

    // RVA: 0x90F | Ordinal: 2320
        void getInputWires_(void) const;

    // RVA: 0x9F5 | Ordinal: 2550
        void getOutputPorts_(void) const;

    // RVA: 0xA0C | Ordinal: 2573
        void getOutputWires_(void) const;

    // RVA: 0xA26 | Ordinal: 2599
        void getParametersList(void);

    // RVA: 0xC7F | Ordinal: 3200
        void serialize(class wBlockSerializer &);

    // RVA: 0x137 | Ordinal: 312
        void wGuidedClusterDescriptor(class wGuidedClusterDescriptor const &);

    // RVA: 0x138 | Ordinal: 313
        void wGuidedClusterDescriptor(void);

    // RVA: 0x255 | Ordinal: 598
        void _wGuidedClusterDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WGUIDEDCLUSTERDESCRIPTOR_HPP
