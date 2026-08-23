#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: CharacterModelBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class CharacterModelBase
{
public:

    // RVA: 0x12 | Ordinal: 19
        void CharacterModelBase(class Animator::CharacterModelBase const &);

    // RVA: 0x13 | Ordinal: 20
        void CharacterModelBase(char const *, char const *);

    // RVA: 0x61 | Ordinal: 98
        void GetCenter(void);

    // RVA: 0x62 | Ordinal: 99
        void GetConnector(class ed::basic_string<char> const &);

    // RVA: 0x63 | Ordinal: 100
        void GetConnector(int);

    // RVA: 0x64 | Ordinal: 101
        void GetConnector(char const *);

    // RVA: 0x67 | Ordinal: 104
        void GetRadius(void);

    // RVA: 0x69 | Ordinal: 106
        void GetTexturesNames(class ed::unordered_set<class ed::basic_string<char>, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<class ed::basic_string<char>>> &) const;

    // RVA: 0x6A | Ordinal: 107
        void GetTexturesTexCoords(class std::unordered_map<class ed::basic_string<char>, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>>, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>>>>> &) const;

    // RVA: 0x86 | Ordinal: 135
        void _get_default_livery(void);

    // RVA: 0x89 | Ordinal: 138
        void _get_lod(float);

    // RVA: 0x99 | Ordinal: 154
        void _register_livery(unsigned int, class osg::Vec3i &);

    // RVA: 0xA1 | Ordinal: 162
        void _set_default_livery(struct Animator::CharacterModelBase::LiveryDesc const &);

    // RVA: 0xB5 | Ordinal: 182
        void applyMults(class std::unordered_map<class ed::basic_string<char>, struct MultCoefs, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, struct MultCoefs>>> const &);

    // RVA: 0xBB | Ordinal: 188
        void calculate_bounds(struct aiNode *, class osg::BoundingBoxImpl<class osg::Vec3f> &);

    // RVA: 0xC6 | Ordinal: 199
        void collect_matrix_chain(struct aiScene const *, unsigned int);

    // RVA: 0xC8 | Ordinal: 201
        void create_connectors(class Lua::Config &);

    // RVA: 0xCB | Ordinal: 204
        void create_meshes(struct aiScene const *, class ed::vector<class std::shared_ptr<class Animator::AnimatorMeshBase>, class ed::allocator<class std::shared_ptr<class Animator::AnimatorMeshBase>>> &);

    // RVA: 0xCD | Ordinal: 206
        void create_shader(void);

    // RVA: 0xD9 | Ordinal: 218
        void do_load_basic(void);

    // RVA: 0xDA | Ordinal: 219
        void do_load_main(void);

    // RVA: 0xEA | Ordinal: 235
        void getBoundingBox(void) const;

    // RVA: 0xEB | Ordinal: 236
        void getIModelInterface(void);

    // RVA: 0xEC | Ordinal: 237
        void getLoadState(void) const;

    // RVA: 0xED | Ordinal: 238
        void getMults(void);

    // RVA: 0xEE | Ordinal: 239
        void getMultsToRegister(void *);

    // RVA: 0xEF | Ordinal: 240
        void getNumArguments(void) const;

    // RVA: 0xF0 | Ordinal: 241
        void getNumConnectors(void) const;

    // RVA: 0xF1 | Ordinal: 242
        void getNumLights(void) const;

    // RVA: 0x100 | Ordinal: 257
        void get_animation_manager(void);

    // RVA: 0x114 | Ordinal: 277
        void get_config_state(void);

    // RVA: 0x11B | Ordinal: 284
        void get_decal_extents(void);

    // RVA: 0x11C | Ordinal: 285
        void get_default_animation_id(void);

    // RVA: 0x139 | Ordinal: 314
        void get_livery_index(unsigned int);

    // RVA: 0x154 | Ordinal: 341
        void get_num_bones(void) const;

    // RVA: 0x157 | Ordinal: 344
        void get_num_liveries(void);

    // RVA: 0x16E | Ordinal: 367
        void get_resources_path(void);

    // RVA: 0x17E | Ordinal: 383
        void get_scene(void);

    // RVA: 0x182 | Ordinal: 387
        void get_skeleton_type(void);

    // RVA: 0x192 | Ordinal: 403
        void get_transition_duration(char const *);

    // RVA: 0x19C | Ordinal: 413
        void gui(void);

    // RVA: 0x1AA | Ordinal: 427
        void load_async(void);

    // RVA: 0x1AB | Ordinal: 428
        void load_basic(void);

    // RVA: 0x1AD | Ordinal: 430
        void load_main(void);

    // RVA: 0x1CA | Ordinal: 459
        void reload(void);

    // RVA: 0x1CB | Ordinal: 460
        void reload_config(void);

    // RVA: 0x1D8 | Ordinal: 473
        void resetMults(void);

    // RVA: 0x214 | Ordinal: 533
        void set_render_data(unsigned int, struct render::CollectionInfo const *const);

    // RVA: 0x247 | Ordinal: 584
        void wait_for_basic_load(void);

    // RVA: 0x248 | Ordinal: 585
        void wait_for_main_load(void);

    // RVA: 0x2F | Ordinal: 48
        void _CharacterModelBase(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_CHARACTERMODELBASE_HPP
