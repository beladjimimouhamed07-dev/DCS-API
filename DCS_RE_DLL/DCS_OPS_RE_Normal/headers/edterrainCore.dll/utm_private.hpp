#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrainCore.dll
// Class: utm_private
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class utm_private
{
public:

    // RVA: 0x1 | Ordinal: 2
        void ParseConfig(struct lua_State *, struct utm_private::projection_t &);

    // RVA: 0x2 | Ordinal: 3
        void ParseConfig(char const *, struct utm_private::projection_t &);

    // RVA: 0x3 | Ordinal: 4
        void fromLatLon(struct utm_private::projection_t const &, double, double, double &, double &);

    // RVA: 0x4 | Ordinal: 5
        void fromLockonToMGRS(struct utm_private::projection_t const &, double, double, int);

    // RVA: 0x5 | Ordinal: 6
        void fromLockontoUTM(struct utm_private::projection_t const &, double, double, double &, double &);

    // RVA: 0x6 | Ordinal: 7
        void fromMGRStoLockon(struct utm_private::projection_t const &, class ed::basic_string<char> const &, double &, double &);

    // RVA: 0x7 | Ordinal: 8
        void fromUTMtoLockon(struct utm_private::projection_t const &, double, double, double &, double &);

    // RVA: 0x8 | Ordinal: 9
        void toLatLon(struct utm_private::projection_t const &, double, double, double &, double &);
};

// DCS_OPS_RE_EDTERRAINCORE.DLL_UTM_PRIVATE_HPP
