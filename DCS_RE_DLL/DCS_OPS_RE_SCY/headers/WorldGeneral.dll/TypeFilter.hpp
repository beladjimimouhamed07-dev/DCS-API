#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: TypeFilter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class TypeFilter
{
public:

    // RVA: 0x1C8 | Ordinal: 457
        void TypeFilter(class AI::TypeFilter &&);

    // RVA: 0x1C9 | Ordinal: 458
        void TypeFilter(class AI::TypeFilter const &);

    // RVA: 0x1CA | Ordinal: 459
        void TypeFilter(class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, int, struct AI::AttackParam const &);

    // RVA: 0x1CB | Ordinal: 460
        void TypeFilter(class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, int, struct AI::AttackParam const &);

    // RVA: 0x1CC | Ordinal: 461
        void TypeFilter(void);

    // RVA: 0x45A | Ordinal: 1115
        void operator()(class MovingObject *, class MovingObject *, struct AI::TargetFilterState &) const;

    // RVA: 0x2C7 | Ordinal: 712
        void _TypeFilter(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_TYPEFILTER_HPP
