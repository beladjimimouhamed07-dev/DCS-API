#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wClusterAggr
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wClusterAggr
{
public:

    // RVA: 0x48A | Ordinal: 1163
        void __getInputPorts(void);

    // RVA: 0x523 | Ordinal: 1316
        void __getOutputPorts(void);

    // RVA: 0x7B2 | Ordinal: 1971
        void getDesc_(void);

    // RVA: 0x865 | Ordinal: 2150
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x962 | Ordinal: 2403
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD13 | Ordinal: 3348
        void simulate(double);

    // RVA: 0x6C | Ordinal: 109
        void wClusterAggr(class wClusterAggr const &);

    // RVA: 0x6D | Ordinal: 110
        void wClusterAggr(class wClusterAggrDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x208 | Ordinal: 521
        void _wClusterAggr(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCLUSTERAGGR_HPP
