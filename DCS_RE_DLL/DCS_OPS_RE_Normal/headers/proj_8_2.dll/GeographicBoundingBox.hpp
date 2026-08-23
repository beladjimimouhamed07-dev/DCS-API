#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: GeographicBoundingBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace metadata {

class GeographicBoundingBox
{
public:

    // RVA: 0x17D | Ordinal: 382
        void create(double, double, double, double);

    // RVA: 0x24A | Ordinal: 587
        void eastBoundLongitude(void) const;

    // RVA: 0x2C7 | Ordinal: 712
        void northBoundLatitude(void) const;

    // RVA: 0x32D | Ordinal: 814
        void southBoundLatitude(void) const;

    // RVA: 0x35E | Ordinal: 863
        void westBoundLongitude(void) const;

    // RVA: 0x65 | Ordinal: 102
        void _GeographicBoundingBox(void);
};

} // namespace metadata
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_GEOGRAPHICBOUNDINGBOX_HPP
