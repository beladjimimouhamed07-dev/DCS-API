#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: InstanceData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class InstanceData
{
public:

    // RVA: 0x22 | Ordinal: 35
        void InstanceData(void);

    // RVA: 0xC0 | Ordinal: 193
        void clear(class Animator::CharacterModelCookie *, bool);

    // RVA: 0xE2 | Ordinal: 227
        void erase(int, class Animator::CharacterModelCookie *, bool);

    // RVA: 0x105 | Ordinal: 262
        void get_arg(int) const;

    // RVA: 0x113 | Ordinal: 276
        void get_compute_type(void);

    // RVA: 0x131 | Ordinal: 306
        void get_id(void);

    // RVA: 0x18F | Ordinal: 400
        void get_top(void);

    // RVA: 0x1C0 | Ordinal: 449
        void process_stack(class Animator::CharacterModelCookie *);

    // RVA: 0x1C2 | Ordinal: 451
        void push(int, class Animator::CharacterModelCookie *, bool);

    // RVA: 0x1EE | Ordinal: 495
        void set_arg(int, float);

    // RVA: 0x1F7 | Ordinal: 504
        void set_compute_type(enum Animator::InstanceData::ANIM_COMPUTE_TYPE);

    // RVA: 0x21C | Ordinal: 541
        void size(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_INSTANCEDATA_HPP
