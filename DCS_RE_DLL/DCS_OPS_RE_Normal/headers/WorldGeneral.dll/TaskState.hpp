#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: TaskState
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class TaskState
{
public:

    // RVA: 0x1AE | Ordinal: 431
        void TaskState(class AI::TaskState const &);

    // RVA: 0x1AF | Ordinal: 432
        void TaskState(void);

    // RVA: 0x77A | Ordinal: 1915
        void doPause(void);

    // RVA: 0x77D | Ordinal: 1918
        void doResume(void);

    // RVA: 0x7AF | Ordinal: 1968
        void finish(void);

    // RVA: 0x80A | Ordinal: 2059
        void getCategory(void) const;

    // RVA: 0x8F8 | Ordinal: 2297
        void getState(void) const;

    // RVA: 0x9B1 | Ordinal: 2482
        void isFinished(void) const;

    // RVA: 0xA97 | Ordinal: 2712
        void onEvent(enum AI::Event, class Parameter const *);

    // RVA: 0xB0C | Ordinal: 2829
        void pause(void);

    // RVA: 0xB2A | Ordinal: 2859
        void processVisitors(void);

    // RVA: 0xB82 | Ordinal: 2947
        void resume(void);

    // RVA: 0xC10 | Ordinal: 3089
        void start(void);

    // RVA: 0xC64 | Ordinal: 3173
        void visit(class AI::TaskStateVisitor *, unsigned int);

    // RVA: 0xC65 | Ordinal: 3174
        void visit(class AI::TaskStateConstVisitor *, unsigned int) const;

    // RVA: 0xC66 | Ordinal: 3175
        void visitAsync(class AI::TaskStateVisitor *);

    // RVA: 0x2BC | Ordinal: 701
        void _TaskState(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_TASKSTATE_HPP
