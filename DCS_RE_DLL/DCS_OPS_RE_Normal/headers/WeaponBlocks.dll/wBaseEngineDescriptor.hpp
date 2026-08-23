#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wBaseEngineDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBaseEngineDescriptor
{
public:

    // RVA: 0x457 | Ordinal: 1112
        void __create_instance(void);

    // RVA: 0x68D | Ordinal: 1678
        void clone(void) const;

    // RVA: 0x6BA | Ordinal: 1723
        void copyData(class wBaseEngineDescriptor const &);

    // RVA: 0x6C5 | Ordinal: 1734
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x725 | Ordinal: 1830
        void getBlockClassNameS(void);

    // RVA: 0x73E | Ordinal: 1855
        void getBlockTypeName(void) const;

    // RVA: 0x755 | Ordinal: 1878
        void getBlockTypeNameS(void);

    // RVA: 0x76D | Ordinal: 1902
        void getClassName(void) const;

    // RVA: 0x8EA | Ordinal: 2283
        void getInputPorts_(void) const;

    // RVA: 0x901 | Ordinal: 2306
        void getInputWires_(void) const;

    // RVA: 0x9E7 | Ordinal: 2536
        void getOutputPorts_(void) const;

    // RVA: 0x9FE | Ordinal: 2559
        void getOutputWires_(void) const;

    // RVA: 0xA18 | Ordinal: 2585
        void getParametersList(void);

    // RVA: 0xC74 | Ordinal: 3189
        void serialize(class wBlockSerializer &);

    // RVA: 0xCA8 | Ordinal: 3241
        void setDt(double);

    // RVA: 0x5F | Ordinal: 96
        void wBaseEngineDescriptor(class wBaseEngineDescriptor &&);

    // RVA: 0x60 | Ordinal: 97
        void wBaseEngineDescriptor(class wBaseEngineDescriptor const &);

    // RVA: 0x61 | Ordinal: 98
        void wBaseEngineDescriptor(void);

    // RVA: 0x203 | Ordinal: 516
        void _wBaseEngineDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WBASEENGINEDESCRIPTOR_HPP
