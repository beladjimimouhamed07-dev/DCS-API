#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: SADL_msgsPacker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class SADL_msgsPacker
{
public:

    // RVA: 0x1A7 | Ordinal: 424
        void LatToString(double, class ed::basic_string<char> &);

    // RVA: 0x1A8 | Ordinal: 425
        void LongToString(double, class ed::basic_string<char> &);

    // RVA: 0x2AC | Ordinal: 685
        void getPlatform(class MovingObject *, int &);

    // RVA: 0x2D0 | Ordinal: 721
        void getStypeAndPlatform(class MovingObject *, int &, int &);

    // RVA: 0x2EA | Ordinal: 747
        void getUniqueIntTN(class MovingObject *);

    // RVA: 0x2EB | Ordinal: 748
        void getUniqueStrTN(class MovingObject *);

    // RVA: 0x328 | Ordinal: 809
        void initializeDynamicSpecificTypes(void);

    // RVA: 0x35E | Ordinal: 863
        void pack9Liner(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &, double, double, double, class ed::basic_string<char> const &, double, double, class ed::basic_string<char> const &, double, class ed::basic_string<char> const &, class ed::basic_string<char> &);

    // RVA: 0x364 | Ordinal: 869
        void packAirPPLI(class ed::basic_string<char> const &, int, double, double, double, double, double, class ed::basic_string<char> const &, class ed::basic_string<char> &);

    // RVA: 0x367 | Ordinal: 872
        void packAirTrack(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, int, int, double, double, double, double, double, class ed::basic_string<char> &);

    // RVA: 0x386 | Ordinal: 903
        void packGroundPPLI(class ed::basic_string<char> const &, int, double, double, double, double, double, class ed::basic_string<char> &);

    // RVA: 0x388 | Ordinal: 905
        void packLandTrack(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, int, int, double, double, double, double, double, class ed::basic_string<char> &);

    // RVA: 0x389 | Ordinal: 906
        void packMiniSPI(class ed::basic_string<char> const &, int, int, int, int, double, double, double, class ed::basic_string<char> &);

    // RVA: 0x38A | Ordinal: 907
        void packMissionAssignment(class ed::basic_string<char> const &, class ed::basic_string<char> const &, double, double, double, double, double, int, class ed::basic_string<char> &);

    // RVA: 0x38B | Ordinal: 908
        void packPlatformAndSysStat(class ed::basic_string<char> const &, class AirPlatformStatus &, class ed::basic_string<char> &);

    // RVA: 0x38D | Ordinal: 910
        void packSurfaceTrack(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, int, int, double, double, double, double, double, class ed::basic_string<char> &);
};

// DCS_OPS_RE_WRADIO.DLL_SADL_MSGSPACKER_HPP
