#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: cLauncherRPG
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class cLauncherRPG
{
public:

    // RVA: 0x33 | Ordinal: 52
        void cLauncherRPG(void);

    // RVA: 0x26A | Ordinal: 619
        void calcPoint_(double, double, class Math::Vector<3, double> const &, double &, struct wNURSSight::targeting_data *);

    // RVA: 0x279 | Ordinal: 634
        void calculateAiming_(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d &, struct wNURSSight::targeting_data *);

    // RVA: 0x6A | Ordinal: 107
        void _cLauncherRPG(void);
};

// DCS_OPS_RE_WEAPONS.DLL_CLAUNCHERRPG_HPP
