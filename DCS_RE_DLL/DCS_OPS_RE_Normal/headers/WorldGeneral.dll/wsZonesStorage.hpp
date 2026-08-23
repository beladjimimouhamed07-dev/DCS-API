#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wsZonesStorage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wsZonesStorage
{
public:

    // RVA: 0x677 | Ordinal: 1656
        void clear(void);

    // RVA: 0x960 | Ordinal: 2401
        void get_zone(class ed::basic_string<char> const &);

    // RVA: 0x961 | Ordinal: 2402
        void get_zone(unsigned int);

    // RVA: 0x962 | Ordinal: 2403
        void get_zones(void) const;

    // RVA: 0x963 | Ordinal: 2404
        void get_zones_by_id(void) const;

    // RVA: 0xB53 | Ordinal: 2900
        void register_zone(unsigned int &, class ed::basic_string<char> &, class wsZone *);

    // RVA: 0xB54 | Ordinal: 2901
        void register_zone(unsigned int, class wsZone *);

    // RVA: 0xC3C | Ordinal: 3133
        void unregister_zone(unsigned int);

    // RVA: 0x225 | Ordinal: 550
        void wsZonesStorage(class wsZonesStorage &&);

    // RVA: 0x226 | Ordinal: 551
        void wsZonesStorage(class wsZonesStorage const &);

    // RVA: 0x227 | Ordinal: 552
        void wsZonesStorage(void);

    // RVA: 0x2F3 | Ordinal: 756
        void _wsZonesStorage(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WSZONESSTORAGE_HPP
