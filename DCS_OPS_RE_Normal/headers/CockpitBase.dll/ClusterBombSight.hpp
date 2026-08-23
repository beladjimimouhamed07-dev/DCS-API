#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ClusterBombSight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ClusterBombSight
{
public:

    // RVA: 0x32 | Ordinal: 51
        void ClusterBombSight(class cockpit::ClusterBombSight const &);

    // RVA: 0x33 | Ordinal: 52
        void ClusterBombSight(class weapon_base::WindTableProxy_<float> const *);

    // RVA: 0x7C3 | Ordinal: 1988
        void GetOpenHeight(void);

    // RVA: 0x8B3 | Ordinal: 2228
        void SetOpenHeight(double);

    // RVA: 0x9D8 | Ordinal: 2521
        void calculate_aim_point(class osg::Vec3f const &, class osg::Vec3f const &, double, double &, class osg::Vec3d &);

    // RVA: 0x29E | Ordinal: 671
        void _ClusterBombSight(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CLUSTERBOMBSIGHT_HPP
