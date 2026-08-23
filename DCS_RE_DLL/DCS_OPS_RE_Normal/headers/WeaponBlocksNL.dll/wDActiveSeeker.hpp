#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7C2 | Ordinal: 1987
        void getDesc_(void);

    // RVA: 0x875 | Ordinal: 2166
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x972 | Ordinal: 2419
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xABE | Ordinal: 2751
        void isTargetLinked(class MovingObject *);

    // RVA: 0xAC2 | Ordinal: 2755
        void isTargetLocked(unsigned int);

    // RVA: 0xAC3 | Ordinal: 2756
        void isTargetLocked(class MovingObject *);

    // RVA: 0xB80 | Ordinal: 2945
        void registerStateData(void);

    // RVA: 0xBF0 | Ordinal: 3057
        void seekerBlockProc(void);

    // RVA: 0xC0C | Ordinal: 3085
        void sendNoTarget(void);

    // RVA: 0xC1A | Ordinal: 3099
        void sendVisData(void);

    // RVA: 0xC3A | Ordinal: 3131
        void setActiveRadLockDist(double);

    // RVA: 0xC3C | Ordinal: 3133
        void setActiveRadOn(bool);

    // RVA: 0xD22 | Ordinal: 3363
        void simulate(double);

    // RVA: 0x9C | Ordinal: 157
        void wDActiveSeeker(class wDActiveSeeker const &);

    // RVA: 0x9D | Ordinal: 158
        void wDActiveSeeker(class wDActiveSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x21A | Ordinal: 539
        void _wDActiveSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDACTIVESEEKER_HPP
