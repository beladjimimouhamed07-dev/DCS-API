#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6DE | Ordinal: 1759
        void createPartsElem(void);

    // RVA: 0x7BD | Ordinal: 1982
        void getDesc_(void);

    // RVA: 0x871 | Ordinal: 2162
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x96E | Ordinal: 2415
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA8A | Ordinal: 2699
        void initEffects(void);

    // RVA: 0xD61 | Ordinal: 3426
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCLUSTERELEMBLU108_HPP
