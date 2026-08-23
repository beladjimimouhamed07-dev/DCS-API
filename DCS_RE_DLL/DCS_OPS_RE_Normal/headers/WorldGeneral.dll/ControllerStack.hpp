#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ControllerStack
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ControllerStack
{
public:

    // RVA: 0x75 | Ordinal: 118
        void ControllerStack(class AI::ControllerStack &&);

    // RVA: 0x76 | Ordinal: 119
        void ControllerStack(class AI::ControllerStack const &);

    // RVA: 0x77 | Ordinal: 120
        void ControllerStack(class AI::Stack *, class AI::Controller *);

    // RVA: 0x607 | Ordinal: 1544
        void addBackGroundTask(class AI::BackGroundTask *);

    // RVA: 0x608 | Ordinal: 1545
        void addBackGroundTask_(class AI::BackGroundTask *);

    // RVA: 0x695 | Ordinal: 1686
        void clone(void);

    // RVA: 0x702 | Ordinal: 1795
        void create(class AI::Task *, class AI::Controller *);

    // RVA: 0x7AC | Ordinal: 1965
        void finish(void);

    // RVA: 0x81D | Ordinal: 2078
        void getController(void) const;

    // RVA: 0x901 | Ordinal: 2306
        void getTask(void) const;

    // RVA: 0x9A3 | Ordinal: 2468
        void isBackGround(void) const;

    // RVA: 0xA6A | Ordinal: 2667
        void moving(bool);

    // RVA: 0xA85 | Ordinal: 2694
        void next_(void);

    // RVA: 0xB1D | Ordinal: 2846
        void popTask(void);

    // RVA: 0xB1E | Ordinal: 2847
        void pop_(void);

    // RVA: 0xB2E | Ordinal: 2863
        void pushBack_(class AI::Task *);

    // RVA: 0xB30 | Ordinal: 2865
        void pushFront_(class AI::Task *);

    // RVA: 0xB33 | Ordinal: 2868
        void pushTaskBack(class AI::Task *);

    // RVA: 0xB34 | Ordinal: 2869
        void pushTaskFront(class AI::Task *);

    // RVA: 0xB52 | Ordinal: 2899
        void reg(void);

    // RVA: 0xC0D | Ordinal: 3086
        void start(void);

    // RVA: 0xC40 | Ordinal: 3137
        void update(void);

    // RVA: 0x251 | Ordinal: 594
        void _ControllerStack(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_CONTROLLERSTACK_HPP
