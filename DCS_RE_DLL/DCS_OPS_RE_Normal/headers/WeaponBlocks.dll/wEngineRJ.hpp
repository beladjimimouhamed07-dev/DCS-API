#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wEngineRJ
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineRJ
{
public:

    // RVA: 0x4B0 | Ordinal: 1201
        void __getInputPorts(void);

    // RVA: 0x549 | Ordinal: 1354
        void __getOutputPorts(void);

    // RVA: 0x7E0 | Ordinal: 2017
        void getDesc_(void);

    // RVA: 0x894 | Ordinal: 2197
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x991 | Ordinal: 2450
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBBE | Ordinal: 3007
        void registerStateData(void);

    // RVA: 0xD3F | Ordinal: 3392
        void simFuelRegulator(double);

    // RVA: 0xD41 | Ordinal: 3394
        void simSwitch(double);

    // RVA: 0xD81 | Ordinal: 3458
        void simulate(double);

    // RVA: 0xE0 | Ordinal: 225
        void wEngineRJ(class wEngineRJ const &);

    // RVA: 0xE1 | Ordinal: 226
        void wEngineRJ(class wEngineRJDescriptor const *, class wSimulationSystem *);

    // RVA: 0x233 | Ordinal: 564
        void _wEngineRJ(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WENGINERJ_HPP
