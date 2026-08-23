#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6DD | Ordinal: 1758
        void createPartsElem(void);

    // RVA: 0x7BC | Ordinal: 1981
        void getDesc_(void);

    // RVA: 0x870 | Ordinal: 2161
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x96D | Ordinal: 2414
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD60 | Ordinal: 3425
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCLUSTERELEMACCELERBOMBLETS_HPP
