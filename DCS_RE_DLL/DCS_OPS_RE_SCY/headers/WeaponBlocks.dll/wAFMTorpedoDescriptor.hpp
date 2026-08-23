#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x68C | Ordinal: 1677
        void clone(void) const;

    // RVA: 0x6C4 | Ordinal: 1733
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x724 | Ordinal: 1829
        void getBlockClassNameS(void);

    // RVA: 0x73D | Ordinal: 1854
        void getBlockTypeName(void) const;

    // RVA: 0x754 | Ordinal: 1877
        void getBlockTypeNameS(void);

    // RVA: 0x76C | Ordinal: 1901
        void getClassName(void) const;

    // RVA: 0x8E9 | Ordinal: 2282
        void getInputPorts_(void) const;

    // RVA: 0x900 | Ordinal: 2305
        void getInputWires_(void) const;

    // RVA: 0x9E6 | Ordinal: 2535
        void getOutputPorts_(void) const;

    // RVA: 0x9FD | Ordinal: 2558
        void getOutputWires_(void) const;

    // RVA: 0xA17 | Ordinal: 2584
        void getParametersList(void);

    // RVA: 0xC73 | Ordinal: 3188
        void serialize(class wBlockSerializer &);

    // RVA: 0x1D | Ordinal: 30
        void wAFMTorpedoDescriptor(class wAFMTorpedoDescriptor const &);

    // RVA: 0x1E | Ordinal: 31
        void wAFMTorpedoDescriptor(void);

    // RVA: 0x1EC | Ordinal: 493
        void _wAFMTorpedoDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAFMTORPEDODESCRIPTOR_HPP
