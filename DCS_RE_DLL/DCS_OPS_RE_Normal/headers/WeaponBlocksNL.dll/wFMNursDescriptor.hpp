#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x697 | Ordinal: 1688
        void clone(void) const;

    // RVA: 0x6B8 | Ordinal: 1721
        void copyData(class wFMNursDescriptor const &);

    // RVA: 0x6CD | Ordinal: 1742
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x72A | Ordinal: 1835
        void getBlockClassNameS(void);

    // RVA: 0x743 | Ordinal: 1860
        void getBlockTypeName(void) const;

    // RVA: 0x75A | Ordinal: 1883
        void getBlockTypeNameS(void);

    // RVA: 0x772 | Ordinal: 1907
        void getClassName(void) const;

    // RVA: 0x8EE | Ordinal: 2287
        void getInputPorts_(void) const;

    // RVA: 0x905 | Ordinal: 2310
        void getInputWires_(void) const;

    // RVA: 0x9EB | Ordinal: 2540
        void getOutputPorts_(void) const;

    // RVA: 0xA02 | Ordinal: 2563
        void getOutputWires_(void) const;

    // RVA: 0xA1C | Ordinal: 2589
        void getParametersList(void);

    // RVA: 0xC5F | Ordinal: 3168
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WFMNURSDESCRIPTOR_HPP
