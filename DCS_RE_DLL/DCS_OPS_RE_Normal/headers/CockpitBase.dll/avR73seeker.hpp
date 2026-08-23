#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avR73seeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avR73seeker
{
public:

    // RVA: 0x17A | Ordinal: 379
        void avR73seeker(class cockpit::avR73seeker const &);

    // RVA: 0x17B | Ordinal: 380
        void avR73seeker(void);

    // RVA: 0x9A9 | Ordinal: 2474
        void cage(void);

    // RVA: 0xA74 | Ordinal: 2677
        void check_gimbal_limits(void);

    // RVA: 0xABD | Ordinal: 2750
        void clear(void);

    // RVA: 0xCC7 | Ordinal: 3272
        void getGimbalLimit(void) const;

    // RVA: 0xD1A | Ordinal: 3355
        void getIsGimbalLimit(void) const;

    // RVA: 0xD42 | Ordinal: 3395
        void getLockonDistance(class MovingObject *) const;

    // RVA: 0xD8D | Ordinal: 3470
        void getParentType(void) const;

    // RVA: 0xDCC | Ordinal: 3533
        void getScanVelocity(void) const;

    // RVA: 0xDDD | Ordinal: 3550
        void getSensivity(void);

    // RVA: 0x1108 | Ordinal: 4361
        void gimbal_limits(double) const;

    // RVA: 0x1164 | Ordinal: 4453
        void initLimits(void);

    // RVA: 0x11DB | Ordinal: 4572
        void initialize(void);

    // RVA: 0x1434 | Ordinal: 5173
        void onAxesStop(void);

    // RVA: 0x166A | Ordinal: 5739
        void search(void);

    // RVA: 0x16BB | Ordinal: 5820
        void setCommand(unsigned int, double);

    // RVA: 0x1715 | Ordinal: 5910
        void setGimbalLimit(float);

    // RVA: 0x1781 | Ordinal: 6018
        void setParentType(class wsType const &);

    // RVA: 0x17A6 | Ordinal: 6055
        void setScanVelocity(double);

    // RVA: 0x17AB | Ordinal: 6060
        void setSensivity(double);

    // RVA: 0x17C9 | Ordinal: 6090
        void setTarget(class MovingObject *);

    // RVA: 0x199F | Ordinal: 6560
        void slaveToDirection(class osg::Vec3d const &);

    // RVA: 0x1A42 | Ordinal: 6723
        void toSlave(void);

    // RVA: 0x1AC9 | Ordinal: 6858
        void update(double);

    // RVA: 0x1B49 | Ordinal: 6986
        void update_angles(double);

    // RVA: 0x335 | Ordinal: 822
        void _avR73seeker(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVR73SEEKER_HPP
