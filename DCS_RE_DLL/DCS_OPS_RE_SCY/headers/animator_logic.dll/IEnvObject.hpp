#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator_logic.dll
// Class: IEnvObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AnimatorLogic {

class IEnvObject
{
public:

    // RVA: 0x13 | Ordinal: 20
        void IEnvObject(class AnimatorLogic::IEnvObject const &);

    // RVA: 0x14 | Ordinal: 21
        void IEnvObject(void);

    // RVA: 0x85 | Ordinal: 134
        void debug_draw(void);

    // RVA: 0x87 | Ordinal: 136
        void destroy(void);

    // RVA: 0x94 | Ordinal: 149
        void get_alive(void);

    // RVA: 0x9B | Ordinal: 156
        void get_autonomous(void);

    // RVA: 0xA4 | Ordinal: 165
        void get_collision_avoidance_info(void);

    // RVA: 0xA7 | Ordinal: 168
        void get_contour(void);

    // RVA: 0xAA | Ordinal: 171
        void get_current_goal(void);

    // RVA: 0xB5 | Ordinal: 182
        void get_final_goal(void);

    // RVA: 0xB9 | Ordinal: 186
        void get_ignored_agent(void);

    // RVA: 0xBD | Ordinal: 190
        void get_look_direction(void);

    // RVA: 0xC2 | Ordinal: 195
        void get_net_phantom(void);

    // RVA: 0xC6 | Ordinal: 199
        void get_obj_id(void);

    // RVA: 0xCD | Ordinal: 206
        void get_position(void);

    // RVA: 0xCF | Ordinal: 208
        void get_position_matrix(void);

    // RVA: 0xD1 | Ordinal: 210
        void get_pref_velocity(void);

    // RVA: 0xD2 | Ordinal: 211
        void get_present_in_query(void);

    // RVA: 0xD4 | Ordinal: 213
        void get_radius(void);

    // RVA: 0xD7 | Ordinal: 216
        void get_registered(void);

    // RVA: 0xDC | Ordinal: 221
        void get_shape_type(void);

    // RVA: 0xE0 | Ordinal: 225
        void get_stationary(void);

    // RVA: 0xE8 | Ordinal: 233
        void get_velocity(void);

    // RVA: 0xED | Ordinal: 238
        void get_world_shape(class ed::vector<class osg::Vec2f, class ed::allocator<class osg::Vec2f>> &, float, bool);

    // RVA: 0xF4 | Ordinal: 245
        void has_goal(void);

    // RVA: 0xF6 | Ordinal: 247
        void has_shape(void);

    // RVA: 0x13B | Ordinal: 316
        void set_collision_avoidance_info(struct AnimatorLogic::CollisionAvoidanceInfo);

    // RVA: 0x141 | Ordinal: 322
        void set_ignored_agent(class AnimatorLogic::IEnvObject *);

    // RVA: 0x150 | Ordinal: 337
        void set_present_in_query(bool);

    // RVA: 0x153 | Ordinal: 340
        void set_shape(class ed::vector<class osg::Vec2f, class ed::allocator<class osg::Vec2f>> const &, class ed::basic_string<char> const &);

    // RVA: 0x157 | Ordinal: 344
        void set_stationary(bool);

    // RVA: 0x178 | Ordinal: 377
        void update_shape(void);

    // RVA: 0x2B | Ordinal: 44
        void _IEnvObject(void);
};

} // namespace AnimatorLogic

// DCS_OPS_RE_ANIMATOR_LOGIC.DLL_IENVOBJECT_HPP
