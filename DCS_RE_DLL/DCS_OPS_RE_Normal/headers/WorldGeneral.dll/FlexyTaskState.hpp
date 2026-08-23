#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: FlexyTaskState
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class FlexyTaskState
{
public:

    // RVA: 0xD2 | Ordinal: 211
        void FlexyTaskState(class AI::FlexyTaskState const &);

    // RVA: 0xD3 | Ordinal: 212
        void FlexyTaskState(class AI::FlexyTask *, class AI::Controller *);

    // RVA: 0x778 | Ordinal: 1913
        void doPause(void);

    // RVA: 0x77B | Ordinal: 1916
        void doResume(void);

    // RVA: 0x7AD | Ordinal: 1966
        void finish(void);

    // RVA: 0x7F8 | Ordinal: 2041
        void getCategory(void) const;

    // RVA: 0x9A5 | Ordinal: 2470
        void isBackGround(void) const;

    // RVA: 0xA95 | Ordinal: 2710
        void onEvent(enum AI::Event, class Parameter const *);

    // RVA: 0xC0E | Ordinal: 3087
        void start(void);

    // RVA: 0xC5E | Ordinal: 3167
        void visit(class AI::TaskStateVisitor *, unsigned int);

    // RVA: 0xC5F | Ordinal: 3168
        void visit(class AI::TaskStateConstVisitor *, unsigned int) const;

    // RVA: 0x26F | Ordinal: 624
        void _FlexyTaskState(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_FLEXYTASKSTATE_HPP
