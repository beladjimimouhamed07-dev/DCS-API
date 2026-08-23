#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wClusterElemSkeet
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wClusterElemSkeet
{
public:

    // RVA: 0x494 | Ordinal: 1173
        void __getInputPorts(void);

    // RVA: 0x52D | Ordinal: 1326
        void __getOutputPorts(void);

    // RVA: 0x6DE | Ordinal: 1759
        void createPartsElem(void);

    // RVA: 0x7BC | Ordinal: 1981
        void getDesc_(void);

    // RVA: 0x86F | Ordinal: 2160
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x96C | Ordinal: 2413
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD1C | Ordinal: 3357
        void simulate(double);

    // RVA: 0x86 | Ordinal: 135
        void wClusterElemSkeet(class wClusterElemSkeet &&);

    // RVA: 0x87 | Ordinal: 136
        void wClusterElemSkeet(class wClusterElemSkeet const &);

    // RVA: 0x88 | Ordinal: 137
        void wClusterElemSkeet(class wClusterElemSkeetDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x212 | Ordinal: 531
        void _wClusterElemSkeet(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCLUSTERELEMSKEET_HPP
