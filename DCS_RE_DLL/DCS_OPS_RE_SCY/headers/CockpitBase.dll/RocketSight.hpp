#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: RocketSight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class RocketSight
{
public:

    // RVA: 0x73 | Ordinal: 116
        void RocketSight(class weapon_base::WindTableProxy_<float> const *);

    // RVA: 0x98A | Ordinal: 2443
        void breakaway(void) const;

    // RVA: 0x9C9 | Ordinal: 2506
        void calculate(class wPosition3<float> const &, class osg::Vec3f const &, bool);

    // RVA: 0x9CA | Ordinal: 2507
        void calculate(void);

    // RVA: 0x138B | Ordinal: 5004
        void launch_authorized(void) const;

    // RVA: 0x179F | Ordinal: 6048
        void setRocketType(class wsType);

    // RVA: 0x2B5 | Ordinal: 694
        void _RocketSight(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_ROCKETSIGHT_HPP
