#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wAFMGuidedWeapon2Descriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAFMGuidedWeapon2Descriptor
{
public:

    // RVA: 0x453 | Ordinal: 1108
        void __create_instance(void);

    // RVA: 0x689 | Ordinal: 1674
        void clone(void) const;

    // RVA: 0x6C1 | Ordinal: 1730
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x721 | Ordinal: 1826
        void getBlockClassNameS(void);

    // RVA: 0x73A | Ordinal: 1851
        void getBlockTypeName(void) const;

    // RVA: 0x751 | Ordinal: 1874
        void getBlockTypeNameS(void);

    // RVA: 0x769 | Ordinal: 1898
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

    // RVA: 0xC70 | Ordinal: 3185
        void serialize(class wBlockSerializer &);

    // RVA: 0xE | Ordinal: 15
        void wAFMGuidedWeapon2Descriptor(class wAFMGuidedWeapon2Descriptor &&);

    // RVA: 0xF | Ordinal: 16
        void wAFMGuidedWeapon2Descriptor(class wAFMGuidedWeapon2Descriptor const &);

    // RVA: 0x10 | Ordinal: 17
        void wAFMGuidedWeapon2Descriptor(void);

    // RVA: 0x1E6 | Ordinal: 487
        void _wAFMGuidedWeapon2Descriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAFMGUIDEDWEAPON2DESCRIPTOR_HPP
