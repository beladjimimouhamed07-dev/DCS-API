#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: Measure
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace common {

class Measure
{
public:

    // RVA: 0x1F | Ordinal: 32
        void Measure(class osgeo::proj::common::Measure const &);

    // RVA: 0x20 | Ordinal: 33
        void Measure(double, class osgeo::proj::common::UnitOfMeasure const &);

    // RVA: 0x14D | Ordinal: 334
        void convertToUnit(class osgeo::proj::common::UnitOfMeasure const &) const;

    // RVA: 0x279 | Ordinal: 634
        void getSIValue(void) const;

    // RVA: 0x34E | Ordinal: 847
        void unit(void) const;

    // RVA: 0x352 | Ordinal: 851
        void value(void) const;

    // RVA: 0x78 | Ordinal: 121
        void _Measure(void);
};

} // namespace common
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_MEASURE_HPP
