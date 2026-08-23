#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wEngineCtrl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineCtrl
{
public:

    // RVA: 0x4AE | Ordinal: 1199
        void __getInputPorts(void);

    // RVA: 0x547 | Ordinal: 1352
        void __getOutputPorts(void);

    // RVA: 0x7DE | Ordinal: 2015
        void getDesc_(void);

    // RVA: 0x892 | Ordinal: 2195
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x98F | Ordinal: 2448
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xABC | Ordinal: 2749
        void init_randoms(int);

    // RVA: 0xBBC | Ordinal: 3005
        void registerStateData(void);

    // RVA: 0xD7F | Ordinal: 3456
        void simulate(double);

    // RVA: 0xDEA | Ordinal: 3563
        void syncEngError(double);

    // RVA: 0xD6 | Ordinal: 215
        void wEngineCtrl(class wEngineCtrl &&);

    // RVA: 0xD7 | Ordinal: 216
        void wEngineCtrl(class wEngineCtrl const &);

    // RVA: 0xD8 | Ordinal: 217
        void wEngineCtrl(class wEngineCtrlDescriptor const *, class wSimulationSystem *);

    // RVA: 0x22F | Ordinal: 560
        void _wEngineCtrl(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WENGINECTRL_HPP
