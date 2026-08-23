#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QByteArray
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QByteArray
{
public:

    // RVA: 0x5F | Ordinal: 96
        void QByteArray(class QByteArray &&);

    // RVA: 0x60 | Ordinal: 97
        void QByteArray(class QByteArray const &);

    // RVA: 0x61 | Ordinal: 98
        void QByteArray(int, char);

    // RVA: 0x62 | Ordinal: 99
        void QByteArray(int, enum Qt::Initialization);

    // RVA: 0x63 | Ordinal: 100
        void QByteArray(char const *, int);

    // RVA: 0x64 | Ordinal: 101
        void QByteArray(struct QByteArrayDataPtr);

    // RVA: 0x65 | Ordinal: 102
        void QByteArray(void);

    // RVA: 0x850 | Ordinal: 2129
        void append(class QByteArray const &);

    // RVA: 0x851 | Ordinal: 2130
        void append(class QString const &);

    // RVA: 0x852 | Ordinal: 2131
        void append(char);

    // RVA: 0x853 | Ordinal: 2132
        void append(int, char);

    // RVA: 0x854 | Ordinal: 2133
        void append(char const *);

    // RVA: 0x855 | Ordinal: 2134
        void append(char const *, int);

    // RVA: 0x8B1 | Ordinal: 2226
        void at(int) const;

    // RVA: 0x8DE | Ordinal: 2271
        void back(void);

    // RVA: 0x8DF | Ordinal: 2272
        void back(void) const;

    // RVA: 0x8F2 | Ordinal: 2291
        void begin(void);

    // RVA: 0x8F3 | Ordinal: 2292
        void begin(void) const;

    // RVA: 0x96D | Ordinal: 2414
        void capacity(void) const;

    // RVA: 0x994 | Ordinal: 2453
        void cbegin(void) const;

    // RVA: 0x9A2 | Ordinal: 2467
        void cend(void) const;

    // RVA: 0x9C7 | Ordinal: 2504
        void chop(int);

    // RVA: 0x9CB | Ordinal: 2508
        void chopped(int) const;

    // RVA: 0x9DE | Ordinal: 2527
        void clear(void);

    // RVA: 0xA3D | Ordinal: 2622
        void compare(class QByteArray const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xA3E | Ordinal: 2623
        void compare(char const *, enum Qt::CaseSensitivity) const;

    // RVA: 0xA84 | Ordinal: 2693
        void constBegin(void) const;

    // RVA: 0xA8E | Ordinal: 2703
        void constData(void) const;

    // RVA: 0xA97 | Ordinal: 2712
        void constEnd(void) const;

    // RVA: 0xABA | Ordinal: 2747
        void contains(class QByteArray const &) const;

    // RVA: 0xABB | Ordinal: 2748
        void contains(char) const;

    // RVA: 0xABC | Ordinal: 2749
        void contains(char const *) const;

    // RVA: 0xAFE | Ordinal: 2815
        void count(class QByteArray const &) const;

    // RVA: 0xAFF | Ordinal: 2816
        void count(char) const;

    // RVA: 0xB00 | Ordinal: 2817
        void count(char const *) const;

    // RVA: 0xB01 | Ordinal: 2818
        void count(void) const;

    // RVA: 0xB1D | Ordinal: 2846
        void crbegin(void) const;

    // RVA: 0xB49 | Ordinal: 2890
        void crend(void) const;

    // RVA: 0xBFE | Ordinal: 3071
        void data(void);

    // RVA: 0xBFF | Ordinal: 3072
        void data(void) const;

    // RVA: 0xC11 | Ordinal: 3090
        void data_ptr(void);

    // RVA: 0xC80 | Ordinal: 3201
        void detach(void);

    // RVA: 0xD18 | Ordinal: 3353
        void end(void);

    // RVA: 0xD19 | Ordinal: 3354
        void end(void) const;

    // RVA: 0xD45 | Ordinal: 3398
        void endsWith(class QByteArray const &) const;

    // RVA: 0xD46 | Ordinal: 3399
        void endsWith(char) const;

    // RVA: 0xD47 | Ordinal: 3400
        void endsWith(char const *) const;

    // RVA: 0xDDA | Ordinal: 3547
        void expand(int);

    // RVA: 0xE1B | Ordinal: 3612
        void fill(char, int);

    // RVA: 0xE9A | Ordinal: 3739
        void fromBase64(class QByteArray const &);

    // RVA: 0xE9B | Ordinal: 3740
        void fromBase64(class QByteArray const &, class QFlags<enum QByteArray::Base64Option>);

    // RVA: 0xE9C | Ordinal: 3741
        void fromBase64Encoding(class QByteArray &&, class QFlags<enum QByteArray::Base64Option>);

    // RVA: 0xE9D | Ordinal: 3742
        void fromBase64Encoding(class QByteArray const &, class QFlags<enum QByteArray::Base64Option>);

    // RVA: 0xEA7 | Ordinal: 3752
        void fromHex(class QByteArray const &);

    // RVA: 0xEC0 | Ordinal: 3777
        void fromPercentEncoding(class QByteArray const &, char);

    // RVA: 0xEC4 | Ordinal: 3781
        void fromRawData(char const *, int);

    // RVA: 0xECE | Ordinal: 3791
        void fromStdString(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0xF0D | Ordinal: 3854
        void front(void);

    // RVA: 0xF0E | Ordinal: 3855
        void front(void) const;

    // RVA: 0xFB9 | Ordinal: 4026
        void indexOf(class QByteArray const &, int) const;

    // RVA: 0xFBA | Ordinal: 4027
        void indexOf(class QString const &, int) const;

    // RVA: 0xFBB | Ordinal: 4028
        void indexOf(char, int) const;

    // RVA: 0xFBC | Ordinal: 4029
        void indexOf(char const *, int) const;

    // RVA: 0x100A | Ordinal: 4107
        void insert(int, class QByteArray const &);

    // RVA: 0x100B | Ordinal: 4108
        void insert(int, class QString const &);

    // RVA: 0x100C | Ordinal: 4109
        void insert(int, char);

    // RVA: 0x100D | Ordinal: 4110
        void insert(int, int, char);

    // RVA: 0x100E | Ordinal: 4111
        void insert(int, char const *);

    // RVA: 0x100F | Ordinal: 4112
        void insert(int, char const *, int);

    // RVA: 0x10B0 | Ordinal: 4273
        void isDetached(void) const;

    // RVA: 0x10C7 | Ordinal: 4296
        void isEmpty(void) const;

    // RVA: 0x1124 | Ordinal: 4389
        void isLower(void) const;

    // RVA: 0x1141 | Ordinal: 4418
        void isNull(void) const;

    // RVA: 0x11AE | Ordinal: 4527
        void isSharedWith(class QByteArray const &) const;

    // RVA: 0x11EE | Ordinal: 4591
        void isUpper(void) const;

    // RVA: 0x126D | Ordinal: 4718
        void lastIndexOf(class QByteArray const &, int) const;

    // RVA: 0x126E | Ordinal: 4719
        void lastIndexOf(class QString const &, int) const;

    // RVA: 0x126F | Ordinal: 4720
        void lastIndexOf(char, int) const;

    // RVA: 0x1270 | Ordinal: 4721
        void lastIndexOf(char const *, int) const;

    // RVA: 0x128B | Ordinal: 4748
        void left(int) const;

    // RVA: 0x1293 | Ordinal: 4756
        void leftJustified(int, char, bool) const;

    // RVA: 0x129A | Ordinal: 4763
        void length(void) const;

    // RVA: 0x1392 | Ordinal: 5011
        void mid(int, int) const;

    // RVA: 0x1454 | Ordinal: 5205
        void nulTerminated(void) const;

    // RVA: 0x1458 | Ordinal: 5209
        void number(int, int);

    // RVA: 0x1459 | Ordinal: 5210
        void number(unsigned int, int);

    // RVA: 0x145A | Ordinal: 5211
        void number(double, char, int);

    // RVA: 0x145B | Ordinal: 5212
        void number(__int64, int);

    // RVA: 0x145C | Ordinal: 5213
        void number(unsigned __int64, int);

    // RVA: 0x64A | Ordinal: 1611
        void operator_(class QString const &) const;

    // RVA: 0x151B | Ordinal: 5404
        void prepend(class QByteArray const &);

    // RVA: 0x151C | Ordinal: 5405
        void prepend(char);

    // RVA: 0x151D | Ordinal: 5406
        void prepend(int, char);

    // RVA: 0x151E | Ordinal: 5407
        void prepend(char const *);

    // RVA: 0x151F | Ordinal: 5408
        void prepend(char const *, int);

    // RVA: 0x1566 | Ordinal: 5479
        void push_back(class QByteArray const &);

    // RVA: 0x1567 | Ordinal: 5480
        void push_back(char);

    // RVA: 0x1568 | Ordinal: 5481
        void push_back(char const *);

    // RVA: 0x1574 | Ordinal: 5493
        void push_front(class QByteArray const &);

    // RVA: 0x1575 | Ordinal: 5494
        void push_front(char);

    // RVA: 0x1576 | Ordinal: 5495
        void push_front(char const *);

    // RVA: 0x1711 | Ordinal: 5906
        void rbegin(void);

    // RVA: 0x1712 | Ordinal: 5907
        void rbegin(void) const;

    // RVA: 0x1757 | Ordinal: 5976
        void reallocData(unsigned int, class QFlags<enum QArrayData::AllocationOption>);

    // RVA: 0x17A8 | Ordinal: 6057
        void remove(int, int);

    // RVA: 0x181B | Ordinal: 6172
        void rend(void);

    // RVA: 0x181C | Ordinal: 6173
        void rend(void) const;

    // RVA: 0x1821 | Ordinal: 6178
        void repeated(int) const;

    // RVA: 0x1827 | Ordinal: 6184
        void replace(class QByteArray const &, class QByteArray const &);

    // RVA: 0x1828 | Ordinal: 6185
        void replace(class QByteArray const &, char const *);

    // RVA: 0x1829 | Ordinal: 6186
        void replace(class QString const &, class QByteArray const &);

    // RVA: 0x182A | Ordinal: 6187
        void replace(class QString const &, char const *);

    // RVA: 0x182B | Ordinal: 6188
        void replace(char, class QByteArray const &);

    // RVA: 0x182C | Ordinal: 6189
        void replace(char, class QString const &);

    // RVA: 0x182D | Ordinal: 6190
        void replace(char, char);

    // RVA: 0x182E | Ordinal: 6191
        void replace(char, char const *);

    // RVA: 0x182F | Ordinal: 6192
        void replace(int, int, class QByteArray const &);

    // RVA: 0x1830 | Ordinal: 6193
        void replace(int, int, char const *);

    // RVA: 0x1831 | Ordinal: 6194
        void replace(int, int, char const *, int);

    // RVA: 0x1832 | Ordinal: 6195
        void replace(char const *, char const *);

    // RVA: 0x1833 | Ordinal: 6196
        void replace(char const *, class QByteArray const &);

    // RVA: 0x1834 | Ordinal: 6197
        void replace(char const *, int, char const *, int);

    // RVA: 0x184F | Ordinal: 6224
        void reserve(int);

    // RVA: 0x186A | Ordinal: 6251
        void resize(int);

    // RVA: 0x1895 | Ordinal: 6294
        void right(int) const;

    // RVA: 0x189D | Ordinal: 6302
        void rightJustified(int, char, bool) const;

    // RVA: 0x1A14 | Ordinal: 6677
        void setNum(short, int);

    // RVA: 0x1A15 | Ordinal: 6678
        void setNum(unsigned short, int);

    // RVA: 0x1A16 | Ordinal: 6679
        void setNum(int, int);

    // RVA: 0x1A17 | Ordinal: 6680
        void setNum(unsigned int, int);

    // RVA: 0x1A18 | Ordinal: 6681
        void setNum(float, char, int);

    // RVA: 0x1A19 | Ordinal: 6682
        void setNum(double, char, int);

    // RVA: 0x1A1A | Ordinal: 6683
        void setNum(__int64, int);

    // RVA: 0x1A1B | Ordinal: 6684
        void setNum(unsigned __int64, int);

    // RVA: 0x1A69 | Ordinal: 6762
        void setRawData(char const *, unsigned int);

    // RVA: 0x1B02 | Ordinal: 6915
        void shrink_to_fit(void);

    // RVA: 0x1B1B | Ordinal: 6940
        void simplified(void) const;

    // RVA: 0x1B21 | Ordinal: 6946
        void simplified_helper(class QByteArray &);

    // RVA: 0x1B22 | Ordinal: 6947
        void simplified_helper(class QByteArray const &);

    // RVA: 0x1B33 | Ordinal: 6964
        void size(void) const;

    // RVA: 0x1B6C | Ordinal: 7021
        void split(char) const;

    // RVA: 0x1B88 | Ordinal: 7049
        void squeeze(void);

    // RVA: 0x1BCA | Ordinal: 7115
        void startsWith(class QByteArray const &) const;

    // RVA: 0x1BCB | Ordinal: 7116
        void startsWith(char) const;

    // RVA: 0x1BCC | Ordinal: 7117
        void startsWith(char const *) const;

    // RVA: 0x1C68 | Ordinal: 7273
        void swap(class QByteArray &);

    // RVA: 0x1CED | Ordinal: 7406
        void toBase64(class QFlags<enum QByteArray::Base64Option>) const;

    // RVA: 0x1CEE | Ordinal: 7407
        void toBase64(void) const;

    // RVA: 0x1D27 | Ordinal: 7464
        void toDouble(bool *) const;

    // RVA: 0x1D3A | Ordinal: 7483
        void toFloat(bool *) const;

    // RVA: 0x1D43 | Ordinal: 7492
        void toHex(char) const;

    // RVA: 0x1D44 | Ordinal: 7493
        void toHex(void) const;

    // RVA: 0x1D47 | Ordinal: 7496
        void toInt(bool *, int) const;

    // RVA: 0x1D79 | Ordinal: 7546
        void toLong(bool *, int) const;

    // RVA: 0x1D7F | Ordinal: 7552
        void toLongLong(bool *, int) const;

    // RVA: 0x1D86 | Ordinal: 7559
        void toLower(void) const;

    // RVA: 0x1D90 | Ordinal: 7569
        void toLower_helper(class QByteArray &);

    // RVA: 0x1D91 | Ordinal: 7570
        void toLower_helper(class QByteArray const &);

    // RVA: 0x1DA3 | Ordinal: 7588
        void toPercentEncoding(class QByteArray const &, class QByteArray const &, char) const;

    // RVA: 0x1DB7 | Ordinal: 7608
        void toShort(bool *, int) const;

    // RVA: 0x1DC6 | Ordinal: 7623
        void toStdString(void) const;

    // RVA: 0x1E13 | Ordinal: 7700
        void toUInt(bool *, int) const;

    // RVA: 0x1E1A | Ordinal: 7707
        void toULong(bool *, int) const;

    // RVA: 0x1E20 | Ordinal: 7713
        void toULongLong(bool *, int) const;

    // RVA: 0x1E27 | Ordinal: 7720
        void toUShort(bool *, int) const;

    // RVA: 0x1E38 | Ordinal: 7737
        void toUpper(void) const;

    // RVA: 0x1E42 | Ordinal: 7747
        void toUpper_helper(class QByteArray &);

    // RVA: 0x1E43 | Ordinal: 7748
        void toUpper_helper(class QByteArray const &);

    // RVA: 0x1F10 | Ordinal: 7953
        void trimmed(void) const;

    // RVA: 0x1F19 | Ordinal: 7962
        void trimmed_helper(class QByteArray &);

    // RVA: 0x1F1A | Ordinal: 7963
        void trimmed_helper(class QByteArray const &);

    // RVA: 0x1F1F | Ordinal: 7968
        void truncate(int);

    // RVA: 0x2EC | Ordinal: 749
        void _QByteArray(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QBYTEARRAY_HPP
