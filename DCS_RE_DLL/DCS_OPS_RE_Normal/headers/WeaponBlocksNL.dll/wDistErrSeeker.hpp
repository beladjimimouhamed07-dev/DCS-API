#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wDistErrSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDistErrSeeker
{
public:

    // RVA: 0x4A9 | Ordinal: 1194
        void __getInputPorts(void);

    // RVA: 0x542 | Ordinal: 1347
        void __getOutputPorts(void);

    // RVA: 0x7D1 | Ordinal: 2002
        void getDesc_(void);

    // RVA: 0x884 | Ordinal: 2181
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x981 | Ordinal: 2434
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xACE | Ordinal: 2767
        void isTargetLocked(void);

    // RVA: 0xB8F | Ordinal: 2960
        void registerStateData(void);

    // RVA: 0xBF8 | Ordinal: 3065
        void seekerBlockProc(void);

    // RVA: 0xD2F | Ordinal: 3376
        void simulate(double);

    // RVA: 0xC6 | Ordinal: 199
        void wDistErrSeeker(class wDistErrSeeker &&);

    // RVA: 0xC7 | Ordinal: 200
        void wDistErrSeeker(class wDistErrSeeker const &);

    // RVA: 0xC8 | Ordinal: 201
        void wDistErrSeeker(class wDistErrSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x229 | Ordinal: 554
        void _wDistErrSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDISTERRSEEKER_HPP
