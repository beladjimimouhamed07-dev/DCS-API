#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: GPUAttachmentModelReflection
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class GPUAttachmentModelReflection
{
public:

    // RVA: 0x1C | Ordinal: 29
        void GPUAttachmentModelReflection(class Animator::GPUAttachmentModelReflection const &);

    // RVA: 0x1D | Ordinal: 30
        void GPUAttachmentModelReflection(class Animator::GPUAttachmentModel *);

    // RVA: 0x1E | Ordinal: 31
        void GPUAttachmentModelReflection(void);

    // RVA: 0xB1 | Ordinal: 178
        void add_instance(class Animator::GPUAttachmentCookie *);

    // RVA: 0xD4 | Ordinal: 213
        void deserialize_state(class Mail::Reader &);

    // RVA: 0xD5 | Ordinal: 214
        void deserialize_state(class Mail::Message const &);

    // RVA: 0x18C | Ordinal: 397
        void get_state_changed(void);

    // RVA: 0x1B6 | Ordinal: 439
        void on_add_instance(class Animator::GPUAttachmentCookie *);

    // RVA: 0x1CD | Ordinal: 462
        void remove_instance(class Animator::GPUAttachmentCookie *);

    // RVA: 0x1E7 | Ordinal: 488
        void serialize_state(void);

    // RVA: 0x1E8 | Ordinal: 489
        void serialize_state(class Mail::Writer &);

    // RVA: 0x1FE | Ordinal: 511
        void set_dirty(void);

    // RVA: 0x23C | Ordinal: 573
        void update_instance(class Animator::GPUAttachmentCookie *);

    // RVA: 0x34 | Ordinal: 53
        void _GPUAttachmentModelReflection(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_GPUATTACHMENTMODELREFLECTION_HPP
