#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7D8 | Ordinal: 2009
        void getDesc_(void);

    // RVA: 0x88B | Ordinal: 2188
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x988 | Ordinal: 2441
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB94 | Ordinal: 2965
        void registerStateData(void);

    // RVA: 0xCF4 | Ordinal: 3317
        void simFuelRegulator(double);

    // RVA: 0xCF6 | Ordinal: 3319
        void simSwitch(double);

    // RVA: 0xD36 | Ordinal: 3383
        void simulate(double);

    // RVA: 0xE0 | Ordinal: 225
        void wEngineRJ(class wEngineRJ const &);

    // RVA: 0xE1 | Ordinal: 226
        void wEngineRJ(class wEngineRJDescriptor const *, class wSimulationSystem *);

    // RVA: 0x233 | Ordinal: 564
        void _wEngineRJ(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WENGINERJ_HPP
