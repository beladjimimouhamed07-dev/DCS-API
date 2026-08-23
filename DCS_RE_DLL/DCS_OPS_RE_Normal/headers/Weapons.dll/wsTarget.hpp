#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wsTarget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wsTarget
{
public:

    // RVA: 0x38A | Ordinal: 907
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0xBD | Ordinal: 190
        void operator_(struct wsTarget &) const;

    // RVA: 0x600 | Ordinal: 1537
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x57 | Ordinal: 88
        void wsTarget(struct wsTarget const &);

    // RVA: 0x58 | Ordinal: 89
        void wsTarget(struct wsCommonTarget const &);

    // RVA: 0x59 | Ordinal: 90
        void wsTarget(void);

    // RVA: 0x83 | Ordinal: 132
        void _wsTarget(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WSTARGET_HPP
