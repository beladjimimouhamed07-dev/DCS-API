#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ControllerMission
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ControllerMission
{
public:

    // RVA: 0x72 | Ordinal: 115
        void ControllerMission(class AI::Mission *);

    // RVA: 0x73 | Ordinal: 116
        void ControllerMission(class AI::ControllerMission &&);

    // RVA: 0x74 | Ordinal: 117
        void ControllerMission(class AI::ControllerMission const &);

    // RVA: 0x64D | Ordinal: 1614
        void checkFinish_(void) const;

    // RVA: 0x787 | Ordinal: 1928
        void enableRouteFollowing_(bool);

    // RVA: 0x7A9 | Ordinal: 1962
        void findTask(int);

    // RVA: 0x7AB | Ordinal: 1964
        void finish(void);

    // RVA: 0x7B3 | Ordinal: 1972
        void finishTask_(int);

    // RVA: 0x834 | Ordinal: 2101
        void getFromIndex(void) const;

    // RVA: 0x836 | Ordinal: 2103
        void getGoToIndex(void) const;

    // RVA: 0x900 | Ordinal: 2305
        void getTask(void) const;

    // RVA: 0x9A2 | Ordinal: 2467
        void isBackGround(void) const;

    // RVA: 0xA90 | Ordinal: 2705
        void onChangeWaypoint_(int, int);

    // RVA: 0xA99 | Ordinal: 2714
        void onFinishTask_(int);

    // RVA: 0xA9B | Ordinal: 2716
        void onMainTaskFinish_(void);

    // RVA: 0xA9C | Ordinal: 2717
        void onMainTaskStart_(void);

    // RVA: 0xB7E | Ordinal: 2943
        void resetRoute_(void);

    // RVA: 0xB83 | Ordinal: 2948
        void resumeRoute(void);

    // RVA: 0xBC8 | Ordinal: 3017
        void setRoute_(void);

    // RVA: 0xC0C | Ordinal: 3085
        void start(void);

    // RVA: 0xC16 | Ordinal: 3095
        void startTask_(int);

    // RVA: 0xC23 | Ordinal: 3108
        void stopRoute(void);

    // RVA: 0xC26 | Ordinal: 3111
        void switchWaypoint(unsigned int, unsigned int);

    // RVA: 0xC27 | Ordinal: 3112
        void switchWaypoint_(int, int, bool);

    // RVA: 0xC3F | Ordinal: 3136
        void update(void);

    // RVA: 0x250 | Ordinal: 593
        void _ControllerMission(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_CONTROLLERMISSION_HPP
