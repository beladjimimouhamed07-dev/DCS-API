#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wClusterStarter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wClusterStarter
{
public:

    // RVA: 0x495 | Ordinal: 1174
        void __getInputPorts(void);

    // RVA: 0x52E | Ordinal: 1327
        void __getOutputPorts(void);

    // RVA: 0x7BD | Ordinal: 1982
        void getDesc_(void);

    // RVA: 0x870 | Ordinal: 2161
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x96D | Ordinal: 2414
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD1D | Ordinal: 3358
        void simulate(double);

    // RVA: 0x89 | Ordinal: 138
        void wClusterStarter(class wClusterStarter const &);

    // RVA: 0x8A | Ordinal: 139
        void wClusterStarter(class wClusterStarterDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x213 | Ordinal: 532
        void _wClusterStarter(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCLUSTERSTARTER_HPP
