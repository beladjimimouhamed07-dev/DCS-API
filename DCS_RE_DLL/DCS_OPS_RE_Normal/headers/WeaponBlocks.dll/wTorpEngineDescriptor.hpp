#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wTorpEngineDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wTorpEngineDescriptor
{
public:

    // RVA: 0x468 | Ordinal: 1129
        void __create_instance(void);

    // RVA: 0x69F | Ordinal: 1696
        void clone(void) const;

    // RVA: 0x6D6 | Ordinal: 1751
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x737 | Ordinal: 1848
        void getBlockClassNameS(void);

    // RVA: 0x750 | Ordinal: 1873
        void getBlockTypeName(void) const;

    // RVA: 0x767 | Ordinal: 1896
        void getBlockTypeNameS(void);

    // RVA: 0x77F | Ordinal: 1920
        void getClassName(void) const;

    // RVA: 0x8FC | Ordinal: 2301
        void getInputPorts_(void) const;

    // RVA: 0x913 | Ordinal: 2324
        void getInputWires_(void) const;

    // RVA: 0x9F9 | Ordinal: 2554
        void getOutputPorts_(void) const;

    // RVA: 0xA10 | Ordinal: 2577
        void getOutputWires_(void) const;

    // RVA: 0xA2A | Ordinal: 2603
        void getParametersList(void);

    // RVA: 0xC81 | Ordinal: 3202
        void serialize(class wBlockSerializer &);

    // RVA: 0x1B9 | Ordinal: 442
        void wTorpEngineDescriptor(class wTorpEngineDescriptor &&);

    // RVA: 0x1BA | Ordinal: 443
        void wTorpEngineDescriptor(class wTorpEngineDescriptor const &);

    // RVA: 0x1BB | Ordinal: 444
        void wTorpEngineDescriptor(void);

    // RVA: 0x286 | Ordinal: 647
        void _wTorpEngineDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WTORPENGINEDESCRIPTOR_HPP
