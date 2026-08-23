#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wAFMTorpedoDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAFMTorpedoDescriptor
{
public:

    // RVA: 0x456 | Ordinal: 1111
        void __create_instance(void);

    // RVA: 0x689 | Ordinal: 1674
        void clone(void) const;

    // RVA: 0x6C0 | Ordinal: 1729
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x71C | Ordinal: 1821
        void getBlockClassNameS(void);

    // RVA: 0x735 | Ordinal: 1846
        void getBlockTypeName(void) const;

    // RVA: 0x74C | Ordinal: 1869
        void getBlockTypeNameS(void);

    // RVA: 0x764 | Ordinal: 1893
        void getClassName(void) const;

    // RVA: 0x8E0 | Ordinal: 2273
        void getInputPorts_(void) const;

    // RVA: 0x8F7 | Ordinal: 2296
        void getInputWires_(void) const;

    // RVA: 0x9DD | Ordinal: 2526
        void getOutputPorts_(void) const;

    // RVA: 0x9F4 | Ordinal: 2549
        void getOutputWires_(void) const;

    // RVA: 0xA0E | Ordinal: 2575
        void getParametersList(void);

    // RVA: 0xC2A | Ordinal: 3115
        void serialize(class wBlockSerializer &);

    // RVA: 0x1D | Ordinal: 30
        void wAFMTorpedoDescriptor(class wAFMTorpedoDescriptor const &);

    // RVA: 0x1E | Ordinal: 31
        void wAFMTorpedoDescriptor(void);

    // RVA: 0x1EC | Ordinal: 493
        void _wAFMTorpedoDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAFMTORPEDODESCRIPTOR_HPP
