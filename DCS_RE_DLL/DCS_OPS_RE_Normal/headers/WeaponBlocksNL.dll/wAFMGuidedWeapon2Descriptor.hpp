#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x686 | Ordinal: 1671
        void clone(void) const;

    // RVA: 0x6BD | Ordinal: 1726
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x719 | Ordinal: 1818
        void getBlockClassNameS(void);

    // RVA: 0x732 | Ordinal: 1843
        void getBlockTypeName(void) const;

    // RVA: 0x749 | Ordinal: 1866
        void getBlockTypeNameS(void);

    // RVA: 0x761 | Ordinal: 1890
        void getClassName(void) const;

    // RVA: 0x8DD | Ordinal: 2270
        void getInputPorts_(void) const;

    // RVA: 0x8F4 | Ordinal: 2293
        void getInputWires_(void) const;

    // RVA: 0x9DA | Ordinal: 2523
        void getOutputPorts_(void) const;

    // RVA: 0x9F1 | Ordinal: 2546
        void getOutputWires_(void) const;

    // RVA: 0xA0B | Ordinal: 2572
        void getParametersList(void);

    // RVA: 0xC27 | Ordinal: 3112
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAFMGUIDEDWEAPON2DESCRIPTOR_HPP
