#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7BA | Ordinal: 1979
        void getDesc_(void);

    // RVA: 0x86E | Ordinal: 2159
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x96B | Ordinal: 2412
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD5E | Ordinal: 3423
        void simulate(double);

    // RVA: 0x6C | Ordinal: 109
        void wClusterAggr(class wClusterAggr const &);

    // RVA: 0x6D | Ordinal: 110
        void wClusterAggr(class wClusterAggrDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x208 | Ordinal: 521
        void _wClusterAggr(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCLUSTERAGGR_HPP
