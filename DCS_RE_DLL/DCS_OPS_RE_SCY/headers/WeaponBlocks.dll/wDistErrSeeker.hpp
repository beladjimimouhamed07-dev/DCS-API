#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7D9 | Ordinal: 2010
        void getDesc_(void);

    // RVA: 0x88D | Ordinal: 2190
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x98A | Ordinal: 2443
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA83 | Ordinal: 2692
        void initAimError(void);

    // RVA: 0xAF5 | Ordinal: 2806
        void isTargetLocked(void);

    // RVA: 0xBB9 | Ordinal: 3002
        void registerStateData(void);

    // RVA: 0xC39 | Ordinal: 3130
        void seekerBlockProc(void);

    // RVA: 0xD7A | Ordinal: 3451
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDISTERRSEEKER_HPP
