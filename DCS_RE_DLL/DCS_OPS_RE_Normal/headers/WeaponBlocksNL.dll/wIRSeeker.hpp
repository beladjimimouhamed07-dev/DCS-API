#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x67D | Ordinal: 1662
        void checkSun(class osg::Vec3f);

    // RVA: 0x6BB | Ordinal: 1724
        void cposFromMissilePosRot(void);

    // RVA: 0x70B | Ordinal: 1804
        void generateAimError(void);

    // RVA: 0x7F2 | Ordinal: 2035
        void getDesc_(void);

    // RVA: 0x840 | Ordinal: 2113
        void getIRLockDist(class MovingObject *, float);

    // RVA: 0x8A5 | Ordinal: 2214
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A2 | Ordinal: 2467
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAA0 | Ordinal: 2721
        void init_randoms(int);

    // RVA: 0xBA9 | Ordinal: 2986
        void registerStateData(void);

    // RVA: 0xD4A | Ordinal: 3403
        void simulate(double);

    // RVA: 0xD9D | Ordinal: 3486
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WIRSEEKER_HPP
