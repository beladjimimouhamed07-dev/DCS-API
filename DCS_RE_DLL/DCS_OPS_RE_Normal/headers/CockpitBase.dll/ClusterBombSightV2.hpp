#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ClusterBombSightV2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ClusterBombSightV2
{
public:

    // RVA: 0x34 | Ordinal: 53
        void ClusterBombSightV2(class cockpit::ClusterBombSightV2 const &);

    // RVA: 0x35 | Ordinal: 54
        void ClusterBombSightV2(class weapon_base::WindTableProxy_<float> const *);

    // RVA: 0x7C4 | Ordinal: 1989
        void GetOpenTime(void);

    // RVA: 0x8B4 | Ordinal: 2229
        void SetOpenTime(double);

    // RVA: 0x9D9 | Ordinal: 2522
        void calculate_aim_point(class osg::Vec3f const &, class osg::Vec3f const &, double, double &, class osg::Vec3d &);

    // RVA: 0x29F | Ordinal: 672
        void _ClusterBombSightV2(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CLUSTERBOMBSIGHTV2_HPP
