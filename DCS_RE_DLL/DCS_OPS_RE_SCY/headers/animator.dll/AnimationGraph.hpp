#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: AnimationGraph
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class AnimationGraph
{
public:

    // RVA: 0xA | Ordinal: 11
        void AnimationGraph(void);

    // RVA: 0x10F | Ordinal: 272
        void get_bs_id(class ed::basic_string<char> const &);

    // RVA: 0x11A | Ordinal: 283
        void get_cycle(class ed::basic_string<char> const &);

    // RVA: 0x12B | Ordinal: 300
        void get_graph_path(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x18D | Ordinal: 398
        void get_state_name(int);

    // RVA: 0x1A1 | Ordinal: 418
        void init(class Lua::Config &, class Animator::AnimationManager *);

    // RVA: 0x221 | Ordinal: 546
        void state_description(void) const;

    // RVA: 0x2A | Ordinal: 43
        void _AnimationGraph(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_ANIMATIONGRAPH_HPP
