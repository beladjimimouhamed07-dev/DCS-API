#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockDeltaCalcDesc<int>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockDeltaCalcDesc_int_
{
public:

    // RVA: 0x245 | Ordinal: 582
        void __create_instance(void);

    // RVA: 0x295 | Ordinal: 662
        void clone(void) const;

    // RVA: 0x2CA | Ordinal: 715
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x308 | Ordinal: 777
        void getBlockClassNameS(void);

    // RVA: 0x33B | Ordinal: 828
        void getBlockTypeName(void) const;

    // RVA: 0x36D | Ordinal: 878
        void getBlockTypeNameS(void);

    // RVA: 0x39F | Ordinal: 928
        void getClassName(void) const;

    // RVA: 0x3F7 | Ordinal: 1016
        void getInputPorts_(void) const;

    // RVA: 0x42F | Ordinal: 1072
        void getInputWires_(void) const;

    // RVA: 0x47A | Ordinal: 1147
        void getOutputPorts_(void) const;

    // RVA: 0x4B0 | Ordinal: 1201
        void getOutputWires_(void) const;

    // RVA: 0x4E3 | Ordinal: 1252
        void getParametersList(void);

    // RVA: 0x64 | Ordinal: 101
        void wBlockDeltaCalcDesc_int_(class wBlockDeltaCalcDesc<int> &&);

    // RVA: 0x65 | Ordinal: 102
        void wBlockDeltaCalcDesc_int_(class wBlockDeltaCalcDesc<int> const &);

    // RVA: 0x66 | Ordinal: 103
        void wBlockDeltaCalcDesc_int_(void);

    // RVA: 0x12F | Ordinal: 304
        void _wBlockDeltaCalcDesc_int_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKDELTACALCDESC_INT_HPP
