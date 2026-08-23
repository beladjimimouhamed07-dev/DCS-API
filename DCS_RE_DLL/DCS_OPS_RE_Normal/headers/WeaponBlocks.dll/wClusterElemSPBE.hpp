#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wClusterElemSPBE
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wClusterElemSPBE
{
public:

    // RVA: 0x493 | Ordinal: 1172
        void __getInputPorts(void);

    // RVA: 0x52C | Ordinal: 1325
        void __getOutputPorts(void);

    // RVA: 0x59C | Ordinal: 1437
        void activateAllBomblets(void);

    // RVA: 0x6E1 | Ordinal: 1762
        void createPartsElem(void);

    // RVA: 0x7C3 | Ordinal: 1988
        void getDesc_(void);

    // RVA: 0x877 | Ordinal: 2168
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x974 | Ordinal: 2421
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD66 | Ordinal: 3431
        void simulate(double);

    // RVA: 0x83 | Ordinal: 132
        void wClusterElemSPBE(class wClusterElemSPBE &&);

    // RVA: 0x84 | Ordinal: 133
        void wClusterElemSPBE(class wClusterElemSPBE const &);

    // RVA: 0x85 | Ordinal: 134
        void wClusterElemSPBE(class wClusterElemSPBEDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x211 | Ordinal: 530
        void _wClusterElemSPBE(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCLUSTERELEMSPBE_HPP
