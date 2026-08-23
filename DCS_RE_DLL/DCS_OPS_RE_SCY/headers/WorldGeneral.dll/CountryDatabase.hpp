#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: CountryDatabase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class CountryDatabase
{
public:

    // RVA: 0x92A | Ordinal: 2347
        void get_country_display_name(unsigned char, unsigned char);

    // RVA: 0x92B | Ordinal: 2348
        void get_country_international_name(unsigned char, unsigned char);

    // RVA: 0x92C | Ordinal: 2349
        void get_country_short_name(unsigned char, unsigned char);

    // RVA: 0x934 | Ordinal: 2357
        void get_flag(unsigned char);

    // RVA: 0x95C | Ordinal: 2397
        void get_unit_rate(class ed::basic_string<char> const &);

    // RVA: 0xA01 | Ordinal: 2562
        void load(struct lua_State *);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_COUNTRYDATABASE_HPP
