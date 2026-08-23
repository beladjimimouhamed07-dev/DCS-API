#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x69D | Ordinal: 1694
        void clone(void) const;

    // RVA: 0x6D4 | Ordinal: 1749
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x735 | Ordinal: 1846
        void getBlockClassNameS(void);

    // RVA: 0x74E | Ordinal: 1871
        void getBlockTypeName(void) const;

    // RVA: 0x765 | Ordinal: 1894
        void getBlockTypeNameS(void);

    // RVA: 0x77D | Ordinal: 1918
        void getClassName(void) const;

    // RVA: 0x8FA | Ordinal: 2299
        void getInputPorts_(void) const;

    // RVA: 0x911 | Ordinal: 2322
        void getInputWires_(void) const;

    // RVA: 0x9F7 | Ordinal: 2552
        void getOutputPorts_(void) const;

    // RVA: 0xA0E | Ordinal: 2575
        void getOutputWires_(void) const;

    // RVA: 0xA28 | Ordinal: 2601
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WPRSEEKERDESCRIPTOR_HPP
