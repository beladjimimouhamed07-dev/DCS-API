#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x817 | Ordinal: 2072
        void getDesc_(void);

    // RVA: 0x8CB | Ordinal: 2252
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C8 | Ordinal: 2505
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA53 | Ordinal: 2644
        void getSpotPos(double);

    // RVA: 0xA61 | Ordinal: 2658
        void getTgtPos(double);

    // RVA: 0xA85 | Ordinal: 2694
        void initAimError(void);

    // RVA: 0xAC8 | Ordinal: 2761
        void init_randoms(int);

    // RVA: 0xAD4 | Ordinal: 2773
        void isLOSClear(class osg::Vec3d const &, class osg::Vec3d const &, unsigned int, unsigned int);

    // RVA: 0xBEB | Ordinal: 3052
        void registerStateData(void);

    // RVA: 0xCE4 | Ordinal: 3301
        void setNewTarget(unsigned int);

    // RVA: 0xD1F | Ordinal: 3360
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xDB0 | Ordinal: 3505
        void simulate(double);

    // RVA: 0xDDF | Ordinal: 3552
        void spotListUpdate(double);

    // RVA: 0xDFD | Ordinal: 3582
        void tgtStateRestore(double);

    // RVA: 0xDFE | Ordinal: 3583
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WSN_SAL_HPP
