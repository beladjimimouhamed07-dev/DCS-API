#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: GPUAttachmentCookie
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class GPUAttachmentCookie
{
public:

    // RVA: 0x18 | Ordinal: 25
        void GPUAttachmentCookie(class Animator::GPUAttachmentCookie const &);

    // RVA: 0x19 | Ordinal: 26
        void GPUAttachmentCookie(class Animator::GPUAttachmentModel *);

    // RVA: 0xC4 | Ordinal: 197
        void clone(void) const;

    // RVA: 0xD0 | Ordinal: 209
        void deserialize_state(class Mail::Reader &);

    // RVA: 0xD1 | Ordinal: 210
        void deserialize_state(class Mail::Message const &);

    // RVA: 0xD7 | Ordinal: 216
        void destroy(void);

    // RVA: 0xF4 | Ordinal: 245
        void getType(void) const;

    // RVA: 0x123 | Ordinal: 292
        void get_dirty(void);

    // RVA: 0x130 | Ordinal: 305
        void get_id(void);

    // RVA: 0x13B | Ordinal: 316
        void get_model(void);

    // RVA: 0x13D | Ordinal: 318
        void get_model_reflection(void);

    // RVA: 0x16C | Ordinal: 365
        void get_reflection_model_changed(void);

    // RVA: 0x194 | Ordinal: 405
        void get_visible(void);

    // RVA: 0x1A3 | Ordinal: 420
        void init(int, int, class osg::Matrixf const &);

    // RVA: 0x1C6 | Ordinal: 455
        void reflection(void);

    // RVA: 0x1DD | Ordinal: 478
        void restore_model_state(class Mail::Message const &);

    // RVA: 0x1E3 | Ordinal: 484
        void serialize_model_state(void);

    // RVA: 0x1E5 | Ordinal: 486
        void serialize_state(class Mail::Writer &);

    // RVA: 0x1E6 | Ordinal: 487
        void serialize_state(void);

    // RVA: 0x1EA | Ordinal: 491
        void setLiveryHandle(unsigned int);

    // RVA: 0x1FD | Ordinal: 510
        void set_dirty(bool);

    // RVA: 0x207 | Ordinal: 520
        void set_livery_handle(unsigned int);

    // RVA: 0x21B | Ordinal: 540
        void set_visible(bool);

    // RVA: 0x238 | Ordinal: 569
        void update(void);

    // RVA: 0x32 | Ordinal: 51
        void _GPUAttachmentCookie(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_GPUATTACHMENTCOOKIE_HPP
