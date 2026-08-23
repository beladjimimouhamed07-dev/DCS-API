#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avIgla_seeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avIgla_seeker
{
public:

    // RVA: 0x130 | Ordinal: 305
        void avIgla_seeker(class cockpit::avIgla_seeker const &);

    // RVA: 0x131 | Ordinal: 306
        void avIgla_seeker(void);

    // RVA: 0xA72 | Ordinal: 2675
        void check_gimbal_limits(void);

    // RVA: 0xAB9 | Ordinal: 2746
        void clear(void);

    // RVA: 0xB80 | Ordinal: 2945
        void doSpecificCage(void);

    // RVA: 0xBBA | Ordinal: 3003
        void dropTrack(void);

    // RVA: 0xCC5 | Ordinal: 3270
        void getGimbalLimit(void) const;

    // RVA: 0xD18 | Ordinal: 3353
        void getIsGimbalLimit(void) const;

    // RVA: 0xD40 | Ordinal: 3393
        void getLockonDistance(class MovingObject *) const;

    // RVA: 0xD8B | Ordinal: 3468
        void getParentType(void) const;

    // RVA: 0xDDC | Ordinal: 3549
        void getSensivity(void);

    // RVA: 0x1106 | Ordinal: 4359
        void gimbal_limits(double) const;

    // RVA: 0x1162 | Ordinal: 4451
        void initLimits(void);

    // RVA: 0x11C5 | Ordinal: 4550
        void initialize(void);

    // RVA: 0x1252 | Ordinal: 4691
        void isCommandedToTrack(void) const;

    // RVA: 0x1261 | Ordinal: 4706
        void isInSearch(void) const;

    // RVA: 0x1275 | Ordinal: 4726
        void isOnSun(void) const;

    // RVA: 0x1432 | Ordinal: 5171
        void onAxesStop(void);

    // RVA: 0x1668 | Ordinal: 5737
        void search(void);

    // RVA: 0x16B9 | Ordinal: 5818
        void setCommand(unsigned int, double);

    // RVA: 0x1713 | Ordinal: 5908
        void setGimbalLimit(float);

    // RVA: 0x177F | Ordinal: 6016
        void setParentType(class wsType const &);

    // RVA: 0x17AA | Ordinal: 6059
        void setSensivity(double);

    // RVA: 0x17C8 | Ordinal: 6089
        void setTarget(class MovingObject *);

    // RVA: 0x19D9 | Ordinal: 6618
        void startSlew(void);

    // RVA: 0x1A53 | Ordinal: 6740
        void tracksAnything(void) const;

    // RVA: 0x1AB9 | Ordinal: 6842
        void update(double);

    // RVA: 0x1B46 | Ordinal: 6983
        void update_angles(double);

    // RVA: 0x313 | Ordinal: 788
        void _avIgla_seeker(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVIGLA_SEEKER_HPP
