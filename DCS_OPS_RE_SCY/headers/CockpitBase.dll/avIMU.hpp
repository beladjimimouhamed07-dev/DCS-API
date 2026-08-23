#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avIMU
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avIMU
{
public:

    // RVA: 0x932 | Ordinal: 2355
        void alignCourseWithGyrocompassing(double);

    // RVA: 0x933 | Ordinal: 2356
        void alignInFlight(double);

    // RVA: 0x937 | Ordinal: 2360
        void alignNormally(double);

    // RVA: 0x938 | Ordinal: 2361
        void alignRapidly(double);

    // RVA: 0x93A | Ordinal: 2363
        void alignWithAngularGuidance(double, class wPosition3<double>);

    // RVA: 0x93C | Ordinal: 2365
        void alignWithCustomSpeed(double, double, bool);

    // RVA: 0x93E | Ordinal: 2367
        void alignWithGNSSguidance(double, class osg::Vec3d);

    // RVA: 0x124 | Ordinal: 293
        void avIMU(class cockpit::avIMU const &);

    // RVA: 0x125 | Ordinal: 294
        void avIMU(void);

    // RVA: 0x9DC | Ordinal: 2525
        void calculate_error_const(double);

    // RVA: 0xADE | Ordinal: 2783
        void commonUpdate(double);

    // RVA: 0xBFD | Ordinal: 3070
        void find_platform_angles(class wPosition3<double> &, class osg::Vec3d &);

    // RVA: 0xC3E | Ordinal: 3135
        void getAlignmentStep(void) const;

    // RVA: 0xC3F | Ordinal: 3136
        void getAlignmentType(void) const;

    // RVA: 0xCAE | Ordinal: 3247
        void getFirstTimeStart(void);

    // RVA: 0xCD4 | Ordinal: 3285
        void getGyroBank(void) const;

    // RVA: 0xCD6 | Ordinal: 3287
        void getGyroBankValid(void) const;

    // RVA: 0xCD9 | Ordinal: 3290
        void getGyroHeading(void) const;

    // RVA: 0xCDB | Ordinal: 3292
        void getGyroHeadingValid(void) const;

    // RVA: 0xCE1 | Ordinal: 3298
        void getGyroOrient(class wPosition3<double> &) const;

    // RVA: 0xCE4 | Ordinal: 3301
        void getGyroOrientValid(void) const;

    // RVA: 0xCE7 | Ordinal: 3304
        void getGyroPitch(void) const;

    // RVA: 0xCEA | Ordinal: 3307
        void getGyroPitchBankValid(void) const;

    // RVA: 0xCED | Ordinal: 3310
        void getGyroPitchValid(void) const;

    // RVA: 0xCF6 | Ordinal: 3319
        void getHeadingErrorDueToWrongCoordinate(void) const;

    // RVA: 0xD78 | Ordinal: 3449
        void getOperatingConditions(void);

    // RVA: 0xD83 | Ordinal: 3460
        void getOutputVelocityValid(void) const;

    // RVA: 0xD91 | Ordinal: 3474
        void getPlatformBankError(void) const;

    // RVA: 0xD93 | Ordinal: 3476
        void getPlatformHeadingError(void) const;

    // RVA: 0xD99 | Ordinal: 3482
        void getPlatformPitchError(void) const;

    // RVA: 0xDB9 | Ordinal: 3514
        void getRealisticImu(void);

    // RVA: 0xE07 | Ordinal: 3592
        void getState(void);

    // RVA: 0xE25 | Ordinal: 3622
        void getTimeFromAlignmentStart(void);

    // RVA: 0xE29 | Ordinal: 3626
        void getTotalAcceleration(void) const;

    // RVA: 0xFF8 | Ordinal: 4089
        void get_pframe(void) const;

    // RVA: 0x112D | Ordinal: 4398
        void hotStartSetup(enum cockpit::ImuAlignmentScenarios);

    // RVA: 0x11BF | Ordinal: 4544
        void initialize(void);

    // RVA: 0x1246 | Ordinal: 4679
        void isAligning(void) const;

    // RVA: 0x1248 | Ordinal: 4681
        void isAlignmentDone(void) const;

    // RVA: 0x1268 | Ordinal: 4713
        void isMalfunctioning(void) const;

    // RVA: 0x1279 | Ordinal: 4730
        void isPowered(void) const;

    // RVA: 0x13EC | Ordinal: 5101
        void mainSimulation(double);

    // RVA: 0x150A | Ordinal: 5387
        void powerCycle(void);

    // RVA: 0x1522 | Ordinal: 5411
        void processAlignmentSteps(double);

    // RVA: 0x1530 | Ordinal: 5425
        void pushCoordinatesForAlignment(class osg::Vec3d);

    // RVA: 0x1696 | Ordinal: 5783
        void setAlignmentParameters(enum cockpit::ImuAlignmentScenarios const &, class ed::vector<struct cockpit::ImuAlignmentStepType, class ed::allocator<struct cockpit::ImuAlignmentStepType>> const &);

    // RVA: 0x1697 | Ordinal: 5784
        void setAlignmentType(enum cockpit::ImuAlignmentScenarios);

    // RVA: 0x1708 | Ordinal: 5897
        void setFirstTimeStart(bool);

    // RVA: 0x172F | Ordinal: 5936
        void setImuGeneration(enum cockpit::navigation::enum_IMU_generation);

    // RVA: 0x1749 | Ordinal: 5962
        void setMalfunctionStatus(bool);

    // RVA: 0x1770 | Ordinal: 6001
        void setOperatingConditions(bool);

    // RVA: 0x1775 | Ordinal: 6006
        void setOutputVelocityValid(bool);

    // RVA: 0x178F | Ordinal: 6032
        void setPower(bool);

    // RVA: 0x1794 | Ordinal: 6037
        void setRandomPlatformAngles(enum cockpit::ImuAlignmentScenarios);

    // RVA: 0x1798 | Ordinal: 6041
        void setRealisticImu(enum cockpit::navigation::IMU_realismGrade);

    // RVA: 0x17E4 | Ordinal: 6117
        void setValidity(bool);

    // RVA: 0x19D3 | Ordinal: 6612
        void startAlignment(bool);

    // RVA: 0x19FB | Ordinal: 6652
        void stopAlignment(bool, bool);

    // RVA: 0x1AB3 | Ordinal: 6836
        void update(double);

    // RVA: 0x30E | Ordinal: 783
        void _avIMU(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVIMU_HPP
