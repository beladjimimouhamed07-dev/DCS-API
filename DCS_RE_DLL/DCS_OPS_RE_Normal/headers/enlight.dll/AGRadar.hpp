#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: AGRadar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class AGRadar
{
public:

    // RVA: 0x0 | Ordinal: 1
        void AGRadar(void);

    // RVA: 0x67 | Ordinal: 104
        void applyConfigPreset(char const *);

    // RVA: 0x68 | Ordinal: 105
        void applyPreset(struct enlight::AGRadar::ConfigPreset const &);

    // RVA: 0x70 | Ordinal: 113
        void blurPass(class render::Texture, class render::Texture);

    // RVA: 0x75 | Ordinal: 118
        void buildDBS(void);

    // RVA: 0x7D | Ordinal: 126
        void clear(void);

    // RVA: 0x87 | Ordinal: 136
        void draw(class std::array<class render::Texture, 3>, class render::Texture, class render::Texture, class render::Texture);

    // RVA: 0x8D | Ordinal: 142
        void drawDebug(void);

    // RVA: 0xA1 | Ordinal: 162
        void getData(void) const;

    // RVA: 0xC0 | Ordinal: 193
        void loadConfig(char const *);

    // RVA: 0xC3 | Ordinal: 196
        void loadPreset(char const *);

    // RVA: 0xCC | Ordinal: 205
        void parsePreset(struct enlight::AGRadar::ConfigPreset &, class Lua::Config &);

    // RVA: 0xDE | Ordinal: 223
        void renderFinal(class render::Texture);

    // RVA: 0xE1 | Ordinal: 226
        void renderResult(class render::Texture);

    // RVA: 0xE2 | Ordinal: 227
        void renderScanned(class render::Texture, class render::Texture, class render::Texture);

    // RVA: 0x102 | Ordinal: 259
        void update(struct enlight::AGRadar::Params const &, class osg::Vec2i const &, class std::function<void __cdecl(int, class osg::Matrixf const &, class osg::Matrixf const &, class osg::Matrixf const *, class osg::Matrixf const &, int)>);

    // RVA: 0x28 | Ordinal: 41
        void _AGRadar(void);
};

} // namespace enlight

// DCS_OPS_RE_ENLIGHT.DLL_AGRADAR_HPP
