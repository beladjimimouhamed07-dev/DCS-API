#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wEngineCtrlTB
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineCtrlTB
{
public:

    // RVA: 0x4AF | Ordinal: 1200
        void __getInputPorts(void);

    // RVA: 0x548 | Ordinal: 1353
        void __getOutputPorts(void);

    // RVA: 0x7D7 | Ordinal: 2008
        void getDesc_(void);

    // RVA: 0x88A | Ordinal: 2187
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x987 | Ordinal: 2440
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB93 | Ordinal: 2964
        void registerStateData(void);

    // RVA: 0xC97 | Ordinal: 3224
        void setMaxThrust(bool);

    // RVA: 0xD35 | Ordinal: 3382
        void simulate(double);

    // RVA: 0xD9 | Ordinal: 218
        void wEngineCtrlTB(class wEngineCtrlTB const &);

    // RVA: 0xDA | Ordinal: 219
        void wEngineCtrlTB(class wEngineCtrlTBDescriptor const *, class wSimulationSystem *);

    // RVA: 0x230 | Ordinal: 561
        void _wEngineCtrlTB(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WENGINECTRLTB_HPP
