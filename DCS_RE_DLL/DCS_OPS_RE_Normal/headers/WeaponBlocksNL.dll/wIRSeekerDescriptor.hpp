#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wIRSeekerDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wIRSeekerDescriptor
{
public:

    // RVA: 0x465 | Ordinal: 1126
        void __create_instance(void);

    // RVA: 0x699 | Ordinal: 1690
        void clone(void) const;

    // RVA: 0x6CF | Ordinal: 1744
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x72C | Ordinal: 1837
        void getBlockClassNameS(void);

    // RVA: 0x745 | Ordinal: 1862
        void getBlockTypeName(void) const;

    // RVA: 0x75C | Ordinal: 1885
        void getBlockTypeNameS(void);

    // RVA: 0x774 | Ordinal: 1909
        void getClassName(void) const;

    // RVA: 0x8F0 | Ordinal: 2289
        void getInputPorts_(void) const;

    // RVA: 0x907 | Ordinal: 2312
        void getInputWires_(void) const;

    // RVA: 0x9ED | Ordinal: 2542
        void getOutputPorts_(void) const;

    // RVA: 0xA04 | Ordinal: 2565
        void getOutputWires_(void) const;

    // RVA: 0xA1E | Ordinal: 2591
        void getParametersList(void);

    // RVA: 0x143 | Ordinal: 324
        void wIRSeekerDescriptor(class wIRSeekerDescriptor &&);

    // RVA: 0x144 | Ordinal: 325
        void wIRSeekerDescriptor(class wIRSeekerDescriptor const &);

    // RVA: 0x145 | Ordinal: 326
        void wIRSeekerDescriptor(void);

    // RVA: 0x25A | Ordinal: 603
        void _wIRSeekerDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WIRSEEKERDESCRIPTOR_HPP
