#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x69C | Ordinal: 1693
        void clone(void) const;

    // RVA: 0x6D2 | Ordinal: 1747
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x72F | Ordinal: 1840
        void getBlockClassNameS(void);

    // RVA: 0x748 | Ordinal: 1865
        void getBlockTypeName(void) const;

    // RVA: 0x75F | Ordinal: 1888
        void getBlockTypeNameS(void);

    // RVA: 0x777 | Ordinal: 1912
        void getClassName(void) const;

    // RVA: 0x8F3 | Ordinal: 2292
        void getInputPorts_(void) const;

    // RVA: 0x90A | Ordinal: 2315
        void getInputWires_(void) const;

    // RVA: 0x9F0 | Ordinal: 2545
        void getOutputPorts_(void) const;

    // RVA: 0xA07 | Ordinal: 2568
        void getOutputWires_(void) const;

    // RVA: 0xA21 | Ordinal: 2594
        void getParametersList(void);

    // RVA: 0xC38 | Ordinal: 3129
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WTORPENGINEDESCRIPTOR_HPP
