#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wDActiveSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDActiveSeeker
{
public:

    // RVA: 0x49A | Ordinal: 1179
        void __getInputPorts(void);

    // RVA: 0x533 | Ordinal: 1332
        void __getOutputPorts(void);

    // RVA: 0x61B | Ordinal: 1564
        void calcPointLos(class Math::Vector<3, double>);

    // RVA: 0x657 | Ordinal: 1624
        void changeAirTarget(void);

    // RVA: 0x7CA | Ordinal: 1995
        void getDesc_(void);

    // RVA: 0x87E | Ordinal: 2175
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x97B | Ordinal: 2428
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAE5 | Ordinal: 2790
        void isTargetLinked(class MovingObject *);

    // RVA: 0xAE9 | Ordinal: 2794
        void isTargetLocked(unsigned int);

    // RVA: 0xAEA | Ordinal: 2795
        void isTargetLocked(class MovingObject *);

    // RVA: 0xBAA | Ordinal: 2987
        void registerStateData(void);

    // RVA: 0xC31 | Ordinal: 3122
        void seekerBlockProc(void);

    // RVA: 0xC50 | Ordinal: 3153
        void sendNoTarget(void);

    // RVA: 0xC5E | Ordinal: 3167
        void sendVisData(void);

    // RVA: 0xC65 | Ordinal: 3174
        void sendWarningToTarget(void);

    // RVA: 0xC83 | Ordinal: 3204
        void setActiveRadLockDist(double);

    // RVA: 0xC85 | Ordinal: 3206
        void setActiveRadOn(bool);

    // RVA: 0xD6D | Ordinal: 3438
        void simulate(double);

    // RVA: 0x9C | Ordinal: 157
        void wDActiveSeeker(class wDActiveSeeker const &);

    // RVA: 0x9D | Ordinal: 158
        void wDActiveSeeker(class wDActiveSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x21A | Ordinal: 539
        void _wDActiveSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDACTIVESEEKER_HPP
