#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: MultiTaskState
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class MultiTaskState
{
public:

    // RVA: 0x123 | Ordinal: 292
        void MultiTaskState(class AI::MultiTaskState const &);

    // RVA: 0x124 | Ordinal: 293
        void MultiTaskState(void);

    // RVA: 0x779 | Ordinal: 1914
        void doPause(void);

    // RVA: 0x77C | Ordinal: 1917
        void doResume(void);

    // RVA: 0x7AE | Ordinal: 1967
        void finish(void);

    // RVA: 0x7BD | Ordinal: 1982
        void generateEvent(enum AI::Event, class Parameter const *);

    // RVA: 0x800 | Ordinal: 2049
        void getCategory(void) const;

    // RVA: 0x903 | Ordinal: 2308
        void getTaskStates(void) const;

    // RVA: 0xA96 | Ordinal: 2711
        void onEvent(enum AI::Event, class Parameter const *);

    // RVA: 0xAA8 | Ordinal: 2729
        void onTaskFinish_(class AI::TaskState *);

    // RVA: 0xAA9 | Ordinal: 2730
        void onTaskFinish_(unsigned __int64);

    // RVA: 0xAAA | Ordinal: 2731
        void onTaskStart2_(class AI::TaskState *, unsigned __int64);

    // RVA: 0xAAB | Ordinal: 2732
        void onTaskStart_(class AI::TaskState *, unsigned __int64);

    // RVA: 0xC61 | Ordinal: 3170
        void visit(class AI::TaskStateVisitor *, unsigned int);

    // RVA: 0xC62 | Ordinal: 3171
        void visit(class AI::TaskStateConstVisitor *, unsigned int) const;

    // RVA: 0x28E | Ordinal: 655
        void _MultiTaskState(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_MULTITASKSTATE_HPP
