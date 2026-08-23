#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wWCSE_R27T
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWCSE_R27T
{
public:

    // RVA: 0x4FC | Ordinal: 1277
        void __getInputPorts(void);

    // RVA: 0x595 | Ordinal: 1430
        void __getOutputPorts(void);

    // RVA: 0x82C | Ordinal: 2093
        void getDesc_(void);

    // RVA: 0x8E0 | Ordinal: 2273
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9DD | Ordinal: 2526
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA47 | Ordinal: 2632
        void getRelativeDensity(double);

    // RVA: 0xBFD | Ordinal: 3070
        void registerStateData(void);

    // RVA: 0xCDF | Ordinal: 3296
        void setManualRange(double);

    // RVA: 0xD25 | Ordinal: 3366
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xD2B | Ordinal: 3372
        void setTargetSize(int);

    // RVA: 0xDC0 | Ordinal: 3521
        void simulate(double);

    // RVA: 0x1D2 | Ordinal: 467
        void wWCSE_R27T(class wWCSE_R27T const &);

    // RVA: 0x1D3 | Ordinal: 468
        void wWCSE_R27T(class wWCSE_R27T_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x28F | Ordinal: 656
        void _wWCSE_R27T(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WWCSE_R27T_HPP
