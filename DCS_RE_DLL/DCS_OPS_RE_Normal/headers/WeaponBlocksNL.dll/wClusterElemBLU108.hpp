#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wClusterElemBLU108
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wClusterElemBLU108
{
public:

    // RVA: 0x48D | Ordinal: 1166
        void __getInputPorts(void);

    // RVA: 0x526 | Ordinal: 1319
        void __getOutputPorts(void);

    // RVA: 0x6DA | Ordinal: 1755
        void createPartsElem(void);

    // RVA: 0x7B5 | Ordinal: 1974
        void getDesc_(void);

    // RVA: 0x868 | Ordinal: 2153
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x965 | Ordinal: 2406
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD16 | Ordinal: 3351
        void simulate(double);

    // RVA: 0x73 | Ordinal: 116
        void wClusterElemBLU108(class wClusterElemBLU108 &&);

    // RVA: 0x74 | Ordinal: 117
        void wClusterElemBLU108(class wClusterElemBLU108 const &);

    // RVA: 0x75 | Ordinal: 118
        void wClusterElemBLU108(class wClusterElemBLU108Descriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x20B | Ordinal: 524
        void _wClusterElemBLU108(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCLUSTERELEMBLU108_HPP
