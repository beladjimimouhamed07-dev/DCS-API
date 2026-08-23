#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x687 | Ordinal: 1672
        void clone(void) const;

    // RVA: 0x6BE | Ordinal: 1727
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x71A | Ordinal: 1819
        void getBlockClassNameS(void);

    // RVA: 0x733 | Ordinal: 1844
        void getBlockTypeName(void) const;

    // RVA: 0x74A | Ordinal: 1867
        void getBlockTypeNameS(void);

    // RVA: 0x762 | Ordinal: 1891
        void getClassName(void) const;

    // RVA: 0x8DE | Ordinal: 2271
        void getInputPorts_(void) const;

    // RVA: 0x8F5 | Ordinal: 2294
        void getInputWires_(void) const;

    // RVA: 0x9DB | Ordinal: 2524
        void getOutputPorts_(void) const;

    // RVA: 0x9F2 | Ordinal: 2547
        void getOutputWires_(void) const;

    // RVA: 0xA0C | Ordinal: 2573
        void getParametersList(void);

    // RVA: 0xC28 | Ordinal: 3113
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAFMGUIDEDWEAPONDESCRIPTOR_HPP
