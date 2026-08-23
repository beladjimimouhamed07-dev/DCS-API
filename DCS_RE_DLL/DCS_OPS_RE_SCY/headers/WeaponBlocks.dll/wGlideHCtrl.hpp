#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7F6 | Ordinal: 2039
        void getDesc_(void);

    // RVA: 0x8AA | Ordinal: 2219
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A7 | Ordinal: 2472
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBD0 | Ordinal: 3025
        void registerStateData(void);

    // RVA: 0xD90 | Ordinal: 3473
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WGLIDEHCTRL_HPP
