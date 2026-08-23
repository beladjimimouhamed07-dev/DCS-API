#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wFMNursDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wFMNursDescriptor
{
public:

    // RVA: 0x463 | Ordinal: 1124
        void __create_instance(void);

    // RVA: 0x69A | Ordinal: 1691
        void clone(void) const;

    // RVA: 0x6BC | Ordinal: 1725
        void copyData(class wFMNursDescriptor const &);

    // RVA: 0x6D1 | Ordinal: 1746
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x732 | Ordinal: 1843
        void getBlockClassNameS(void);

    // RVA: 0x74B | Ordinal: 1868
        void getBlockTypeName(void) const;

    // RVA: 0x762 | Ordinal: 1891
        void getBlockTypeNameS(void);

    // RVA: 0x77A | Ordinal: 1915
        void getClassName(void) const;

    // RVA: 0x8F7 | Ordinal: 2296
        void getInputPorts_(void) const;

    // RVA: 0x90E | Ordinal: 2319
        void getInputWires_(void) const;

    // RVA: 0x9F4 | Ordinal: 2549
        void getOutputPorts_(void) const;

    // RVA: 0xA0B | Ordinal: 2572
        void getOutputWires_(void) const;

    // RVA: 0xA25 | Ordinal: 2598
        void getParametersList(void);

    // RVA: 0xCA9 | Ordinal: 3242
        void setDt(double);

    // RVA: 0x117 | Ordinal: 280
        void wFMNursDescriptor(class wFMNursDescriptor &&);

    // RVA: 0x118 | Ordinal: 281
        void wFMNursDescriptor(class wFMNursDescriptor const &);

    // RVA: 0x119 | Ordinal: 282
        void wFMNursDescriptor(void);

    // RVA: 0x248 | Ordinal: 585
        void _wFMNursDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WFMNURSDESCRIPTOR_HPP
