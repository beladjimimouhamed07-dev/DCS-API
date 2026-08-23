#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wARMMemoryCircuit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wARMMemoryCircuit
{
public:

    // RVA: 0x481 | Ordinal: 1154
        void __getInputPorts(void);

    // RVA: 0x51A | Ordinal: 1307
        void __getOutputPorts(void);

    // RVA: 0x710 | Ordinal: 1809
        void getAccelPred(double);

    // RVA: 0x7A9 | Ordinal: 1962
        void getDesc_(void);

    // RVA: 0x85C | Ordinal: 2141
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x959 | Ordinal: 2394
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB74 | Ordinal: 2933
        void registerStateData(void);

    // RVA: 0xD0C | Ordinal: 3341
        void simulate(double);

    // RVA: 0x51 | Ordinal: 82
        void wARMMemoryCircuit(class wARMMemoryCircuit &&);

    // RVA: 0x52 | Ordinal: 83
        void wARMMemoryCircuit(class wARMMemoryCircuit const &);

    // RVA: 0x53 | Ordinal: 84
        void wARMMemoryCircuit(class wARMMemoryCircuitDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1FE | Ordinal: 511
        void _wARMMemoryCircuit(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WARMMEMORYCIRCUIT_HPP
