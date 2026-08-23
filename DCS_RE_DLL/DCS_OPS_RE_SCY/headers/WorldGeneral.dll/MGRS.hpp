#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: MGRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace MapCoordsSpace {

class MGRS
{
public:

    // RVA: 0x535 | Ordinal: 1334
        void Bearing(double, double, double, double, enum MapCoordsSpace::ELLIPSOID);

    // RVA: 0x536 | Ordinal: 1335
        void BearingOnSphere(double, double, double, double, enum MapCoordsSpace::ELLIPSOID);

    // RVA: 0x537 | Ordinal: 1336
        void Bearing_from_x_z(double, double, double, double);

    // RVA: 0x538 | Ordinal: 1337
        void CalcLL(double, double, double, double, double &, double &, enum MapCoordsSpace::ELLIPSOID);

    // RVA: 0x539 | Ordinal: 1338
        void CalcLL_OnSphere(double, double, double, double, double &, double &, enum MapCoordsSpace::ELLIPSOID);

    // RVA: 0x55A | Ordinal: 1371
        void Distance(double, double, double, double, enum MapCoordsSpace::ELLIPSOID);

    // RVA: 0x55B | Ordinal: 1372
        void DistanceOnSphere(double, double, double, double, enum MapCoordsSpace::ELLIPSOID);

    // RVA: 0x56E | Ordinal: 1391
        void GetMGRSDigraph(int, int, int, char *);

    // RVA: 0x578 | Ordinal: 1401
        void GetOffsetEasting(char const *);

    // RVA: 0x579 | Ordinal: 1402
        void GetOffsetNothing(int, char const *, int, char);

    // RVA: 0x591 | Ordinal: 1426
        void GetUTMLetter(double);

    // RVA: 0x5AB | Ordinal: 1452
        void LLtoGridZoneUTM(double, double, int &, char &, int &, int &, enum MapCoordsSpace::ELLIPSOID);

    // RVA: 0x5AC | Ordinal: 1453
        void LLtoMGRS(double, double, char *, char *, int &, int &, enum MapCoordsSpace::ELLIPSOID);

    // RVA: 0x5B9 | Ordinal: 1466
        void MGRStoLL(char const *, char const *, int, int, double &, double &, enum MapCoordsSpace::ELLIPSOID);

    // RVA: 0x85B | Ordinal: 2140
        void getMGRSDigraphIndices(int, int, int, int &, int &, int &, int &);

    // RVA: 0x85C | Ordinal: 2141
        void getMGRSLetters(int, int, int, int, char &, char &);

    // RVA: 0x85D | Ordinal: 2142
        void getMGRSSquareIndices(int, int, int, int &, int &);

    // RVA: 0x85F | Ordinal: 2144
        void getMiddleLatForUTMZone(char);

    // RVA: 0x860 | Ordinal: 2145
        void getMiddleLongForUTMZone(int);

    // RVA: 0x8D5 | Ordinal: 2262
        void getOriginLongitude(int);

    // RVA: 0x909 | Ordinal: 2314
        void getUTMZoneLetter(double);

    // RVA: 0x90A | Ordinal: 2315
        void getUTMZoneNumber(double);
};

} // namespace MapCoordsSpace

// DCS_OPS_RE_WORLDGENERAL.DLL_MGRS_HPP
