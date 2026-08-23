#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x6DF | Ordinal: 1760
        void createTail_(double);

    // RVA: 0x7D3 | Ordinal: 2004
        void getDesc_(void);

    // RVA: 0x886 | Ordinal: 2183
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x983 | Ordinal: 2436
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB91 | Ordinal: 2962
        void registerStateData(void);

    // RVA: 0xC3F | Ordinal: 3136
        void setAirTemp_(double &);

    // RVA: 0xD31 | Ordinal: 3378
        void simulate(double);

    // RVA: 0xD9A | Ordinal: 3483
        void switchState_(int);

    // RVA: 0xCC | Ordinal: 205
        void wEngine(class wEngine const &);

    // RVA: 0xCD | Ordinal: 206
        void wEngine(class wEngineDescriptor const *, class wSimulationSystem *);

    // RVA: 0x22B | Ordinal: 556
        void _wEngine(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WENGINE_HPP
