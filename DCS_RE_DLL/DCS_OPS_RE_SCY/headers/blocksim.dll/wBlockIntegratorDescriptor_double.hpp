#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockIntegratorDescriptor<double>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockIntegratorDescriptor_double_
{
public:

    // RVA: 0x24D | Ordinal: 590
        void __create_instance(void);

    // RVA: 0x29D | Ordinal: 670
        void clone(void) const;

    // RVA: 0x2D2 | Ordinal: 723
        void create(class Lua::Loader *);

    // RVA: 0x310 | Ordinal: 785
        void getBlockClassNameS(void);

    // RVA: 0x343 | Ordinal: 836
        void getBlockTypeName(void) const;

    // RVA: 0x375 | Ordinal: 886
        void getBlockTypeNameS(void);

    // RVA: 0x3A7 | Ordinal: 936
        void getClassName(void) const;

    // RVA: 0x3FF | Ordinal: 1024
        void getInputPorts_(void) const;

    // RVA: 0x437 | Ordinal: 1080
        void getInputWires_(void) const;

    // RVA: 0x482 | Ordinal: 1155
        void getOutputPorts_(void) const;

    // RVA: 0x4B8 | Ordinal: 1209
        void getOutputWires_(void) const;

    // RVA: 0x4EB | Ordinal: 1260
        void getParametersList(void);

    // RVA: 0x91 | Ordinal: 146
        void wBlockIntegratorDescriptor_double_(class wBlockIntegratorDescriptor<double> &&);

    // RVA: 0x92 | Ordinal: 147
        void wBlockIntegratorDescriptor_double_(class wBlockIntegratorDescriptor<double> const &);

    // RVA: 0x93 | Ordinal: 148
        void wBlockIntegratorDescriptor_double_(void);

    // RVA: 0x13E | Ordinal: 319
        void _wBlockIntegratorDescriptor_double_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKINTEGRATORDESCRIPTOR_DOUBLE_HPP
