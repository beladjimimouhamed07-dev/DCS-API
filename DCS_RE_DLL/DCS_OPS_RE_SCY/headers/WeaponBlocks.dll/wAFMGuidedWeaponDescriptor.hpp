#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wAFMGuidedWeaponDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAFMGuidedWeaponDescriptor
{
public:

    // RVA: 0x454 | Ordinal: 1109
        void __create_instance(void);

    // RVA: 0x68A | Ordinal: 1675
        void clone(void) const;

    // RVA: 0x6C2 | Ordinal: 1731
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x722 | Ordinal: 1827
        void getBlockClassNameS(void);

    // RVA: 0x73B | Ordinal: 1852
        void getBlockTypeName(void) const;

    // RVA: 0x752 | Ordinal: 1875
        void getBlockTypeNameS(void);

    // RVA: 0x76A | Ordinal: 1899
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

    // RVA: 0xC71 | Ordinal: 3186
        void serialize(class wBlockSerializer &);

    // RVA: 0x13 | Ordinal: 20
        void wAFMGuidedWeaponDescriptor(class wAFMGuidedWeaponDescriptor &&);

    // RVA: 0x14 | Ordinal: 21
        void wAFMGuidedWeaponDescriptor(class wAFMGuidedWeaponDescriptor const &);

    // RVA: 0x15 | Ordinal: 22
        void wAFMGuidedWeaponDescriptor(void);

    // RVA: 0x1E8 | Ordinal: 489
        void _wAFMGuidedWeaponDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAFMGUIDEDWEAPONDESCRIPTOR_HPP
