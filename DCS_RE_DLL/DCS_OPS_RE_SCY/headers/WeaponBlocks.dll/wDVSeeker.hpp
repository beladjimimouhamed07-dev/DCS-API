#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x684 | Ordinal: 1669
        void checkTimer(void);

    // RVA: 0x7D4 | Ordinal: 2005
        void getDesc_(void);

    // RVA: 0x888 | Ordinal: 2185
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x985 | Ordinal: 2438
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAF4 | Ordinal: 2805
        void isTargetLocked(unsigned int);

    // RVA: 0xAFC | Ordinal: 2813
        void isTestTargetVisible(void);

    // RVA: 0xB61 | Ordinal: 2914
        void readInputData(void);

    // RVA: 0xBB4 | Ordinal: 2997
        void registerStateData(void);

    // RVA: 0xC26 | Ordinal: 3111
        void saveDiffVals(void);

    // RVA: 0xC3C | Ordinal: 3133
        void selectFromFOV(void);

    // RVA: 0xC43 | Ordinal: 3140
        void sendBlockIsOff(void);

    // RVA: 0xC53 | Ordinal: 3156
        void sendNoTarget(void);

    // RVA: 0xC63 | Ordinal: 3172
        void sendVisData(void);

    // RVA: 0xC9A | Ordinal: 3227
        void setClientVisTarget(bool);

    // RVA: 0xD76 | Ordinal: 3447
        void simulate(double);

    // RVA: 0xDF3 | Ordinal: 3572
        void targetSearchFOV(void);

    // RVA: 0xE0D | Ordinal: 3598
        void tryToGetStartData(void);

    // RVA: 0xE29 | Ordinal: 3626
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDVSEEKER_HPP
