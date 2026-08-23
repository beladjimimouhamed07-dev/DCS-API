#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDate
{
public:

    // RVA: 0xC2 | Ordinal: 195
        void FXDate(class FX::FXDate const &);

    // RVA: 0xC3 | Ordinal: 196
        void FXDate(int, int);

    // RVA: 0xC4 | Ordinal: 197
        void FXDate(int, int, int);

    // RVA: 0xC5 | Ordinal: 198
        void FXDate(unsigned int);

    // RVA: 0xC6 | Ordinal: 199
        void FXDate(void);

    // RVA: 0x95D | Ordinal: 2398
        void addDays(int);

    // RVA: 0x961 | Ordinal: 2402
        void addMonths(int);

    // RVA: 0x965 | Ordinal: 2406
        void addYears(int);

    // RVA: 0xC23 | Ordinal: 3108
        void day(void) const;

    // RVA: 0xC24 | Ordinal: 3109
        void dayName(int);

    // RVA: 0xC25 | Ordinal: 3110
        void dayNameShort(int);

    // RVA: 0xC26 | Ordinal: 3111
        void dayOfWeek(void) const;

    // RVA: 0xC27 | Ordinal: 3112
        void dayOfYear(void) const;

    // RVA: 0xC28 | Ordinal: 3113
        void daysInMonth(void) const;

    // RVA: 0xC29 | Ordinal: 3114
        void daysInMonth(int, int);

    // RVA: 0xC2A | Ordinal: 3115
        void daysInYear(void) const;

    // RVA: 0xC2B | Ordinal: 3116
        void daysInYear(int);

    // RVA: 0x10FF | Ordinal: 4352
        void getDate(int &, int &, int &) const;

    // RVA: 0x1100 | Ordinal: 4353
        void getDate(int &, int &) const;

    // RVA: 0x131D | Ordinal: 4894
        void getJulian(void) const;

    // RVA: 0x1624 | Ordinal: 5669
        void getTime(void) const;

    // RVA: 0x1A72 | Ordinal: 6771
        void leapYear(void) const;

    // RVA: 0x1A73 | Ordinal: 6772
        void leapYear(int);

    // RVA: 0x1B88 | Ordinal: 7049
        void localDate(void);

    // RVA: 0x1EA6 | Ordinal: 7847
        void month(void) const;

    // RVA: 0x1EA7 | Ordinal: 7848
        void monthName(int);

    // RVA: 0x1EA8 | Ordinal: 7849
        void monthNameShort(int);

    // RVA: 0x782 | Ordinal: 1923
        void operator_(class FX::FXDate const &) const;

    // RVA: 0x2A3B | Ordinal: 10812
        void setDate(int, int);

    // RVA: 0x2A3C | Ordinal: 10813
        void setDate(int, int, int);

    // RVA: 0x2BAE | Ordinal: 11183
        void setJulian(unsigned int);

    // RVA: 0x2D6A | Ordinal: 11627
        void setTime(__int64);

    // RVA: 0x2EFB | Ordinal: 12028
        void universalDate(void);

    // RVA: 0x2FC2 | Ordinal: 12227
        void weekOfYear(void) const;

    // RVA: 0x300A | Ordinal: 12299
        void year(void) const;

    // RVA: 0x3E9 | Ordinal: 1002
        void _FXDate(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDATE_HPP
