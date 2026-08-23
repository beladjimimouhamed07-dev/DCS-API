#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: GPUAttachmentRenderable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class GPUAttachmentRenderable
{
public:

    // RVA: 0x1F | Ordinal: 32
        void GPUAttachmentRenderable(struct Animator::GPUAttachmentRenderable &&);

    // RVA: 0x20 | Ordinal: 33
        void GPUAttachmentRenderable(struct Animator::GPUAttachmentRenderable const &);

    // RVA: 0x21 | Ordinal: 34
        void GPUAttachmentRenderable(class Animator::GPUAttachmentModel *, struct Animator::CharacterBatcher *);

    // RVA: 0xD8 | Ordinal: 217
        void doRender(struct render::SceneRenderContext const *);

    // RVA: 0x35 | Ordinal: 54
        void _GPUAttachmentRenderable(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_GPUATTACHMENTRENDERABLE_HPP
