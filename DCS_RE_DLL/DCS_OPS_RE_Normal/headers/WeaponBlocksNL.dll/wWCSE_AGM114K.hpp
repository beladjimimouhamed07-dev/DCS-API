#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x81F | Ordinal: 2080
        void getDesc_(void);

    // RVA: 0x8D2 | Ordinal: 2259
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9CF | Ordinal: 2512
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBCE | Ordinal: 3023
        void registerStateData(void);

    // RVA: 0xC87 | Ordinal: 3208
        void setLaunchMode(int);

    // RVA: 0xCD5 | Ordinal: 3286
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xD70 | Ordinal: 3441
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WWCSE_AGM114K_HPP
