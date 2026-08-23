#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXString
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXString
{
public:

    // RVA: 0x2EE | Ordinal: 751
        void FXString(class FX::FXString const &);

    // RVA: 0x2EF | Ordinal: 752
        void FXString(char, int);

    // RVA: 0x2F0 | Ordinal: 753
        void FXString(char const *);

    // RVA: 0x2F1 | Ordinal: 754
        void FXString(char const *, int);

    // RVA: 0x2F2 | Ordinal: 755
        void FXString(unsigned int const *);

    // RVA: 0x2F3 | Ordinal: 756
        void FXString(unsigned int const *, int);

    // RVA: 0x2F4 | Ordinal: 757
        void FXString(wchar_t const *);

    // RVA: 0x2F5 | Ordinal: 758
        void FXString(wchar_t const *, int);

    // RVA: 0x2F6 | Ordinal: 759
        void FXString(void);

    // RVA: 0x973 | Ordinal: 2420
        void adopt(class FX::FXString &);

    // RVA: 0x97C | Ordinal: 2429
        void after(char, int) const;

    // RVA: 0x9CA | Ordinal: 2507
        void append(class FX::FXString const &);

    // RVA: 0x9CB | Ordinal: 2508
        void append(char);

    // RVA: 0x9CC | Ordinal: 2509
        void append(char, int);

    // RVA: 0x9CD | Ordinal: 2510
        void append(char const *);

    // RVA: 0x9CE | Ordinal: 2511
        void append(char const *, int);

    // RVA: 0x9CF | Ordinal: 2512
        void append(unsigned int const *);

    // RVA: 0x9D0 | Ordinal: 2513
        void append(unsigned int const *, int);

    // RVA: 0x9D1 | Ordinal: 2514
        void append(wchar_t const *);

    // RVA: 0x9D2 | Ordinal: 2515
        void append(wchar_t const *, int);

    // RVA: 0xA1E | Ordinal: 2591
        void assign(class FX::FXString const &);

    // RVA: 0xA1F | Ordinal: 2592
        void assign(char);

    // RVA: 0xA20 | Ordinal: 2593
        void assign(char, int);

    // RVA: 0xA21 | Ordinal: 2594
        void assign(char const *);

    // RVA: 0xA22 | Ordinal: 2595
        void assign(char const *, int);

    // RVA: 0xA23 | Ordinal: 2596
        void assign(unsigned int const *);

    // RVA: 0xA24 | Ordinal: 2597
        void assign(unsigned int const *, int);

    // RVA: 0xA25 | Ordinal: 2598
        void assign(wchar_t const *);

    // RVA: 0xA26 | Ordinal: 2599
        void assign(wchar_t const *, int);

    // RVA: 0xA37 | Ordinal: 2616
        void at(int);

    // RVA: 0xA38 | Ordinal: 2617
        void at(int) const;

    // RVA: 0xA56 | Ordinal: 2647
        void before(char, int) const;

    // RVA: 0xAD8 | Ordinal: 2777
        void clear(void);

    // RVA: 0xB77 | Ordinal: 2936
        void contains(class FX::FXString const &) const;

    // RVA: 0xB78 | Ordinal: 2937
        void contains(char) const;

    // RVA: 0xB79 | Ordinal: 2938
        void contains(char const *) const;

    // RVA: 0xB7A | Ordinal: 2939
        void contains(char const *, int) const;

    // RVA: 0xB98 | Ordinal: 2969
        void count(int, int) const;

    // RVA: 0xB99 | Ordinal: 2970
        void count(void) const;

    // RVA: 0xC2C | Ordinal: 3117
        void dec(int) const;

    // RVA: 0xC2D | Ordinal: 3118
        void dec(int, int) const;

    // RVA: 0xDF9 | Ordinal: 3578
        void empty(void) const;

    // RVA: 0xE39 | Ordinal: 3642
        void erase(int);

    // RVA: 0xE3A | Ordinal: 3643
        void erase(int, int);

    // RVA: 0xE75 | Ordinal: 3702
        void extent(int) const;

    // RVA: 0xF0D | Ordinal: 3854
        void find(class FX::FXString const &, int) const;

    // RVA: 0xF0E | Ordinal: 3855
        void find(char, int) const;

    // RVA: 0xF0F | Ordinal: 3856
        void find(char, int, int) const;

    // RVA: 0xF10 | Ordinal: 3857
        void find(char const *, int) const;

    // RVA: 0xF11 | Ordinal: 3858
        void find(char const *, int, int) const;

    // RVA: 0xF32 | Ordinal: 3891
        void find_first_not_of(class FX::FXString const &, int) const;

    // RVA: 0xF33 | Ordinal: 3892
        void find_first_not_of(char, int) const;

    // RVA: 0xF34 | Ordinal: 3893
        void find_first_not_of(char const *, int) const;

    // RVA: 0xF35 | Ordinal: 3894
        void find_first_not_of(char const *, int, int) const;

    // RVA: 0xF36 | Ordinal: 3895
        void find_first_of(class FX::FXString const &, int) const;

    // RVA: 0xF37 | Ordinal: 3896
        void find_first_of(char, int) const;

    // RVA: 0xF38 | Ordinal: 3897
        void find_first_of(char const *, int) const;

    // RVA: 0xF39 | Ordinal: 3898
        void find_first_of(char const *, int, int) const;

    // RVA: 0xF3A | Ordinal: 3899
        void find_last_not_of(class FX::FXString const &, int) const;

    // RVA: 0xF3B | Ordinal: 3900
        void find_last_not_of(char, int) const;

    // RVA: 0xF3C | Ordinal: 3901
        void find_last_not_of(char const *, int) const;

    // RVA: 0xF3D | Ordinal: 3902
        void find_last_not_of(char const *, int, int) const;

    // RVA: 0xF3E | Ordinal: 3903
        void find_last_of(class FX::FXString const &, int) const;

    // RVA: 0xF3F | Ordinal: 3904
        void find_last_of(char, int) const;

    // RVA: 0xF40 | Ordinal: 3905
        void find_last_of(char const *, int) const;

    // RVA: 0xF41 | Ordinal: 3906
        void find_last_of(char const *, int, int) const;

    // RVA: 0xF58 | Ordinal: 3929
        void format(char const *, ...);

    // RVA: 0xF65 | Ordinal: 3942
        void fromDouble(double, int, int);

    // RVA: 0xF66 | Ordinal: 3943
        void fromFloat(float, int, int);

    // RVA: 0xF67 | Ordinal: 3944
        void fromInt(int, int);

    // RVA: 0xF68 | Ordinal: 3945
        void fromLong(__int64, int);

    // RVA: 0xF69 | Ordinal: 3946
        void fromUInt(unsigned int, int);

    // RVA: 0xF6A | Ordinal: 3947
        void fromULong(unsigned __int64, int);

    // RVA: 0x1817 | Ordinal: 6168
        void hash(void) const;

    // RVA: 0x1818 | Ordinal: 6169
        void hash(char const *);

    // RVA: 0x181F | Ordinal: 6176
        void head(void);

    // RVA: 0x1820 | Ordinal: 6177
        void head(void) const;

    // RVA: 0x1860 | Ordinal: 6241
        void inc(int) const;

    // RVA: 0x1861 | Ordinal: 6242
        void inc(int, int) const;

    // RVA: 0x188B | Ordinal: 6284
        void index(int) const;

    // RVA: 0x18AF | Ordinal: 6320
        void insert(int, class FX::FXString const &);

    // RVA: 0x18B0 | Ordinal: 6321
        void insert(int, char);

    // RVA: 0x18B1 | Ordinal: 6322
        void insert(int, char, int);

    // RVA: 0x18B2 | Ordinal: 6323
        void insert(int, char const *);

    // RVA: 0x18B3 | Ordinal: 6324
        void insert(int, char const *, int);

    // RVA: 0x18B4 | Ordinal: 6325
        void insert(int, unsigned int const *);

    // RVA: 0x18B5 | Ordinal: 6326
        void insert(int, unsigned int const *, int);

    // RVA: 0x18B6 | Ordinal: 6327
        void insert(int, wchar_t const *);

    // RVA: 0x18B7 | Ordinal: 6328
        void insert(int, wchar_t const *, int);

    // RVA: 0x1A78 | Ordinal: 6777
        void left(int) const;

    // RVA: 0x1A87 | Ordinal: 6792
        void length(int);

    // RVA: 0x1A88 | Ordinal: 6793
        void length(void) const;

    // RVA: 0x1BA4 | Ordinal: 7077
        void lower(void);

    // RVA: 0x1E40 | Ordinal: 7745
        void mid(int, int) const;

    // RVA: 0x1EAD | Ordinal: 7854
        void move(int, int, int);

    // RVA: 0x1F3B | Ordinal: 7996
        void offset(int) const;

    // RVA: 0x26B0 | Ordinal: 9905
        void prepend(class FX::FXString const &);

    // RVA: 0x26B1 | Ordinal: 9906
        void prepend(char);

    // RVA: 0x26B2 | Ordinal: 9907
        void prepend(char, int);

    // RVA: 0x26B3 | Ordinal: 9908
        void prepend(char const *);

    // RVA: 0x26B4 | Ordinal: 9909
        void prepend(char const *, int);

    // RVA: 0x26B5 | Ordinal: 9910
        void prepend(unsigned int const *);

    // RVA: 0x26B6 | Ordinal: 9911
        void prepend(unsigned int const *, int);

    // RVA: 0x26B7 | Ordinal: 9912
        void prepend(wchar_t const *);

    // RVA: 0x26B8 | Ordinal: 9913
        void prepend(wchar_t const *, int);

    // RVA: 0x26DD | Ordinal: 9950
        void rafter(char, int) const;

    // RVA: 0x26E0 | Ordinal: 9953
        void rbefore(char, int) const;

    // RVA: 0x2778 | Ordinal: 10105
        void replace(int, char);

    // RVA: 0x2779 | Ordinal: 10106
        void replace(int, int, class FX::FXString const &);

    // RVA: 0x277A | Ordinal: 10107
        void replace(int, int, char, int);

    // RVA: 0x277B | Ordinal: 10108
        void replace(int, int, char const *);

    // RVA: 0x277C | Ordinal: 10109
        void replace(int, int, char const *, int);

    // RVA: 0x277D | Ordinal: 10110
        void replace(int, int, unsigned int const *);

    // RVA: 0x277E | Ordinal: 10111
        void replace(int, int, unsigned int const *, int);

    // RVA: 0x277F | Ordinal: 10112
        void replace(int, int, wchar_t const *);

    // RVA: 0x2780 | Ordinal: 10113
        void replace(int, int, wchar_t const *, int);

    // RVA: 0x27A9 | Ordinal: 10154
        void rfind(class FX::FXString const &, int) const;

    // RVA: 0x27AA | Ordinal: 10155
        void rfind(char, int) const;

    // RVA: 0x27AB | Ordinal: 10156
        void rfind(char, int, int) const;

    // RVA: 0x27AC | Ordinal: 10157
        void rfind(char const *, int) const;

    // RVA: 0x27AD | Ordinal: 10158
        void rfind(char const *, int, int) const;

    // RVA: 0x27AE | Ordinal: 10159
        void right(int) const;

    // RVA: 0x28C3 | Ordinal: 10436
        void scan(char const *, ...) const;

    // RVA: 0x28CD | Ordinal: 10446
        void section(class FX::FXString const &, int, int) const;

    // RVA: 0x28CE | Ordinal: 10447
        void section(char, int, int) const;

    // RVA: 0x28CF | Ordinal: 10448
        void section(char const *, int, int) const;

    // RVA: 0x28D0 | Ordinal: 10449
        void section(char const *, int, int, int) const;

    // RVA: 0x2E31 | Ordinal: 11826
        void simplify(void);

    // RVA: 0x2E71 | Ordinal: 11890
        void substitute(class FX::FXString const &, class FX::FXString const &, bool);

    // RVA: 0x2E72 | Ordinal: 11891
        void substitute(char, char, bool);

    // RVA: 0x2E73 | Ordinal: 11892
        void substitute(char const *, char const *, bool);

    // RVA: 0x2E74 | Ordinal: 11893
        void substitute(char const *, int, char const *, int, bool);

    // RVA: 0x2E8E | Ordinal: 11919
        void tail(void);

    // RVA: 0x2E8F | Ordinal: 11920
        void tail(void) const;

    // RVA: 0x2E92 | Ordinal: 11923
        void text(void);

    // RVA: 0x2E93 | Ordinal: 11924
        void text(void) const;

    // RVA: 0x2EA0 | Ordinal: 11937
        void toDouble(bool *) const;

    // RVA: 0x2EA2 | Ordinal: 11939
        void toFloat(bool *) const;

    // RVA: 0x2EA4 | Ordinal: 11941
        void toInt(int, bool *) const;

    // RVA: 0x2EA6 | Ordinal: 11943
        void toLong(int, bool *) const;

    // RVA: 0x2EAE | Ordinal: 11951
        void toUInt(int, bool *) const;

    // RVA: 0x2EB0 | Ordinal: 11953
        void toULong(int, bool *) const;

    // RVA: 0x2ECF | Ordinal: 11984
        void trim(void);

    // RVA: 0x2ED0 | Ordinal: 11985
        void trimBegin(void);

    // RVA: 0x2ED2 | Ordinal: 11987
        void trimEnd(void);

    // RVA: 0x2ED4 | Ordinal: 11989
        void trunc(int);

    // RVA: 0x2F22 | Ordinal: 12067
        void upper(void);

    // RVA: 0x2F4E | Ordinal: 12111
        void validate(int) const;

    // RVA: 0x2F52 | Ordinal: 12115
        void value(int, int);

    // RVA: 0x2F53 | Ordinal: 12116
        void value(unsigned int, int);

    // RVA: 0x2F54 | Ordinal: 12117
        void value(float, int, int);

    // RVA: 0x2F55 | Ordinal: 12118
        void value(double, int, int);

    // RVA: 0x2F56 | Ordinal: 12119
        void value(char const *, ...);

    // RVA: 0x2F57 | Ordinal: 12120
        void value(__int64, int);

    // RVA: 0x2F58 | Ordinal: 12121
        void value(unsigned __int64, int);

    // RVA: 0x2F5C | Ordinal: 12125
        void vformat(char const *, char *);

    // RVA: 0x2F66 | Ordinal: 12135
        void vscan(char const *, char *) const;

    // RVA: 0x2F67 | Ordinal: 12136
        void vvalue(char const *, char *);

    // RVA: 0x2FAD | Ordinal: 12206
        void wc(int) const;

    // RVA: 0x4BE | Ordinal: 1215
        void _FXString(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSTRING_HPP
