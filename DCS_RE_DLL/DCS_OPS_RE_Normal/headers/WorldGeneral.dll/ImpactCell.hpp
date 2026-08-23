#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ImpactCell
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ImpactCell
{
public:

    // RVA: 0xF4 | Ordinal: 245
        void ImpactCell(struct ImpactCell const &);

    // RVA: 0xF5 | Ordinal: 246
        void ImpactCell(void);

    // RVA: 0xA63 | Ordinal: 2660
        void make_blacktail(class MovingObject *, float, bool);

    // RVA: 0xA64 | Ordinal: 2661
        void make_fire(class MovingObject *, float, bool);

    // RVA: 0xA65 | Ordinal: 2662
        void make_leakage(class MovingObject *, float, bool);

    // RVA: 0xA8F | Ordinal: 2704
        void off(void);

    // RVA: 0xC49 | Ordinal: 3146
        void updateGraphicEffect(void);

    // RVA: 0x27B | Ordinal: 636
        void _ImpactCell(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_IMPACTCELL_HPP
