#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x824 | Ordinal: 2085
        void getDesc_(void);

    // RVA: 0x8D7 | Ordinal: 2264
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D4 | Ordinal: 2517
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA3C | Ordinal: 2621
        void getRelativeDensity(double);

    // RVA: 0xBD3 | Ordinal: 3028
        void registerStateData(void);

    // RVA: 0xC95 | Ordinal: 3222
        void setManualRange(double);

    // RVA: 0xCDA | Ordinal: 3291
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xCE0 | Ordinal: 3297
        void setTargetSize(int);

    // RVA: 0xD75 | Ordinal: 3446
        void simulate(double);

    // RVA: 0x1D2 | Ordinal: 467
        void wWCSE_R27T(class wWCSE_R27T const &);

    // RVA: 0x1D3 | Ordinal: 468
        void wWCSE_R27T(class wWCSE_R27T_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x28F | Ordinal: 656
        void _wWCSE_R27T(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WWCSE_R27T_HPP
