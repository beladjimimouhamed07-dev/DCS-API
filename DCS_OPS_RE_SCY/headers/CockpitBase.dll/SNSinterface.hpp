#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: SNSinterface
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class SNSinterface
{
public:

    // RVA: 0x76 | Ordinal: 119
        void SNSinterface(class cockpit::SNSinterface const &);

    // RVA: 0x77 | Ordinal: 120
        void SNSinterface(void);

    // RVA: 0x8EB | Ordinal: 2284
        void activateMessageUpdate(bool);

    // RVA: 0xBCE | Ordinal: 3023
        void excludeSatellite(unsigned int);

    // RVA: 0xCBA | Ordinal: 3259
        void getGNSScoordinatesVector(void) const;

    // RVA: 0xCBB | Ordinal: 3260
        void getGNSSspeedVector(void) const;

    // RVA: 0xDC7 | Ordinal: 3528
        void getSatelliteCommonNumber(unsigned int, unsigned int) const;

    // RVA: 0xDC8 | Ordinal: 3529
        void getSatsQuantity(unsigned char, enum cockpit::enum_satellites_qty_type) const;

    // RVA: 0xDDB | Ordinal: 3548
        void getSelectedSystem(void);

    // RVA: 0xE2B | Ordinal: 3628
        void getTrack(void);

    // RVA: 0xE60 | Ordinal: 3681
        void get_GBS_message(void);

    // RVA: 0xE61 | Ordinal: 3682
        void get_GGA_message(void);

    // RVA: 0xE62 | Ordinal: 3683
        void get_GLL_message(void);

    // RVA: 0xE63 | Ordinal: 3684
        void get_GSA_message(void);

    // RVA: 0xE64 | Ordinal: 3685
        void get_GSV_message(void);

    // RVA: 0xE77 | Ordinal: 3704
        void get_RMC_message(void);

    // RVA: 0xE82 | Ordinal: 3715
        void get_VTG_message(void);

    // RVA: 0xE87 | Ordinal: 3720
        void get_ZDA_message(void);

    // RVA: 0x1144 | Ordinal: 4421
        void imgui_update(void);

    // RVA: 0x118E | Ordinal: 4495
        void initialize(void);

    // RVA: 0x1251 | Ordinal: 4690
        void isChannelReady(int) const;

    // RVA: 0x1282 | Ordinal: 4739
        void isReceiverReady(void) const;

    // RVA: 0x13F0 | Ordinal: 5105
        void makePrediction(class osg::Vec3f, double, double &, int &, struct cockpit::GSV_message &);

    // RVA: 0x14C5 | Ordinal: 5318
        void post_initialize(void);

    // RVA: 0x159F | Ordinal: 5536
        void release(void);

    // RVA: 0x169D | Ordinal: 5790
        void setAntennaOnlyOnTop(bool);

    // RVA: 0x169F | Ordinal: 5792
        void setAntennaPos(class osg::Vec3f);

    // RVA: 0x16B6 | Ordinal: 5815
        void setChannelsQty(int);

    // RVA: 0x16C5 | Ordinal: 5830
        void setCoordinates(class osg::Vec3f);

    // RVA: 0x16D4 | Ordinal: 5845
        void setDamage(bool);

    // RVA: 0x1701 | Ordinal: 5890
        void setEllipsoid(unsigned char);

    // RVA: 0x174C | Ordinal: 5965
        void setMaxPDOP(float);

    // RVA: 0x1752 | Ordinal: 5971
        void setMinElevAngle(float);

    // RVA: 0x1796 | Ordinal: 6039
        void setRangeMeasureMethod(enum cockpit::enum_GPS_Range_Measure_Method);

    // RVA: 0x17B8 | Ordinal: 6073
        void setStartingTime(int, int, int);

    // RVA: 0x17C1 | Ordinal: 6082
        void setStatusUpdateDt(float);

    // RVA: 0x17C4 | Ordinal: 6085
        void setSystem(unsigned char);

    // RVA: 0x17E3 | Ordinal: 6116
        void setUsedFrequencies(enum cockpit::enum_GPS_Using_Frequencies);

    // RVA: 0x17FC | Ordinal: 6141
        void setVersion(int);

    // RVA: 0x1803 | Ordinal: 6148
        void setWorkingConstellation(class std::initializer_list<int>);

    // RVA: 0x19CD | Ordinal: 6606
        void start(bool);

    // RVA: 0x19CE | Ordinal: 6607
        void start(bool, class osg::Vec3f);

    // RVA: 0x19F7 | Ordinal: 6648
        void stop(void);

    // RVA: 0x1A89 | Ordinal: 6794
        void update(void);

    // RVA: 0x1B38 | Ordinal: 6969
        void update_GBS_message(void);

    // RVA: 0x1B39 | Ordinal: 6970
        void update_GGA_message(void);

    // RVA: 0x1B3A | Ordinal: 6971
        void update_GLL_message(void);

    // RVA: 0x1B3D | Ordinal: 6974
        void update_RMC_message(void);

    // RVA: 0x1B40 | Ordinal: 6977
        void update_VTG_message(void);

    // RVA: 0x1B8C | Ordinal: 7053
        void useAntiSpoofingMode(bool);

    // RVA: 0x1B90 | Ordinal: 7057
        void use_P_code(bool);

    // RVA: 0x2B8 | Ordinal: 697
        void _SNSinterface(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_SNSINTERFACE_HPP
