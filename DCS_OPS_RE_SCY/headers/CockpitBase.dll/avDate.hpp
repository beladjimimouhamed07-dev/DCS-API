#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avDate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avDate
{
public:

    // RVA: 0x7C8 | Ordinal: 1993
        void Get_n_day(void) const;

    // RVA: 0x7FC | Ordinal: 2045
        void Load_From_Mission(class cockpit::avDate &);

    // RVA: 0xF0 | Ordinal: 241
        void avDate(int, int);

    // RVA: 0xF1 | Ordinal: 242
        void avDate(int, int, int);

    // RVA: 0xF2 | Ordinal: 243
        void avDate(void);

    // RVA: 0xC81 | Ordinal: 3202
        void getDateInDays(void) const;

    // RVA: 0xC82 | Ordinal: 3203
        void getDateTimeInDays(void) const;

    // RVA: 0xC83 | Ordinal: 3204
        void getDay(void) const;

    // RVA: 0xD63 | Ordinal: 3428
        void getMonth(void) const;

    // RVA: 0xE54 | Ordinal: 3669
        void getYear(void) const;

    // RVA: 0x13A0 | Ordinal: 5025
        void load(class Lua::Config &);

    // RVA: 0x1421 | Ordinal: 5154
        void nextDay(void);

    // RVA: 0x517 | Ordinal: 1304
        void operator()(int, int);

    // RVA: 0x1648 | Ordinal: 5705
        void save(struct lua_State *) const;

    // RVA: 0x1687 | Ordinal: 5768
        void set(int, int, int);

    // RVA: 0x16D5 | Ordinal: 5846
        void setDateFromDays(double);

    // RVA: 0x1B9A | Ordinal: 7067
        void valid(void);

    // RVA: 0x2F4 | Ordinal: 757
        void _avDate(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVDATE_HPP
