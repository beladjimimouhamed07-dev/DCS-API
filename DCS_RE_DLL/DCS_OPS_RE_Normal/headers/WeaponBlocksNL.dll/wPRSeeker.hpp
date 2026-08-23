#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wPRSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wPRSeeker
{
public:

    // RVA: 0x4DD | Ordinal: 1246
        void __getInputPorts(void);

    // RVA: 0x576 | Ordinal: 1399
        void __getOutputPorts(void);

    // RVA: 0x5D1 | Ordinal: 1490
        void calcCurrenttargetPosParams(void);

    // RVA: 0x6BC | Ordinal: 1725
        void cposFromMissilePosRot(void);

    // RVA: 0x805 | Ordinal: 2054
        void getDesc_(void);

    // RVA: 0x8B8 | Ordinal: 2233
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9B5 | Ordinal: 2486
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAA2 | Ordinal: 2723
        void init_randoms(int);

    // RVA: 0xACF | Ordinal: 2768
        void isTargetLocked(void);

    // RVA: 0xB45 | Ordinal: 2886
        void readInputData(void);

    // RVA: 0xBB8 | Ordinal: 3001
        void registerStateData(void);

    // RVA: 0xBF9 | Ordinal: 3066
        void seekerBlockProc(void);

    // RVA: 0xC00 | Ordinal: 3073
        void sendBlockIsOff(void);

    // RVA: 0xC10 | Ordinal: 3089
        void sendNoTarget(void);

    // RVA: 0xC20 | Ordinal: 3105
        void sendVisData(void);

    // RVA: 0xD5C | Ordinal: 3421
        void simulate(double);

    // RVA: 0x178 | Ordinal: 377
        void wPRSeeker(class wPRSeeker &&);

    // RVA: 0x179 | Ordinal: 378
        void wPRSeeker(class wPRSeeker const &);

    // RVA: 0x17A | Ordinal: 379
        void wPRSeeker(class wPRSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x26D | Ordinal: 622
        void _wPRSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WPRSEEKER_HPP
