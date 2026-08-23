#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wSimpleDistTrigger
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSimpleDistTrigger
{
public:

    // RVA: 0x4EE | Ordinal: 1263
        void __getInputPorts(void);

    // RVA: 0x587 | Ordinal: 1416
        void __getOutputPorts(void);

    // RVA: 0x81E | Ordinal: 2079
        void getDesc_(void);

    // RVA: 0x8D2 | Ordinal: 2259
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9CF | Ordinal: 2512
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBF0 | Ordinal: 3057
        void registerStateData(void);

    // RVA: 0xDB3 | Ordinal: 3508
        void simulate(double);

    // RVA: 0x1A8 | Ordinal: 425
        void wSimpleDistTrigger(class wSimpleDistTrigger &&);

    // RVA: 0x1A9 | Ordinal: 426
        void wSimpleDistTrigger(class wSimpleDistTrigger const &);

    // RVA: 0x1AA | Ordinal: 427
        void wSimpleDistTrigger(class wSimpleDistTriggerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x280 | Ordinal: 641
        void _wSimpleDistTrigger(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WSIMPLEDISTTRIGGER_HPP
