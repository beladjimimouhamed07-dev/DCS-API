#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avIMUv2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avIMUv2
{
public:

    // RVA: 0x934 | Ordinal: 2357
        void alignInFlightHeadingChanges(double);

    // RVA: 0x935 | Ordinal: 2358
        void alignInFlightManual(double);

    // RVA: 0x936 | Ordinal: 2359
        void alignInFlightWingsLevel(double);

    // RVA: 0x939 | Ordinal: 2362
        void alignRapidly(double);

    // RVA: 0x93B | Ordinal: 2364
        void alignWithAngularGuidance(double, class wPosition3<double>);

    // RVA: 0x93D | Ordinal: 2366
        void alignWithCustomSpeed(double, double, bool);

    // RVA: 0x93F | Ordinal: 2368
        void alignWithGNSSguidance(double, class osg::Vec3d);

    // RVA: 0x940 | Ordinal: 2369
        void alignWithGyrocompassing(double);

    // RVA: 0x126 | Ordinal: 295
        void avIMUv2(class cockpit::avIMUv2 const &);

    // RVA: 0x127 | Ordinal: 296
        void avIMUv2(void);

    // RVA: 0x9DD | Ordinal: 2526
        void calculate_error_const(double);

    // RVA: 0xADF | Ordinal: 2784
        void commonUpdate(double);

    // RVA: 0xBFE | Ordinal: 3071
        void find_platform_angles(class wPosition3<double> &, class osg::Vec3d &);

    // RVA: 0xC3D | Ordinal: 3134
        void getAlignmentQuality(void);

    // RVA: 0xCAF | Ordinal: 3248
        void getFirstTimeStart(void);

    // RVA: 0xCD5 | Ordinal: 3286
        void getGyroBank(void) const;

    // RVA: 0xCD7 | Ordinal: 3288
        void getGyroBankValid(void) const;

    // RVA: 0xCDA | Ordinal: 3291
        void getGyroHeading(void) const;

    // RVA: 0xCDC | Ordinal: 3293
        void getGyroHeadingValid(void) const;

    // RVA: 0xCE2 | Ordinal: 3299
        void getGyroOrient(class wPosition3<double> &) const;

    // RVA: 0xCE5 | Ordinal: 3302
        void getGyroOrientValid(void) const;

    // RVA: 0xCE8 | Ordinal: 3305
        void getGyroPitch(void) const;

    // RVA: 0xCEB | Ordinal: 3308
        void getGyroPitchBankValid(void) const;

    // RVA: 0xCEE | Ordinal: 3311
        void getGyroPitchValid(void) const;

    // RVA: 0xCF7 | Ordinal: 3320
        void getHeadingErrorDueToWrongCoordinate(void) const;

    // RVA: 0xD79 | Ordinal: 3450
        void getOperatingConditions(void);

    // RVA: 0xD92 | Ordinal: 3475
        void getPlatformBankError(void) const;

    // RVA: 0xD94 | Ordinal: 3477
        void getPlatformHeadingError(void) const;

    // RVA: 0xD9A | Ordinal: 3483
        void getPlatformPitchError(void) const;

    // RVA: 0xDBA | Ordinal: 3515
        void getRealisticImu(void);

    // RVA: 0xE08 | Ordinal: 3593
        void getState(void);

    // RVA: 0xE26 | Ordinal: 3623
        void getTimeFromAlignmentStart(void);

    // RVA: 0xE2A | Ordinal: 3627
        void getTotalAcceleration(void) const;

    // RVA: 0xE3B | Ordinal: 3644
        void getValidity(void);

    // RVA: 0xFF9 | Ordinal: 4090
        void get_pframe(void) const;

    // RVA: 0x112E | Ordinal: 4399
        void hotStartSetup(void);

    // RVA: 0x11C0 | Ordinal: 4545
        void initialize(void);

    // RVA: 0x1247 | Ordinal: 4680
        void isAligning(void) const;

    // RVA: 0x1249 | Ordinal: 4682
        void isAlignmentDone(void) const;

    // RVA: 0x127A | Ordinal: 4731
        void isPowered(void) const;

    // RVA: 0x13ED | Ordinal: 5102
        void mainSimulation(double);

    // RVA: 0x150B | Ordinal: 5388
        void powerCycle(void);

    // RVA: 0x152F | Ordinal: 5424
        void pushAnglesForAlignment(class osg::Vec3d);

    // RVA: 0x1531 | Ordinal: 5426
        void pushCoordinatesForAlignment(class osg::Vec3d);

    // RVA: 0x1692 | Ordinal: 5779
        void setAccuracyOfRandomizedHeading(double);

    // RVA: 0x1709 | Ordinal: 5898
        void setFirstTimeStart(bool);

    // RVA: 0x1723 | Ordinal: 5924
        void setHeadingErrorCoefficient(float);

    // RVA: 0x1771 | Ordinal: 6002
        void setOperatingConditions(bool);

    // RVA: 0x1790 | Ordinal: 6033
        void setPower(bool);

    // RVA: 0x1795 | Ordinal: 6038
        void setRandomPlatformAngles(enum cockpit::AlignGrade);

    // RVA: 0x1799 | Ordinal: 6042
        void setRealisticImu(enum cockpit::navigation::IMU_realismGrade);

    // RVA: 0x17E5 | Ordinal: 6118
        void setValidity(enum cockpit::ImuValidityFlag);

    // RVA: 0x17E6 | Ordinal: 6119
        void setValidityDegradeOverride(bool);

    // RVA: 0x19D4 | Ordinal: 6613
        void startAlignment(bool);

    // RVA: 0x19FC | Ordinal: 6653
        void stopAlignment(bool, bool);

    // RVA: 0x1AB4 | Ordinal: 6837
        void update(double);

    // RVA: 0x30F | Ordinal: 784
        void _avIMUv2(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVIMUV2_HPP
