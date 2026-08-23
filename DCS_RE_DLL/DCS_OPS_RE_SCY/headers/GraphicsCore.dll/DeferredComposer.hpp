#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: DeferredComposer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace deferredShading {

class DeferredComposer
{
public:

    // RVA: 0xE | Ordinal: 15
        void DeferredComposer(class deferredShading::DeferredComposer &&);

    // RVA: 0xF | Ordinal: 16
        void DeferredComposer(void);

    // RVA: 0x12A | Ordinal: 299
        void clearGBuffer(void);

    // RVA: 0x12E | Ordinal: 303
        void compose(struct deferredShading::DeferredComposerParams const *);

    // RVA: 0x12F | Ordinal: 304
        void composeCustom(int, int, enum deferredShading::ComposerCustomMode);

    // RVA: 0x130 | Ordinal: 305
        void composeToFrameBuffer(class render::FrameBuffer &, struct deferredShading::DeferredComposerParams const *, unsigned __int64, int);

    // RVA: 0x170 | Ordinal: 369
        void getComposedFrameBuffer(void);

    // RVA: 0x171 | Ordinal: 370
        void getComposedMSAAFrameBuffer(void);

    // RVA: 0x17C | Ordinal: 381
        void getDepthResolved(void);

    // RVA: 0x17D | Ordinal: 382
        void getDepthStencil(void);

    // RVA: 0x17F | Ordinal: 384
        void getDummyDepth(void);

    // RVA: 0x184 | Ordinal: 389
        void getFlatShadowsBlurFrameBuffer(void);

    // RVA: 0x185 | Ordinal: 390
        void getFlatShadowsFrameBuffer(void);

    // RVA: 0x18A | Ordinal: 395
        void getGBuffer(void);

    // RVA: 0x191 | Ordinal: 402
        void getMSAA(void);

    // RVA: 0x1D1 | Ordinal: 466
        void init(int, int, enum render::MSAA_ENUM, char const *, struct deferredShading::DeferredComposerDesc const &);

    // RVA: 0x21B | Ordinal: 540
        void motionBlurEnabled(void) const;

    // RVA: 0x23D | Ordinal: 574
        void release(void);

    // RVA: 0x258 | Ordinal: 601
        void renderMotionBlur(void);

    // RVA: 0x25C | Ordinal: 605
        void renderReflections(void);

    // RVA: 0x262 | Ordinal: 611
        void renderShadows(class render::FrameBuffer &);

    // RVA: 0x26E | Ordinal: 623
        void resolveDepth(void);

    // RVA: 0x2CB | Ordinal: 716
        void upscaleDepth(class osg::Vec4f const &);

    // RVA: 0x64 | Ordinal: 101
        void _DeferredComposer(void);
};

} // namespace deferredShading

// DCS_OPS_RE_GRAPHICSCORE.DLL_DEFERREDCOMPOSER_HPP
