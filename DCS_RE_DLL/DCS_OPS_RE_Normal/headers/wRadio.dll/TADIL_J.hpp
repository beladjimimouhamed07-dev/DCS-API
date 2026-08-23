#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: TADIL_J
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class TADIL_J
{
public:

    // RVA: 0x20F | Ordinal: 528
        void encrypt_FighterToFighterAirTrack(struct TADIL_J::DataAirTrack const &, class ed::basic_string<char> &);

    // RVA: 0x212 | Ordinal: 531
        void extract_FighterToFighterAirTrack(class ed::basic_string<char> const &, struct TADIL_J::DataAirTrack &);

    // RVA: 0x229 | Ordinal: 554
        void getAirPlatform(class wsType const &);

    // RVA: 0x22A | Ordinal: 555
        void getAirSpecificType(class MovingObject const *);

    // RVA: 0x22B | Ordinal: 556
        void getAltitudeQuality(double);

    // RVA: 0x250 | Ordinal: 593
        void getElevationQuality(double);

    // RVA: 0x25D | Ordinal: 606
        void getGeodeticPositionQuality(double);

    // RVA: 0x27A | Ordinal: 635
        void getIntervalBetweenTimeSlots(enum TADIL_J::RecurrenceRateNumber);

    // RVA: 0x28C | Ordinal: 653
        void getLink16Callsign(class ed::basic_string<char> const &, class ed::base_fixed_string<char, 4> &);

    // RVA: 0x2A7 | Ordinal: 680
        void getNumberOfAvailableTimeSlotsPerEpoch(enum TADIL_J::RecurrenceRateNumber);

    // RVA: 0x2AD | Ordinal: 686
        void getPointTN(class MovingObject const *, unsigned int);

    // RVA: 0x2B0 | Ordinal: 689
        void getPositionQuality(double);

    // RVA: 0x2B4 | Ordinal: 693
        void getRRN(enum TADIL_J::J_Message);

    // RVA: 0x2BB | Ordinal: 700
        void getRelativeAzimuthQuality(double);

    // RVA: 0x2CE | Ordinal: 719
        void getStrengthPercentOfTrackedVehicles(bool, double);

    // RVA: 0x2CF | Ordinal: 720
        void getStrengthTotalNumberOfVehicles(bool, unsigned __int64);

    // RVA: 0x2D4 | Ordinal: 725
        void getTNbyStr(class ed::base_fixed_string<char, 5> const &);

    // RVA: 0x2DA | Ordinal: 731
        void getTimeIntervalBetweenTimeSlots(enum TADIL_J::RecurrenceRateNumber);

    // RVA: 0x2DB | Ordinal: 732
        void getTimeQuality(double);

    // RVA: 0x2DC | Ordinal: 733
        void getTrackQuality(bool, double);

    // RVA: 0x2EC | Ordinal: 749
        void getUniqueTN(class MovingObject const *);

    // RVA: 0x13F | Ordinal: 320
        void operator__(class ed::basic_string<char> &, struct TADIL_J::DataAirPPLI const &);

    // RVA: 0x140 | Ordinal: 321
        void operator__(class ed::basic_string<char> &, struct TADIL_J::DataAirPlatformAndSystemStatus const &);

    // RVA: 0x141 | Ordinal: 322
        void operator__(class ed::basic_string<char> &, struct TADIL_J::DataAirTrack const &);

    // RVA: 0x142 | Ordinal: 323
        void operator__(class ed::basic_string<char> &, struct TADIL_J::DataReferencePoint const &);

    // RVA: 0x143 | Ordinal: 324
        void operator__(class ed::basic_string<char> &, struct TADIL_J::DataTargetSorting const &);

    // RVA: 0x144 | Ordinal: 325
        void operator__(class ed::basic_string<char> &, struct TADIL_J::HTS_Quality const &);

    // RVA: 0x133 | Ordinal: 308
        void operator__(class TADIL_J::msgPacker const &, struct TADIL_J::DataAirPPLI &);

    // RVA: 0x134 | Ordinal: 309
        void operator__(class TADIL_J::msgPacker const &, struct TADIL_J::DataAirPlatformAndSystemStatus &);

    // RVA: 0x135 | Ordinal: 310
        void operator__(class TADIL_J::msgPacker const &, struct TADIL_J::DataAirTrack &);

    // RVA: 0x136 | Ordinal: 311
        void operator__(class TADIL_J::msgPacker const &, struct TADIL_J::DataReferencePoint &);

    // RVA: 0x137 | Ordinal: 312
        void operator__(class TADIL_J::msgPacker const &, struct TADIL_J::DataTargetSorting &);

    // RVA: 0x138 | Ordinal: 313
        void operator__(class TADIL_J::msgPacker const &, struct TADIL_J::HTS_Quality &);

    // RVA: 0x382 | Ordinal: 899
        void packExtensionMessage(enum TADIL_J::ExtensionMessage, class ed::basic_string<char> const &);

    // RVA: 0x384 | Ordinal: 901
        void packFighterToFighterAirTrack(struct TADIL_J::DataAirTrack const &);

    // RVA: 0x394 | Ordinal: 917
        void parseExtensionMessage(class ed::basic_string<char> const &, class ed::basic_string<char> &);

    // RVA: 0x44C | Ordinal: 1101
        void setStrTN(unsigned __int64, class ed::base_fixed_string<char, 5> &);
};

// DCS_OPS_RE_WRADIO.DLL_TADIL_J_HPP
