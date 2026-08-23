#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avR60Seeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avR60Seeker
{
public:

    // RVA: 0x178 | Ordinal: 377
        void avR60Seeker(class cockpit::avR60Seeker const &);

    // RVA: 0x179 | Ordinal: 378
        void avR60Seeker(void);

    // RVA: 0x9A8 | Ordinal: 2473
        void cage(void);

    // RVA: 0xA73 | Ordinal: 2676
        void check_gimbal_limits(void);

    // RVA: 0xCC6 | Ordinal: 3271
        void getGimbalLimit(void) const;

    // RVA: 0xD19 | Ordinal: 3354
        void getIsGimbalLimit(void) const;

    // RVA: 0xD41 | Ordinal: 3394
        void getLockonDistance(class MovingObject *) const;

    // RVA: 0xD8C | Ordinal: 3469
        void getParentType(void) const;

    // RVA: 0xDC9 | Ordinal: 3530
        void getScanRadius(void) const;

    // RVA: 0xDCB | Ordinal: 3532
        void getScanVelocity(void) const;

    // RVA: 0x1107 | Ordinal: 4360
        void gimbal_limits(double) const;

    // RVA: 0x1163 | Ordinal: 4452
        void initLimits(void);

    // RVA: 0x11DA | Ordinal: 4571
        void initialize(void);

    // RVA: 0x1276 | Ordinal: 4727
        void isOnSun(void) const;

    // RVA: 0x1433 | Ordinal: 5172
        void onAxesStop(void);

    // RVA: 0x1669 | Ordinal: 5738
        void search(void);

    // RVA: 0x16BA | Ordinal: 5819
        void setCommand(unsigned int, double);

    // RVA: 0x1714 | Ordinal: 5909
        void setGimbalLimit(float);

    // RVA: 0x1730 | Ordinal: 5937
        void setInBoresight(bool);

    // RVA: 0x1780 | Ordinal: 6017
        void setParentType(class wsType const &);

    // RVA: 0x17A3 | Ordinal: 6052
        void setScanRadius(double);

    // RVA: 0x17A5 | Ordinal: 6054
        void setScanVelocity(double);

    // RVA: 0x199E | Ordinal: 6559
        void slaveToDirection(class osg::Vec3d const &);

    // RVA: 0x1A3F | Ordinal: 6720
        void toScan(void);

    // RVA: 0x1A41 | Ordinal: 6722
        void toSlave(void);

    // RVA: 0x1AC8 | Ordinal: 6857
        void update(double);

    // RVA: 0x1B48 | Ordinal: 6985
        void update_angles(double);

    // RVA: 0x334 | Ordinal: 821
        void _avR60Seeker(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVR60SEEKER_HPP
