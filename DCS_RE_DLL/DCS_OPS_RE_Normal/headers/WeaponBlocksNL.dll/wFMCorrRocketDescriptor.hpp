#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wFMCorrRocketDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wFMCorrRocketDescriptor
{
public:

    // RVA: 0x461 | Ordinal: 1122
        void __create_instance(void);

    // RVA: 0x695 | Ordinal: 1686
        void clone(void) const;

    // RVA: 0x6CB | Ordinal: 1740
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x728 | Ordinal: 1833
        void getBlockClassNameS(void);

    // RVA: 0x741 | Ordinal: 1858
        void getBlockTypeName(void) const;

    // RVA: 0x758 | Ordinal: 1881
        void getBlockTypeNameS(void);

    // RVA: 0x770 | Ordinal: 1905
        void getClassName(void) const;

    // RVA: 0x8EC | Ordinal: 2285
        void getInputPorts_(void) const;

    // RVA: 0x903 | Ordinal: 2308
        void getInputWires_(void) const;

    // RVA: 0x9E9 | Ordinal: 2538
        void getOutputPorts_(void) const;

    // RVA: 0xA00 | Ordinal: 2561
        void getOutputWires_(void) const;

    // RVA: 0xA1A | Ordinal: 2587
        void getParametersList(void);

    // RVA: 0xC34 | Ordinal: 3125
        void serialize(class wBlockSerializer &);

    // RVA: 0x10C | Ordinal: 269
        void wFMCorrRocketDescriptor(class wFMCorrRocketDescriptor &&);

    // RVA: 0x10D | Ordinal: 270
        void wFMCorrRocketDescriptor(class wFMCorrRocketDescriptor const &);

    // RVA: 0x10E | Ordinal: 271
        void wFMCorrRocketDescriptor(void);

    // RVA: 0x244 | Ordinal: 581
        void _wFMCorrRocketDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WFMCORRROCKETDESCRIPTOR_HPP
