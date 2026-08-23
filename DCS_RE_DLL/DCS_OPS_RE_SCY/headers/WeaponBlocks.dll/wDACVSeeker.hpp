#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6E6 | Ordinal: 1767
        void defineTarget(void);

    // RVA: 0x7C8 | Ordinal: 1993
        void getDesc_(void);

    // RVA: 0x87C | Ordinal: 2173
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x930 | Ordinal: 2353
        void getLockRange(double);

    // RVA: 0x931 | Ordinal: 2354
        void getLockRange(class MovingObject *);

    // RVA: 0x93A | Ordinal: 2363
        void getMinStableSignalH(class MovingObject *);

    // RVA: 0x979 | Ordinal: 2426
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA4E | Ordinal: 2639
        void getSeaVisRange(double, double);

    // RVA: 0xADE | Ordinal: 2783
        void isShipType(class wsType const &);

    // RVA: 0xAE7 | Ordinal: 2792
        void isTargetLocked(unsigned int);

    // RVA: 0xAFB | Ordinal: 2812
        void isTestTargetVisible(void);

    // RVA: 0xAFF | Ordinal: 2816
        void isTrackedAsShip(unsigned int);

    // RVA: 0xBA8 | Ordinal: 2985
        void registerStateData(void);

    // RVA: 0xC5D | Ordinal: 3166
        void sendVisData(void);

    // RVA: 0xC84 | Ordinal: 3205
        void setActiveRadOn(bool);

    // RVA: 0xCF9 | Ordinal: 3322
        void setRCSMode(int);

    // RVA: 0xD12 | Ordinal: 3347
        void setShipTrack(bool);

    // RVA: 0xD3E | Ordinal: 3391
        void shipTrack(void);

    // RVA: 0xD6B | Ordinal: 3436
        void simulate(double);

    // RVA: 0xDF1 | Ordinal: 3570
        void targetSearchFOV(void);

    // RVA: 0xE0B | Ordinal: 3596
        void tryToGetStartData(void);

    // RVA: 0xE26 | Ordinal: 3623
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDACVSEEKER_HPP
