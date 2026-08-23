#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: msgPacker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace TADIL_C {

class msgPacker
{
public:

    // RVA: 0x35F | Ordinal: 864
        void packACLS_Message5(struct TADIL_C::ACLS_Message5 const &, class ed::basic_string<char> &);

    // RVA: 0x360 | Ordinal: 865
        void packACLS_Message6(struct TADIL_C::ACLS_Message6 const &, class ed::basic_string<char> &);

    // RVA: 0x361 | Ordinal: 866
        void packACLS_PreciseControl(struct TADIL_C::ACLS_PreciseControl const &, class ed::basic_string<char> &);

    // RVA: 0x362 | Ordinal: 867
        void packACLS_UTM(struct TADIL_C::ACLS_UTM_Broadcast const &, class ed::basic_string<char> &);

    // RVA: 0x363 | Ordinal: 868
        void packACLS_Vector(struct TADIL_C::ACLS_Vector const &, class ed::basic_string<char> &);

    // RVA: 0x365 | Ordinal: 870
        void packAirPPLI(struct TADIL_J::DataAirPPLI const &, class ed::basic_string<char> &);

    // RVA: 0x366 | Ordinal: 871
        void packAirPlatformAndSystemStatus(struct TADIL_J::DataAirPlatformAndSystemStatus const &, class ed::basic_string<char> &);

    // RVA: 0x368 | Ordinal: 873
        void packAirTrack(struct TADIL_J::DataAirTrack const &, class ed::basic_string<char> &);

    // RVA: 0x369 | Ordinal: 874
        void packBDAData(struct AFAPD::DataBDA const &, class ed::basic_string<char> &, enum AFAPD::MessageType);

    // RVA: 0x36A | Ordinal: 875
        void packCommon(struct AFAPD::DataCommon const &);

    // RVA: 0x36B | Ordinal: 876
        void packCommonPointData(enum AFAPD::MessageType, struct AFAPD::DataCommonPoint const &, class ed::basic_string<char> &);

    // RVA: 0x36C | Ordinal: 877
        void packCommonPointFileData(enum AFAPD::MessageType, struct AFAPD::DataCommonPointFile const &, class ed::basic_string<char> &);

    // RVA: 0x36D | Ordinal: 878
        void packData(struct AFAPD::AckMsg const &, class ed::basic_string<char> &);

    // RVA: 0x36E | Ordinal: 879
        void packData(struct AFAPD::DataBDA const &, class ed::basic_string<char> &);

    // RVA: 0x36F | Ordinal: 880
        void packData(struct AFAPD::DataCommonRoute const &, class ed::basic_string<char> &);

    // RVA: 0x370 | Ordinal: 881
        void packData(struct AFAPD::DataCommonRouteFile const &, class ed::basic_string<char> &);

    // RVA: 0x371 | Ordinal: 882
        void packData(struct AFAPD::DataControlMeasure const &, class ed::basic_string<char> &);

    // RVA: 0x372 | Ordinal: 883
        void packData(struct AFAPD::DataControlMeasuresFile const &, class ed::basic_string<char> &);

    // RVA: 0x373 | Ordinal: 884
        void packData(struct AFAPD::DataFARM const &, class ed::basic_string<char> &);

    // RVA: 0x374 | Ordinal: 885
        void packData(struct AFAPD::DataFreeText const &, class ed::basic_string<char> &);

    // RVA: 0x375 | Ordinal: 886
        void packData(struct AFAPD::DataLaserCodeFile const &, class ed::basic_string<char> &);

    // RVA: 0x376 | Ordinal: 887
        void packData(struct AFAPD::DataMapZoneFile const &, class ed::basic_string<char> &);

    // RVA: 0x377 | Ordinal: 888
        void packData(struct AFAPD::DataPP const &, class ed::basic_string<char> &);

    // RVA: 0x378 | Ordinal: 889
        void packData(struct AFAPD::DataRFHO const &, class ed::basic_string<char> &);

    // RVA: 0x379 | Ordinal: 890
        void packData(struct AFAPD::DataRadarTGT const &, class ed::basic_string<char> &);

    // RVA: 0x37A | Ordinal: 891
        void packData(struct AFAPD::DataTGTPoint const &, class ed::basic_string<char> &);

    // RVA: 0x37B | Ordinal: 892
        void packData(struct AFAPD::DataTGTPointFile const &, class ed::basic_string<char> &);

    // RVA: 0x37C | Ordinal: 893
        void packData(struct AFAPD::DataWayPoint const &, class ed::basic_string<char> &);

    // RVA: 0x37D | Ordinal: 894
        void packData(struct AFAPD::DataWayPointFile const &, class ed::basic_string<char> &);

    // RVA: 0x37E | Ordinal: 895
        void packData(struct AFAPD::QueryCommon const &, class ed::basic_string<char> &);

    // RVA: 0x37F | Ordinal: 896
        void packData(struct AFAPD::ResponseBDA const &, class ed::basic_string<char> &);

    // RVA: 0x380 | Ordinal: 897
        void packData(struct AFAPD::ResponseFARM const &, class ed::basic_string<char> &);

    // RVA: 0x381 | Ordinal: 898
        void packData(struct AFAPD::ResponsePP const &, class ed::basic_string<char> &);

    // RVA: 0x383 | Ordinal: 900
        void packFARMData(struct AFAPD::DataFARM const &, class ed::basic_string<char> &, enum AFAPD::MessageType);

    // RVA: 0x385 | Ordinal: 902
        void packFreeText(class ed::basic_string<char> const &, class ed::basic_string<char> &);

    // RVA: 0x387 | Ordinal: 904
        void packHTS_Quality(struct TADIL_J::HTS_Quality const &, class ed::basic_string<char> &);

    // RVA: 0x38C | Ordinal: 909
        void packReferencePoint(struct TADIL_J::DataReferencePoint const &, class ed::basic_string<char> &);

    // RVA: 0x38E | Ordinal: 911
        void packTargetSorting(struct TADIL_J::DataTargetSorting const &, class ed::basic_string<char> &);

    // RVA: 0x3B4 | Ordinal: 949
        void placeCommonPointData(struct AFAPD::DataPoint const &, class ed::basic_string<char> &, unsigned __int64);

    // RVA: 0x485 | Ordinal: 1158
        void unpackACLS_Message5(struct TADIL_C::ACLS_Message5 &);

    // RVA: 0x486 | Ordinal: 1159
        void unpackACLS_Message6(struct TADIL_C::ACLS_Message6 &);

    // RVA: 0x487 | Ordinal: 1160
        void unpackACLS_PreciseControl(struct TADIL_C::ACLS_PreciseControl &);

    // RVA: 0x488 | Ordinal: 1161
        void unpackACLS_UTM(struct TADIL_C::ACLS_UTM_Broadcast &);

    // RVA: 0x489 | Ordinal: 1162
        void unpackACLS_Vector(struct TADIL_C::ACLS_Vector &);

    // RVA: 0x48A | Ordinal: 1163
        void unpackAirPPLI(struct TADIL_J::DataAirPPLI &);

    // RVA: 0x48B | Ordinal: 1164
        void unpackAirPlatformAndSystemStatus(struct TADIL_J::DataAirPlatformAndSystemStatus &);

    // RVA: 0x48C | Ordinal: 1165
        void unpackAirTrack(struct TADIL_J::DataAirTrack &);

    // RVA: 0x48D | Ordinal: 1166
        void unpackBDAData(struct AFAPD::DataBDA &, enum AFAPD::MessageType);

    // RVA: 0x48E | Ordinal: 1167
        void unpackCommon(struct AFAPD::DataCommon &);

    // RVA: 0x48F | Ordinal: 1168
        void unpackCommon(struct AFAPD::DataCommon &, enum AFAPD::MessageType);

    // RVA: 0x490 | Ordinal: 1169
        void unpackCommonPointData(enum AFAPD::MessageType, struct AFAPD::DataCommonPoint &);

    // RVA: 0x491 | Ordinal: 1170
        void unpackCommonPointFileData(enum AFAPD::MessageType, struct AFAPD::DataCommonPointFile &);

    // RVA: 0x492 | Ordinal: 1171
        void unpackData(struct AFAPD::AckMsg &);

    // RVA: 0x493 | Ordinal: 1172
        void unpackData(struct AFAPD::DataBDA &);

    // RVA: 0x494 | Ordinal: 1173
        void unpackData(struct AFAPD::DataCommonRoute &);

    // RVA: 0x495 | Ordinal: 1174
        void unpackData(struct AFAPD::DataCommonRouteFile &);

    // RVA: 0x496 | Ordinal: 1175
        void unpackData(struct AFAPD::DataControlMeasure &);

    // RVA: 0x497 | Ordinal: 1176
        void unpackData(struct AFAPD::DataControlMeasuresFile &);

    // RVA: 0x498 | Ordinal: 1177
        void unpackData(struct AFAPD::DataFARM &);

    // RVA: 0x499 | Ordinal: 1178
        void unpackData(struct AFAPD::DataFreeText &);

    // RVA: 0x49A | Ordinal: 1179
        void unpackData(struct AFAPD::DataLaserCodeFile &);

    // RVA: 0x49B | Ordinal: 1180
        void unpackData(struct AFAPD::DataMapZoneFile &);

    // RVA: 0x49C | Ordinal: 1181
        void unpackData(struct AFAPD::DataPP &);

    // RVA: 0x49D | Ordinal: 1182
        void unpackData(struct AFAPD::DataRFHO &);

    // RVA: 0x49E | Ordinal: 1183
        void unpackData(struct AFAPD::DataRadarTGT &);

    // RVA: 0x49F | Ordinal: 1184
        void unpackData(struct AFAPD::DataTGTPoint &);

    // RVA: 0x4A0 | Ordinal: 1185
        void unpackData(struct AFAPD::DataTGTPointFile &);

    // RVA: 0x4A1 | Ordinal: 1186
        void unpackData(struct AFAPD::DataWayPoint &);

    // RVA: 0x4A2 | Ordinal: 1187
        void unpackData(struct AFAPD::DataWayPointFile &);

    // RVA: 0x4A3 | Ordinal: 1188
        void unpackData(struct AFAPD::QueryCommon &);

    // RVA: 0x4A4 | Ordinal: 1189
        void unpackData(struct AFAPD::ResponseBDA &);

    // RVA: 0x4A5 | Ordinal: 1190
        void unpackData(struct AFAPD::ResponseFARM &);

    // RVA: 0x4A6 | Ordinal: 1191
        void unpackData(struct AFAPD::ResponsePP &);

    // RVA: 0x4A7 | Ordinal: 1192
        void unpackFARMData(struct AFAPD::DataFARM &, enum AFAPD::MessageType);

    // RVA: 0x4A8 | Ordinal: 1193
        void unpackFreeText(class ed::basic_string<char> &);

    // RVA: 0x4A9 | Ordinal: 1194
        void unpackHTS_Quality(struct TADIL_J::HTS_Quality &);

    // RVA: 0x4AA | Ordinal: 1195
        void unpackReferencePoint(struct TADIL_J::DataReferencePoint &);

    // RVA: 0x4AB | Ordinal: 1196
        void unpackTargetSorting(struct TADIL_J::DataTargetSorting &);
};

} // namespace TADIL_C

// DCS_OPS_RE_WRADIO.DLL_MSGPACKER_HPP
