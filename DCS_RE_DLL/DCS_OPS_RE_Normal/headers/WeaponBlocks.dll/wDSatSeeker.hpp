#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x710 | Ordinal: 1809
        void genSatError(void);

    // RVA: 0x7CE | Ordinal: 1999
        void getDesc_(void);

    // RVA: 0x882 | Ordinal: 2179
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x97F | Ordinal: 2432
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAB7 | Ordinal: 2744
        void init_randoms(int);

    // RVA: 0xBAE | Ordinal: 2991
        void registerStateData(void);

    // RVA: 0xD71 | Ordinal: 3442
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDSATSEEKER_HPP
