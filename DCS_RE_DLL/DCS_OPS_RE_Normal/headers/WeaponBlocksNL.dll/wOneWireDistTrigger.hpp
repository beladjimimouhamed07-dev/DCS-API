#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wOneWireDistTrigger
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wOneWireDistTrigger
{
public:

    // RVA: 0x4DA | Ordinal: 1243
        void __getInputPorts(void);

    // RVA: 0x573 | Ordinal: 1396
        void __getOutputPorts(void);

    // RVA: 0x802 | Ordinal: 2051
        void getDesc_(void);

    // RVA: 0x8B5 | Ordinal: 2230
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9B2 | Ordinal: 2483
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBB6 | Ordinal: 2999
        void registerStateData(void);

    // RVA: 0xCE8 | Ordinal: 3305
        void setTriggerDistance(double);

    // RVA: 0xD59 | Ordinal: 3418
        void simulate(double);

    // RVA: 0x16F | Ordinal: 368
        void wOneWireDistTrigger(class wOneWireDistTrigger &&);

    // RVA: 0x170 | Ordinal: 369
        void wOneWireDistTrigger(class wOneWireDistTrigger const &);

    // RVA: 0x171 | Ordinal: 370
        void wOneWireDistTrigger(class wOneWireDistTriggerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x26A | Ordinal: 619
        void _wOneWireDistTrigger(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WONEWIREDISTTRIGGER_HPP
