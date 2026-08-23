#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wEngineAnimOnDemand
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineAnimOnDemand
{
public:

    // RVA: 0x4AD | Ordinal: 1198
        void __getInputPorts(void);

    // RVA: 0x546 | Ordinal: 1351
        void __getOutputPorts(void);

    // RVA: 0x7DD | Ordinal: 2014
        void getDesc_(void);

    // RVA: 0x891 | Ordinal: 2194
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x98E | Ordinal: 2447
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD7E | Ordinal: 3455
        void simulate(double);

    // RVA: 0xD3 | Ordinal: 212
        void wEngineAnimOnDemand(class wEngineAnimOnDemand &&);

    // RVA: 0xD4 | Ordinal: 213
        void wEngineAnimOnDemand(class wEngineAnimOnDemand const &);

    // RVA: 0xD5 | Ordinal: 214
        void wEngineAnimOnDemand(class wEngineAnimOnDemandDescriptor const *, class wSimulationSystem *);

    // RVA: 0x22E | Ordinal: 559
        void _wEngineAnimOnDemand(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WENGINEANIMONDEMAND_HPP
