#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wPRSeekerDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wPRSeekerDescriptor
{
public:

    // RVA: 0x466 | Ordinal: 1127
        void __create_instance(void);

    // RVA: 0x69A | Ordinal: 1691
        void clone(void) const;

    // RVA: 0x6D0 | Ordinal: 1745
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x72D | Ordinal: 1838
        void getBlockClassNameS(void);

    // RVA: 0x746 | Ordinal: 1863
        void getBlockTypeName(void) const;

    // RVA: 0x75D | Ordinal: 1886
        void getBlockTypeNameS(void);

    // RVA: 0x775 | Ordinal: 1910
        void getClassName(void) const;

    // RVA: 0x8F1 | Ordinal: 2290
        void getInputPorts_(void) const;

    // RVA: 0x908 | Ordinal: 2313
        void getInputWires_(void) const;

    // RVA: 0x9EE | Ordinal: 2543
        void getOutputPorts_(void) const;

    // RVA: 0xA05 | Ordinal: 2566
        void getOutputWires_(void) const;

    // RVA: 0xA1F | Ordinal: 2592
        void getParametersList(void);

    // RVA: 0x17B | Ordinal: 380
        void wPRSeekerDescriptor(class wPRSeekerDescriptor &&);

    // RVA: 0x17C | Ordinal: 381
        void wPRSeekerDescriptor(class wPRSeekerDescriptor const &);

    // RVA: 0x17D | Ordinal: 382
        void wPRSeekerDescriptor(void);

    // RVA: 0x26E | Ordinal: 623
        void _wPRSeekerDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WPRSEEKERDESCRIPTOR_HPP
