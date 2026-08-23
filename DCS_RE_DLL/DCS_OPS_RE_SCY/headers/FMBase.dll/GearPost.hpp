#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: GearPost
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class GearPost
{
public:

    // RVA: 0x91 | Ordinal: 146
        void GearPost(class EagleFM::GearPost &&);

    // RVA: 0x92 | Ordinal: 147
        void GearPost(class EagleFM::GearPost const &);

    // RVA: 0x93 | Ordinal: 148
        void GearPost(class EagleFM::AerodyneFM *, class EagleFM::AerodynamicBody *, struct EagleFM::DynamicState const &);

    // RVA: 0x442 | Ordinal: 1091
        void calcYoYoSurfaceNoise(void);

    // RVA: 0x48D | Ordinal: 1166
        void doSimulate(void);

    // RVA: 0x4A8 | Ordinal: 1193
        void dualStageF(float);

    // RVA: 0x511 | Ordinal: 1298
        void getContactFlag(void) const;

    // RVA: 0x524 | Ordinal: 1317
        void getDamageLengthFlag(void) const;

    // RVA: 0x525 | Ordinal: 1318
        void getDamageYawFlag(void) const;

    // RVA: 0x526 | Ordinal: 1319
        void getDamperCoeff(void) const;

    // RVA: 0x55A | Ordinal: 1371
        void getFlagImmortal(void) const;

    // RVA: 0x56F | Ordinal: 1392
        void getFreeCentering(void) const;

    // RVA: 0x57E | Ordinal: 1407
        void getGearForce_l(void) const;

    // RVA: 0x57F | Ordinal: 1408
        void getGearForce_pos_l(void) const;

    // RVA: 0x58A | Ordinal: 1419
        void getIF(void) const;

    // RVA: 0x5D4 | Ordinal: 1493
        void getMountForce(void) const;

    // RVA: 0x5D5 | Ordinal: 1494
        void getMountMoment(void) const;

    // RVA: 0x67C | Ordinal: 1661
        void getSelfAttitude(void) const;

    // RVA: 0x67D | Ordinal: 1662
        void getSelfAttitudeForce_l(void) const;

    // RVA: 0x67E | Ordinal: 1663
        void getSelfAttitudeMoment_l(void) const;

    // RVA: 0x695 | Ordinal: 1686
        void getState(void) const;

    // RVA: 0x69C | Ordinal: 1693
        void getStrutCompression(void) const;

    // RVA: 0x69D | Ordinal: 1694
        void getStrutOut(void) const;

    // RVA: 0x69E | Ordinal: 1695
        void getStrutRelOut(void) const;

    // RVA: 0x6B9 | Ordinal: 1722
        void getTireCompression(void) const;

    // RVA: 0x6BA | Ordinal: 1723
        void getTireOut(void) const;

    // RVA: 0x6BB | Ordinal: 1724
        void getTireRelOut(void) const;

    // RVA: 0x6E8 | Ordinal: 1769
        void getWheelBrakeBlock(void) const;

    // RVA: 0x6E9 | Ordinal: 1770
        void getWheelBrakeMoment(void) const;

    // RVA: 0x6EA | Ordinal: 1771
        void getWheelBrakeMomentRelative(void) const;

    // RVA: 0x6EC | Ordinal: 1773
        void getWheelContactSurfaceType(void) const;

    // RVA: 0x6ED | Ordinal: 1774
        void getWheelFrictMomentMax(void) const;

    // RVA: 0x6EE | Ordinal: 1775
        void getWheelIF(void) const;

    // RVA: 0x6F0 | Ordinal: 1777
        void getWheelRotationPhase(void) const;

    // RVA: 0x6F1 | Ordinal: 1778
        void getWheelSpeedX(void) const;

    // RVA: 0x6F5 | Ordinal: 1782
        void getYawLimit(void) const;

    // RVA: 0x735 | Ordinal: 1846
        void initAmorizater(struct EagleFM::AmortizaterInit const &);

    // RVA: 0x745 | Ordinal: 1862
        void initGeometry(struct EagleFM::GearPostInit const &);

    // RVA: 0x74A | Ordinal: 1867
        void initInAir(void);

    // RVA: 0x75F | Ordinal: 1888
        void initState(double);

    // RVA: 0x76C | Ordinal: 1901
        void initWheel(struct EagleFM::WheelInit const &);

    // RVA: 0x76E | Ordinal: 1903
        void initYoYoModel(struct EagleFM::GearPost::StrutTireInit const &);

    // RVA: 0x783 | Ordinal: 1924
        void isImmortalEx(void) const;

    // RVA: 0x78B | Ordinal: 1932
        void isYoYoModel(void) const;

    // RVA: 0x78C | Ordinal: 1933
        void isYoYoSurfNoise(void) const;

    // RVA: 0x797 | Ordinal: 1944
        void model_2_simulate(class Math::Vector<3, double> const &);

    // RVA: 0x7B7 | Ordinal: 1976
        void reconfigureBrakes(double, double);

    // RVA: 0x7C8 | Ordinal: 1993
        void repair(void);

    // RVA: 0x825 | Ordinal: 2086
        void setContact(double, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, int, double);

    // RVA: 0x836 | Ordinal: 2103
        void setDamageLength(double);

    // RVA: 0x837 | Ordinal: 2104
        void setDamageLengthLim(double);

    // RVA: 0x838 | Ordinal: 2105
        void setDamperCoeff(double);

    // RVA: 0x864 | Ordinal: 2149
        void setFreeCetnering(bool);

    // RVA: 0x87F | Ordinal: 2176
        void setImmortal(bool);

    // RVA: 0x8FC | Ordinal: 2301
        void setSelfAttitude(bool);

    // RVA: 0x8FE | Ordinal: 2303
        void setShockExcerptParams(double, double, double, double);

    // RVA: 0x92D | Ordinal: 2350
        void setWheelAxleOffset(double);

    // RVA: 0x930 | Ordinal: 2353
        void setWheelIF(double);

    // RVA: 0x931 | Ordinal: 2354
        void setWheelRelativeBrakeMoment(double);

    // RVA: 0x97F | Ordinal: 2432
        void solver(float, float, float, float, float, float, float, float);

    // RVA: 0x985 | Ordinal: 2438
        void strutCurrentDamperK(float, float, float);

    // RVA: 0x986 | Ordinal: 2439
        void strutForce(float, float, float, float);

    // RVA: 0x98E | Ordinal: 2447
        void tireForce(float, float, float);

    // RVA: 0x9A2 | Ordinal: 2467
        void updateState(double);

    // RVA: 0x1A9 | Ordinal: 426
        void _GearPost(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_GEARPOST_HPP
