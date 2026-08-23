#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wPlayerTaskIndicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class wPlayerTaskIndicator
{
public:

    // RVA: 0xB80 | Ordinal: 2945
        void resetTask(class AI::Task *);

    // RVA: 0xBD5 | Ordinal: 3030
        void setTask(class AI::AttackGroup *);

    // RVA: 0xBD6 | Ordinal: 3031
        void setTask(class AI::AttackMapObject *);

    // RVA: 0xBD7 | Ordinal: 3032
        void setTask(class AI::AttackUnit *);

    // RVA: 0xBD8 | Ordinal: 3033
        void setTask(class AI::Bombing *);

    // RVA: 0xBD9 | Ordinal: 3034
        void setTask(class AI::BombingRunway *);

    // RVA: 0xBDA | Ordinal: 3035
        void setTask(class AI::Escort *);

    // RVA: 0xBDB | Ordinal: 3036
        void setTask(class AI::Follow *);

    // RVA: 0xBDC | Ordinal: 3037
        void setTask(class AI::Land *);

    // RVA: 0xBDD | Ordinal: 3038
        void setTask(class AI::Orbit *);

    // RVA: 0xBDE | Ordinal: 3039
        void setTask(class AI::Refueling *);

    // RVA: 0xBDF | Ordinal: 3040
        void setTask(class AI::Task *);

    // RVA: 0x1FD | Ordinal: 510
        void wPlayerTaskIndicator(class AI::wPlayerTaskIndicator const &);

    // RVA: 0x1FE | Ordinal: 511
        void wPlayerTaskIndicator(void);

    // RVA: 0x2DA | Ordinal: 731
        void _wPlayerTaskIndicator(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_WPLAYERTASKINDICATOR_HPP
