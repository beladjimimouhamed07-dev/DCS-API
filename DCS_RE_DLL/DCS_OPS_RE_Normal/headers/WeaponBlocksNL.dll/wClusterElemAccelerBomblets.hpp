#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wClusterElemAccelerBomblets
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wClusterElemAccelerBomblets
{
public:

    // RVA: 0x48C | Ordinal: 1165
        void __getInputPorts(void);

    // RVA: 0x525 | Ordinal: 1318
        void __getOutputPorts(void);

    // RVA: 0x6D9 | Ordinal: 1754
        void createPartsElem(void);

    // RVA: 0x7B4 | Ordinal: 1973
        void getDesc_(void);

    // RVA: 0x867 | Ordinal: 2152
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x964 | Ordinal: 2405
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD15 | Ordinal: 3350
        void simulate(double);

    // RVA: 0x70 | Ordinal: 113
        void wClusterElemAccelerBomblets(class wClusterElemAccelerBomblets &&);

    // RVA: 0x71 | Ordinal: 114
        void wClusterElemAccelerBomblets(class wClusterElemAccelerBomblets const &);

    // RVA: 0x72 | Ordinal: 115
        void wClusterElemAccelerBomblets(class wClusterElemAccelerBombletsDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x20A | Ordinal: 523
        void _wClusterElemAccelerBomblets(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCLUSTERELEMACCELERBOMBLETS_HPP
