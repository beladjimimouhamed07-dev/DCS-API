#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x82D | Ordinal: 2094
        void getDesc_(void);

    // RVA: 0x8E1 | Ordinal: 2274
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9DE | Ordinal: 2527
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA48 | Ordinal: 2633
        void getRelativeDensity(double);

    // RVA: 0xBFE | Ordinal: 3071
        void registerStateData(void);

    // RVA: 0xD26 | Ordinal: 3367
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xDC1 | Ordinal: 3522
        void simulate(double);

    // RVA: 0x1D4 | Ordinal: 469
        void wWCSE_SPARROW(class wWCSE_SPARROW const &);

    // RVA: 0x1D5 | Ordinal: 470
        void wWCSE_SPARROW(class wWCSE_SPARROW_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x290 | Ordinal: 657
        void _wWCSE_SPARROW(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WWCSE_SPARROW_HPP
