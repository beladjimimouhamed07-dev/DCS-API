#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wDTVSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDTVSeeker
{
public:

    // RVA: 0x4A2 | Ordinal: 1187
        void __getInputPorts(void);

    // RVA: 0x53B | Ordinal: 1340
        void __getOutputPorts(void);

    // RVA: 0x60D | Ordinal: 1550
        void calcOBA(void);

    // RVA: 0x7CA | Ordinal: 1995
        void getDesc_(void);

    // RVA: 0x87D | Ordinal: 2174
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x97A | Ordinal: 2427
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA51 | Ordinal: 2642
        void getTargetVel(void);

    // RVA: 0xAB8 | Ordinal: 2745
        void isShipType(class wsType const &);

    // RVA: 0xACC | Ordinal: 2765
        void isTargetLocked(void);

    // RVA: 0xB35 | Ordinal: 2870
        void readInputData(void);

    // RVA: 0xB88 | Ordinal: 2953
        void registerStateData(void);

    // RVA: 0xBF6 | Ordinal: 3063
        void seekerBlockProc(void);

    // RVA: 0xC1E | Ordinal: 3103
        void sendVisData(void);

    // RVA: 0xCC8 | Ordinal: 3273
        void setShipTrack(bool);

    // RVA: 0xD29 | Ordinal: 3370
        void simulate(double);

    // RVA: 0xB2 | Ordinal: 179
        void wDTVSeeker(class wDTVSeeker &&);

    // RVA: 0xB3 | Ordinal: 180
        void wDTVSeeker(class wDTVSeeker const &);

    // RVA: 0xB4 | Ordinal: 181
        void wDTVSeeker(class wDTVSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x222 | Ordinal: 547
        void _wDTVSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDTVSEEKER_HPP
