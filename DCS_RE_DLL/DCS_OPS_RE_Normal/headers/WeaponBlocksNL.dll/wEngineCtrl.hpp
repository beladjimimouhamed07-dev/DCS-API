#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7D6 | Ordinal: 2007
        void getDesc_(void);

    // RVA: 0x889 | Ordinal: 2186
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x986 | Ordinal: 2439
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB92 | Ordinal: 2963
        void registerStateData(void);

    // RVA: 0xD34 | Ordinal: 3381
        void simulate(double);

    // RVA: 0xD9F | Ordinal: 3488
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WENGINECTRL_HPP
