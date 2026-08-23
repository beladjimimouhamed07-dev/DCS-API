#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrainExtra4.dll
// Class: edtex
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class edtex
{
public:

    // RVA: 0x2A | Ordinal: 43
        void fromLockontoTexCoord(class osg::Vec3d, struct edtex::GeoTiffProps const &, int, int, struct utm_private::projection_t const &);

    // RVA: 0x2B | Ordinal: 44
        void fromTexCoordtoLockon(class osg::Vec2d, struct edtex::GeoTiffProps const &, int, int, struct utm_private::projection_t const &);

    // RVA: 0x2C | Ordinal: 45
        void fromTexCoordtoUTM(class osg::Vec2d, struct edtex::GeoTiffProps const &, int, int);

    // RVA: 0x2D | Ordinal: 46
        void fromUTMtoTexCoord(class osg::Vec2d, struct edtex::GeoTiffProps const &, int, int);
};

// DCS_OPS_RE_EDTERRAINEXTRA4.DLL_EDTEX_HPP
