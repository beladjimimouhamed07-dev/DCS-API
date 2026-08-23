#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: CannonSight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class CannonSight
{
public:

    // RVA: 0x15 | Ordinal: 22
        void CannonSight(class wShellDescriptor const &);

    // RVA: 0x16 | Ordinal: 23
        void CannonSight(void);

    // RVA: 0x1B8 | Ordinal: 441
        void Gun_Aiming(class wPosition3<float> const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, bool &, bool &, bool &, float, class osg::Vec3f *, double *);

    // RVA: 0x1B9 | Ordinal: 442
        void Gun_AimingForGroundUnits(class wPosition3<float> const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f *, double *);

    // RVA: 0x1BA | Ordinal: 443
        void Gun_Aiming_Table(class wPosition3<float> const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, bool &, bool &, bool &, int);

    // RVA: 0x1BB | Ordinal: 444
        void Gun_Aiming_Time(class wPosition3<float> const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, bool &, bool &, bool &, int, double, double, double);

    // RVA: 0x1BC | Ordinal: 445
        void Gun_Vehicle_Aiming(class wPosition3<float> const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, int, class osg::Vec3f *, double *);

    // RVA: 0x27B | Ordinal: 636
        void calculateImpactPoint(class wPosition3<float> const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f &, double &);

    // RVA: 0x27D | Ordinal: 638
        void calculateTOFToAirTargetPrecise(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, double, class Math::Vector<3, double> const &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, double, double &, class Math::Vector<3, double> &, class Math::Vector<3, double> &, int &);

    // RVA: 0x378 | Ordinal: 889
        void getDescriptor(void) const;

    // RVA: 0x4E7 | Ordinal: 1256
        void loadShell(class wShellDescriptor const &);

    // RVA: 0x64A | Ordinal: 1611
        void sightAlt(double, double, class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d &, double &, double);

    // RVA: 0x64B | Ordinal: 1612
        void sightAlt(double, double, class osg::Vec3d const &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, class osg::Vec3d &, double &, double);

    // RVA: 0x64C | Ordinal: 1613
        void sightDist(double, double, class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d &, double &, double, bool);

    // RVA: 0x64D | Ordinal: 1614
        void sightDist(double, double, class osg::Vec3d const &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, class osg::Vec3d &, double &, double, bool);

    // RVA: 0x64E | Ordinal: 1615
        void sightTime(double, double, class osg::Vec3d const &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, class osg::Vec3d &, double);

    // RVA: 0x64F | Ordinal: 1616
        void sightVel(double, double, class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d &, double &, double);

    // RVA: 0x650 | Ordinal: 1617
        void sightVel(double, double, class osg::Vec3d const &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, class osg::Vec3d &, double &, double);

    // RVA: 0x658 | Ordinal: 1625
        void simulate_shot(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d const &, double &, class osg::Vec3d &);

    // RVA: 0x694 | Ordinal: 1685
        void updateFEDS(struct FEDS_data &, double, bool, double);

    // RVA: 0x695 | Ordinal: 1686
        void updateFEDSpoint(struct FEDS_point &, double, bool, double);

    // RVA: 0x696 | Ordinal: 1687
        void updateFM_(class Math::Vector<3, double> &, class Math::Vector<3, double> &, class Math::Vector<3, double> &, double);

    // RVA: 0x5E | Ordinal: 95
        void _CannonSight(void);
};

// DCS_OPS_RE_WEAPONS.DLL_CANNONSIGHT_HPP
