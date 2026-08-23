#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Impact
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Damage {

class Impact
{
public:

    // RVA: 0xEE | Ordinal: 239
        void Impact(struct Damage::Impact &&);

    // RVA: 0xEF | Ordinal: 240
        void Impact(struct Damage::Impact const &);

    // RVA: 0xF0 | Ordinal: 241
        void Impact(bool, struct Damage::Initiator const &, unsigned int, enum WorldGeneral::CoordinatesOrigins, class osg::Vec3f const &, class osg::Vec3f const &, struct ImpactorWarhead const &);

    // RVA: 0xF1 | Ordinal: 242
        void Impact(bool, struct Damage::Initiator const &, unsigned int, enum WorldGeneral::CoordinatesOrigins, class osg::Vec3f const &, class osg::Vec3f const &, double, double, enum WorldGeneral::ExplosiveEffects, enum WorldGeneral::ExplosiveMaterials, double, double);

    // RVA: 0xF2 | Ordinal: 243
        void Impact(bool, struct Damage::Initiator const &, unsigned int, enum WorldGeneral::CoordinatesOrigins, class osg::Vec3f const &, class osg::Vec3f const &, enum Damage::Impact::ImpactTypes, enum WorldGeneral::ProjectileAPTypes, double, double, double, double, enum WorldGeneral::ExplosiveEffects, enum WorldGeneral::ExplosiveMaterials, double, double);

    // RVA: 0xF3 | Ordinal: 244
        void Impact(bool, struct Damage::Initiator const &, unsigned int, enum WorldGeneral::CoordinatesOrigins, class osg::Vec3f const &, class osg::Vec3f const &, enum WorldGeneral::ProjectileAPTypes, double, double);

    // RVA: 0x777 | Ordinal: 1912
        void dissipate(void);

    // RVA: 0x789 | Ordinal: 1930
        void enlights(double, double, double, class RandomObject *);

    // RVA: 0x7C6 | Ordinal: 1991
        void getAOERadius(void) const;

    // RVA: 0x8F2 | Ordinal: 2291
        void getShockwavePressure(double) const;

    // RVA: 0xB0E | Ordinal: 2831
        void penetrate(enum WorldGeneral::ConstructionalMaterials, double);

    // RVA: 0xB38 | Ordinal: 2873
        void r1(void) const;

    // RVA: 0xB39 | Ordinal: 2874
        void r2(void) const;

    // RVA: 0xC19 | Ordinal: 3098
        void stop(void);

    // RVA: 0xC4A | Ordinal: 3147
        void updateKineticEnergy(void);

    // RVA: 0xC4B | Ordinal: 3148
        void updatePayloadEnergy(void);

    // RVA: 0x27A | Ordinal: 635
        void _Impact(void);
};

} // namespace Damage

// DCS_OPS_RE_WORLDGENERAL.DLL_IMPACT_HPP
