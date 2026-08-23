#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Wheel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Wheel
{
public:

    // RVA: 0x16C | Ordinal: 365
        void Wheel(class EagleFM::Wheel &&);

    // RVA: 0x16D | Ordinal: 366
        void Wheel(struct EagleFM::WheelInit const &);

    // RVA: 0x16E | Ordinal: 367
        void Wheel(class EagleFM::Wheel const &);

    // RVA: 0x16F | Ordinal: 368
        void Wheel(void);

    // RVA: 0x4F2 | Ordinal: 1267
        void getBrakeBlock(void) const;

    // RVA: 0x4F3 | Ordinal: 1268
        void getBrakeMoment(void) const;

    // RVA: 0x512 | Ordinal: 1299
        void getContactPosShift(void) const;

    // RVA: 0x56D | Ordinal: 1390
        void getForce_l_l(void) const;

    // RVA: 0x570 | Ordinal: 1393
        void getFrictionMomentMax(void) const;

    // RVA: 0x590 | Ordinal: 1425
        void getIF(void) const;

    // RVA: 0x5B5 | Ordinal: 1462
        void getMOI(void) const;

    // RVA: 0x634 | Ordinal: 1589
        void getRadius(void) const;

    // RVA: 0x645 | Ordinal: 1606
        void getRelativeBrakeMoment(void) const;

    // RVA: 0x668 | Ordinal: 1641
        void getRotationPhase(void) const;

    // RVA: 0x68D | Ordinal: 1678
        void getSlideFlag(void) const;

    // RVA: 0x692 | Ordinal: 1683
        void getSpeedX_l_l(void) const;

    // RVA: 0x693 | Ordinal: 1684
        void getSpeedZ_l_l(void) const;

    // RVA: 0x699 | Ordinal: 1690
        void getStopFlag(void) const;

    // RVA: 0x730 | Ordinal: 1841
        void init(struct EagleFM::WheelInit const &);

    // RVA: 0x7B8 | Ordinal: 1977
        void reconfigureBrakes(double, double);

    // RVA: 0x7D3 | Ordinal: 2004
        void repair(void);

    // RVA: 0x861 | Ordinal: 2146
        void setForce_l_l(class Math::Vector<3, double>);

    // RVA: 0x87B | Ordinal: 2172
        void setIF(double);

    // RVA: 0x8E6 | Ordinal: 2279
        void setRelativeBrakeMoment(double);

    // RVA: 0x8F8 | Ordinal: 2297
        void setRotationPhase(double);

    // RVA: 0x903 | Ordinal: 2308
        void setSpeedReqX_l_l(double);

    // RVA: 0x904 | Ordinal: 2309
        void setSpeedX_l_l(double);

    // RVA: 0x905 | Ordinal: 2310
        void setSpeedZ_l_l(double);

    // RVA: 0x92B | Ordinal: 2348
        void setVy(double);

    // RVA: 0x974 | Ordinal: 2421
        void simulate(double);

    // RVA: 0x1EE | Ordinal: 495
        void _Wheel(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_WHEEL_HPP
