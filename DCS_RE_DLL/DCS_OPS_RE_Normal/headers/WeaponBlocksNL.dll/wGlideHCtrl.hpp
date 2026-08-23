#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wGlideHCtrl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGlideHCtrl
{
public:

    // RVA: 0x4C6 | Ordinal: 1223
        void __getInputPorts(void);

    // RVA: 0x55F | Ordinal: 1376
        void __getOutputPorts(void);

    // RVA: 0x7EE | Ordinal: 2031
        void getDesc_(void);

    // RVA: 0x8A1 | Ordinal: 2210
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x99E | Ordinal: 2463
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBA6 | Ordinal: 2983
        void registerStateData(void);

    // RVA: 0xD45 | Ordinal: 3398
        void simulate(double);

    // RVA: 0x132 | Ordinal: 307
        void wGlideHCtrl(class wGlideHCtrl &&);

    // RVA: 0x133 | Ordinal: 308
        void wGlideHCtrl(class wGlideHCtrl const &);

    // RVA: 0x134 | Ordinal: 309
        void wGlideHCtrl(class wGlideHCtrlDescriptor const *, class wSimulationSystem *);

    // RVA: 0x253 | Ordinal: 596
        void _wGlideHCtrl(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WGLIDEHCTRL_HPP
