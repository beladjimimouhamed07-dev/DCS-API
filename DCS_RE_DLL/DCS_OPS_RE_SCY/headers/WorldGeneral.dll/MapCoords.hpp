#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: MapCoords
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace MapCoordsSpace {

class MapCoords
{
public:

    // RVA: 0x54B | Ordinal: 1356
        void ConvertCoordToGradMinSec(double, int *, int *, int *, int *);

    // RVA: 0x54C | Ordinal: 1357
        void ConvertCoordToGradMinSec(double, int *, int *, double *, double *);

    // RVA: 0x54D | Ordinal: 1358
        void ConvertLatLonToStringLL(double, double, char const *, bool);

    // RVA: 0x54E | Ordinal: 1359
        void ConvertLatitudeToString(double, bool);

    // RVA: 0x54F | Ordinal: 1360
        void ConvertLongitudeToString(double, bool);

    // RVA: 0x566 | Ordinal: 1383
        void GetCoords(double, double, double &, double &);

    // RVA: 0x567 | Ordinal: 1384
        void GetCoords(double, double, class osg::Vec3d &);

    // RVA: 0x58F | Ordinal: 1424
        void GetTrueNorthDirection(class osg::Vec3d const &);

    // RVA: 0x590 | Ordinal: 1425
        void GetTrueNorthDirectionLL(double, double);

    // RVA: 0x5AD | Ordinal: 1454
        void LatLon(class osg::Vec3d const &, double &, double &);

    // RVA: 0x5AE | Ordinal: 1455
        void LatLon(double, double, double &, double &);

    // RVA: 0x5AF | Ordinal: 1456
        void Latitude(double, double);

    // RVA: 0x5B8 | Ordinal: 1465
        void Longitude(double, double);

    // RVA: 0x5D5 | Ordinal: 1494
        void PrintLatLonToBufferLL(char *, unsigned int, double, double, char const *, bool, bool);
};

} // namespace MapCoordsSpace

// DCS_OPS_RE_WORLDGENERAL.DLL_MAPCOORDS_HPP
