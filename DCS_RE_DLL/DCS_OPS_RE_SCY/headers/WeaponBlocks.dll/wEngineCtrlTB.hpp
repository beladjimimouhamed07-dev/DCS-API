#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7DF | Ordinal: 2016
        void getDesc_(void);

    // RVA: 0x893 | Ordinal: 2196
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x990 | Ordinal: 2449
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBBD | Ordinal: 3006
        void registerStateData(void);

    // RVA: 0xCE1 | Ordinal: 3298
        void setMaxThrust(bool);

    // RVA: 0xD80 | Ordinal: 3457
        void simulate(double);

    // RVA: 0xD9 | Ordinal: 218
        void wEngineCtrlTB(class wEngineCtrlTB const &);

    // RVA: 0xDA | Ordinal: 219
        void wEngineCtrlTB(class wEngineCtrlTBDescriptor const *, class wSimulationSystem *);

    // RVA: 0x230 | Ordinal: 561
        void _wEngineCtrlTB(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WENGINECTRLTB_HPP
