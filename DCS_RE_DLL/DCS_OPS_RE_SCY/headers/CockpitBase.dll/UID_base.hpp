#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: UID_base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class UID_base
{
public:

    // RVA: 0x9D | Ordinal: 158
        void UID_base(class UID_base &&);

    // RVA: 0x9E | Ordinal: 159
        void UID_base(class UID_base const &);

    // RVA: 0x9F | Ordinal: 160
        void UID_base(void);

    // RVA: 0xAB4 | Ordinal: 2741
        void clear(void);

    // RVA: 0xC1C | Ordinal: 3101
        void free_UID(int);

    // RVA: 0xEC5 | Ordinal: 3782
        void get_busy_qty(void) const;

    // RVA: 0xFC7 | Ordinal: 4040
        void get_min_free_UID(void);

    // RVA: 0xFC8 | Ordinal: 4041
        void get_min_uid(void) const;

    // RVA: 0x12AB | Ordinal: 4780
        void is_busy(int) const;

    // RVA: 0x1836 | Ordinal: 6199
        void set_busy(int);

    // RVA: 0x18E1 | Ordinal: 6370
        void set_min_uid(int);

    // RVA: 0x1A25 | Ordinal: 6694
        void take_UID(void);

    // RVA: 0x2C7 | Ordinal: 712
        void _UID_base(void);
};

// DCS_OPS_RE_COCKPITBASE.DLL_UID_BASE_HPP
