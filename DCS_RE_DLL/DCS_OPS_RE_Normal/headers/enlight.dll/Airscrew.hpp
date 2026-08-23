#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: Airscrew
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class Airscrew
{
public:

    // RVA: 0x1 | Ordinal: 2
        void Airscrew(class enlight::Airscrew const &);

    // RVA: 0x2 | Ordinal: 3
        void Airscrew(class ed::basic_string<char> const &, int, class osg::Vec2f const &, bool);

    // RVA: 0x3 | Ordinal: 4
        void Airscrew(char const *, int, class osg::Vec2f const &, bool);

    // RVA: 0x78 | Ordinal: 121
        void buildRenderable(struct render::CollectionInfo const &, bool, struct render::ILightProbeSampler &, int &);

    // RVA: 0x80 | Ordinal: 129
        void collectRenderables(unsigned int, struct render::CollectionInfo const **, bool const *const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> **, struct render::ILightProbeSampler &);

    // RVA: 0x92 | Ordinal: 147
        void drawInt(class osg::Matrixf const &, class osg::Matrixf const &, int, int, int, int, class osg::Vec4f const &);

    // RVA: 0xCA | Ordinal: 203
        void parse(class Graphics::ModelParser &);

    // RVA: 0xD9 | Ordinal: 218
        void render(int, class osg::Vec2i const &, int);

    // RVA: 0xDC | Ordinal: 221
        void renderBruteForce(class osg::Matrixf const &, int, int);

    // RVA: 0xF2 | Ordinal: 243
        void setLivery(unsigned int);

    // RVA: 0x10A | Ordinal: 267
        void updateParams(class osg::Matrixd const &, float, float, float, class osg::Vec4f const &, class boost::container::small_vector<unsigned char, 8, class ed::allocator<unsigned char>, void> const &);

    // RVA: 0x29 | Ordinal: 42
        void _Airscrew(void);
};

} // namespace enlight

// DCS_OPS_RE_ENLIGHT.DLL_AIRSCREW_HPP
