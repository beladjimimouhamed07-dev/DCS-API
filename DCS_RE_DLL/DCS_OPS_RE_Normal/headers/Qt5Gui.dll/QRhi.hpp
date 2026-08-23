#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhi
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhi
{
public:

    // RVA: 0x296 | Ordinal: 663
        void QRhi(void);

    // RVA: 0x968 | Ordinal: 2409
        void addCleanupCallback(class std::function<void __cdecl(class QRhi *)> const &);

    // RVA: 0xA51 | Ordinal: 2642
        void backend(void) const;

    // RVA: 0xA78 | Ordinal: 2681
        void beginFrame(class QRhiSwapChain *, class QFlags<enum QRhi::BeginFrameFlag>);

    // RVA: 0xA7D | Ordinal: 2686
        void beginOffscreenFrame(class QRhiCommandBuffer **, class QFlags<enum QRhi::BeginFrameFlag>);

    // RVA: 0xBDC | Ordinal: 3037
        void clipSpaceCorrMatrix(void) const;

    // RVA: 0xC99 | Ordinal: 3226
        void create(enum QRhi::Implementation, struct QRhiInitParams *, class QFlags<enum QRhi::Flag>, struct QRhiNativeHandles *);

    // RVA: 0xCE9 | Ordinal: 3306
        void currentFrameSlot(void) const;

    // RVA: 0xFB7 | Ordinal: 4024
        void endFrame(class QRhiSwapChain *, class QFlags<enum QRhi::EndFrameFlag>);

    // RVA: 0xFBD | Ordinal: 4030
        void endOffscreenFrame(class QFlags<enum QRhi::EndFrameFlag>);

    // RVA: 0x107D | Ordinal: 4222
        void finish(void);

    // RVA: 0x4FD7 | Ordinal: 20440
        void isClipDepthZeroToOne(void) const;

    // RVA: 0x5009 | Ordinal: 20490
        void isDeviceLost(void) const;

    // RVA: 0x5024 | Ordinal: 20517
        void isFeatureSupported(enum QRhi::Feature) const;

    // RVA: 0x506B | Ordinal: 20588
        void isRecordingFrame(void) const;

    // RVA: 0x5084 | Ordinal: 20613
        void isTextureFormatSupported(enum QRhiTexture::Format, class QFlags<enum QRhiTexture::Flag>) const;

    // RVA: 0x50C0 | Ordinal: 20673
        void isYUpInFramebuffer(void) const;

    // RVA: 0x50C1 | Ordinal: 20674
        void isYUpInNDC(void) const;

    // RVA: 0x51E1 | Ordinal: 20962
        void makeThreadLocalNativeContextCurrent(void);

    // RVA: 0x52D4 | Ordinal: 21205
        void mipLevelsForSize(class QSize const &) const;

    // RVA: 0x531F | Ordinal: 21280
        void nativeHandles(void);

    // RVA: 0x5337 | Ordinal: 21304
        void newBuffer(enum QRhiBuffer::Type, class QFlags<enum QRhiBuffer::UsageFlag>, int);

    // RVA: 0x5338 | Ordinal: 21305
        void newComputePipeline(void);

    // RVA: 0x533A | Ordinal: 21307
        void newGraphicsPipeline(void);

    // RVA: 0x533E | Ordinal: 21311
        void newRenderBuffer(enum QRhiRenderBuffer::Type, class QSize const &, int, class QFlags<enum QRhiRenderBuffer::Flag>);

    // RVA: 0x533F | Ordinal: 21312
        void newSampler(enum QRhiSampler::Filter, enum QRhiSampler::Filter, enum QRhiSampler::Filter, enum QRhiSampler::AddressMode, enum QRhiSampler::AddressMode, enum QRhiSampler::AddressMode);

    // RVA: 0x5340 | Ordinal: 21313
        void newShaderResourceBindings(void);

    // RVA: 0x5341 | Ordinal: 21314
        void newSwapChain(void);

    // RVA: 0x5342 | Ordinal: 21315
        void newTexture(enum QRhiTexture::Format, class QSize const &, int, class QFlags<enum QRhiTexture::Flag>);

    // RVA: 0x5343 | Ordinal: 21316
        void newTextureRenderTarget(class QRhiTextureRenderTargetDescription const &, class QFlags<enum QRhiTextureRenderTarget::Flag>);

    // RVA: 0x534E | Ordinal: 21327
        void nextResourceUpdateBatch(void);

    // RVA: 0x54EC | Ordinal: 21741
        void profiler(void);

    // RVA: 0x56C0 | Ordinal: 22209
        void releaseCachedResources(void);

    // RVA: 0x573F | Ordinal: 22336
        void resourceLimit(enum QRhi::ResourceLimit) const;

    // RVA: 0x578F | Ordinal: 22416
        void runCleanup(void);

    // RVA: 0x5D42 | Ordinal: 23875
        void sizeForMipLevel(int, class QSize const &) const;

    // RVA: 0x5E59 | Ordinal: 24154
        void supportedSampleCounts(void) const;

    // RVA: 0x5F2B | Ordinal: 24364
        void thread(void) const;

    // RVA: 0x607A | Ordinal: 24699
        void ubufAligned(int) const;

    // RVA: 0x607B | Ordinal: 24700
        void ubufAlignment(void) const;

    // RVA: 0x4F4 | Ordinal: 1269
        void _QRhi(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHI_HPP
