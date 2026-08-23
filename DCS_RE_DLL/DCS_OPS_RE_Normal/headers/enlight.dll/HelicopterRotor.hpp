#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: HelicopterRotor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class HelicopterRotor
{
public:

    // RVA: 0x1B | Ordinal: 28
        void HelicopterRotor(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::vector<char const *, class ed::allocator<char const *>> const &, class ed::basic_string<char> const &);

    // RVA: 0x1C | Ordinal: 29
        void HelicopterRotor(char const *, char const *, char const *, class ed::vector<char const *, class ed::allocator<char const *>> const &, char const *);

    // RVA: 0x6F | Ordinal: 112
        void bladeCount(void) const;

    // RVA: 0x79 | Ordinal: 122
        void buildRenderable(struct render::CollectionInfo const &, bool, struct render::ILightProbeSampler &, int &);

    // RVA: 0x7A | Ordinal: 123
        void calcTargetSize(class osg::Vec3f const &, float, class osg::Vec3f const &, class osg::Matrixf const &, class osg::Vec2i const &);

    // RVA: 0x7B | Ordinal: 124
        void calcTech(class osg::Matrixf const &, class osg::Matrixf const &, class osg::Matrixf const &, class osg::Vec2i const &, class osg::Vec3f &);

    // RVA: 0x7C | Ordinal: 125
        void calcView(class osg::Matrixf const &, class osg::Matrixf const &, class osg::Vec3f const &);

    // RVA: 0x81 | Ordinal: 130
        void collectRenderables(unsigned int, struct render::CollectionInfo const **, bool const *const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> **, struct render::ILightProbeSampler &);

    // RVA: 0x8C | Ordinal: 141
        void drawBladeInt(int, class osg::Matrixf const &, class osg::Matrixf const &, class osg::Matrixf const &, int, int, int, class osg::Vec4f const &);

    // RVA: 0x91 | Ordinal: 146
        void drawHubLod(class osg::Matrixf const &, class osg::Matrixf const &, int, int, int, class osg::Vec4f const &);

    // RVA: 0xA5 | Ordinal: 166
        void getHubArgs(void);

    // RVA: 0xCB | Ordinal: 204
        void parse(class Graphics::ModelParser &);

    // RVA: 0xDB | Ordinal: 220
        void renderBladeBound(class render::Texture, float, class osg::Matrixf const &, class osg::Matrixf const &, class osg::Matrixf const &, int);

    // RVA: 0xDD | Ordinal: 222
        void renderFar(int, class osg::Matrixf const &, class osg::Vec2i const &, int);

    // RVA: 0xDF | Ordinal: 224
        void renderHubBound(class render::Texture, class render::Texture, float, class osg::Matrixf const &, class osg::Matrixf const &, int);

    // RVA: 0xE0 | Ordinal: 225
        void renderNear(int, class osg::Matrixf const &, class osg::Vec2i const &, class osg::Vec3f const &, int, struct render::SceneRenderContext const *, struct render::ISceneRenderable **);

    // RVA: 0xE9 | Ordinal: 234
        void setBladeModelIdx(class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0xF4 | Ordinal: 245
        void setLivery(unsigned int);

    // RVA: 0x10C | Ordinal: 269
        void updateParams(class osg::Matrixd const &, float, float, float, class osg::Vec4f const &, class ed::vector<struct std::pair<int, float>, class ed::allocator<struct std::pair<int, float>>> const &, class boost::container::small_vector<unsigned char, 8, class ed::allocator<unsigned char>, void> const &);

    // RVA: 0x35 | Ordinal: 54
        void _HelicopterRotor(void);
};

} // namespace enlight

// DCS_OPS_RE_ENLIGHT.DLL_HELICOPTERROTOR_HPP
