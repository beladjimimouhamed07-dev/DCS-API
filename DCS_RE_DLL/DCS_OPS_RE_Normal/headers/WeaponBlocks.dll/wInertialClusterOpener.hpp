#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wInertialClusterOpener
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wInertialClusterOpener
{
public:

    // RVA: 0x4CB | Ordinal: 1228
        void __getInputPorts(void);

    // RVA: 0x564 | Ordinal: 1381
        void __getOutputPorts(void);

    // RVA: 0x739 | Ordinal: 1850
        void getBlockStateDataSize(void);

    // RVA: 0x7FB | Ordinal: 2044
        void getDesc_(void);

    // RVA: 0x8AF | Ordinal: 2224
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9AC | Ordinal: 2477
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD96 | Ordinal: 3479
        void simulate(double);

    // RVA: 0x146 | Ordinal: 327
        void wInertialClusterOpener(class wInertialClusterOpener &&);

    // RVA: 0x147 | Ordinal: 328
        void wInertialClusterOpener(class wInertialClusterOpener const &);

    // RVA: 0x148 | Ordinal: 329
        void wInertialClusterOpener(class wInertialClusterOpenerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x25B | Ordinal: 604
        void _wInertialClusterOpener(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WINERTIALCLUSTEROPENER_HPP
