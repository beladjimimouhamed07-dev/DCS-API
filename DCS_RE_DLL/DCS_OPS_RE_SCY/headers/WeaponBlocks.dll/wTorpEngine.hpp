#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wTorpEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wTorpEngine
{
public:

    // RVA: 0x4F3 | Ordinal: 1268
        void __getInputPorts(void);

    // RVA: 0x58C | Ordinal: 1421
        void __getOutputPorts(void);

    // RVA: 0x823 | Ordinal: 2084
        void getDesc_(void);

    // RVA: 0x8D7 | Ordinal: 2264
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x938 | Ordinal: 2361
        void getMaxThrust(void);

    // RVA: 0x93B | Ordinal: 2364
        void getMinThrust(void);

    // RVA: 0x9D4 | Ordinal: 2517
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA70 | Ordinal: 2673
        void getWorkTime(double);

    // RVA: 0xBF4 | Ordinal: 3061
        void registerStateData(void);

    // RVA: 0xD32 | Ordinal: 3379
        void setThrust(double);

    // RVA: 0xDB7 | Ordinal: 3512
        void simulate(double);

    // RVA: 0x1B7 | Ordinal: 440
        void wTorpEngine(class wTorpEngine const &);

    // RVA: 0x1B8 | Ordinal: 441
        void wTorpEngine(class wTorpEngineDescriptor const *, class wSimulationSystem *);

    // RVA: 0x285 | Ordinal: 646
        void _wTorpEngine(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WTORPENGINE_HPP
