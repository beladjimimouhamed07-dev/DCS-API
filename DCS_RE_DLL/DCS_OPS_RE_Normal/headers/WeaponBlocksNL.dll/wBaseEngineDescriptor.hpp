#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x68A | Ordinal: 1675
        void clone(void) const;

    // RVA: 0x6B6 | Ordinal: 1719
        void copyData(class wBaseEngineDescriptor const &);

    // RVA: 0x6C1 | Ordinal: 1730
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x71D | Ordinal: 1822
        void getBlockClassNameS(void);

    // RVA: 0x736 | Ordinal: 1847
        void getBlockTypeName(void) const;

    // RVA: 0x74D | Ordinal: 1870
        void getBlockTypeNameS(void);

    // RVA: 0x765 | Ordinal: 1894
        void getClassName(void) const;

    // RVA: 0x8E1 | Ordinal: 2274
        void getInputPorts_(void) const;

    // RVA: 0x8F8 | Ordinal: 2297
        void getInputWires_(void) const;

    // RVA: 0x9DE | Ordinal: 2527
        void getOutputPorts_(void) const;

    // RVA: 0x9F5 | Ordinal: 2550
        void getOutputWires_(void) const;

    // RVA: 0xA0F | Ordinal: 2576
        void getParametersList(void);

    // RVA: 0xC2B | Ordinal: 3116
        void serialize(class wBlockSerializer &);

    // RVA: 0xC5E | Ordinal: 3167
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WBASEENGINEDESCRIPTOR_HPP
