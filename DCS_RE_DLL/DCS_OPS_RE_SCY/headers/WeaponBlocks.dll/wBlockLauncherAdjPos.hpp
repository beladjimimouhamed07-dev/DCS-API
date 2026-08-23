#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x738 | Ordinal: 1849
        void getBlockStateDataSize(void);

    // RVA: 0x7B8 | Ordinal: 1977
        void getDesc_(void);

    // RVA: 0x86C | Ordinal: 2157
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x969 | Ordinal: 2410
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xCCD | Ordinal: 3278
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WBLOCKLAUNCHERADJPOS_HPP
