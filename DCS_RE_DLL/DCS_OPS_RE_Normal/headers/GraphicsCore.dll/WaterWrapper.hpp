#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: WaterWrapper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class WaterWrapper
{
public:

    // RVA: 0x5B | Ordinal: 92
        void WaterWrapper(class enlight::WaterWrapper &&);

    // RVA: 0x5C | Ordinal: 93
        void WaterWrapper(void);

    // RVA: 0x149 | Ordinal: 330
        void cutUnderwaterTransparents(void);

    // RVA: 0x1F0 | Ordinal: 497
        void init(int, int, bool, struct lua_State *);

    // RVA: 0x202 | Ordinal: 515
        void isValid(void) const;

    // RVA: 0x24C | Ordinal: 589
        void release(void);

    // RVA: 0x255 | Ordinal: 598
        void render(void);

    // RVA: 0x257 | Ordinal: 600
        void renderDraft(int);

    // RVA: 0x259 | Ordinal: 602
        void renderRadar(void);

    // RVA: 0x25B | Ordinal: 604
        void renderReflection(int);

    // RVA: 0x25E | Ordinal: 607
        void renderRefraction(class std::function<void __cdecl(void)>);

    // RVA: 0x265 | Ordinal: 614
        void renderWave(class std::function<void __cdecl(void)>, class std::function<void __cdecl(void)>);

    // RVA: 0x2A3 | Ordinal: 676
        void setWind(class osg::Vec2f const &);

    // RVA: 0x2B9 | Ordinal: 698
        void update(void);

    // RVA: 0x2BF | Ordinal: 704
        void updateGenerator(void);

    // RVA: 0x2CC | Ordinal: 717
        void useAdjustWaveCamera(void) const;

    // RVA: 0x2CE | Ordinal: 719
        void useExternalSurf(void) const;

    // RVA: 0x89 | Ordinal: 138
        void _WaterWrapper(void);
};

} // namespace enlight

// DCS_OPS_RE_GRAPHICSCORE.DLL_WATERWRAPPER_HPP
