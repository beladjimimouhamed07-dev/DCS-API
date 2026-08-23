#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wGP_LONGBOW
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGP_LONGBOW
{
public:

    // RVA: 0x4C1 | Ordinal: 1218
        void __getInputPorts(void);

    // RVA: 0x55A | Ordinal: 1371
        void __getOutputPorts(void);

    // RVA: 0x5ED | Ordinal: 1518
        void calcGuidanceCmd(double);

    // RVA: 0x6A3 | Ordinal: 1700
        void controlProcessorMode(double);

    // RVA: 0x6A5 | Ordinal: 1702
        void controlSeeker(double);

    // RVA: 0x7E9 | Ordinal: 2026
        void getDesc_(void);

    // RVA: 0x89C | Ordinal: 2205
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x999 | Ordinal: 2458
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA6B | Ordinal: 2668
        void handleInputData(double);

    // RVA: 0xBA1 | Ordinal: 2978
        void registerStateData(void);

    // RVA: 0xC55 | Ordinal: 3158
        void setDBSMode(void);

    // RVA: 0xCE1 | Ordinal: 3298
        void setTargetType(int);

    // RVA: 0xD40 | Ordinal: 3393
        void simulate(double);

    // RVA: 0x127 | Ordinal: 296
        void wGP_LONGBOW(class wGP_LONGBOW const &);

    // RVA: 0x128 | Ordinal: 297
        void wGP_LONGBOW(class wGP_LONGBOW_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x24E | Ordinal: 591
        void _wGP_LONGBOW(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WGP_LONGBOW_HPP
