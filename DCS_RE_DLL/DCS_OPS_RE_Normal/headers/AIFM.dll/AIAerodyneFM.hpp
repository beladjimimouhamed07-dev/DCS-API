#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: AIFM.dll
// Class: AIAerodyneFM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace AIFM {

class AIAerodyneFM
{
public:

    // RVA: 0x0 | Ordinal: 1
        void AIAerodyneFM(class EagleFM::AIFM::AIAerodyneFM const &);

    // RVA: 0x1 | Ordinal: 2
        void AIAerodyneFM(double);

    // RVA: 0x2 | Ordinal: 3
        void AIAerodyneFM(class IwoLA *, class EagleFM::AIFM::AIAerodyneInit const &, double);

    // RVA: 0x53 | Ordinal: 84
        void calcGFactor(void);

    // RVA: 0x5F | Ordinal: 96
        void doSimulate(void);

    // RVA: 0x68 | Ordinal: 105
        void getAcceleration_w(void) const;

    // RVA: 0x6A | Ordinal: 107
        void getCommonAoA(void);

    // RVA: 0x6B | Ordinal: 108
        void getCommonAoS(void);

    // RVA: 0x6E | Ordinal: 111
        void getDynamicBody(void) const;

    // RVA: 0x70 | Ordinal: 113
        void getEngineRelativeRPM(int) const;

    // RVA: 0x74 | Ordinal: 117
        void getExploded(void) const;

    // RVA: 0x78 | Ordinal: 121
        void getFreeze(void) const;

    // RVA: 0x79 | Ordinal: 122
        void getFuel(void) const;

    // RVA: 0x7B | Ordinal: 124
        void getGearPostRelativeYaw(int) const;

    // RVA: 0x7C | Ordinal: 125
        void getHAGL(void) const;

    // RVA: 0x7E | Ordinal: 127
        void getLandedState(void) const;

    // RVA: 0x83 | Ordinal: 132
        void getOrientation(void) const;

    // RVA: 0x85 | Ordinal: 134
        void getPitch(void) const;

    // RVA: 0x87 | Ordinal: 136
        void getPosition(void) const;

    // RVA: 0x8C | Ordinal: 141
        void getRoll(void) const;

    // RVA: 0x8D | Ordinal: 142
        void getRotateSpeed_l(void) const;

    // RVA: 0x8E | Ordinal: 143
        void getRotateSpeed_w(void) const;

    // RVA: 0x94 | Ordinal: 149
        void getRudderPos(void) const;

    // RVA: 0x96 | Ordinal: 151
        void getStickXPos(void) const;

    // RVA: 0x97 | Ordinal: 152
        void getStickZPos(void) const;

    // RVA: 0x98 | Ordinal: 153
        void getStrutCompression(int) const;

    // RVA: 0x9E | Ordinal: 159
        void getThrottlePos(void) const;

    // RVA: 0xA0 | Ordinal: 161
        void getTimePosition(void) const;

    // RVA: 0xA1 | Ordinal: 162
        void getVelocity_l(void) const;

    // RVA: 0xA2 | Ordinal: 163
        void getVelocity_w(void) const;

    // RVA: 0xA4 | Ordinal: 165
        void getWheelRotationPhase(int) const;

    // RVA: 0xA7 | Ordinal: 168
        void getYaw(void) const;

    // RVA: 0x112 | Ordinal: 275
        void init(class IwoLA *, class EagleFM::AIFM::AIAerodyneInit const &);

    // RVA: 0x119 | Ordinal: 282
        void initAirStart(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, float, float, float);

    // RVA: 0x11C | Ordinal: 285
        void initColdStart(class Math::Vector<3, double> const &, float, class Math::Vector<3, double> const &);

    // RVA: 0x11F | Ordinal: 288
        void initHotStart(class Math::Vector<3, double> const &, float, class Math::Vector<3, double> const &);

    // RVA: 0x124 | Ordinal: 293
        void isGroundMobility(void) const;

    // RVA: 0x127 | Ordinal: 296
        void selectModelTimeStep(void);

    // RVA: 0x12B | Ordinal: 300
        void setCellIF(int, float, float);

    // RVA: 0x137 | Ordinal: 312
        void setFreeze(enum EagleFM::AIFM::AIFreezeState);

    // RVA: 0x138 | Ordinal: 313
        void setFuel(double);

    // RVA: 0x13D | Ordinal: 318
        void setNormal_w(class Math::Vector<3, double> const &);

    // RVA: 0x13F | Ordinal: 320
        void setPayload(double, class Math::Vector<3, double> const &);

    // RVA: 0x140 | Ordinal: 321
        void setPositionState(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, float, float, float);

    // RVA: 0x143 | Ordinal: 324
        void setRudder(double);

    // RVA: 0x145 | Ordinal: 326
        void setStickX(double);

    // RVA: 0x146 | Ordinal: 327
        void setStickZ(double);

    // RVA: 0x147 | Ordinal: 328
        void setSurfacePoint_w(class Math::Vector<3, double> const &);

    // RVA: 0x148 | Ordinal: 329
        void setSurfaceProp(double, class Math::Vector<3, double>, class Math::Vector<3, double>, class Math::Vector<3, double>, float, float);

    // RVA: 0x14E | Ordinal: 335
        void setThrottle(double);

    // RVA: 0x151 | Ordinal: 338
        void setWheelBrakeOnOff(bool);

    // RVA: 0x158 | Ordinal: 345
        void shutDown(void);

    // RVA: 0x15D | Ordinal: 350
        void startUp(void);

    // RVA: 0x15F | Ordinal: 352
        void stop(void);

    // RVA: 0x21 | Ordinal: 34
        void _AIAerodyneFM(void);
};

} // namespace AIFM
} // namespace EagleFM

// DCS_OPS_RE_AIFM.DLL_AIAERODYNEFM_HPP
