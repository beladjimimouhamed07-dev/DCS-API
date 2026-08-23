#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wEngineTJDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineTJDescriptor
{
public:

    // RVA: 0x45D | Ordinal: 1118
        void __create_instance(void);

    // RVA: 0x693 | Ordinal: 1684
        void clone(void) const;

    // RVA: 0x6CB | Ordinal: 1740
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x72B | Ordinal: 1836
        void getBlockClassNameS(void);

    // RVA: 0x744 | Ordinal: 1861
        void getBlockTypeName(void) const;

    // RVA: 0x75B | Ordinal: 1884
        void getBlockTypeNameS(void);

    // RVA: 0x773 | Ordinal: 1908
        void getClassName(void) const;

    // RVA: 0x8F0 | Ordinal: 2289
        void getInputPorts_(void) const;

    // RVA: 0x907 | Ordinal: 2312
        void getInputWires_(void) const;

    // RVA: 0x9ED | Ordinal: 2542
        void getOutputPorts_(void) const;

    // RVA: 0xA04 | Ordinal: 2565
        void getOutputWires_(void) const;

    // RVA: 0xA1E | Ordinal: 2591
        void getParametersList(void);

    // RVA: 0xC7A | Ordinal: 3195
        void serialize(class wBlockSerializer &);

    // RVA: 0xEC | Ordinal: 237
        void wEngineTJDescriptor(class wEngineTJDescriptor &&);

    // RVA: 0xED | Ordinal: 238
        void wEngineTJDescriptor(class wEngineTJDescriptor const &);

    // RVA: 0xEE | Ordinal: 239
        void wEngineTJDescriptor(void);

    // RVA: 0x238 | Ordinal: 569
        void _wEngineTJDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WENGINETJDESCRIPTOR_HPP
