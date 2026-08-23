#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wFMGuidedBomb
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wFMGuidedBomb
{
public:

    // RVA: 0x4BA | Ordinal: 1211
        void __getInputPorts(void);

    // RVA: 0x553 | Ordinal: 1364
        void __getOutputPorts(void);

    // RVA: 0x7E2 | Ordinal: 2019
        void getDesc_(void);

    // RVA: 0x895 | Ordinal: 2198
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x992 | Ordinal: 2451
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD81 | Ordinal: 3458
        void simulateDt(double, double);

    // RVA: 0x10F | Ordinal: 272
        void wFMGuidedBomb(class wFMGuidedBomb &&);

    // RVA: 0x110 | Ordinal: 273
        void wFMGuidedBomb(class wFMGuidedBomb const &);

    // RVA: 0x111 | Ordinal: 274
        void wFMGuidedBomb(class wFMGuidedBombDescriptor const *, class wSimulationSystem *);

    // RVA: 0x245 | Ordinal: 582
        void _wFMGuidedBomb(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WFMGUIDEDBOMB_HPP
