#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x731 | Ordinal: 1842
        void getBlockStateDataSize(void);

    // RVA: 0x7F3 | Ordinal: 2036
        void getDesc_(void);

    // RVA: 0x8A6 | Ordinal: 2215
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A3 | Ordinal: 2468
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD4B | Ordinal: 3404
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WINERTIALCLUSTEROPENER_HPP
