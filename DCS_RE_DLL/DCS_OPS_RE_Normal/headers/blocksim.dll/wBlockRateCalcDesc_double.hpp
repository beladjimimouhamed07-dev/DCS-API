#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockRateCalcDesc<double>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockRateCalcDesc_double_
{
public:

    // RVA: 0x25A | Ordinal: 603
        void __create_instance(void);

    // RVA: 0x2AA | Ordinal: 683
        void clone(void) const;

    // RVA: 0x2DF | Ordinal: 736
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x31D | Ordinal: 798
        void getBlockClassNameS(void);

    // RVA: 0x350 | Ordinal: 849
        void getBlockTypeName(void) const;

    // RVA: 0x382 | Ordinal: 899
        void getBlockTypeNameS(void);

    // RVA: 0x3B4 | Ordinal: 949
        void getClassName(void) const;

    // RVA: 0x40C | Ordinal: 1037
        void getInputPorts_(void) const;

    // RVA: 0x444 | Ordinal: 1093
        void getInputWires_(void) const;

    // RVA: 0x48F | Ordinal: 1168
        void getOutputPorts_(void) const;

    // RVA: 0x4C5 | Ordinal: 1222
        void getOutputWires_(void) const;

    // RVA: 0x4F8 | Ordinal: 1273
        void getParametersList(void);

    // RVA: 0xB8 | Ordinal: 185
        void wBlockRateCalcDesc_double_(class wBlockRateCalcDesc<double> &&);

    // RVA: 0xB9 | Ordinal: 186
        void wBlockRateCalcDesc_double_(class wBlockRateCalcDesc<double> const &);

    // RVA: 0xBA | Ordinal: 187
        void wBlockRateCalcDesc_double_(void);

    // RVA: 0x14B | Ordinal: 332
        void _wBlockRateCalcDesc_double_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKRATECALCDESC_DOUBLE_HPP
