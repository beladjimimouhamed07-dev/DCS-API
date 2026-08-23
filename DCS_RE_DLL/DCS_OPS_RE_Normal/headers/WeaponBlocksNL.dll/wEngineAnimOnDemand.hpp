#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7D5 | Ordinal: 2006
        void getDesc_(void);

    // RVA: 0x888 | Ordinal: 2185
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x985 | Ordinal: 2438
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD33 | Ordinal: 3380
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WENGINEANIMONDEMAND_HPP
