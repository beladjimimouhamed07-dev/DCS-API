#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: SkillFactors
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class SkillFactors
{
public:

    // RVA: 0x17F | Ordinal: 384
        void SkillFactors(class SkillFactors &&);

    // RVA: 0x180 | Ordinal: 385
        void SkillFactors(class SkillFactors const &);

    // RVA: 0x181 | Ordinal: 386
        void SkillFactors(void);

    // RVA: 0x66F | Ordinal: 1648
        void clear(void);

    // RVA: 0x94F | Ordinal: 2384
        void get_param(enum SkillFactors::FactorName, int) const;

    // RVA: 0x950 | Ordinal: 2385
        void get_param(enum SkillFactors::FactorName, class MovingObject *) const;

    // RVA: 0x97A | Ordinal: 2427
        void init(void);

    // RVA: 0x2AD | Ordinal: 686
        void _SkillFactors(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_SKILLFACTORS_HPP
