#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avIRSensor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avIRSensor
{
public:

    // RVA: 0x12E | Ordinal: 303
        void avIRSensor(class cockpit::avIRSensor const &);

    // RVA: 0x12F | Ordinal: 304
        void avIRSensor(void);

    // RVA: 0x9A7 | Ordinal: 2472
        void cage(void);

    // RVA: 0xA4C | Ordinal: 2637
        void checkInSearch(bool);

    // RVA: 0xA71 | Ordinal: 2674
        void check_gimbal_limits(void);

    // RVA: 0xAB8 | Ordinal: 2745
        void clear(void);

    // RVA: 0xB07 | Ordinal: 2824
        void consentToTrack(void);

    // RVA: 0xBB9 | Ordinal: 3002
        void dropTrack(void);

    // RVA: 0xC57 | Ordinal: 3160
        void getCagedSearchAngle(void);

    // RVA: 0xCF2 | Ordinal: 3315
        void getHalfApertureSize(void) const;

    // RVA: 0xD09 | Ordinal: 3338
        void getInSearch(void) const;

    // RVA: 0xD4E | Ordinal: 3407
        void getMaxRangeWithAB(void) const;

    // RVA: 0xD4F | Ordinal: 3408
        void getMaxRangeWoutAB(void) const;

    // RVA: 0xD50 | Ordinal: 3409
        void getMaxSlewVelocity(void) const;

    // RVA: 0xD52 | Ordinal: 3411
        void getMaxVelocity(void) const;

    // RVA: 0xE11 | Ordinal: 3602
        void getStatusID(void) const;

    // RVA: 0xE18 | Ordinal: 3609
        void getTarget(void);

    // RVA: 0xF0B | Ordinal: 3852
        void get_default_azimuth(void);

    // RVA: 0xF0C | Ordinal: 3853
        void get_default_elevation(void);

    // RVA: 0x1105 | Ordinal: 4358
        void gimbal_limits(double) const;

    // RVA: 0x11C4 | Ordinal: 4549
        void initialize(void);

    // RVA: 0x1431 | Ordinal: 5170
        void onAxesStop(void);

    // RVA: 0x1621 | Ordinal: 5666
        void resetAxes(void);

    // RVA: 0x1626 | Ordinal: 5671
        void resetHorizontalAxis(void);

    // RVA: 0x162B | Ordinal: 5676
        void resetVerticalAxis(void);

    // RVA: 0x1667 | Ordinal: 5736
        void search(void);

    // RVA: 0x16AC | Ordinal: 5805
        void setCagedSearchAngle(double);

    // RVA: 0x16B8 | Ordinal: 5817
        void setCommand(unsigned int, double);

    // RVA: 0x16EF | Ordinal: 5872
        void setElecPower(bool);

    // RVA: 0x1720 | Ordinal: 5921
        void setHalfApertureSize(float);

    // RVA: 0x174E | Ordinal: 5967
        void setMaxSlewVelocity(double);

    // RVA: 0x1750 | Ordinal: 5969
        void setMaxVelocity(double);

    // RVA: 0x17C0 | Ordinal: 6081
        void setStatusID(unsigned int);

    // RVA: 0x17C7 | Ordinal: 6088
        void setTarget(class MovingObject *);

    // RVA: 0x186B | Ordinal: 6252
        void set_default_azimuth(double);

    // RVA: 0x186D | Ordinal: 6254
        void set_default_elevation(double);

    // RVA: 0x199D | Ordinal: 6558
        void slaveToDirection(class osg::Vec3d const &);

    // RVA: 0x19A9 | Ordinal: 6570
        void slewHorizontal(double);

    // RVA: 0x19AA | Ordinal: 6571
        void slewStop(void);

    // RVA: 0x19AB | Ordinal: 6572
        void slewStopHorizontal(void);

    // RVA: 0x19AC | Ordinal: 6573
        void slewStopVertical(void);

    // RVA: 0x19AD | Ordinal: 6574
        void slewVertical(double);

    // RVA: 0x19D8 | Ordinal: 6617
        void startSlew(void);

    // RVA: 0x1A74 | Ordinal: 6773
        void uncage(void);

    // RVA: 0x1AB8 | Ordinal: 6841
        void update(double);

    // RVA: 0x1B45 | Ordinal: 6982
        void update_angles(double);

    // RVA: 0x312 | Ordinal: 787
        void _avIRSensor(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVIRSENSOR_HPP
