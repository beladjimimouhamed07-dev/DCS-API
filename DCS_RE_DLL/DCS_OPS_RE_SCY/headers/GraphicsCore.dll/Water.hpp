#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: Water
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class Water
{
public:

    // RVA: 0x57 | Ordinal: 88
        void Water(struct enlight::WaterDesc &);

    // RVA: 0x122 | Ordinal: 291
        void buildUnderwaterMask(class render::Texture, class render::Texture);

    // RVA: 0x148 | Ordinal: 329
        void cutUnderwaterTransparents(void);

    // RVA: 0x16E | Ordinal: 367
        void getCameraLevel(void);

    // RVA: 0x1A2 | Ordinal: 419
        void getRendererForEnvironment(void);

    // RVA: 0x1A7 | Ordinal: 424
        void getSeaLevel(void) const;

    // RVA: 0x1C1 | Ordinal: 450
        void getUnderwaterMask(void);

    // RVA: 0x231 | Ordinal: 562
        void quad(int);

    // RVA: 0x253 | Ordinal: 596
        void render(class render::Texture, class render::Texture);

    // RVA: 0x256 | Ordinal: 599
        void renderDraft(int);

    // RVA: 0x25A | Ordinal: 603
        void renderReflection(class render::Texture, class render::Texture, class render::Texture, class render::Texture, class render::Texture, class render::Texture, class render::Texture);

    // RVA: 0x25D | Ordinal: 606
        void renderRefraction(class render::Texture, class render::Texture, class render::Texture, class render::Texture, class render::Texture, class render::Texture, class std::function<void __cdecl(void)>);

    // RVA: 0x264 | Ordinal: 613
        void renderWave(class render::Texture, class render::Texture, class render::Texture, class render::Texture, class std::function<void __cdecl(void)>, class std::function<void __cdecl(void)>);

    // RVA: 0x269 | Ordinal: 618
        void resetParams(void);

    // RVA: 0x2A1 | Ordinal: 674
        void setWind(class osg::Vec2f const &);

    // RVA: 0x2B8 | Ordinal: 697
        void update(class osg::Vec2i const &, class osg::Vec2i const &, class osg::Vec2i const &, class osg::Matrixf const &);

    // RVA: 0x2BE | Ordinal: 703
        void updateGenerator(class render::Texture);

    // RVA: 0x2CF | Ordinal: 720
        void useFoamFFT(void);

    // RVA: 0x87 | Ordinal: 136
        void _Water(void);
};

} // namespace enlight

// DCS_OPS_RE_GRAPHICSCORE.DLL_WATER_HPP
