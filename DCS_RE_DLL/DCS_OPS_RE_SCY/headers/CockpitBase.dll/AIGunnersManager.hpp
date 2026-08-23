#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: AIGunnersManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gunner_AI {

class AIGunnersManager
{
public:

    // RVA: 0x2C | Ordinal: 45
        void AIGunnersManager(class gunner_AI::AIGunnersManager const &);

    // RVA: 0x2D | Ordinal: 46
        void AIGunnersManager(class MovingObject *, class IWing *);

    // RVA: 0x776 | Ordinal: 1911
        void Class(void) const;

    // RVA: 0x949 | Ordinal: 2378
        void append_gunner(unsigned char, class gunner_AI::AI_Gunner *);

    // RVA: 0x94A | Ordinal: 2379
        void append_visible_target(class ed::Ptr<struct gunner_AI::TargetState, struct ed::DefaultDeleter>);

    // RVA: 0x963 | Ordinal: 2404
        void assign_targets(void);

    // RVA: 0xE78 | Ordinal: 3705
        void get_ROE(unsigned char) const;

    // RVA: 0xE9C | Ordinal: 3741
        void get_ammo_rest(unsigned char) const;

    // RVA: 0xEC3 | Ordinal: 3780
        void get_burst(unsigned char) const;

    // RVA: 0xF62 | Ordinal: 3939
        void get_guner(unsigned char) const;

    // RVA: 0x1110 | Ordinal: 4369
        void gunner_disabled(unsigned char) const;

    // RVA: 0x12CB | Ordinal: 4812
        void is_target_valid(class MovingObject *) const;

    // RVA: 0x1348 | Ordinal: 4937
        void l_read(class Lua::Config &, class IwoLA *);

    // RVA: 0x143B | Ordinal: 5180
        void onDamage(enum wcCoalitionName, unsigned int, unsigned int, unsigned int, float);

    // RVA: 0x143C | Ordinal: 5181
        void onDestroy(class Registered *);

    // RVA: 0x1458 | Ordinal: 5209
        void onShoot(enum wcCoalitionName, unsigned int, class wsType const &, void *, unsigned int, unsigned int, class osg::Vec3f const &, double);

    // RVA: 0x147F | Ordinal: 5248
        void on_target_unassigned(class ed::Ptr<struct gunner_AI::TargetState, struct ed::DefaultDeleter>, class gunner_AI::AI_Gunner *);

    // RVA: 0x15DB | Ordinal: 5596
        void reload(unsigned char, bool);

    // RVA: 0x15E3 | Ordinal: 5604
        void remove_target(class ed::Ptr<struct gunner_AI::TargetState, struct ed::DefaultDeleter>);

    // RVA: 0x15E5 | Ordinal: 5606
        void remove_visible_target(class ed::Ptr<struct gunner_AI::TargetState, struct ed::DefaultDeleter>);

    // RVA: 0x1630 | Ordinal: 5681
        void reset_gunner_handler(unsigned char);

    // RVA: 0x1684 | Ordinal: 5765
        void send_command(unsigned char, class ed::basic_string<char> const &);

    // RVA: 0x180B | Ordinal: 6156
        void set_ROE(unsigned char, enum gunner_AI::AI_ROE);

    // RVA: 0x1834 | Ordinal: 6197
        void set_burst(unsigned char, enum gunner_AI::AI_Burst);

    // RVA: 0x18A7 | Ordinal: 6312
        void set_gunner_handler(unsigned char, class ed::Ptr<class gunner_AI::IGunHandler, struct ed::DefaultDeleter>);

    // RVA: 0x192C | Ordinal: 6445
        void set_skill(float);

    // RVA: 0x1A26 | Ordinal: 6695
        void target_activated(class ed::Ptr<struct gunner_AI::TargetState, struct ed::DefaultDeleter>);

    // RVA: 0x1A29 | Ordinal: 6698
        void target_check(void);

    // RVA: 0x1A73 | Ordinal: 6772
        void unassign_target(class ed::Ptr<struct gunner_AI::TargetState, struct ed::DefaultDeleter>);

    // RVA: 0x1A83 | Ordinal: 6788
        void update(double);

    // RVA: 0x29B | Ordinal: 668
        void _AIGunnersManager(void);
};

} // namespace gunner_AI

// DCS_OPS_RE_COCKPITBASE.DLL_AIGUNNERSMANAGER_HPP
