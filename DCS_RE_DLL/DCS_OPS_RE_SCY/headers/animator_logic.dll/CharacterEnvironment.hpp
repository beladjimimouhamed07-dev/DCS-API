#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator_logic.dll
// Class: CharacterEnvironment
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AnimatorLogic {

class CharacterEnvironment
{
public:

    // RVA: 0x3 | Ordinal: 4
        void CharacterEnvironment(class wPosition3<double> const &);

    // RVA: 0x4 | Ordinal: 5
        void CharacterEnvironment(class MovingObject *);

    // RVA: 0x6E | Ordinal: 111
        void _draw_debug_objects(void);

    // RVA: 0x70 | Ordinal: 113
        void _load_obstacles(class Lua::Config &);

    // RVA: 0x74 | Ordinal: 117
        void _remove_objects(class std::function<bool __cdecl(class AnimatorLogic::IEnvObject *)>);

    // RVA: 0x79 | Ordinal: 122
        void add_static_obstacle(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &);

    // RVA: 0x7D | Ordinal: 126
        void clear(void);

    // RVA: 0x7F | Ordinal: 128
        void compute_orca_line_simple(class AnimatorLogic::IEnvObject *, class AnimatorLogic::IEnvObject *, float);

    // RVA: 0x80 | Ordinal: 129
        void compute_orca_lines_from_shape(class AnimatorLogic::IEnvObject *, class AnimatorLogic::IEnvObject *, float, class ed::vector<struct AnimatorLogic::Line, class ed::allocator<struct AnimatorLogic::Line>> &);

    // RVA: 0x81 | Ordinal: 130
        void compute_orca_lines_from_shape_direction(enum AnimatorLogic::AvoidDirection, class AnimatorLogic::IEnvObject *, class AnimatorLogic::IEnvObject *, float, class ed::vector<struct AnimatorLogic::Line, class ed::allocator<struct AnimatorLogic::Line>> const &);

    // RVA: 0x82 | Ordinal: 131
        void compute_safe_velocities(float);

    // RVA: 0x83 | Ordinal: 132
        void debug_draw(class wPosition3<double> const &);

    // RVA: 0x89 | Ordinal: 138
        void doSegmentAndCircleIntersect(class osg::Vec2f, float, class osg::Vec2f, class osg::Vec2f);

    // RVA: 0x8A | Ordinal: 139
        void doSegmentsIntersect(class osg::Vec2f, class osg::Vec2f, class osg::Vec2f, class osg::Vec2f);

    // RVA: 0x8B | Ordinal: 140
        void draw_agent(class AnimatorLogic::IEnvObject *);

    // RVA: 0x8C | Ordinal: 141
        void draw_movement_pill(class AnimatorLogic::IEnvObject *, class AnimatorLogic::IEnvObject *, class osg::Vec2f) const;

    // RVA: 0x9C | Ordinal: 157
        void get_autonomous_object(class Registered *);

    // RVA: 0x9D | Ordinal: 158
        void get_can_avoid_collisions(void) const;

    // RVA: 0x9E | Ordinal: 159
        void get_can_path_avoid_collisions(void) const;

    // RVA: 0xA5 | Ordinal: 166
        void get_collision_orca_line(struct AnimatorLogic::CharacterEnvironment::ObstacleCircle const &, struct AnimatorLogic::CharacterEnvironment::ObstacleCircle const &, class osg::Vec2f const &, float, float);

    // RVA: 0xB6 | Ordinal: 183
        void get_from_inside_orca_line(struct AnimatorLogic::CharacterEnvironment::ObstacleCircle const &, struct AnimatorLogic::CharacterEnvironment::ObstacleCircle const &, class osg::Vec2f const &, float, float);

    // RVA: 0xBC | Ordinal: 189
        void get_local_environment_box(void) const;

    // RVA: 0xC7 | Ordinal: 200
        void get_obstacle_sector(struct AnimatorLogic::CharacterEnvironment::ObstacleCircle const &, struct AnimatorLogic::CharacterEnvironment::ObstacleCircle const &, class osg::Vec2f const &, float);

    // RVA: 0xCC | Ordinal: 205
        void get_position(void) const;

    // RVA: 0xD8 | Ordinal: 217
        void get_registered_objects(void);

    // RVA: 0xEA | Ordinal: 235
        void get_wall_orca_line(struct AnimatorLogic::CharacterEnvironment::ObstacleLegsResult, struct AnimatorLogic::CharacterEnvironment::ObstacleCircle, struct AnimatorLogic::CharacterEnvironment::ObstacleCircle, enum AnimatorLogic::AvoidDirection, class osg::Vec2f const &, class osg::Vec2f const &, float, float, float);

    // RVA: 0xEB | Ordinal: 236
        void get_world_environment_box(void) const;

    // RVA: 0xEF | Ordinal: 240
        void gui(char const *);

    // RVA: 0x102 | Ordinal: 259
        void is_wall_already_covered_by_orca(struct AnimatorLogic::CharacterEnvironment::ObstacleCircle const &, struct AnimatorLogic::CharacterEnvironment::ObstacleCircle const &, class ed::vector<struct AnimatorLogic::Line, class ed::allocator<struct AnimatorLogic::Line>> const &, class osg::Vec2f const &, float, float);

    // RVA: 0x103 | Ordinal: 260
        void load(class Lua::Config &);

    // RVA: 0x108 | Ordinal: 265
        void load_debug_config(void);

    // RVA: 0x113 | Ordinal: 276
        void on_object_destroy(unsigned int);

    // RVA: 0x120 | Ordinal: 289
        void plot_orca_objects(void);

    // RVA: 0x121 | Ordinal: 290
        void plot_pathfinding(void);

    // RVA: 0x123 | Ordinal: 292
        void process_scene_objects(void);

    // RVA: 0x124 | Ordinal: 293
        void process_static_rvo_obstacles(void);

    // RVA: 0x125 | Ordinal: 294
        void query_scene_objects(void);

    // RVA: 0x128 | Ordinal: 297
        void reg_moving_object(class MovingObject *);

    // RVA: 0x129 | Ordinal: 298
        void reg_object(class ISceneObject &);

    // RVA: 0x12B | Ordinal: 300
        void remove_dead_objects(void);

    // RVA: 0x12C | Ordinal: 301
        void remove_object(class AnimatorLogic::IEnvObject *);

    // RVA: 0x12D | Ordinal: 302
        void remove_objects_outside(void);

    // RVA: 0x13A | Ordinal: 315
        void set_avoid_collisions(bool);

    // RVA: 0x145 | Ordinal: 326
        void set_local_environment_box(class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0x14B | Ordinal: 332
        void set_owner(class MovingObject *);

    // RVA: 0x14D | Ordinal: 334
        void set_path_avoid_collisions(bool);

    // RVA: 0x14F | Ordinal: 336
        void set_position(class wPosition3<double> const &);

    // RVA: 0x16A | Ordinal: 363
        void update(void);

    // RVA: 0x16E | Ordinal: 367
        void update_contours(void) const;

    // RVA: 0x171 | Ordinal: 370
        void update_nav_grid(void);

    // RVA: 0x172 | Ordinal: 371
        void update_obstacles(void);

    // RVA: 0x179 | Ordinal: 378
        void willAgentIntersectObstacle(class AnimatorLogic::IEnvObject *, class AnimatorLogic::IEnvObject *, class osg::Vec2f);

    // RVA: 0x24 | Ordinal: 37
        void _CharacterEnvironment(void);
};

} // namespace AnimatorLogic

// DCS_OPS_RE_ANIMATOR_LOGIC.DLL_CHARACTERENVIRONMENT_HPP
