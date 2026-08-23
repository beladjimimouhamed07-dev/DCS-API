#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x80A | Ordinal: 2059
        void getDesc_(void);

    // RVA: 0x8BE | Ordinal: 2239
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9BB | Ordinal: 2492
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBE0 | Ordinal: 3041
        void registerStateData(void);

    // RVA: 0xD33 | Ordinal: 3380
        void setTriggerDistance(double);

    // RVA: 0xDA4 | Ordinal: 3493
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WONEWIREDISTTRIGGER_HPP
