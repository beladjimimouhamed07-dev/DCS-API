#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wEngineTJ
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineTJ
{
public:

    // RVA: 0x4B2 | Ordinal: 1203
        void __getInputPorts(void);

    // RVA: 0x54B | Ordinal: 1356
        void __getOutputPorts(void);

    // RVA: 0x7DA | Ordinal: 2011
        void getDesc_(void);

    // RVA: 0x88D | Ordinal: 2190
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x98A | Ordinal: 2443
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB96 | Ordinal: 2967
        void registerStateData(void);

    // RVA: 0xD38 | Ordinal: 3385
        void simulate(double);

    // RVA: 0xD9C | Ordinal: 3485
        void switchState_(int);

    // RVA: 0xEA | Ordinal: 235
        void wEngineTJ(class wEngineTJ const &);

    // RVA: 0xEB | Ordinal: 236
        void wEngineTJ(class wEngineTJDescriptor const *, class wSimulationSystem *);

    // RVA: 0x237 | Ordinal: 568
        void _wEngineTJ(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WENGINETJ_HPP
