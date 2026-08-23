#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: msgParser
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFAPD {

class msgParser
{
public:

    // RVA: 0x1D4 | Ordinal: 469
        void append(class ed::basic_string<char> &, class ed::basic_string<char> const &);

    // RVA: 0x1D5 | Ordinal: 470
        void append(class ed::basic_string<char> &, class ed::base_fixed_string<char, 20> const &);

    // RVA: 0x1F5 | Ordinal: 502
        void clear_data(void);

    // RVA: 0x20A | Ordinal: 523
        void empty(enum AFAPD::DataElement);

    // RVA: 0x20B | Ordinal: 524
        void empty(enum TADIL_C::DataElement);

    // RVA: 0x20C | Ordinal: 525
        void empty(enum TADIL_J::DataElement);

    // RVA: 0x233 | Ordinal: 564
        void getBool(enum AFAPD::DataElement, int);

    // RVA: 0x234 | Ordinal: 565
        void getBool(enum TADIL_C::DataElement);

    // RVA: 0x235 | Ordinal: 566
        void getBool(enum TADIL_J::DataElement);

    // RVA: 0x23C | Ordinal: 573
        void getCount(enum AFAPD::DataElement);

    // RVA: 0x243 | Ordinal: 580
        void getDbl(enum AFAPD::DataElement, int);

    // RVA: 0x244 | Ordinal: 581
        void getDbl(enum TADIL_C::DataElement);

    // RVA: 0x245 | Ordinal: 582
        void getDbl(enum TADIL_J::DataElement);

    // RVA: 0x276 | Ordinal: 631
        void getInt(enum AFAPD::DataElement, int);

    // RVA: 0x277 | Ordinal: 632
        void getInt(enum TADIL_C::DataElement);

    // RVA: 0x278 | Ordinal: 633
        void getInt(enum TADIL_J::DataElement);

    // RVA: 0x29C | Ordinal: 669
        void getMsgAsString(class ed::basic_string<char> &, int);

    // RVA: 0x29D | Ordinal: 670
        void getMsgAsString(void);

    // RVA: 0x2A3 | Ordinal: 676
        void getNum(enum AFAPD::DataElement, int);

    // RVA: 0x2A4 | Ordinal: 677
        void getNum(enum TADIL_C::DataElement);

    // RVA: 0x2A5 | Ordinal: 678
        void getNum(enum TADIL_J::DataElement);

    // RVA: 0x2CB | Ordinal: 716
        void getStr(enum AFAPD::DataElement, int);

    // RVA: 0x2CC | Ordinal: 717
        void getStr(enum TADIL_C::DataElement);

    // RVA: 0x2CD | Ordinal: 718
        void getStr(enum TADIL_J::DataElement);

    // RVA: 0x2D6 | Ordinal: 727
        void getText(int);

    // RVA: 0x2D7 | Ordinal: 728
        void getText(void);

    // RVA: 0x303 | Ordinal: 772
        void initIndexes(void);

    // RVA: 0x306 | Ordinal: 775
        void initIndexes_ACLS_Message5(void);

    // RVA: 0x307 | Ordinal: 776
        void initIndexes_ACLS_Message6(void);

    // RVA: 0x308 | Ordinal: 777
        void initIndexes_ACLS_UTM(void);

    // RVA: 0x309 | Ordinal: 778
        void initIndexes_AckMsg(void);

    // RVA: 0x30A | Ordinal: 779
        void initIndexes_BDA(void);

    // RVA: 0x30B | Ordinal: 780
        void initIndexes_C12_1(void);

    // RVA: 0x30C | Ordinal: 781
        void initIndexes_C12_2(void);

    // RVA: 0x30D | Ordinal: 782
        void initIndexes_CommonPoint(enum AFAPD::MessageType);

    // RVA: 0x30E | Ordinal: 783
        void initIndexes_CommonQuery(enum AFAPD::MessageType);

    // RVA: 0x30F | Ordinal: 784
        void initIndexes_CommonRoute(enum AFAPD::MessageType);

    // RVA: 0x310 | Ordinal: 785
        void initIndexes_FARM(void);

    // RVA: 0x311 | Ordinal: 786
        void initIndexes_FreeText(void);

    // RVA: 0x312 | Ordinal: 787
        void initIndexes_J12_6(void);

    // RVA: 0x313 | Ordinal: 788
        void initIndexes_J13_2(void);

    // RVA: 0x314 | Ordinal: 789
        void initIndexes_J28_2_11(void);

    // RVA: 0x315 | Ordinal: 790
        void initIndexes_J2_0(void);

    // RVA: 0x316 | Ordinal: 791
        void initIndexes_J2_2(void);

    // RVA: 0x317 | Ordinal: 792
        void initIndexes_J2_3(void);

    // RVA: 0x318 | Ordinal: 793
        void initIndexes_J2_4(void);

    // RVA: 0x319 | Ordinal: 794
        void initIndexes_J2_5(void);

    // RVA: 0x31A | Ordinal: 795
        void initIndexes_J2_6(void);

    // RVA: 0x31B | Ordinal: 796
        void initIndexes_J31_7(void);

    // RVA: 0x31C | Ordinal: 797
        void initIndexes_J3_0(void);

    // RVA: 0x31D | Ordinal: 798
        void initIndexes_J3_1(void);

    // RVA: 0x31E | Ordinal: 799
        void initIndexes_J3_2(void);

    // RVA: 0x31F | Ordinal: 800
        void initIndexes_J3_3(void);

    // RVA: 0x320 | Ordinal: 801
        void initIndexes_J3_4(void);

    // RVA: 0x321 | Ordinal: 802
        void initIndexes_J3_5(void);

    // RVA: 0x322 | Ordinal: 803
        void initIndexes_LaserCodeFile(void);

    // RVA: 0x323 | Ordinal: 804
        void initIndexes_MapZoneFile(enum AFAPD::MessageType);

    // RVA: 0x324 | Ordinal: 805
        void initIndexes_PP(void);

    // RVA: 0x325 | Ordinal: 806
        void initIndexes_RFHO(void);

    // RVA: 0x61 | Ordinal: 98
        void msgParser(void);

    // RVA: 0x390 | Ordinal: 913
        void parse(class ed::basic_string<char> const &, class ed::base_fixed_string<char, 20>);

    // RVA: 0x391 | Ordinal: 914
        void parse(class ed::basic_string<char> const &);

    // RVA: 0x395 | Ordinal: 918
        void parseMsgNetAndType(class ed::basic_string<char> const &);

    // RVA: 0x39C | Ordinal: 925
        void place(enum AFAPD::DataElement, class ed::base_fixed_string<char, 20> const &);

    // RVA: 0x39D | Ordinal: 926
        void place(enum AFAPD::DataElement, class ed::basic_string<char> const &);

    // RVA: 0x39E | Ordinal: 927
        void place(enum AFAPD::DataElement, int);

    // RVA: 0x39F | Ordinal: 928
        void place(enum AFAPD::DataElement, float, int);

    // RVA: 0x3A0 | Ordinal: 929
        void place(enum AFAPD::DataElement, double, int);

    // RVA: 0x3A1 | Ordinal: 930
        void place(enum AFAPD::DataElement, char const *);

    // RVA: 0x3A2 | Ordinal: 931
        void place(enum AFAPD::DataElement, unsigned __int64);

    // RVA: 0x3A3 | Ordinal: 932
        void place(enum AFAPD::DataElement, bool);

    // RVA: 0x3A4 | Ordinal: 933
        void place(enum TADIL_C::DataElement, class ed::base_fixed_string<char, 20> const &);

    // RVA: 0x3A5 | Ordinal: 934
        void place(enum TADIL_C::DataElement, class ed::basic_string<char> const &);

    // RVA: 0x3A6 | Ordinal: 935
        void place(enum TADIL_C::DataElement, int);

    // RVA: 0x3A7 | Ordinal: 936
        void place(enum TADIL_C::DataElement, float, int);

    // RVA: 0x3A8 | Ordinal: 937
        void place(enum TADIL_C::DataElement, double, int);

    // RVA: 0x3A9 | Ordinal: 938
        void place(enum TADIL_C::DataElement, char const *);

    // RVA: 0x3AA | Ordinal: 939
        void place(enum TADIL_C::DataElement, unsigned __int64);

    // RVA: 0x3AB | Ordinal: 940
        void place(enum TADIL_C::DataElement, bool);

    // RVA: 0x3AC | Ordinal: 941
        void place(enum TADIL_J::DataElement, class ed::base_fixed_string<char, 20> const &);

    // RVA: 0x3AD | Ordinal: 942
        void place(enum TADIL_J::DataElement, class ed::basic_string<char> const &);

    // RVA: 0x3AE | Ordinal: 943
        void place(enum TADIL_J::DataElement, int);

    // RVA: 0x3AF | Ordinal: 944
        void place(enum TADIL_J::DataElement, float, int);

    // RVA: 0x3B0 | Ordinal: 945
        void place(enum TADIL_J::DataElement, double, int);

    // RVA: 0x3B1 | Ordinal: 946
        void place(enum TADIL_J::DataElement, char const *);

    // RVA: 0x3B2 | Ordinal: 947
        void place(enum TADIL_J::DataElement, unsigned __int64);

    // RVA: 0x3B3 | Ordinal: 948
        void place(enum TADIL_J::DataElement, bool);
};

} // namespace AFAPD

// DCS_OPS_RE_WRADIO.DLL_MSGPARSER_HPP
