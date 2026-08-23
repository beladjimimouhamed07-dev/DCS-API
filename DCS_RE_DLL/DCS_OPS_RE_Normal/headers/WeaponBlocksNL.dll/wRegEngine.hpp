#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wRegEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wRegEngine
{
public:

    // RVA: 0x4E2 | Ordinal: 1251
        void __getInputPorts(void);

    // RVA: 0x57B | Ordinal: 1404
        void __getOutputPorts(void);

    // RVA: 0x80A | Ordinal: 2059
        void getDesc_(void);

    // RVA: 0x8BD | Ordinal: 2238
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9BA | Ordinal: 2491
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBBC | Ordinal: 3005
        void registerStateData(void);

    // RVA: 0xD60 | Ordinal: 3425
        void simulate(double);

    // RVA: 0x188 | Ordinal: 393
        void wRegEngine(class wRegEngine const &);

    // RVA: 0x189 | Ordinal: 394
        void wRegEngine(class wRegEngineDescriptor const *, class wSimulationSystem *);

    // RVA: 0x273 | Ordinal: 628
        void _wRegEngine(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WREGENGINE_HPP
