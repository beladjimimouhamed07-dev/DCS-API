#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: AustereEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace AustereFM {
namespace Propulsion {

class AustereEngine
{
public:

    // RVA: 0x21 | Ordinal: 34
        void AustereEngine(class EagleFM::AustereFM::Propulsion::AustereEngine const &);

    // RVA: 0x22 | Ordinal: 35
        void AustereEngine(void);

    // RVA: 0x3A0 | Ordinal: 929
        void New(struct Aircraft_Descriptor const *);

    // RVA: 0x487 | Ordinal: 1160
        void doSimulate(void);

    // RVA: 0x49F | Ordinal: 1184
        void doStartFailure(enum WorldGeneral::Failures);

    // RVA: 0x4B9 | Ordinal: 1210
        void getAfterburnerFlag(void) const;

    // RVA: 0x533 | Ordinal: 1332
        void getDetonationFlag(void) const;

    // RVA: 0x551 | Ordinal: 1362
        void getFanOmega(void) const;

    // RVA: 0x553 | Ordinal: 1364
        void getFanPhase(bool) const;

    // RVA: 0x554 | Ordinal: 1365
        void getFanPitchAngle(void) const;

    // RVA: 0x571 | Ordinal: 1394
        void getFuelConsumption(void) const;

    // RVA: 0x57C | Ordinal: 1405
        void getGain(void) const;

    // RVA: 0x595 | Ordinal: 1430
        void getIgnitionFlag(void) const;

    // RVA: 0x5CB | Ordinal: 1484
        void getMode(void);

    // RVA: 0x5E4 | Ordinal: 1509
        void getOperability(void) const;

    // RVA: 0x61A | Ordinal: 1563
        void getPower(void) const;

    // RVA: 0x635 | Ordinal: 1590
        void getReadyToUseFireExtinguisher(void);

    // RVA: 0x636 | Ordinal: 1591
        void getReducedFanOmega(void) const;

    // RVA: 0x637 | Ordinal: 1592
        void getReducedShaftOmega(void) const;

    // RVA: 0x638 | Ordinal: 1593
        void getReducedThrust(void) const;

    // RVA: 0x681 | Ordinal: 1666
        void getShaftOmega(void) const;

    // RVA: 0x683 | Ordinal: 1668
        void getShaftPhase(bool) const;

    // RVA: 0x6B1 | Ordinal: 1714
        void getThrust(void) const;

    // RVA: 0x70C | Ordinal: 1805
        void indexifyFailureID(enum WorldGeneral::Failures) const;

    // RVA: 0x770 | Ordinal: 1905
        void initialize(class IwoLA *, int, struct wsInitData *);

    // RVA: 0x779 | Ordinal: 1914
        void isDamaged(enum WorldGeneral::Failures) const;

    // RVA: 0x79A | Ordinal: 1947
        void nullifyFailureID(enum WorldGeneral::Failures) const;

    // RVA: 0x7C3 | Ordinal: 1988
        void repair(void);

    // RVA: 0x7D7 | Ordinal: 2008
        void requestFailure(enum WorldGeneral::Failures) const;

    // RVA: 0x801 | Ordinal: 2050
        void setAfterburnerFlag(bool);

    // RVA: 0x840 | Ordinal: 2113
        void setDetonationFlag(bool);

    // RVA: 0x85C | Ordinal: 2141
        void setFanOmega(float);

    // RVA: 0x85D | Ordinal: 2142
        void setFanPitchAngle(float);

    // RVA: 0x867 | Ordinal: 2152
        void setFuelConsumption(float);

    // RVA: 0x87C | Ordinal: 2173
        void setIgnitionFlag(bool);

    // RVA: 0x8A4 | Ordinal: 2213
        void setMode(enum EagleFM::AustereFM::Propulsion::EngineOperationalModes);

    // RVA: 0x8AE | Ordinal: 2223
        void setOilLeakTimer(float);

    // RVA: 0x8C4 | Ordinal: 2245
        void setPitchControl(float);

    // RVA: 0x8DD | Ordinal: 2270
        void setReducedFanOmega(float);

    // RVA: 0x8DE | Ordinal: 2271
        void setReducedShaftOmega(float);

    // RVA: 0x8FD | Ordinal: 2302
        void setShaftOmega(float);

    // RVA: 0x90A | Ordinal: 2315
        void setTertiaryControl(float);

    // RVA: 0x90D | Ordinal: 2318
        void setThrust(class osg::Vec3f &);

    // RVA: 0x90E | Ordinal: 2319
        void setThrustControl(float);

    // RVA: 0x91C | Ordinal: 2333
        void setVelocityControl(float);

    // RVA: 0x92C | Ordinal: 2349
        void setWaterLeakTimer(float);

    // RVA: 0x981 | Ordinal: 2434
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0x181 | Ordinal: 386
        void _AustereEngine(void);
};

} // namespace Propulsion
} // namespace AustereFM
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_AUSTEREENGINE_HPP
