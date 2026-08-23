#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: Transformation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace operation {

class Transformation
{
public:

    // RVA: 0x19C | Ordinal: 413
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class std::shared_ptr<class osgeo::proj::crs::CRS> const &, class osgeo::proj::util::PropertyMap const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::OperationParameter>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::OperationParameter>>>> const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::ParameterValue>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::ParameterValue>>>> const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x19D | Ordinal: 414
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class std::shared_ptr<class osgeo::proj::crs::CRS> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::OperationMethod>> const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::GeneralParameterValue>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::GeneralParameterValue>>>> const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x1A5 | Ordinal: 422
        void createAbridgedMolodensky(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, double, double, double, double, double, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x1AF | Ordinal: 432
        void createChangeVerticalUnit(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class osgeo::proj::common::Scale const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x1B3 | Ordinal: 436
        void createCoordinateFrameRotation(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, double, double, double, double, double, double, double, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x1D7 | Ordinal: 472
        void createGeocentricTranslations(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, double, double, double, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x1DA | Ordinal: 475
        void createGeographic2DOffsets(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x1DB | Ordinal: 476
        void createGeographic2DWithHeightOffsets(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x1DC | Ordinal: 477
        void createGeographic3DOffsets(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x1E4 | Ordinal: 485
        void createGravityRelatedHeightToGeographic3D(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class std::shared_ptr<class osgeo::proj::crs::CRS> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x1FB | Ordinal: 508
        void createLongitudeRotation(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class osgeo::proj::common::Angle const &);

    // RVA: 0x200 | Ordinal: 513
        void createMolodensky(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, double, double, double, double, double, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x201 | Ordinal: 514
        void createNTv2(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x212 | Ordinal: 531
        void createPositionVector(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, double, double, double, double, double, double, double, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x21C | Ordinal: 541
        void createTOWGS84(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class std::vector<double, class std::allocator<double>> const &);

    // RVA: 0x21D | Ordinal: 542
        void createTimeDependentCoordinateFrameRotation(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x21E | Ordinal: 543
        void createTimeDependentPositionVector(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x226 | Ordinal: 551
        void createVERTCON(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x22A | Ordinal: 555
        void createVerticalOffset(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class osgeo::proj::common::Length const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x27D | Ordinal: 638
        void getTOWGS84Parameters(void) const;

    // RVA: 0x2A2 | Ordinal: 675
        void inverse(void) const;

    // RVA: 0x32B | Ordinal: 812
        void sourceCRS(void) const;

    // RVA: 0x339 | Ordinal: 826
        void substitutePROJAlternativeGridNames(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::io::DatabaseContext>>) const;

    // RVA: 0x33C | Ordinal: 829
        void targetCRS(void) const;

    // RVA: 0x98 | Ordinal: 153
        void _Transformation(void);
};

} // namespace operation
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_TRANSFORMATION_HPP
