#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wDSatSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDSatSeeker
{
public:

    // RVA: 0x49E | Ordinal: 1183
        void __getInputPorts(void);

    // RVA: 0x537 | Ordinal: 1336
        void __getOutputPorts(void);

    // RVA: 0x70A | Ordinal: 1803
        void genSatError(void);

    // RVA: 0x7C6 | Ordinal: 1991
        void getDesc_(void);

    // RVA: 0x879 | Ordinal: 2170
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x976 | Ordinal: 2423
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA9D | Ordinal: 2718
        void init_randoms(int);

    // RVA: 0xB84 | Ordinal: 2949
        void registerStateData(void);

    // RVA: 0xD26 | Ordinal: 3367
        void simulate(double);

    // RVA: 0xA6 | Ordinal: 167
        void wDSatSeeker(class wDSatSeeker &&);

    // RVA: 0xA7 | Ordinal: 168
        void wDSatSeeker(class wDSatSeeker const &);

    // RVA: 0xA8 | Ordinal: 169
        void wDSatSeeker(class wDSatSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x21E | Ordinal: 543
        void _wDSatSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDSATSEEKER_HPP
