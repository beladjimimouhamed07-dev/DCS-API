#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6A7 | Ordinal: 1704
        void controlProcessorMode(double);

    // RVA: 0x6A9 | Ordinal: 1706
        void controlSeeker(double);

    // RVA: 0x7F1 | Ordinal: 2034
        void getDesc_(void);

    // RVA: 0x8A5 | Ordinal: 2214
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A2 | Ordinal: 2467
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA7A | Ordinal: 2683
        void handleInputData(double);

    // RVA: 0xBCB | Ordinal: 3020
        void registerStateData(void);

    // RVA: 0xC9F | Ordinal: 3232
        void setDBSMode(void);

    // RVA: 0xD2C | Ordinal: 3373
        void setTargetType(int);

    // RVA: 0xD8B | Ordinal: 3468
        void simulate(double);

    // RVA: 0x127 | Ordinal: 296
        void wGP_LONGBOW(class wGP_LONGBOW const &);

    // RVA: 0x128 | Ordinal: 297
        void wGP_LONGBOW(class wGP_LONGBOW_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x24E | Ordinal: 591
        void _wGP_LONGBOW(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WGP_LONGBOW_HPP
