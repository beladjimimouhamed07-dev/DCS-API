#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x698 | Ordinal: 1689
        void clone(void) const;

    // RVA: 0x6CF | Ordinal: 1744
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x730 | Ordinal: 1841
        void getBlockClassNameS(void);

    // RVA: 0x749 | Ordinal: 1866
        void getBlockTypeName(void) const;

    // RVA: 0x760 | Ordinal: 1889
        void getBlockTypeNameS(void);

    // RVA: 0x778 | Ordinal: 1913
        void getClassName(void) const;

    // RVA: 0x8F5 | Ordinal: 2294
        void getInputPorts_(void) const;

    // RVA: 0x90C | Ordinal: 2317
        void getInputWires_(void) const;

    // RVA: 0x9F2 | Ordinal: 2547
        void getOutputPorts_(void) const;

    // RVA: 0xA09 | Ordinal: 2570
        void getOutputWires_(void) const;

    // RVA: 0xA23 | Ordinal: 2596
        void getParametersList(void);

    // RVA: 0xC7D | Ordinal: 3198
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WFMCORRROCKETDESCRIPTOR_HPP
