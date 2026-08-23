#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ComboFilter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ComboFilter
{
public:

    // RVA: 0x66 | Ordinal: 103
        void ComboFilter(class AI::ComboFilter &&);

    // RVA: 0x67 | Ordinal: 104
        void ComboFilter(class AI::ComboFilter const &);

    // RVA: 0x68 | Ordinal: 105
        void ComboFilter(void);

    // RVA: 0x603 | Ordinal: 1540
        void add(class AI::TargetFilter *);

    // RVA: 0x66C | Ordinal: 1645
        void clear(void);

    // RVA: 0x781 | Ordinal: 1922
        void empty(void) const;

    // RVA: 0x911 | Ordinal: 2322
        void getWeaponType(void) const;

    // RVA: 0x9C6 | Ordinal: 2503
        void isThreatFilter(void) const;

    // RVA: 0xB5A | Ordinal: 2907
        void remove(class AI::TargetFilter *);

    // RVA: 0x24B | Ordinal: 588
        void _ComboFilter(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_COMBOFILTER_HPP
