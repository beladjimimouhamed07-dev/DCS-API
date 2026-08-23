#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wBlockLauncherAdjPos
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockLauncherAdjPos
{
public:

    // RVA: 0x488 | Ordinal: 1161
        void __getInputPorts(void);

    // RVA: 0x521 | Ordinal: 1314
        void __getOutputPorts(void);

    // RVA: 0x730 | Ordinal: 1841
        void getBlockStateDataSize(void);

    // RVA: 0x7B0 | Ordinal: 1969
        void getDesc_(void);

    // RVA: 0x863 | Ordinal: 2148
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x960 | Ordinal: 2401
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xC83 | Ordinal: 3204
        void setLaunchData_(class wAmmunition *);

    // RVA: 0x66 | Ordinal: 103
        void wBlockLauncherAdjPos(class wBlockLauncherAdjPos &&);

    // RVA: 0x67 | Ordinal: 104
        void wBlockLauncherAdjPos(class wBlockLauncherAdjPos const &);

    // RVA: 0x68 | Ordinal: 105
        void wBlockLauncherAdjPos(class wBlockLauncherAdjPosDescriptor const *, class wSimulationSystem *);

    // RVA: 0x206 | Ordinal: 519
        void _wBlockLauncherAdjPos(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WBLOCKLAUNCHERADJPOS_HPP
