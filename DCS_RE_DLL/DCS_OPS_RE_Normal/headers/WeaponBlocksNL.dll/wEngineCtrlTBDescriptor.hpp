#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x68C | Ordinal: 1677
        void clone(void) const;

    // RVA: 0x6C3 | Ordinal: 1732
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x71F | Ordinal: 1824
        void getBlockClassNameS(void);

    // RVA: 0x738 | Ordinal: 1849
        void getBlockTypeName(void) const;

    // RVA: 0x74F | Ordinal: 1872
        void getBlockTypeNameS(void);

    // RVA: 0x767 | Ordinal: 1896
        void getClassName(void) const;

    // RVA: 0x8E3 | Ordinal: 2276
        void getInputPorts_(void) const;

    // RVA: 0x8FA | Ordinal: 2299
        void getInputWires_(void) const;

    // RVA: 0x9E0 | Ordinal: 2529
        void getOutputPorts_(void) const;

    // RVA: 0x9F7 | Ordinal: 2552
        void getOutputWires_(void) const;

    // RVA: 0xA11 | Ordinal: 2578
        void getParametersList(void);

    // RVA: 0xC2D | Ordinal: 3118
        void serialize(class wBlockSerializer &);

    // RVA: 0xDB | Ordinal: 220
        void wEngineCtrlTBDescriptor(class wEngineCtrlTBDescriptor const &);

    // RVA: 0xDC | Ordinal: 221
        void wEngineCtrlTBDescriptor(void);

    // RVA: 0x231 | Ordinal: 562
        void _wEngineCtrlTBDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WENGINECTRLTBDESCRIPTOR_HPP
