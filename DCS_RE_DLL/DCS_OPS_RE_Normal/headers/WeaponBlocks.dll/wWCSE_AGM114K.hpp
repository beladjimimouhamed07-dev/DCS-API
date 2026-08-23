#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wWCSE_AGM114K
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWCSE_AGM114K
{
public:

    // RVA: 0x4F7 | Ordinal: 1272
        void __getInputPorts(void);

    // RVA: 0x590 | Ordinal: 1425
        void __getOutputPorts(void);

    // RVA: 0x827 | Ordinal: 2088
        void getDesc_(void);

    // RVA: 0x8DB | Ordinal: 2268
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D8 | Ordinal: 2521
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBF8 | Ordinal: 3065
        void registerStateData(void);

    // RVA: 0xCD1 | Ordinal: 3282
        void setLaunchMode(int);

    // RVA: 0xD20 | Ordinal: 3361
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xDBB | Ordinal: 3516
        void simulate(double);

    // RVA: 0x1C4 | Ordinal: 453
        void wWCSE_AGM114K(class wWCSE_AGM114K &&);

    // RVA: 0x1C5 | Ordinal: 454
        void wWCSE_AGM114K(class wWCSE_AGM114K const &);

    // RVA: 0x1C6 | Ordinal: 455
        void wWCSE_AGM114K(class wWCSE_AGM114K_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x28A | Ordinal: 651
        void _wWCSE_AGM114K(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WWCSE_AGM114K_HPP
