#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wWCSE_SPARROW
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWCSE_SPARROW
{
public:

    // RVA: 0x4FD | Ordinal: 1278
        void __getInputPorts(void);

    // RVA: 0x596 | Ordinal: 1431
        void __getOutputPorts(void);

    // RVA: 0x825 | Ordinal: 2086
        void getDesc_(void);

    // RVA: 0x8D8 | Ordinal: 2265
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D5 | Ordinal: 2518
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA3D | Ordinal: 2622
        void getRelativeDensity(double);

    // RVA: 0xBD4 | Ordinal: 3029
        void registerStateData(void);

    // RVA: 0xCDB | Ordinal: 3292
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xD76 | Ordinal: 3447
        void simulate(double);

    // RVA: 0x1D4 | Ordinal: 469
        void wWCSE_SPARROW(class wWCSE_SPARROW const &);

    // RVA: 0x1D5 | Ordinal: 470
        void wWCSE_SPARROW(class wWCSE_SPARROW_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x290 | Ordinal: 657
        void _wWCSE_SPARROW(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WWCSE_SPARROW_HPP
