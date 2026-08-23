#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ObjectIDFilter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ObjectIDFilter
{
public:

    // RVA: 0x131 | Ordinal: 306
        void ObjectIDFilter(class AI::ObjectIDFilter &&);

    // RVA: 0x132 | Ordinal: 307
        void ObjectIDFilter(class AI::ObjectIDFilter const &);

    // RVA: 0x133 | Ordinal: 308
        void ObjectIDFilter(unsigned int, int, struct AI::AttackParam const &);

    // RVA: 0x134 | Ordinal: 309
        void ObjectIDFilter(void);

    // RVA: 0x456 | Ordinal: 1111
        void operator()(class MovingObject *, class MovingObject *, struct AI::TargetFilterState &) const;

    // RVA: 0x293 | Ordinal: 660
        void _ObjectIDFilter(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_OBJECTIDFILTER_HPP
