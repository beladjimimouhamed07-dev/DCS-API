#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x69C | Ordinal: 1693
        void clone(void) const;

    // RVA: 0x6D3 | Ordinal: 1748
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x734 | Ordinal: 1845
        void getBlockClassNameS(void);

    // RVA: 0x74D | Ordinal: 1870
        void getBlockTypeName(void) const;

    // RVA: 0x764 | Ordinal: 1893
        void getBlockTypeNameS(void);

    // RVA: 0x77C | Ordinal: 1917
        void getClassName(void) const;

    // RVA: 0x8F9 | Ordinal: 2298
        void getInputPorts_(void) const;

    // RVA: 0x910 | Ordinal: 2321
        void getInputWires_(void) const;

    // RVA: 0x9F6 | Ordinal: 2551
        void getOutputPorts_(void) const;

    // RVA: 0xA0D | Ordinal: 2574
        void getOutputWires_(void) const;

    // RVA: 0xA27 | Ordinal: 2600
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WIRSEEKERDESCRIPTOR_HPP
