#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: SingleOperation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace operation {

class SingleOperation
{
public:

    // RVA: 0x20C | Ordinal: 525
        void createPROJBased(class osgeo::proj::util::PropertyMap const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::shared_ptr<class osgeo::proj::crs::CRS> const &, class std::shared_ptr<class osgeo::proj::crs::CRS> const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x28B | Ordinal: 652
        void gridsNeeded(class std::shared_ptr<class osgeo::proj::io::DatabaseContext> const &, bool) const;

    // RVA: 0x2BA | Ordinal: 699
        void method(void) const;

    // RVA: 0x2D0 | Ordinal: 721
        void parameterValue(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, int) const;

    // RVA: 0x2D1 | Ordinal: 722
        void parameterValue(int) const;

    // RVA: 0x2D2 | Ordinal: 723
        void parameterValueMeasure(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, int) const;

    // RVA: 0x2D3 | Ordinal: 724
        void parameterValueMeasure(int) const;

    // RVA: 0x2D4 | Ordinal: 725
        void parameterValueNumeric(int, class osgeo::proj::common::UnitOfMeasure const &) const;

    // RVA: 0x2D5 | Ordinal: 726
        void parameterValues(void) const;

    // RVA: 0x351 | Ordinal: 850
        void validateParameters(void) const;

    // RVA: 0x90 | Ordinal: 145
        void _SingleOperation(void);
};

} // namespace operation
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_SINGLEOPERATION_HPP
