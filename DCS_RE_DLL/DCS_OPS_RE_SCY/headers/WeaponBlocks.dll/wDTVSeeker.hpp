#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7D2 | Ordinal: 2003
        void getDesc_(void);

    // RVA: 0x886 | Ordinal: 2183
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x983 | Ordinal: 2436
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA60 | Ordinal: 2657
        void getTargetVel(void);

    // RVA: 0xADF | Ordinal: 2784
        void isShipType(class wsType const &);

    // RVA: 0xAF3 | Ordinal: 2804
        void isTargetLocked(void);

    // RVA: 0xB5F | Ordinal: 2912
        void readInputData(void);

    // RVA: 0xBB2 | Ordinal: 2995
        void registerStateData(void);

    // RVA: 0xC37 | Ordinal: 3128
        void seekerBlockProc(void);

    // RVA: 0xC62 | Ordinal: 3171
        void sendVisData(void);

    // RVA: 0xD13 | Ordinal: 3348
        void setShipTrack(bool);

    // RVA: 0xD74 | Ordinal: 3445
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDTVSEEKER_HPP
