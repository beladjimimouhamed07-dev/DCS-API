#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: TemporalCRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace crs {

class TemporalCRS
{
public:

    // RVA: 0x154 | Ordinal: 341
        void coordinateSystem(void) const;

    // RVA: 0x197 | Ordinal: 408
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::datum::TemporalDatum>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::TemporalCS>> const &);

    // RVA: 0x239 | Ordinal: 570
        void datum(void) const;

    // RVA: 0x92 | Ordinal: 147
        void _TemporalCRS(void);
};

} // namespace crs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_TEMPORALCRS_HPP
