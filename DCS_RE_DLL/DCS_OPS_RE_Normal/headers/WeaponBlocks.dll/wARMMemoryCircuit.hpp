#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x717 | Ordinal: 1816
        void getAccelPred(double);

    // RVA: 0x7B1 | Ordinal: 1970
        void getDesc_(void);

    // RVA: 0x865 | Ordinal: 2150
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x962 | Ordinal: 2403
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB9E | Ordinal: 2975
        void registerStateData(void);

    // RVA: 0xD57 | Ordinal: 3416
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WARMMEMORYCIRCUIT_HPP
