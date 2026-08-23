#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wDACVSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDACVSeeker
{
public:

    // RVA: 0x498 | Ordinal: 1177
        void __getInputPorts(void);

    // RVA: 0x531 | Ordinal: 1330
        void __getOutputPorts(void);

    // RVA: 0x61A | Ordinal: 1563
        void calcPointLos(class Math::Vector<3, double>);

    // RVA: 0x6E2 | Ordinal: 1763
        void defineTarget(void);

    // RVA: 0x7C0 | Ordinal: 1985
        void getDesc_(void);

    // RVA: 0x873 | Ordinal: 2164
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x927 | Ordinal: 2344
        void getLockRange(double);

    // RVA: 0x928 | Ordinal: 2345
        void getLockRange(class MovingObject *);

    // RVA: 0x931 | Ordinal: 2354
        void getMinStableSignalH(class MovingObject *);

    // RVA: 0x970 | Ordinal: 2417
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA3F | Ordinal: 2624
        void getSeaVisRange(double, double);

    // RVA: 0xAB7 | Ordinal: 2744
        void isShipType(class wsType const &);

    // RVA: 0xAC0 | Ordinal: 2753
        void isTargetLocked(unsigned int);

    // RVA: 0xAD4 | Ordinal: 2773
        void isTestTargetVisible(void);

    // RVA: 0xAD8 | Ordinal: 2777
        void isTrackedAsShip(unsigned int);

    // RVA: 0xB7E | Ordinal: 2943
        void registerStateData(void);

    // RVA: 0xC19 | Ordinal: 3098
        void sendVisData(void);

    // RVA: 0xC3B | Ordinal: 3132
        void setActiveRadOn(bool);

    // RVA: 0xCAF | Ordinal: 3248
        void setRCSMode(int);

    // RVA: 0xCC7 | Ordinal: 3272
        void setShipTrack(bool);

    // RVA: 0xCF3 | Ordinal: 3316
        void shipTrack(void);

    // RVA: 0xD20 | Ordinal: 3361
        void simulate(double);

    // RVA: 0xDA6 | Ordinal: 3495
        void targetSearchFOV(void);

    // RVA: 0xDBC | Ordinal: 3517
        void tryToGetStartData(void);

    // RVA: 0xDD7 | Ordinal: 3544
        void updateTargetDynamicError(void);

    // RVA: 0x96 | Ordinal: 151
        void wDACVSeeker(class wDACVSeeker &&);

    // RVA: 0x97 | Ordinal: 152
        void wDACVSeeker(class wDACVSeeker const &);

    // RVA: 0x98 | Ordinal: 153
        void wDACVSeeker(class wDACVSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x218 | Ordinal: 537
        void _wDACVSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDACVSEEKER_HPP
