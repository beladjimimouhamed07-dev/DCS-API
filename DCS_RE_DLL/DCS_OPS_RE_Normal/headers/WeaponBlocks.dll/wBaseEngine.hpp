#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7B5 | Ordinal: 1974
        void getDesc_(void);

    // RVA: 0x869 | Ordinal: 2154
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x966 | Ordinal: 2407
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBA2 | Ordinal: 2979
        void registerStateData(void);

    // RVA: 0xC04 | Ordinal: 3077
        void reset(void);

    // RVA: 0xD40 | Ordinal: 3393
        void simSwitch(double);

    // RVA: 0xD5B | Ordinal: 3420
        void simulate(double);

    // RVA: 0xDE4 | Ordinal: 3557
        void switchState_(int);

    // RVA: 0xE0F | Ordinal: 3600
        void turnOff(void);

    // RVA: 0xE10 | Ordinal: 3601
        void turnOff_(bool);

    // RVA: 0xE11 | Ordinal: 3602
        void turnOn(void);

    // RVA: 0xE12 | Ordinal: 3603
        void turnOn_(bool);

    // RVA: 0x5D | Ordinal: 94
        void wBaseEngine(class wBaseEngine const &);

    // RVA: 0x5E | Ordinal: 95
        void wBaseEngine(class wBaseEngineDescriptor const *, class wSimulationSystem *);

    // RVA: 0x202 | Ordinal: 515
        void _wBaseEngine(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WBASEENGINE_HPP
