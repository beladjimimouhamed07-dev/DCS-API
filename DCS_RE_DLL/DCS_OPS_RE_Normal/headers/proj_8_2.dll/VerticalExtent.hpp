#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: VerticalExtent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace metadata {

class VerticalExtent
{
public:

    // RVA: 0x149 | Ordinal: 330
        void contains(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::VerticalExtent>> const &) const;

    // RVA: 0x1A1 | Ordinal: 418
        void create(double, double, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::common::UnitOfMeasure>> const &);

    // RVA: 0x29F | Ordinal: 672
        void intersects(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::VerticalExtent>> const &) const;

    // RVA: 0x2B8 | Ordinal: 697
        void maximumValue(void) const;

    // RVA: 0x2BC | Ordinal: 701
        void minimumValue(void) const;

    // RVA: 0x34F | Ordinal: 848
        void unit(void) const;

    // RVA: 0x9D | Ordinal: 158
        void _VerticalExtent(void);
};

} // namespace metadata
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_VERTICALEXTENT_HPP
