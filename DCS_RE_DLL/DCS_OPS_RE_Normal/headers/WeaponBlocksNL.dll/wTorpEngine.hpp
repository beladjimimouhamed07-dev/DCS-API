#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x81B | Ordinal: 2076
        void getDesc_(void);

    // RVA: 0x8CE | Ordinal: 2255
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x92F | Ordinal: 2352
        void getMaxThrust(void);

    // RVA: 0x932 | Ordinal: 2355
        void getMinThrust(void);

    // RVA: 0x9CB | Ordinal: 2508
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA61 | Ordinal: 2658
        void getWorkTime(double);

    // RVA: 0xBCA | Ordinal: 3019
        void registerStateData(void);

    // RVA: 0xCE7 | Ordinal: 3304
        void setThrust(double);

    // RVA: 0xD6C | Ordinal: 3437
        void simulate(double);

    // RVA: 0x1B7 | Ordinal: 440
        void wTorpEngine(class wTorpEngine const &);

    // RVA: 0x1B8 | Ordinal: 441
        void wTorpEngine(class wTorpEngineDescriptor const *, class wSimulationSystem *);

    // RVA: 0x285 | Ordinal: 646
        void _wTorpEngine(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WTORPENGINE_HPP
