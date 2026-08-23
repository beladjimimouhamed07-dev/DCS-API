#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QString
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QString
{
public:

    // RVA: 0x203 | Ordinal: 516
        void QString(class QString &&);

    // RVA: 0x204 | Ordinal: 517
        void QString(struct QString::Null const &);

    // RVA: 0x205 | Ordinal: 518
        void QString(class QString const &);

    // RVA: 0x206 | Ordinal: 519
        void QString(class QByteArray const &);

    // RVA: 0x207 | Ordinal: 520
        void QString(int, class QChar);

    // RVA: 0x208 | Ordinal: 521
        void QString(int, enum Qt::Initialization);

    // RVA: 0x209 | Ordinal: 522
        void QString(char const *);

    // RVA: 0x20A | Ordinal: 523
        void QString(class QChar const *, int);

    // RVA: 0x20B | Ordinal: 524
        void QString(struct QStringDataPtr);

    // RVA: 0x20C | Ordinal: 525
        void QString(class QChar);

    // RVA: 0x20D | Ordinal: 526
        void QString(class QLatin1String);

    // RVA: 0x20E | Ordinal: 527
        void QString(void);

    // RVA: 0x86F | Ordinal: 2160
        void append(class QString const &);

    // RVA: 0x870 | Ordinal: 2161
        void append(class QByteArray const &);

    // RVA: 0x871 | Ordinal: 2162
        void append(class QStringRef const &);

    // RVA: 0x872 | Ordinal: 2163
        void append(char const *);

    // RVA: 0x873 | Ordinal: 2164
        void append(class QChar const *, int);

    // RVA: 0x874 | Ordinal: 2165
        void append(class QChar);

    // RVA: 0x875 | Ordinal: 2166
        void append(class QLatin1String);

    // RVA: 0x876 | Ordinal: 2167
        void append(class QStringView);

    // RVA: 0x889 | Ordinal: 2186
        void arg(class QString const &, class QString const &, class QString const &, class QString const &, class QString const &, class QString const &, class QString const &, class QString const &, class QString const &) const;

    // RVA: 0x88A | Ordinal: 2187
        void arg(class QString const &, class QString const &, class QString const &, class QString const &, class QString const &, class QString const &, class QString const &, class QString const &) const;

    // RVA: 0x88B | Ordinal: 2188
        void arg(class QString const &, class QString const &, class QString const &, class QString const &, class QString const &, class QString const &, class QString const &) const;

    // RVA: 0x88C | Ordinal: 2189
        void arg(class QString const &, class QString const &, class QString const &, class QString const &, class QString const &, class QString const &) const;

    // RVA: 0x88D | Ordinal: 2190
        void arg(class QString const &, class QString const &, class QString const &, class QString const &, class QString const &) const;

    // RVA: 0x88E | Ordinal: 2191
        void arg(class QString const &, class QString const &, class QString const &, class QString const &) const;

    // RVA: 0x88F | Ordinal: 2192
        void arg(class QString const &, class QString const &, class QString const &) const;

    // RVA: 0x890 | Ordinal: 2193
        void arg(class QString const &, class QString const &) const;

    // RVA: 0x891 | Ordinal: 2194
        void arg(class QString const &, int, class QChar) const;

    // RVA: 0x892 | Ordinal: 2195
        void arg(char, int, class QChar) const;

    // RVA: 0x893 | Ordinal: 2196
        void arg(short, int, int, class QChar) const;

    // RVA: 0x894 | Ordinal: 2197
        void arg(unsigned short, int, int, class QChar) const;

    // RVA: 0x895 | Ordinal: 2198
        void arg(int, int, int, class QChar) const;

    // RVA: 0x896 | Ordinal: 2199
        void arg(unsigned int, int, int, class QChar) const;

    // RVA: 0x897 | Ordinal: 2200
        void arg(long, int, int, class QChar) const;

    // RVA: 0x898 | Ordinal: 2201
        void arg(unsigned long, int, int, class QChar) const;

    // RVA: 0x899 | Ordinal: 2202
        void arg(double, int, char, int, class QChar) const;

    // RVA: 0x89A | Ordinal: 2203
        void arg(class QChar, int, class QChar) const;

    // RVA: 0x89B | Ordinal: 2204
        void arg(class QLatin1String, int, class QChar) const;

    // RVA: 0x89C | Ordinal: 2205
        void arg(class QStringView, int, class QChar) const;

    // RVA: 0x89D | Ordinal: 2206
        void arg(__int64, int, int, class QChar) const;

    // RVA: 0x89E | Ordinal: 2207
        void arg(unsigned __int64, int, int, class QChar) const;

    // RVA: 0x8A7 | Ordinal: 2216
        void asprintf(char const *, ...);

    // RVA: 0x8B6 | Ordinal: 2231
        void at(int) const;

    // RVA: 0x8E0 | Ordinal: 2273
        void back(void);

    // RVA: 0x8E1 | Ordinal: 2274
        void back(void) const;

    // RVA: 0x8FE | Ordinal: 2303
        void begin(void);

    // RVA: 0x8FF | Ordinal: 2304
        void begin(void) const;

    // RVA: 0x96E | Ordinal: 2415
        void capacity(void) const;

    // RVA: 0x998 | Ordinal: 2457
        void cbegin(void) const;

    // RVA: 0x9A6 | Ordinal: 2471
        void cend(void) const;

    // RVA: 0x9C9 | Ordinal: 2506
        void chop(int);

    // RVA: 0x9CC | Ordinal: 2509
        void chopped(int) const;

    // RVA: 0x9E9 | Ordinal: 2538
        void clear(void);

    // RVA: 0xA4A | Ordinal: 2635
        void compare(class QString const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xA4B | Ordinal: 2636
        void compare(class QStringRef const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xA4C | Ordinal: 2637
        void compare(class QChar, enum Qt::CaseSensitivity) const;

    // RVA: 0xA4D | Ordinal: 2638
        void compare(class QLatin1String, enum Qt::CaseSensitivity) const;

    // RVA: 0xA4E | Ordinal: 2639
        void compare(class QStringView, enum Qt::CaseSensitivity) const;

    // RVA: 0xA4F | Ordinal: 2640
        void compare(class QString const &, class QString const &, enum Qt::CaseSensitivity);

    // RVA: 0xA50 | Ordinal: 2641
        void compare(class QString const &, class QStringRef const &, enum Qt::CaseSensitivity);

    // RVA: 0xA51 | Ordinal: 2642
        void compare(class QString const &, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0xA52 | Ordinal: 2643
        void compare(class QLatin1String, class QString const &, enum Qt::CaseSensitivity);

    // RVA: 0xA61 | Ordinal: 2658
        void compare_helper(class QChar const *, int, class QChar const *, int, enum Qt::CaseSensitivity);

    // RVA: 0xA62 | Ordinal: 2659
        void compare_helper(class QChar const *, int, char const *, int, enum Qt::CaseSensitivity);

    // RVA: 0xA63 | Ordinal: 2660
        void compare_helper(class QChar const *, int, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0xA89 | Ordinal: 2698
        void constBegin(void) const;

    // RVA: 0xA90 | Ordinal: 2705
        void constData(void) const;

    // RVA: 0xA9C | Ordinal: 2717
        void constEnd(void) const;

    // RVA: 0xAD2 | Ordinal: 2771
        void contains(class QRegExp &) const;

    // RVA: 0xAD3 | Ordinal: 2772
        void contains(class QString const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xAD4 | Ordinal: 2773
        void contains(class QRegExp const &) const;

    // RVA: 0xAD5 | Ordinal: 2774
        void contains(class QRegularExpression const &) const;

    // RVA: 0xAD6 | Ordinal: 2775
        void contains(class QRegularExpression const &, class QRegularExpressionMatch *) const;

    // RVA: 0xAD7 | Ordinal: 2776
        void contains(class QStringRef const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xAD8 | Ordinal: 2777
        void contains(class QChar, enum Qt::CaseSensitivity) const;

    // RVA: 0xAD9 | Ordinal: 2778
        void contains(class QLatin1String, enum Qt::CaseSensitivity) const;

    // RVA: 0xADA | Ordinal: 2779
        void contains(class QStringView, enum Qt::CaseSensitivity) const;

    // RVA: 0xB05 | Ordinal: 2822
        void count(class QString const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xB06 | Ordinal: 2823
        void count(class QRegExp const &) const;

    // RVA: 0xB07 | Ordinal: 2824
        void count(class QRegularExpression const &) const;

    // RVA: 0xB08 | Ordinal: 2825
        void count(class QStringRef const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xB09 | Ordinal: 2826
        void count(class QChar, enum Qt::CaseSensitivity) const;

    // RVA: 0xB0A | Ordinal: 2827
        void count(void) const;

    // RVA: 0xB1E | Ordinal: 2847
        void crbegin(void) const;

    // RVA: 0xB4A | Ordinal: 2891
        void crend(void) const;

    // RVA: 0xC09 | Ordinal: 3082
        void data(void);

    // RVA: 0xC0A | Ordinal: 3083
        void data(void) const;

    // RVA: 0xC12 | Ordinal: 3091
        void data_ptr(void);

    // RVA: 0xC8A | Ordinal: 3211
        void detach(void);

    // RVA: 0xD24 | Ordinal: 3365
        void end(void);

    // RVA: 0xD25 | Ordinal: 3366
        void end(void) const;

    // RVA: 0xD48 | Ordinal: 3401
        void endsWith(class QString const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xD49 | Ordinal: 3402
        void endsWith(class QStringRef const &, enum Qt::CaseSensitivity) const;

    // RVA: 0xD4A | Ordinal: 3403
        void endsWith(class QChar, enum Qt::CaseSensitivity) const;

    // RVA: 0xD4B | Ordinal: 3404
        void endsWith(class QLatin1String, enum Qt::CaseSensitivity) const;

    // RVA: 0xD4C | Ordinal: 3405
        void endsWith(class QStringView, enum Qt::CaseSensitivity) const;

    // RVA: 0xDDB | Ordinal: 3548
        void expand(int);

    // RVA: 0xE1C | Ordinal: 3613
        void fill(class QChar, int);

    // RVA: 0xE97 | Ordinal: 3736
        void fromAscii(class QByteArray const &);

    // RVA: 0xE98 | Ordinal: 3737
        void fromAscii(char const *, int);

    // RVA: 0xE99 | Ordinal: 3738
        void fromAscii_helper(char const *, int);

    // RVA: 0xEAF | Ordinal: 3760
        void fromLatin1(class QByteArray const &);

    // RVA: 0xEB0 | Ordinal: 3761
        void fromLatin1(char const *, int);

    // RVA: 0xEB1 | Ordinal: 3762
        void fromLatin1_helper(char const *, int);

    // RVA: 0xEB5 | Ordinal: 3766
        void fromLocal8Bit(class QByteArray const &);

    // RVA: 0xEB6 | Ordinal: 3767
        void fromLocal8Bit(char const *, int);

    // RVA: 0xEB7 | Ordinal: 3768
        void fromLocal8Bit_helper(char const *, int);

    // RVA: 0xEC6 | Ordinal: 3783
        void fromRawData(class QChar const *, int);

    // RVA: 0xECF | Ordinal: 3792
        void fromStdString(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0xED0 | Ordinal: 3793
        void fromStdU16String(class std::basic_string<char16_t, struct std::char_traits<char16_t>, class std::allocator<char16_t>> const &);

    // RVA: 0xED1 | Ordinal: 3794
        void fromStdU32String(class std::basic_string<char32_t, struct std::char_traits<char32_t>, class std::allocator<char32_t>> const &);

    // RVA: 0xED5 | Ordinal: 3798
        void fromStdWString(class std::basic_string<wchar_t, struct std::char_traits<wchar_t>, class std::allocator<wchar_t>> const &);

    // RVA: 0xEEB | Ordinal: 3820
        void fromUcs4(unsigned int const *, int);

    // RVA: 0xEEC | Ordinal: 3821
        void fromUcs4(char32_t const *, int);

    // RVA: 0xEF5 | Ordinal: 3830
        void fromUtf16(unsigned short const *, int);

    // RVA: 0xEF6 | Ordinal: 3831
        void fromUtf16(char16_t const *, int);

    // RVA: 0xEF7 | Ordinal: 3832
        void fromUtf8(class QByteArray const &);

    // RVA: 0xEF8 | Ordinal: 3833
        void fromUtf8(char const *, int);

    // RVA: 0xEF9 | Ordinal: 3834
        void fromUtf8_helper(char const *, int);

    // RVA: 0xF04 | Ordinal: 3845
        void fromWCharArray(wchar_t const *, int);

    // RVA: 0xF0F | Ordinal: 3856
        void front(void);

    // RVA: 0xF10 | Ordinal: 3857
        void front(void) const;

    // RVA: 0xFBF | Ordinal: 4032
        void indexOf(class QRegExp &, int) const;

    // RVA: 0xFC0 | Ordinal: 4033
        void indexOf(class QString const &, int, enum Qt::CaseSensitivity) const;

    // RVA: 0xFC1 | Ordinal: 4034
        void indexOf(class QRegExp const &, int) const;

    // RVA: 0xFC2 | Ordinal: 4035
        void indexOf(class QRegularExpression const &, int) const;

    // RVA: 0xFC3 | Ordinal: 4036
        void indexOf(class QRegularExpression const &, int, class QRegularExpressionMatch *) const;

    // RVA: 0xFC4 | Ordinal: 4037
        void indexOf(class QStringRef const &, int, enum Qt::CaseSensitivity) const;

    // RVA: 0xFC5 | Ordinal: 4038
        void indexOf(class QChar, int, enum Qt::CaseSensitivity) const;

    // RVA: 0xFC6 | Ordinal: 4039
        void indexOf(class QLatin1String, int, enum Qt::CaseSensitivity) const;

    // RVA: 0xFC7 | Ordinal: 4040
        void indexOf(class QStringView, int, enum Qt::CaseSensitivity) const;

    // RVA: 0x1021 | Ordinal: 4130
        void insert(int, class QString const &);

    // RVA: 0x1022 | Ordinal: 4131
        void insert(int, class QByteArray const &);

    // RVA: 0x1023 | Ordinal: 4132
        void insert(int, class QStringRef const &);

    // RVA: 0x1024 | Ordinal: 4133
        void insert(int, char const *);

    // RVA: 0x1025 | Ordinal: 4134
        void insert(int, class QChar const *, int);

    // RVA: 0x1026 | Ordinal: 4135
        void insert(int, class QChar);

    // RVA: 0x1027 | Ordinal: 4136
        void insert(int, class QLatin1String);

    // RVA: 0x1028 | Ordinal: 4137
        void insert(int, class QStringView);

    // RVA: 0x10B1 | Ordinal: 4274
        void isDetached(void) const;

    // RVA: 0x10D7 | Ordinal: 4312
        void isEmpty(void) const;

    // RVA: 0x1128 | Ordinal: 4393
        void isLower(void) const;

    // RVA: 0x1154 | Ordinal: 4437
        void isNull(void) const;

    // RVA: 0x118D | Ordinal: 4494
        void isRightToLeft(void) const;

    // RVA: 0x11AF | Ordinal: 4528
        void isSharedWith(class QString const &) const;

    // RVA: 0x11B4 | Ordinal: 4533
        void isSimpleText(void) const;

    // RVA: 0x11F2 | Ordinal: 4595
        void isUpper(void) const;

    // RVA: 0x121D | Ordinal: 4638
        void isValidUtf16(void) const;

    // RVA: 0x1271 | Ordinal: 4722
        void lastIndexOf(class QRegExp &, int) const;

    // RVA: 0x1272 | Ordinal: 4723
        void lastIndexOf(class QString const &, int, enum Qt::CaseSensitivity) const;

    // RVA: 0x1273 | Ordinal: 4724
        void lastIndexOf(class QRegExp const &, int) const;

    // RVA: 0x1274 | Ordinal: 4725
        void lastIndexOf(class QRegularExpression const &, int) const;

    // RVA: 0x1275 | Ordinal: 4726
        void lastIndexOf(class QRegularExpression const &, int, class QRegularExpressionMatch *) const;

    // RVA: 0x1276 | Ordinal: 4727
        void lastIndexOf(class QStringRef const &, int, enum Qt::CaseSensitivity) const;

    // RVA: 0x1277 | Ordinal: 4728
        void lastIndexOf(class QChar, int, enum Qt::CaseSensitivity) const;

    // RVA: 0x1278 | Ordinal: 4729
        void lastIndexOf(class QLatin1String, int, enum Qt::CaseSensitivity) const;

    // RVA: 0x1279 | Ordinal: 4730
        void lastIndexOf(class QStringView, int, enum Qt::CaseSensitivity) const;

    // RVA: 0x128F | Ordinal: 4752
        void left(int) const;

    // RVA: 0x1294 | Ordinal: 4757
        void leftJustified(int, class QChar, bool) const;

    // RVA: 0x1295 | Ordinal: 4758
        void leftRef(int) const;

    // RVA: 0x129E | Ordinal: 4767
        void length(void) const;

    // RVA: 0x12BC | Ordinal: 4797
        void localeAwareCompare(class QString const &) const;

    // RVA: 0x12BD | Ordinal: 4798
        void localeAwareCompare(class QStringRef const &) const;

    // RVA: 0x12BE | Ordinal: 4799
        void localeAwareCompare(class QString const &, class QString const &);

    // RVA: 0x12BF | Ordinal: 4800
        void localeAwareCompare(class QString const &, class QStringRef const &);

    // RVA: 0x12C6 | Ordinal: 4807
        void localeAwareCompare_helper(class QChar const *, int, class QChar const *, int);

    // RVA: 0x1394 | Ordinal: 5013
        void mid(int, int) const;

    // RVA: 0x1396 | Ordinal: 5015
        void midRef(int, int) const;

    // RVA: 0x13F8 | Ordinal: 5113
        void multiArg(int, class QString const **) const;

    // RVA: 0x143E | Ordinal: 5183
        void normalized(enum QString::NormalizationForm, enum QChar::UnicodeVersion) const;

    // RVA: 0x145D | Ordinal: 5214
        void number(int, int);

    // RVA: 0x145E | Ordinal: 5215
        void number(unsigned int, int);

    // RVA: 0x145F | Ordinal: 5216
        void number(long, int);

    // RVA: 0x1460 | Ordinal: 5217
        void number(unsigned long, int);

    // RVA: 0x1461 | Ordinal: 5218
        void number(double, char, int);

    // RVA: 0x1462 | Ordinal: 5219
        void number(__int64, int);

    // RVA: 0x1463 | Ordinal: 5220
        void number(unsigned __int64, int);

    // RVA: 0x655 | Ordinal: 1622
        void operator_(class QByteArray const &) const;

    // RVA: 0x656 | Ordinal: 1623
        void operator_(char const *) const;

    // RVA: 0x657 | Ordinal: 1624
        void operator_(class QLatin1String) const;

    // RVA: 0x1524 | Ordinal: 5413
        void prepend(class QString const &);

    // RVA: 0x1525 | Ordinal: 5414
        void prepend(class QByteArray const &);

    // RVA: 0x1526 | Ordinal: 5415
        void prepend(class QStringRef const &);

    // RVA: 0x1527 | Ordinal: 5416
        void prepend(char const *);

    // RVA: 0x1528 | Ordinal: 5417
        void prepend(class QChar const *, int);

    // RVA: 0x1529 | Ordinal: 5418
        void prepend(class QChar);

    // RVA: 0x152A | Ordinal: 5419
        void prepend(class QLatin1String);

    // RVA: 0x152B | Ordinal: 5420
        void prepend(class QStringView);

    // RVA: 0x156B | Ordinal: 5484
        void push_back(class QString const &);

    // RVA: 0x156C | Ordinal: 5485
        void push_back(class QChar);

    // RVA: 0x1579 | Ordinal: 5498
        void push_front(class QString const &);

    // RVA: 0x157A | Ordinal: 5499
        void push_front(class QChar);

    // RVA: 0x1713 | Ordinal: 5908
        void rbegin(void);

    // RVA: 0x1714 | Ordinal: 5909
        void rbegin(void) const;

    // RVA: 0x1758 | Ordinal: 5977
        void reallocData(unsigned int, bool);

    // RVA: 0x17B9 | Ordinal: 6074
        void remove(class QString const &, enum Qt::CaseSensitivity);

    // RVA: 0x17BA | Ordinal: 6075
        void remove(class QRegExp const &);

    // RVA: 0x17BB | Ordinal: 6076
        void remove(class QRegularExpression const &);

    // RVA: 0x17BC | Ordinal: 6077
        void remove(int, int);

    // RVA: 0x17BD | Ordinal: 6078
        void remove(class QChar, enum Qt::CaseSensitivity);

    // RVA: 0x17BE | Ordinal: 6079
        void remove(class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0x181D | Ordinal: 6174
        void rend(void);

    // RVA: 0x181E | Ordinal: 6175
        void rend(void) const;

    // RVA: 0x1822 | Ordinal: 6179
        void repeated(int) const;

    // RVA: 0x1836 | Ordinal: 6199
        void replace(class QString const &, class QString const &, enum Qt::CaseSensitivity);

    // RVA: 0x1837 | Ordinal: 6200
        void replace(class QString const &, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0x1838 | Ordinal: 6201
        void replace(class QRegExp const &, class QString const &);

    // RVA: 0x1839 | Ordinal: 6202
        void replace(class QRegularExpression const &, class QString const &);

    // RVA: 0x183A | Ordinal: 6203
        void replace(int, int, class QString const &);

    // RVA: 0x183B | Ordinal: 6204
        void replace(int, int, class QChar const *, int);

    // RVA: 0x183C | Ordinal: 6205
        void replace(int, int, class QChar);

    // RVA: 0x183D | Ordinal: 6206
        void replace(class QChar const *, int, class QChar const *, int, enum Qt::CaseSensitivity);

    // RVA: 0x183E | Ordinal: 6207
        void replace(class QChar, class QChar, enum Qt::CaseSensitivity);

    // RVA: 0x183F | Ordinal: 6208
        void replace(class QChar, class QString const &, enum Qt::CaseSensitivity);

    // RVA: 0x1840 | Ordinal: 6209
        void replace(class QChar, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0x1841 | Ordinal: 6210
        void replace(class QLatin1String, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0x1842 | Ordinal: 6211
        void replace(class QLatin1String, class QString const &, enum Qt::CaseSensitivity);

    // RVA: 0x1843 | Ordinal: 6212
        void replace_helper(unsigned int *, int, int, class QChar const *, int);

    // RVA: 0x1851 | Ordinal: 6226
        void reserve(int);

    // RVA: 0x186E | Ordinal: 6255
        void resize(int);

    // RVA: 0x186F | Ordinal: 6256
        void resize(int, class QChar);

    // RVA: 0x1899 | Ordinal: 6298
        void right(int) const;

    // RVA: 0x189E | Ordinal: 6303
        void rightJustified(int, class QChar, bool) const;

    // RVA: 0x189F | Ordinal: 6304
        void rightRef(int) const;

    // RVA: 0x18EB | Ordinal: 6380
        void section(class QString const &, int, int, class QFlags<enum QString::SectionFlag>) const;

    // RVA: 0x18EC | Ordinal: 6381
        void section(class QRegExp const &, int, int, class QFlags<enum QString::SectionFlag>) const;

    // RVA: 0x18ED | Ordinal: 6382
        void section(class QRegularExpression const &, int, int, class QFlags<enum QString::SectionFlag>) const;

    // RVA: 0x18EE | Ordinal: 6383
        void section(class QChar, int, int, class QFlags<enum QString::SectionFlag>) const;

    // RVA: 0x1A1C | Ordinal: 6685
        void setNum(short, int);

    // RVA: 0x1A1D | Ordinal: 6686
        void setNum(unsigned short, int);

    // RVA: 0x1A1E | Ordinal: 6687
        void setNum(int, int);

    // RVA: 0x1A1F | Ordinal: 6688
        void setNum(unsigned int, int);

    // RVA: 0x1A20 | Ordinal: 6689
        void setNum(long, int);

    // RVA: 0x1A21 | Ordinal: 6690
        void setNum(unsigned long, int);

    // RVA: 0x1A22 | Ordinal: 6691
        void setNum(float, char, int);

    // RVA: 0x1A23 | Ordinal: 6692
        void setNum(double, char, int);

    // RVA: 0x1A24 | Ordinal: 6693
        void setNum(__int64, int);

    // RVA: 0x1A25 | Ordinal: 6694
        void setNum(unsigned __int64, int);

    // RVA: 0x1A6A | Ordinal: 6763
        void setRawData(class QChar const *, int);

    // RVA: 0x1ACA | Ordinal: 6859
        void setUnicode(class QChar const *, int);

    // RVA: 0x1AD4 | Ordinal: 6869
        void setUtf16(unsigned short const *, int);

    // RVA: 0x1B03 | Ordinal: 6916
        void shrink_to_fit(void);

    // RVA: 0x1B1E | Ordinal: 6943
        void simplified(void) const;

    // RVA: 0x1B23 | Ordinal: 6948
        void simplified_helper(class QString &);

    // RVA: 0x1B24 | Ordinal: 6949
        void simplified_helper(class QString const &);

    // RVA: 0x1B43 | Ordinal: 6980
        void size(void) const;

    // RVA: 0x1B6E | Ordinal: 7023
        void split(class QString const &, class QFlags<enum Qt::SplitBehaviorFlags>, enum Qt::CaseSensitivity) const;

    // RVA: 0x1B6F | Ordinal: 7024
        void split(class QString const &, enum QString::SplitBehavior, enum Qt::CaseSensitivity) const;

    // RVA: 0x1B70 | Ordinal: 7025
        void split(class QRegExp const &, class QFlags<enum Qt::SplitBehaviorFlags>) const;

    // RVA: 0x1B71 | Ordinal: 7026
        void split(class QRegExp const &, enum QString::SplitBehavior) const;

    // RVA: 0x1B72 | Ordinal: 7027
        void split(class QRegularExpression const &, class QFlags<enum Qt::SplitBehaviorFlags>) const;

    // RVA: 0x1B73 | Ordinal: 7028
        void split(class QRegularExpression const &, enum QString::SplitBehavior) const;

    // RVA: 0x1B74 | Ordinal: 7029
        void split(class QChar, class QFlags<enum Qt::SplitBehaviorFlags>, enum Qt::CaseSensitivity) const;

    // RVA: 0x1B75 | Ordinal: 7030
        void split(class QChar, enum QString::SplitBehavior, enum Qt::CaseSensitivity) const;

    // RVA: 0x1B7B | Ordinal: 7036
        void splitRef(class QString const &, class QFlags<enum Qt::SplitBehaviorFlags>, enum Qt::CaseSensitivity) const;

    // RVA: 0x1B7C | Ordinal: 7037
        void splitRef(class QString const &, enum QString::SplitBehavior, enum Qt::CaseSensitivity) const;

    // RVA: 0x1B7D | Ordinal: 7038
        void splitRef(class QRegExp const &, class QFlags<enum Qt::SplitBehaviorFlags>) const;

    // RVA: 0x1B7E | Ordinal: 7039
        void splitRef(class QRegExp const &, enum QString::SplitBehavior) const;

    // RVA: 0x1B7F | Ordinal: 7040
        void splitRef(class QRegularExpression const &, class QFlags<enum Qt::SplitBehaviorFlags>) const;

    // RVA: 0x1B80 | Ordinal: 7041
        void splitRef(class QRegularExpression const &, enum QString::SplitBehavior) const;

    // RVA: 0x1B81 | Ordinal: 7042
        void splitRef(class QChar, class QFlags<enum Qt::SplitBehaviorFlags>, enum Qt::CaseSensitivity) const;

    // RVA: 0x1B82 | Ordinal: 7043
        void splitRef(class QChar, enum QString::SplitBehavior, enum Qt::CaseSensitivity) const;

    // RVA: 0x1B84 | Ordinal: 7045
        void sprintf(char const *, ...);

    // RVA: 0x1B89 | Ordinal: 7050
        void squeeze(void);

    // RVA: 0x1BCD | Ordinal: 7118
        void startsWith(class QString const &, enum Qt::CaseSensitivity) const;

    // RVA: 0x1BCE | Ordinal: 7119
        void startsWith(class QStringRef const &, enum Qt::CaseSensitivity) const;

    // RVA: 0x1BCF | Ordinal: 7120
        void startsWith(class QChar, enum Qt::CaseSensitivity) const;

    // RVA: 0x1BD0 | Ordinal: 7121
        void startsWith(class QLatin1String, enum Qt::CaseSensitivity) const;

    // RVA: 0x1BD1 | Ordinal: 7122
        void startsWith(class QStringView, enum Qt::CaseSensitivity) const;

    // RVA: 0x1C83 | Ordinal: 7300
        void swap(class QString &);

    // RVA: 0x1CEB | Ordinal: 7404
        void toAscii(void) const;

    // RVA: 0x1D00 | Ordinal: 7425
        void toCaseFolded(void) const;

    // RVA: 0x1D03 | Ordinal: 7428
        void toCaseFolded_helper(class QString &);

    // RVA: 0x1D04 | Ordinal: 7429
        void toCaseFolded_helper(class QString const &);

    // RVA: 0x1D31 | Ordinal: 7474
        void toDouble(bool *) const;

    // RVA: 0x1D3F | Ordinal: 7488
        void toFloat(bool *) const;

    // RVA: 0x1D46 | Ordinal: 7495
        void toHtmlEscaped(void) const;

    // RVA: 0x1D4E | Ordinal: 7503
        void toInt(bool *, int) const;

    // RVA: 0x1D54 | Ordinal: 7509
        void toIntegral_helper(class QChar const *, int, bool *, int);

    // RVA: 0x1D55 | Ordinal: 7510
        void toIntegral_helper(class QChar const *, unsigned int, bool *, int);

    // RVA: 0x1D63 | Ordinal: 7524
        void toLatin1(void) const;

    // RVA: 0x1D67 | Ordinal: 7528
        void toLatin1_helper(class QString const &);

    // RVA: 0x1D69 | Ordinal: 7530
        void toLatin1_helper_inplace(class QString &);

    // RVA: 0x1D71 | Ordinal: 7538
        void toLocal8Bit(void) const;

    // RVA: 0x1D75 | Ordinal: 7542
        void toLocal8Bit_helper(class QChar const *, int);

    // RVA: 0x1D7D | Ordinal: 7550
        void toLong(bool *, int) const;

    // RVA: 0x1D83 | Ordinal: 7556
        void toLongLong(bool *, int) const;

    // RVA: 0x1D8D | Ordinal: 7566
        void toLower(void) const;

    // RVA: 0x1D92 | Ordinal: 7571
        void toLower_helper(class QString &);

    // RVA: 0x1D93 | Ordinal: 7572
        void toLower_helper(class QString const &);

    // RVA: 0x1DBB | Ordinal: 7612
        void toShort(bool *, int) const;

    // RVA: 0x1DC7 | Ordinal: 7624
        void toStdString(void) const;

    // RVA: 0x1DC8 | Ordinal: 7625
        void toStdU16String(void) const;

    // RVA: 0x1DC9 | Ordinal: 7626
        void toStdU32String(void) const;

    // RVA: 0x1DCD | Ordinal: 7630
        void toStdWString(void) const;

    // RVA: 0x1E17 | Ordinal: 7704
        void toUInt(bool *, int) const;

    // RVA: 0x1E1E | Ordinal: 7711
        void toULong(bool *, int) const;

    // RVA: 0x1E24 | Ordinal: 7717
        void toULongLong(bool *, int) const;

    // RVA: 0x1E2B | Ordinal: 7724
        void toUShort(bool *, int) const;

    // RVA: 0x1E2E | Ordinal: 7727
        void toUcs4(void) const;

    // RVA: 0x1E30 | Ordinal: 7729
        void toUcs4_helper(unsigned short const *, int, unsigned int *);

    // RVA: 0x1E3F | Ordinal: 7744
        void toUpper(void) const;

    // RVA: 0x1E44 | Ordinal: 7749
        void toUpper_helper(class QString &);

    // RVA: 0x1E45 | Ordinal: 7750
        void toUpper_helper(class QString const &);

    // RVA: 0x1E49 | Ordinal: 7754
        void toUtf8(void) const;

    // RVA: 0x1E4D | Ordinal: 7758
        void toUtf8_helper(class QString const &);

    // RVA: 0x1E5E | Ordinal: 7775
        void toWCharArray(wchar_t *) const;

    // RVA: 0x1F13 | Ordinal: 7956
        void trimmed(void) const;

    // RVA: 0x1F1B | Ordinal: 7964
        void trimmed_helper(class QString &);

    // RVA: 0x1F1C | Ordinal: 7965
        void trimmed_helper(class QString const &);

    // RVA: 0x1F20 | Ordinal: 7969
        void truncate(int);

    // RVA: 0x1F54 | Ordinal: 8021
        void unicode(void) const;

    // RVA: 0x1FA4 | Ordinal: 8101
        void utf16(void) const;

    // RVA: 0x1FD3 | Ordinal: 8148
        void vasprintf(char const *, char *);

    // RVA: 0x1FDA | Ordinal: 8155
        void vsprintf(char const *, char *);

    // RVA: 0x362 | Ordinal: 867
        void _QString(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSTRING_HPP
