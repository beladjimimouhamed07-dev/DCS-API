#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wBaseEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBaseEngine
{
public:

    // RVA: 0x485 | Ordinal: 1158
        void __getInputPorts(void);

    // RVA: 0x51E | Ordinal: 1311
        void __getOutputPorts(void);

    // RVA: 0x7AD | Ordinal: 1966
        void getDesc_(void);

    // RVA: 0x860 | Ordinal: 2145
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x95D | Ordinal: 2398
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB78 | Ordinal: 2937
        void registerStateData(void);

    // RVA: 0xBDA | Ordinal: 3035
        void reset(void);

    // RVA: 0xCF5 | Ordinal: 3318
        void simSwitch(double);

    // RVA: 0xD10 | Ordinal: 3345
        void simulate(double);

    // RVA: 0xD99 | Ordinal: 3482
        void switchState_(int);

    // RVA: 0xDC0 | Ordinal: 3521
        void turnOff(void);

    // RVA: 0xDC1 | Ordinal: 3522
        void turnOff_(bool);

    // RVA: 0xDC2 | Ordinal: 3523
        void turnOn(void);

    // RVA: 0xDC3 | Ordinal: 3524
        void turnOn_(bool);

    // RVA: 0x5D | Ordinal: 94
        void wBaseEngine(class wBaseEngine const &);

    // RVA: 0x5E | Ordinal: 95
        void wBaseEngine(class wBaseEngineDescriptor const *, class wSimulationSystem *);

    // RVA: 0x202 | Ordinal: 515
        void _wBaseEngine(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WBASEENGINE_HPP
