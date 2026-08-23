#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: ToneMapperWrapper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace deferredShading {

class ToneMapperWrapper
{
public:

    // RVA: 0x54 | Ordinal: 85
        void ToneMapperWrapper(void);

    // RVA: 0xDA | Ordinal: 219
        void adaptation(int, bool, bool);

    // RVA: 0xDB | Ordinal: 220
        void adaptationShared(unsigned int, bool, bool);

    // RVA: 0x16D | Ordinal: 366
        void getBloomMap(void);

    // RVA: 0x182 | Ordinal: 387
        void getFeedbackExposure(void) const;

    // RVA: 0x190 | Ordinal: 401
        void getLuminanceSB(void);

    // RVA: 0x1EC | Ordinal: 493
        void init(class render::FrameBuffer &, struct deferredShading::ToneMapperDesc const &);

    // RVA: 0x1ED | Ordinal: 494
        void init(class render::FrameBuffer &, int);

    // RVA: 0x1F6 | Ordinal: 503
        void isInitialized(void) const;

    // RVA: 0x24B | Ordinal: 588
        void release(void);

    // RVA: 0x285 | Ordinal: 646
        void setHalloween(bool);

    // RVA: 0x286 | Ordinal: 647
        void setHalloweenData(bool);

    // RVA: 0x288 | Ordinal: 649
        void setMask(class render::Texture);

    // RVA: 0x29D | Ordinal: 670
        void setViewportsCount(int);

    // RVA: 0x2A8 | Ordinal: 681
        void simpleToneMapping(class render::Texture, enum deferredShading::ToneMapperMode);

    // RVA: 0x2AD | Ordinal: 686
        void toneMap(int, struct deferredShading::ToneMapperParams const *);

    // RVA: 0x85 | Ordinal: 134
        void _ToneMapperWrapper(void);
};

} // namespace deferredShading

// DCS_OPS_RE_GRAPHICSCORE.DLL_TONEMAPPERWRAPPER_HPP
