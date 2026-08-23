#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: AI_Gunner
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gunner_AI {

class AI_Gunner
{
public:

    // RVA: 0x2E | Ordinal: 47
        void AI_Gunner(class gunner_AI::AI_Gunner const &);

    // RVA: 0x2F | Ordinal: 48
        void AI_Gunner(class IwoLA *);

    // RVA: 0x865 | Ordinal: 2150
        void SetAzLimits(float, float);

    // RVA: 0x8B0 | Ordinal: 2225
        void SetElLimits(float, float);

    // RVA: 0x962 | Ordinal: 2403
        void assign_target(class ed::Ptr<struct gunner_AI::TargetState, struct ed::DefaultDeleter> &, double);

    // RVA: 0xAD6 | Ordinal: 2775
        void clear_target(void);

    // RVA: 0xB55 | Ordinal: 2902
        void dead(void) const;

    // RVA: 0xB70 | Ordinal: 2929
        void disabled(void) const;

    // RVA: 0xE79 | Ordinal: 3706
        void get_ROE(void) const;

    // RVA: 0xE91 | Ordinal: 3730
        void get_aiming_T(void) const;

    // RVA: 0xE9D | Ordinal: 3742
        void get_ammo_rest(void) const;

    // RVA: 0xEC4 | Ordinal: 3781
        void get_burst(void) const;

    // RVA: 0xEE2 | Ordinal: 3811
        void get_command(void) const;

    // RVA: 0xF27 | Ordinal: 3880
        void get_eff_dist(void) const;

    // RVA: 0xF75 | Ordinal: 3958
        void get_host(void) const;

    // RVA: 0x1096 | Ordinal: 4247
        void get_sight(void) const;

    // RVA: 0x109B | Ordinal: 4252
        void get_skill(void) const;

    // RVA: 0x10B6 | Ordinal: 4279
        void get_target(void) const;

    // RVA: 0x1335 | Ordinal: 4918
        void l_load_state_matrix(class Lua::Config &);

    // RVA: 0x1336 | Ordinal: 4919
        void l_load_states(class Lua::Config &);

    // RVA: 0x1349 | Ordinal: 4938
        void l_read(class Lua::Config &);

    // RVA: 0x13B8 | Ordinal: 5049
        void loadout_present(void) const;

    // RVA: 0x13F3 | Ordinal: 5108
        void make_dead(void);

    // RVA: 0x15DC | Ordinal: 5597
        void reload(bool);

    // RVA: 0x162E | Ordinal: 5679
        void reset_custom_handler(void);

    // RVA: 0x180C | Ordinal: 6157
        void set_ROE(enum gunner_AI::AI_ROE);

    // RVA: 0x1835 | Ordinal: 6198
        void set_burst(enum gunner_AI::AI_Burst);

    // RVA: 0x1845 | Ordinal: 6214
        void set_command(class ed::basic_string<char> const &);

    // RVA: 0x184C | Ordinal: 6221
        void set_custom_handler(class ed::Ptr<class gunner_AI::IGunHandler, struct ed::DefaultDeleter>);

    // RVA: 0x18CC | Ordinal: 6349
        void set_manager_ptr(class gunner_AI::AIGunnersManager *);

    // RVA: 0x18F4 | Ordinal: 6389
        void set_not_present(void);

    // RVA: 0x192D | Ordinal: 6446
        void set_skill(float);

    // RVA: 0x1A17 | Ordinal: 6680
        void swap_sights(class gunner_AI::ISightAI *);

    // RVA: 0x1A2A | Ordinal: 6699
        void target_in_fov(class Math::Polar const &) const;

    // RVA: 0x1A2B | Ordinal: 6700
        void target_in_fov(class MovingObject *) const;

    // RVA: 0x1A2C | Ordinal: 6701
        void target_polar_pos(class MovingObject *) const;

    // RVA: 0x1A5F | Ordinal: 6752
        void try_assign_target(class ed::Ptr<struct gunner_AI::TargetState, struct ed::DefaultDeleter> &, class ed::Ptr<struct gunner_AI::TargetState, struct ed::DefaultDeleter> &, bool);

    // RVA: 0x1A84 | Ordinal: 6789
        void update(double);

    // RVA: 0x1B8A | Ordinal: 7051
        void update_time(double);

    // RVA: 0x29C | Ordinal: 669
        void _AI_Gunner(void);
};

} // namespace gunner_AI

// DCS_OPS_RE_COCKPITBASE.DLL_AI_GUNNER_HPP
