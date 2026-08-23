#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Sector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Sector
{
public:

    // RVA: 0x164 | Ordinal: 357
        void Sector(float, float, enum Sector::CENTER_AND_WIDTH_ENUM);

    // RVA: 0x165 | Ordinal: 358
        void Sector(float, float, enum Sector::START_END_ENUM);

    // RVA: 0x166 | Ordinal: 359
        void Sector(void);

    // RVA: 0x853 | Ordinal: 2132
        void getLeft(void) const;

    // RVA: 0x8EE | Ordinal: 2287
        void getRight(void) const;

    // RVA: 0x914 | Ordinal: 2325
        void getWidth(void) const;

    // RVA: 0x999 | Ordinal: 2458
        void intersect(class Sector const &, class Sector const &, class Sector *);

    // RVA: 0x9B6 | Ordinal: 2487
        void isInside(float) const;

    // RVA: 0xB9D | Ordinal: 2974
        void setCenterHalfWidth(float, float);

    // RVA: 0xBD0 | Ordinal: 3025
        void setStartEnd(float, float);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_SECTOR_HPP
