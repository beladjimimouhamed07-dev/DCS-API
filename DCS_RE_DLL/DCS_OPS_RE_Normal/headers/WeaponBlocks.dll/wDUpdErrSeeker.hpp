#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7D3 | Ordinal: 2004
        void getDesc_(void);

    // RVA: 0x887 | Ordinal: 2184
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x984 | Ordinal: 2437
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB60 | Ordinal: 2913
        void readInputData(void);

    // RVA: 0xBB3 | Ordinal: 2996
        void registerStateData(void);

    // RVA: 0xC38 | Ordinal: 3129
        void seekerBlockProc(void);

    // RVA: 0xCE3 | Ordinal: 3300
        void setNewError(bool);

    // RVA: 0xD75 | Ordinal: 3446
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDUPDERRSEEKER_HPP
