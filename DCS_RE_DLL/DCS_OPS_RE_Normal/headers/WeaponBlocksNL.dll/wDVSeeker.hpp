#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wDVSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDVSeeker
{
public:

    // RVA: 0x4A4 | Ordinal: 1189
        void __getInputPorts(void);

    // RVA: 0x53D | Ordinal: 1342
        void __getOutputPorts(void);

    // RVA: 0x620 | Ordinal: 1569
        void calcPointLos(class Math::Vector<3, double>);

    // RVA: 0x636 | Ordinal: 1591
        void calcTargetPosError(void);

    // RVA: 0x656 | Ordinal: 1623
        void canTargetClassBeDetected(class MovingObject *);

    // RVA: 0x681 | Ordinal: 1666
        void checkTimer(void);

    // RVA: 0x7CC | Ordinal: 1997
        void getDesc_(void);

    // RVA: 0x87F | Ordinal: 2176
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x97C | Ordinal: 2429
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xACD | Ordinal: 2766
        void isTargetLocked(unsigned int);

    // RVA: 0xAD5 | Ordinal: 2774
        void isTestTargetVisible(void);

    // RVA: 0xB37 | Ordinal: 2872
        void readInputData(void);

    // RVA: 0xB8A | Ordinal: 2955
        void registerStateData(void);

    // RVA: 0xBE6 | Ordinal: 3047
        void saveDiffVals(void);

    // RVA: 0xBFB | Ordinal: 3068
        void selectFromFOV(void);

    // RVA: 0xBFF | Ordinal: 3072
        void sendBlockIsOff(void);

    // RVA: 0xC0F | Ordinal: 3088
        void sendNoTarget(void);

    // RVA: 0xC1F | Ordinal: 3104
        void sendVisData(void);

    // RVA: 0xC50 | Ordinal: 3153
        void setClientVisTarget(bool);

    // RVA: 0xD2B | Ordinal: 3372
        void simulate(double);

    // RVA: 0xDA8 | Ordinal: 3497
        void targetSearchFOV(void);

    // RVA: 0xDBE | Ordinal: 3519
        void tryToGetStartData(void);

    // RVA: 0xDDA | Ordinal: 3547
        void updateTargetDynamicError(void);

    // RVA: 0xB8 | Ordinal: 185
        void wDVSeeker(class wDVSeeker &&);

    // RVA: 0xB9 | Ordinal: 186
        void wDVSeeker(class wDVSeeker const &);

    // RVA: 0xBA | Ordinal: 187
        void wDVSeeker(class wDVSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x224 | Ordinal: 549
        void _wDVSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDVSEEKER_HPP
