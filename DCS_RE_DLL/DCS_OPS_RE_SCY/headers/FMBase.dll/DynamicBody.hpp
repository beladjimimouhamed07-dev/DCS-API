#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: DynamicBody
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class DynamicBody
{
public:

    // RVA: 0x68 | Ordinal: 105
        void DynamicBody(class EagleFM::DynamicBody &&);

    // RVA: 0x69 | Ordinal: 106
        void DynamicBody(struct EagleFM::DynamicState const &, double);

    // RVA: 0x6A | Ordinal: 107
        void DynamicBody(class EagleFM::DynamicBody const &);

    // RVA: 0x6B | Ordinal: 108
        void DynamicBody(double);

    // RVA: 0x3BC | Ordinal: 957
        void addForce_l(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x3BD | Ordinal: 958
        void addForce_l(class Math::Vector<3, double> const &);

    // RVA: 0x3BE | Ordinal: 959
        void addForce_lw(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x3BF | Ordinal: 960
        void addForce_w(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x3C0 | Ordinal: 961
        void addForce_w(class Math::Vector<3, double> const &);

    // RVA: 0x3C1 | Ordinal: 962
        void addForce_wl(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x3C5 | Ordinal: 966
        void addMoment_l(class Math::Vector<3, double> const &);

    // RVA: 0x3C6 | Ordinal: 967
        void addMoment_w(class Math::Vector<3, double> const &);

    // RVA: 0x3D8 | Ordinal: 985
        void calcAccelerationInPoint_l(class Math::Vector<3, double> const &);

    // RVA: 0x3D9 | Ordinal: 986
        void calcAccelerationInPoint_lw(class Math::Vector<3, double> const &);

    // RVA: 0x3DA | Ordinal: 987
        void calcAccelerationInPoint_w(class Math::Vector<3, double> const &);

    // RVA: 0x3DB | Ordinal: 988
        void calcAccelerationInPoint_wl(class Math::Vector<3, double> const &);

    // RVA: 0x434 | Ordinal: 1077
        void calcSpeedInPoint_l(class Math::Vector<3, double> const &);

    // RVA: 0x435 | Ordinal: 1078
        void calcSpeedInPoint_lw(class Math::Vector<3, double> const &);

    // RVA: 0x436 | Ordinal: 1079
        void calcSpeedInPoint_rl(class Math::Vector<3, double> const &);

    // RVA: 0x437 | Ordinal: 1080
        void calcSpeedInPoint_rw(class Math::Vector<3, double> const &);

    // RVA: 0x438 | Ordinal: 1081
        void calcSpeedInPoint_w(class Math::Vector<3, double> const &);

    // RVA: 0x439 | Ordinal: 1082
        void calcSpeedInPoint_wl(class Math::Vector<3, double> const &);

    // RVA: 0x452 | Ordinal: 1107
        void changeMass__MassPos_l__MOI_l(double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x48B | Ordinal: 1164
        void doSimulate(void);

    // RVA: 0x49E | Ordinal: 1183
        void doSimulationStep(double);

    // RVA: 0x4B6 | Ordinal: 1207
        void getAcceleration_l(void);

    // RVA: 0x4B7 | Ordinal: 1208
        void getAcceleration_w(void) const;

    // RVA: 0x4F9 | Ordinal: 1274
        void getCentrifugalMOI(void) const;

    // RVA: 0x53B | Ordinal: 1340
        void getDynModelingTime(void) const;

    // RVA: 0x53E | Ordinal: 1343
        void getDynamicState(void);

    // RVA: 0x569 | Ordinal: 1386
        void getForce_l(void) const;

    // RVA: 0x5C2 | Ordinal: 1475
        void getMass(void) const;

    // RVA: 0x5C3 | Ordinal: 1476
        void getMassPos(void) const;

    // RVA: 0x5CF | Ordinal: 1488
        void getMomentOfInertia(void) const;

    // RVA: 0x5D2 | Ordinal: 1491
        void getMoment_l(void) const;

    // RVA: 0x5E6 | Ordinal: 1511
        void getOrientation(void);

    // RVA: 0x5E7 | Ordinal: 1512
        void getOrientationFrToL(void);

    // RVA: 0x5E8 | Ordinal: 1513
        void getOrientationT(void);

    // RVA: 0x5E9 | Ordinal: 1514
        void getOrientation_f(void) const;

    // RVA: 0x617 | Ordinal: 1560
        void getPosition(void) const;

    // RVA: 0x618 | Ordinal: 1561
        void getPosition_f(void) const;

    // RVA: 0x630 | Ordinal: 1585
        void getQuaternion(void) const;

    // RVA: 0x661 | Ordinal: 1634
        void getRotateAcceleration_l(void);

    // RVA: 0x662 | Ordinal: 1635
        void getRotateAcceleration_w(void) const;

    // RVA: 0x663 | Ordinal: 1636
        void getRotateSpeed_f(void) const;

    // RVA: 0x665 | Ordinal: 1638
        void getRotateSpeed_l(void);

    // RVA: 0x667 | Ordinal: 1640
        void getRotateSpeed_w(void) const;

    // RVA: 0x6B6 | Ordinal: 1719
        void getTimePosition(void) const;

    // RVA: 0x6B7 | Ordinal: 1720
        void getTimePosition_f(void) const;

    // RVA: 0x6BC | Ordinal: 1725
        void getTotalAcceleration_l(void);

    // RVA: 0x6CA | Ordinal: 1739
        void getVelocity_f(void) const;

    // RVA: 0x6CC | Ordinal: 1741
        void getVelocity_l(void);

    // RVA: 0x6CE | Ordinal: 1743
        void getVelocity_w(void) const;

    // RVA: 0x715 | Ordinal: 1814
        void init(struct EagleFM::DynamicState const &);

    // RVA: 0x781 | Ordinal: 1922
        void isFrameOn(void) const;

    // RVA: 0x7D6 | Ordinal: 2007
        void reprojectToFrame(void);

    // RVA: 0x7E9 | Ordinal: 2026
        void resetForce(void);

    // RVA: 0x7EA | Ordinal: 2027
        void resetMoment(void);

    // RVA: 0x7FB | Ordinal: 2044
        void setAcceleration(class Math::Vector<3, double> const &);

    // RVA: 0x7FC | Ordinal: 2045
        void setAcceleration_w(class Math::Vector<3, double> const &);

    // RVA: 0x831 | Ordinal: 2098
        void setCorrectionOnFrame(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x862 | Ordinal: 2147
        void setFrameOff(void);

    // RVA: 0x863 | Ordinal: 2148
        void setFrameOn(class Math::Vector<3, double> const &, class Math::Matrix<3, float> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x86E | Ordinal: 2159
        void setGyroEffect(bool);

    // RVA: 0x8D2 | Ordinal: 2259
        void setPosition(class Math::Vector<3, double> const &);

    // RVA: 0x8D7 | Ordinal: 2264
        void setQuaternion(struct Math::Rotation3<float> const &);

    // RVA: 0x8D8 | Ordinal: 2265
        void setQuaternion_w(struct Math::Rotation3<float> const &);

    // RVA: 0x8F4 | Ordinal: 2293
        void setRotAcceleration(class Math::Vector<3, double> const &);

    // RVA: 0x8F5 | Ordinal: 2294
        void setRotateAcceleration_w(class Math::Vector<3, double> const &);

    // RVA: 0x8F6 | Ordinal: 2295
        void setRotateSpeed(class Math::Vector<3, double> const &);

    // RVA: 0x8F7 | Ordinal: 2296
        void setRotateSpeed_w(class Math::Vector<3, double> const &);

    // RVA: 0x91B | Ordinal: 2332
        void setVelocity(class Math::Vector<3, double> const &);

    // RVA: 0x91D | Ordinal: 2334
        void setVelocity_w(class Math::Vector<3, double> const &);

    // RVA: 0x199 | Ordinal: 410
        void _DynamicBody(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_DYNAMICBODY_HPP
