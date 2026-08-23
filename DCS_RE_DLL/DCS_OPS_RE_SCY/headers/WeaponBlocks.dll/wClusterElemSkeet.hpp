#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6E2 | Ordinal: 1763
        void createPartsElem(void);

    // RVA: 0x7C4 | Ordinal: 1989
        void getDesc_(void);

    // RVA: 0x878 | Ordinal: 2169
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x975 | Ordinal: 2422
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA8D | Ordinal: 2702
        void initEffects(void);

    // RVA: 0xD67 | Ordinal: 3432
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCLUSTERELEMSKEET_HPP
