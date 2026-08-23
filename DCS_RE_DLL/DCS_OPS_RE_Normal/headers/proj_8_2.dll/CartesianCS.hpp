#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: CartesianCS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace cs {

class CartesianCS
{
public:

    // RVA: 0x15E | Ordinal: 351
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CoordinateSystemAxis>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CoordinateSystemAxis>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CoordinateSystemAxis>> const &);

    // RVA: 0x15F | Ordinal: 352
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CoordinateSystemAxis>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CoordinateSystemAxis>> const &);

    // RVA: 0x1B9 | Ordinal: 442
        void createEastingNorthing(class osgeo::proj::common::UnitOfMeasure const &);

    // RVA: 0x1D6 | Ordinal: 471
        void createGeocentric(class osgeo::proj::common::UnitOfMeasure const &);

    // RVA: 0x204 | Ordinal: 517
        void createNorthPoleEastingSouthNorthingSouth(class osgeo::proj::common::UnitOfMeasure const &);

    // RVA: 0x205 | Ordinal: 518
        void createNorthingEasting(class osgeo::proj::common::UnitOfMeasure const &);

    // RVA: 0x218 | Ordinal: 537
        void createSouthPoleEastingNorthNorthingNorth(class osgeo::proj::common::UnitOfMeasure const &);

    // RVA: 0x233 | Ordinal: 564
        void createWestingSouthing(class osgeo::proj::common::UnitOfMeasure const &);

    // RVA: 0x3D | Ordinal: 62
        void _CartesianCS(void);
};

} // namespace cs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_CARTESIANCS_HPP
