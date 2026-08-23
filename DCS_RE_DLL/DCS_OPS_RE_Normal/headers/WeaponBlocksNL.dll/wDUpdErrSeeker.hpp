#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wDUpdErrSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDUpdErrSeeker
{
public:

    // RVA: 0x4A3 | Ordinal: 1188
        void __getInputPorts(void);

    // RVA: 0x53C | Ordinal: 1341
        void __getOutputPorts(void);

    // RVA: 0x7CB | Ordinal: 1996
        void getDesc_(void);

    // RVA: 0x87E | Ordinal: 2175
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x97B | Ordinal: 2428
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB36 | Ordinal: 2871
        void readInputData(void);

    // RVA: 0xB89 | Ordinal: 2954
        void registerStateData(void);

    // RVA: 0xBF7 | Ordinal: 3064
        void seekerBlockProc(void);

    // RVA: 0xC99 | Ordinal: 3226
        void setNewError(bool);

    // RVA: 0xD2A | Ordinal: 3371
        void simulate(double);

    // RVA: 0xB5 | Ordinal: 182
        void wDUpdErrSeeker(class wDUpdErrSeeker &&);

    // RVA: 0xB6 | Ordinal: 183
        void wDUpdErrSeeker(class wDUpdErrSeeker const &);

    // RVA: 0xB7 | Ordinal: 184
        void wDUpdErrSeeker(class wDUpdErrSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x223 | Ordinal: 548
        void _wDUpdErrSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDUPDERRSEEKER_HPP
