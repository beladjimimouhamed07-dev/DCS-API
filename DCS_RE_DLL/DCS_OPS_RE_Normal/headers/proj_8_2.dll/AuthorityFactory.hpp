#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: AuthorityFactory
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace io {

class AuthorityFactory
{
public:

    // RVA: 0x15B | Ordinal: 348
        void create(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::io::DatabaseContext>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x1B0 | Ordinal: 433
        void createCompoundCRS(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1B2 | Ordinal: 435
        void createConversion(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1B4 | Ordinal: 437
        void createCoordinateOperation(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool) const;

    // RVA: 0x1B5 | Ordinal: 438
        void createCoordinateReferenceSystem(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1B6 | Ordinal: 439
        void createCoordinateSystem(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1B7 | Ordinal: 440
        void createDatum(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1B8 | Ordinal: 441
        void createDatumEnsemble(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1C0 | Ordinal: 449
        void createEllipsoid(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1C5 | Ordinal: 454
        void createExtent(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1CA | Ordinal: 459
        void createFromCRSCodesWithIntermediates(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool, bool, bool, bool, class std::vector<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>> const &, enum osgeo::proj::io::AuthorityFactory::ObjectType, class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> const &, class std::shared_ptr<class osgeo::proj::metadata::Extent> const &, class std::shared_ptr<class osgeo::proj::metadata::Extent> const &) const;

    // RVA: 0x1CB | Ordinal: 460
        void createFromCoordinateReferenceSystemCodes(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool, bool, bool, bool, bool, bool, class std::shared_ptr<class osgeo::proj::metadata::Extent> const &, class std::shared_ptr<class osgeo::proj::metadata::Extent> const &) const;

    // RVA: 0x1CC | Ordinal: 461
        void createFromCoordinateReferenceSystemCodes(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1D8 | Ordinal: 473
        void createGeodeticCRS(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1D9 | Ordinal: 474
        void createGeodeticDatum(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1DD | Ordinal: 478
        void createGeographicCRS(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x206 | Ordinal: 519
        void createObject(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x207 | Ordinal: 520
        void createObjectsFromName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::vector<enum osgeo::proj::io::AuthorityFactory::ObjectType, class std::allocator<enum osgeo::proj::io::AuthorityFactory::ObjectType>> const &, bool, unsigned __int64) const;

    // RVA: 0x213 | Ordinal: 532
        void createPrimeMeridian(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x214 | Ordinal: 533
        void createProjectedCRS(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x225 | Ordinal: 550
        void createUnitOfMeasure(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x228 | Ordinal: 553
        void createVerticalCRS(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x229 | Ordinal: 554
        void createVerticalDatum(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x234 | Ordinal: 565
        void databaseContext(void) const;

    // RVA: 0x262 | Ordinal: 611
        void getAuthority(void) const;

    // RVA: 0x265 | Ordinal: 614
        void getAuthorityCodes(enum osgeo::proj::io::AuthorityFactory::ObjectType const &, bool) const;

    // RVA: 0x267 | Ordinal: 616
        void getCRSInfoList(void) const;

    // RVA: 0x268 | Ordinal: 617
        void getCelestialBodyList(void) const;

    // RVA: 0x26A | Ordinal: 619
        void getDescriptionText(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x270 | Ordinal: 625
        void getGeoidModels(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x277 | Ordinal: 632
        void getOfficialNameFromAlias(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &) const;

    // RVA: 0x27E | Ordinal: 639
        void getUnitList(void) const;

    // RVA: 0x298 | Ordinal: 665
        void identifyBodyFromSemiMajorAxis(double, double) const;

    // RVA: 0x2B2 | Ordinal: 691
        void listAreaOfUseFromName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool) const;

    // RVA: 0x37 | Ordinal: 56
        void _AuthorityFactory(void);
};

} // namespace io
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_AUTHORITYFACTORY_HPP
