#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: CharacterModelStatic
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class CharacterModelStatic
{
public:

    // RVA: 0xE9 | Ordinal: 234
        void generate_timeline(class ed::basic_string<char> const &, float, float, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &, float &, bool);

    // RVA: 0x15A | Ordinal: 347
        void get_num_timelines(void);

    // RVA: 0x18E | Ordinal: 399
        void get_timeline_name(int);

    // RVA: 0x1AC | Ordinal: 429
        void load_config_values(class Lua::Config &);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_CHARACTERMODELSTATIC_HPP
