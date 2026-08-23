#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSidewinderSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSidewinderSeeker
{
public:

    // RVA: 0x1A5 | Ordinal: 422
        void avSidewinderSeeker(class cockpit::avSidewinderSeeker const &);

    // RVA: 0x1A6 | Ordinal: 423
        void avSidewinderSeeker(void);

    // RVA: 0x9AB | Ordinal: 2476
        void cage(void);

    // RVA: 0xA75 | Ordinal: 2678
        void check_gimbal_limits(void);

    // RVA: 0xCC8 | Ordinal: 3273
        void getGimbalLimit(void) const;

    // RVA: 0xD1B | Ordinal: 3356
        void getIsGimbalLimit(void) const;

    // RVA: 0xD3C | Ordinal: 3389
        void getLockStrength(void) const;

    // RVA: 0xD43 | Ordinal: 3396
        void getLockonDistance(class MovingObject *) const;

    // RVA: 0xD8E | Ordinal: 3471
        void getParentType(void) const;

    // RVA: 0xDCA | Ordinal: 3531
        void getScanRadius(void) const;

    // RVA: 0xDCD | Ordinal: 3534
        void getScanVelocity(void) const;

    // RVA: 0x1109 | Ordinal: 4362
        void gimbal_limits(double) const;

    // RVA: 0x1165 | Ordinal: 4454
        void initLimits(void);

    // RVA: 0x11EB | Ordinal: 4588
        void initialize(void);

    // RVA: 0x1435 | Ordinal: 5174
        void onAxesStop(void);

    // RVA: 0x166C | Ordinal: 5741
        void search(void);

    // RVA: 0x16BC | Ordinal: 5821
        void setCommand(unsigned int, double);

    // RVA: 0x16C3 | Ordinal: 5828
        void setConsentToTrack(float);

    // RVA: 0x1716 | Ordinal: 5911
        void setGimbalLimit(float);

    // RVA: 0x1731 | Ordinal: 5938
        void setInBoresight(bool);

    // RVA: 0x1782 | Ordinal: 6019
        void setParentType(class wsType const &);

    // RVA: 0x17A4 | Ordinal: 6053
        void setScanRadius(double);

    // RVA: 0x17A7 | Ordinal: 6056
        void setScanVelocity(double);

    // RVA: 0x17C3 | Ordinal: 6084
        void setSunFilter(float);

    // RVA: 0x19A0 | Ordinal: 6561
        void slaveToDirection(class osg::Vec3d const &);

    // RVA: 0x1A40 | Ordinal: 6721
        void toScan(void);

    // RVA: 0x1A43 | Ordinal: 6724
        void toSlave(void);

    // RVA: 0x1AD3 | Ordinal: 6868
        void update(double);

    // RVA: 0x1B4A | Ordinal: 6987
        void update_angles(double);

    // RVA: 0x34B | Ordinal: 844
        void _avSidewinderSeeker(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSIDEWINDERSEEKER_HPP
