#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wIRSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wIRSeeker
{
public:

    // RVA: 0x4CA | Ordinal: 1227
        void __getInputPorts(void);

    // RVA: 0x563 | Ordinal: 1380
        void __getOutputPorts(void);

    // RVA: 0x5D0 | Ordinal: 1489
        void calcCurrenttargetPosParams(void);

    // RVA: 0x680 | Ordinal: 1665
        void checkSun(class osg::Vec3f);

    // RVA: 0x6BF | Ordinal: 1728
        void cposFromMissilePosRot(void);

    // RVA: 0x712 | Ordinal: 1811
        void generateAimError(void);

    // RVA: 0x7FA | Ordinal: 2043
        void getDesc_(void);

    // RVA: 0x849 | Ordinal: 2122
        void getIRLockDist(class MovingObject *, float);

    // RVA: 0x8AE | Ordinal: 2223
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9AB | Ordinal: 2476
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAC0 | Ordinal: 2753
        void init_randoms(int);

    // RVA: 0xBD3 | Ordinal: 3028
        void registerStateData(void);

    // RVA: 0xC3F | Ordinal: 3136
        void selectVisTarget(void);

    // RVA: 0xC67 | Ordinal: 3176
        void sendWarningToTarget(double);

    // RVA: 0xD95 | Ordinal: 3478
        void simulate(double);

    // RVA: 0xDE8 | Ordinal: 3561
        void syncAimError(class Math::Vector<3, double> const &);

    // RVA: 0x140 | Ordinal: 321
        void wIRSeeker(class wIRSeeker &&);

    // RVA: 0x141 | Ordinal: 322
        void wIRSeeker(class wIRSeeker const &);

    // RVA: 0x142 | Ordinal: 323
        void wIRSeeker(class wIRSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x259 | Ordinal: 602
        void _wIRSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WIRSEEKER_HPP
