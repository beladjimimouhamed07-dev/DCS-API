#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngine
{
public:

    // RVA: 0x4AB | Ordinal: 1196
        void __getInputPorts(void);

    // RVA: 0x544 | Ordinal: 1349
        void __getOutputPorts(void);

    // RVA: 0x6E3 | Ordinal: 1764
        void createTail_(double);

    // RVA: 0x7DB | Ordinal: 2012
        void getDesc_(void);

    // RVA: 0x88F | Ordinal: 2192
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x98C | Ordinal: 2445
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBBB | Ordinal: 3004
        void registerStateData(void);

    // RVA: 0xC89 | Ordinal: 3210
        void setAirTemp_(double &);

    // RVA: 0xD7C | Ordinal: 3453
        void simulate(double);

    // RVA: 0xDE5 | Ordinal: 3558
        void switchState_(int);

    // RVA: 0xCC | Ordinal: 205
        void wEngine(class wEngine const &);

    // RVA: 0xCD | Ordinal: 206
        void wEngine(class wEngineDescriptor const *, class wSimulationSystem *);

    // RVA: 0x22B | Ordinal: 556
        void _wEngine(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WENGINE_HPP
