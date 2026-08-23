#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6C0 | Ordinal: 1729
        void cposFromMissilePosRot(void);

    // RVA: 0x80D | Ordinal: 2062
        void getDesc_(void);

    // RVA: 0x8C1 | Ordinal: 2242
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9BE | Ordinal: 2495
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAC5 | Ordinal: 2758
        void init_randoms(int);

    // RVA: 0xAF6 | Ordinal: 2807
        void isTargetLocked(void);

    // RVA: 0xB6F | Ordinal: 2928
        void readInputData(void);

    // RVA: 0xBE2 | Ordinal: 3043
        void registerStateData(void);

    // RVA: 0xC3A | Ordinal: 3131
        void seekerBlockProc(void);

    // RVA: 0xC40 | Ordinal: 3137
        void selectVisTarget(void);

    // RVA: 0xC44 | Ordinal: 3141
        void sendBlockIsOff(void);

    // RVA: 0xC54 | Ordinal: 3157
        void sendNoTarget(void);

    // RVA: 0xC64 | Ordinal: 3173
        void sendVisData(void);

    // RVA: 0xDA7 | Ordinal: 3496
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WPRSEEKER_HPP
