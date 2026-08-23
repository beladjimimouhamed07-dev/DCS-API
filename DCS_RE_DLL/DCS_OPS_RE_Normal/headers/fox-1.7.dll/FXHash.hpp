#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXHash
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXHash
{
public:

    // RVA: 0x16B | Ordinal: 364
        void FXHash(class FX::FXHash const &);

    // RVA: 0x16C | Ordinal: 365
        void FXHash(void);

    // RVA: 0x96F | Ordinal: 2416
        void adopt(class FX::FXHash &);

    // RVA: 0xA2D | Ordinal: 2606
        void at(void *);

    // RVA: 0xA2E | Ordinal: 2607
        void at(void *) const;

    // RVA: 0xAD1 | Ordinal: 2770
        void clear(void);

    // RVA: 0xDED | Ordinal: 3566
        void empty(void) const;

    // RVA: 0xDEE | Ordinal: 3567
        void empty(__int64) const;

    // RVA: 0xE34 | Ordinal: 3637
        void erase(__int64);

    // RVA: 0xF06 | Ordinal: 3847
        void find(void *) const;

    // RVA: 0xF5D | Ordinal: 3934
        void free(__int64);

    // RVA: 0xF5E | Ordinal: 3935
        void free(void) const;

    // RVA: 0x18A4 | Ordinal: 6309
        void insert(void *, void *);

    // RVA: 0x1A14 | Ordinal: 6677
        void key(__int64) const;

    // RVA: 0x1F16 | Ordinal: 7959
        void no(__int64);

    // RVA: 0x1F17 | Ordinal: 7960
        void no(void) const;

    // RVA: 0x273D | Ordinal: 10046
        void remove(void *);

    // RVA: 0x2792 | Ordinal: 10131
        void resize(__int64);

    // RVA: 0x2F27 | Ordinal: 12072
        void used(__int64);

    // RVA: 0x2F28 | Ordinal: 12073
        void used(void) const;

    // RVA: 0x2F50 | Ordinal: 12113
        void value(__int64);

    // RVA: 0x2F51 | Ordinal: 12114
        void value(__int64) const;

    // RVA: 0x42A | Ordinal: 1067
        void _FXHash(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXHASH_HPP
