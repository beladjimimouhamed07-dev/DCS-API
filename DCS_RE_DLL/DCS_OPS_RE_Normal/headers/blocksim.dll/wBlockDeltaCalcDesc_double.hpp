#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockDeltaCalcDesc<double>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockDeltaCalcDesc_double_
{
public:

    // RVA: 0x246 | Ordinal: 583
        void __create_instance(void);

    // RVA: 0x296 | Ordinal: 663
        void clone(void) const;

    // RVA: 0x2CB | Ordinal: 716
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x309 | Ordinal: 778
        void getBlockClassNameS(void);

    // RVA: 0x33C | Ordinal: 829
        void getBlockTypeName(void) const;

    // RVA: 0x36E | Ordinal: 879
        void getBlockTypeNameS(void);

    // RVA: 0x3A0 | Ordinal: 929
        void getClassName(void) const;

    // RVA: 0x3F8 | Ordinal: 1017
        void getInputPorts_(void) const;

    // RVA: 0x430 | Ordinal: 1073
        void getInputWires_(void) const;

    // RVA: 0x47B | Ordinal: 1148
        void getOutputPorts_(void) const;

    // RVA: 0x4B1 | Ordinal: 1202
        void getOutputWires_(void) const;

    // RVA: 0x4E4 | Ordinal: 1253
        void getParametersList(void);

    // RVA: 0x67 | Ordinal: 104
        void wBlockDeltaCalcDesc_double_(class wBlockDeltaCalcDesc<double> &&);

    // RVA: 0x68 | Ordinal: 105
        void wBlockDeltaCalcDesc_double_(class wBlockDeltaCalcDesc<double> const &);

    // RVA: 0x69 | Ordinal: 106
        void wBlockDeltaCalcDesc_double_(void);

    // RVA: 0x130 | Ordinal: 305
        void _wBlockDeltaCalcDesc_double_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKDELTACALCDESC_DOUBLE_HPP
