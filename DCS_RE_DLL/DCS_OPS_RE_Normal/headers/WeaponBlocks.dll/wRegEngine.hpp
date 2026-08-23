#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x812 | Ordinal: 2067
        void getDesc_(void);

    // RVA: 0x8C6 | Ordinal: 2247
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C3 | Ordinal: 2500
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBE6 | Ordinal: 3047
        void registerStateData(void);

    // RVA: 0xDAB | Ordinal: 3500
        void simulate(double);

    // RVA: 0x188 | Ordinal: 393
        void wRegEngine(class wRegEngine const &);

    // RVA: 0x189 | Ordinal: 394
        void wRegEngine(class wRegEngineDescriptor const *, class wSimulationSystem *);

    // RVA: 0x273 | Ordinal: 628
        void _wRegEngine(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WREGENGINE_HPP
