#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wEngineCtrlTBDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineCtrlTBDescriptor
{
public:

    // RVA: 0x459 | Ordinal: 1114
        void __create_instance(void);

    // RVA: 0x68F | Ordinal: 1680
        void clone(void) const;

    // RVA: 0x6C7 | Ordinal: 1736
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x727 | Ordinal: 1832
        void getBlockClassNameS(void);

    // RVA: 0x740 | Ordinal: 1857
        void getBlockTypeName(void) const;

    // RVA: 0x757 | Ordinal: 1880
        void getBlockTypeNameS(void);

    // RVA: 0x76F | Ordinal: 1904
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

    // RVA: 0xC76 | Ordinal: 3191
        void serialize(class wBlockSerializer &);

    // RVA: 0xDB | Ordinal: 220
        void wEngineCtrlTBDescriptor(class wEngineCtrlTBDescriptor const &);

    // RVA: 0xDC | Ordinal: 221
        void wEngineCtrlTBDescriptor(void);

    // RVA: 0x231 | Ordinal: 562
        void _wEngineCtrlTBDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WENGINECTRLTBDESCRIPTOR_HPP
