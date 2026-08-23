#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: AirdefenceData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {
namespace Threat {

class AirdefenceData
{
public:

    // RVA: 0x2B | Ordinal: 44
        void AirdefenceData(class AI::Threat::AirdefenceData &&);

    // RVA: 0x2C | Ordinal: 45
        void AirdefenceData(class AI::Threat::AirdefenceData const &);

    // RVA: 0x2D | Ordinal: 46
        void AirdefenceData(void);

    // RVA: 0x64A | Ordinal: 1611
        void checkAndBuild(class MovingObject *, unsigned int, class AI::Threat::AirdefenceData *);

    // RVA: 0x849 | Ordinal: 2122
        void getKillMaxHeight(void) const;

    // RVA: 0x84A | Ordinal: 2123
        void getKillMinHeight(class osg::Vec3f const &) const;

    // RVA: 0x9B7 | Ordinal: 2488
        void isLineInWEZ(class osg::Vec2f const &, class osg::Vec2f const &, float, float, float *, float *) const;

    // RVA: 0x9B8 | Ordinal: 2489
        void isLineInWEZ(class osg::Vec3f const &, class osg::Vec3f const &, float, float, float *, float *) const;

    // RVA: 0x9BB | Ordinal: 2492
        void isPointInWEZ(class osg::Vec2f const &, float, float, class osg::Vec2f *) const;

    // RVA: 0x9BC | Ordinal: 2493
        void isPointInWEZ(class osg::Vec3f const &, float, float, class osg::Vec3f *) const;

    // RVA: 0x237 | Ordinal: 568
        void _AirdefenceData(void);
};

} // namespace Threat
} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_AIRDEFENCEDATA_HPP
