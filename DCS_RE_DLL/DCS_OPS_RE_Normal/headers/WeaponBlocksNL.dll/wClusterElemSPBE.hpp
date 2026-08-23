#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x6DD | Ordinal: 1758
        void createPartsElem(void);

    // RVA: 0x7BB | Ordinal: 1980
        void getDesc_(void);

    // RVA: 0x86E | Ordinal: 2159
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x96B | Ordinal: 2412
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD1B | Ordinal: 3356
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCLUSTERELEMSPBE_HPP
