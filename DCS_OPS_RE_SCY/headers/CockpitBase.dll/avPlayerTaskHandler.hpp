#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avPlayerTaskHandler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avPlayerTaskHandler
{
public:

    // RVA: 0x176 | Ordinal: 375
        void avPlayerTaskHandler(class cockpit::avPlayerTaskHandler const &);

    // RVA: 0x177 | Ordinal: 376
        void avPlayerTaskHandler(void);

    // RVA: 0x155B | Ordinal: 5468
        void raise_event(char const *, void *);

    // RVA: 0x1629 | Ordinal: 5674
        void resetTask(class AI::Task *);

    // RVA: 0x17CC | Ordinal: 6093
        void setTask(class AI::AttackGroup *);

    // RVA: 0x17CD | Ordinal: 6094
        void setTask(class AI::AttackMapObject *);

    // RVA: 0x17CE | Ordinal: 6095
        void setTask(class AI::AttackUnit *);

    // RVA: 0x17CF | Ordinal: 6096
        void setTask(class AI::Bombing *);

    // RVA: 0x17D0 | Ordinal: 6097
        void setTask(class AI::BombingRunway *);

    // RVA: 0x17D1 | Ordinal: 6098
        void setTask(class AI::Escort *);

    // RVA: 0x17D2 | Ordinal: 6099
        void setTask(class AI::Follow *);

    // RVA: 0x17D3 | Ordinal: 6100
        void setTask(class AI::Land *);

    // RVA: 0x17D4 | Ordinal: 6101
        void setTask(class AI::Orbit *);

    // RVA: 0x17D5 | Ordinal: 6102
        void setTask(class AI::Refueling *);

    // RVA: 0x17D6 | Ordinal: 6103
        void setTask(class AI::Task *);

    // RVA: 0x333 | Ordinal: 820
        void _avPlayerTaskHandler(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVPLAYERTASKHANDLER_HPP
