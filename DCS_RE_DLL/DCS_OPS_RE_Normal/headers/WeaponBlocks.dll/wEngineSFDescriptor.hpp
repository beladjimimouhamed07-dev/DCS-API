#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wEngineSFDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineSFDescriptor
{
public:

    // RVA: 0x45C | Ordinal: 1117
        void __create_instance(void);

    // RVA: 0x692 | Ordinal: 1683
        void clone(void) const;

    // RVA: 0x6CA | Ordinal: 1739
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x72A | Ordinal: 1835
        void getBlockClassNameS(void);

    // RVA: 0x743 | Ordinal: 1860
        void getBlockTypeName(void) const;

    // RVA: 0x75A | Ordinal: 1883
        void getBlockTypeNameS(void);

    // RVA: 0x772 | Ordinal: 1907
        void getClassName(void) const;

    // RVA: 0x8EF | Ordinal: 2288
        void getInputPorts_(void) const;

    // RVA: 0x906 | Ordinal: 2311
        void getInputWires_(void) const;

    // RVA: 0x9EC | Ordinal: 2541
        void getOutputPorts_(void) const;

    // RVA: 0xA03 | Ordinal: 2564
        void getOutputWires_(void) const;

    // RVA: 0xA1D | Ordinal: 2590
        void getParametersList(void);

    // RVA: 0xC79 | Ordinal: 3194
        void serialize(class wBlockSerializer &);

    // RVA: 0xE7 | Ordinal: 232
        void wEngineSFDescriptor(class wEngineSFDescriptor &&);

    // RVA: 0xE8 | Ordinal: 233
        void wEngineSFDescriptor(class wEngineSFDescriptor const &);

    // RVA: 0xE9 | Ordinal: 234
        void wEngineSFDescriptor(void);

    // RVA: 0x236 | Ordinal: 567
        void _wEngineSFDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WENGINESFDESCRIPTOR_HPP
