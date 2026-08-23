#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wSN_SAL
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSN_SAL
{
public:

    // RVA: 0x4E7 | Ordinal: 1256
        void __getInputPorts(void);

    // RVA: 0x580 | Ordinal: 1409
        void __getOutputPorts(void);

    // RVA: 0x5B8 | Ordinal: 1465
        void cPositionFromPosRot(class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &);

    // RVA: 0x63B | Ordinal: 1596
        void calcTgtLOS(double);

    // RVA: 0x80F | Ordinal: 2064
        void getDesc_(void);

    // RVA: 0x8C2 | Ordinal: 2243
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9BF | Ordinal: 2496
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA44 | Ordinal: 2629
        void getSpotPos(double);

    // RVA: 0xA52 | Ordinal: 2643
        void getTgtPos(double);

    // RVA: 0xA73 | Ordinal: 2676
        void initAimError(void);

    // RVA: 0xAA3 | Ordinal: 2724
        void init_randoms(int);

    // RVA: 0xAAE | Ordinal: 2735
        void isLOSClear(class osg::Vec3d const &, class osg::Vec3d const &, unsigned int, unsigned int);

    // RVA: 0xBC1 | Ordinal: 3010
        void registerStateData(void);

    // RVA: 0xC9A | Ordinal: 3227
        void setNewTarget(unsigned int);

    // RVA: 0xCD4 | Ordinal: 3285
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xD65 | Ordinal: 3430
        void simulate(double);

    // RVA: 0xD94 | Ordinal: 3477
        void spotListUpdate(double);

    // RVA: 0xDB2 | Ordinal: 3507
        void tgtStateRestore(double);

    // RVA: 0xDB3 | Ordinal: 3508
        void tgt_pos_from_target(class MovingObject *) const;

    // RVA: 0x196 | Ordinal: 407
        void wSN_SAL(class wSN_SAL &&);

    // RVA: 0x197 | Ordinal: 408
        void wSN_SAL(class wSN_SAL const &);

    // RVA: 0x198 | Ordinal: 409
        void wSN_SAL(class wSN_SAL_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x279 | Ordinal: 634
        void _wSN_SAL(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WSN_SAL_HPP
