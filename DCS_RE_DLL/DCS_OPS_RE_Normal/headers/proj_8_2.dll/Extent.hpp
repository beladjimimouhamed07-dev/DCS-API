#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: Extent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace metadata {

class Extent
{
public:

    // RVA: 0xE | Ordinal: 15
        void Extent(class osgeo::proj::metadata::Extent const &);

    // RVA: 0x147 | Ordinal: 328
        void contains(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::Extent>> const &) const;

    // RVA: 0x177 | Ordinal: 376
        void create(class osgeo::proj::util::optional<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::GeographicExtent>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::GeographicExtent>>>> const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::VerticalExtent>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::VerticalExtent>>>> const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::TemporalExtent>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::TemporalExtent>>>> const &);

    // RVA: 0x1C9 | Ordinal: 458
        void createFromBBOX(double, double, double, double, class osgeo::proj::util::optional<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &);

    // RVA: 0x244 | Ordinal: 581
        void description(void) const;

    // RVA: 0x25C | Ordinal: 605
        void geographicElements(void) const;

    // RVA: 0x29C | Ordinal: 669
        void intersection(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::Extent>> const &) const;

    // RVA: 0x29D | Ordinal: 670
        void intersects(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::Extent>> const &) const;

    // RVA: 0x33E | Ordinal: 831
        void temporalElements(void) const;

    // RVA: 0x35B | Ordinal: 860
        void verticalElements(void) const;

    // RVA: 0x5A | Ordinal: 91
        void _Extent(void);
};

} // namespace metadata
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_EXTENT_HPP
