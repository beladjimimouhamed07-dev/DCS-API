#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: EllipsoidalCS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace cs {

class EllipsoidalCS
{
public:

    // RVA: 0x173 | Ordinal: 372
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CoordinateSystemAxis>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CoordinateSystemAxis>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CoordinateSystemAxis>> const &);

    // RVA: 0x174 | Ordinal: 373
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CoordinateSystemAxis>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CoordinateSystemAxis>> const &);

    // RVA: 0x1F6 | Ordinal: 503
        void createLatitudeLongitude(class osgeo::proj::common::UnitOfMeasure const &);

    // RVA: 0x1F7 | Ordinal: 504
        void createLatitudeLongitudeEllipsoidalHeight(class osgeo::proj::common::UnitOfMeasure const &, class osgeo::proj::common::UnitOfMeasure const &);

    // RVA: 0x1F9 | Ordinal: 506
        void createLongitudeLatitude(class osgeo::proj::common::UnitOfMeasure const &);

    // RVA: 0x1FA | Ordinal: 507
        void createLongitudeLatitudeEllipsoidalHeight(class osgeo::proj::common::UnitOfMeasure const &, class osgeo::proj::common::UnitOfMeasure const &);

    // RVA: 0x56 | Ordinal: 87
        void _EllipsoidalCS(void);
};

} // namespace cs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_ELLIPSOIDALCS_HPP
