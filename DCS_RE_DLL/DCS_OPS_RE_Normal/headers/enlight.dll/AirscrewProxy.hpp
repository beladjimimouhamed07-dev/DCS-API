#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: AirscrewProxy
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class AirscrewProxy
{
public:

    // RVA: 0x4 | Ordinal: 5
        void AirscrewProxy(class Graphics::AirscrewProxy const &);

    // RVA: 0x5 | Ordinal: 6
        void AirscrewProxy(unsigned int, char const *, int, class osg::Vec2f const &, bool);

    // RVA: 0xAB | Ordinal: 172
        void hide(void);

    // RVA: 0xF3 | Ordinal: 244
        void setLivery(unsigned int);

    // RVA: 0x10B | Ordinal: 268
        void updateParams(class osg::Matrixd const &, float, float, float, class osg::Vec4f const &, class boost::container::small_vector<unsigned char, 8, class ed::allocator<unsigned char>, void> const &);

    // RVA: 0x2A | Ordinal: 43
        void _AirscrewProxy(void);
};

} // namespace Graphics

// DCS_OPS_RE_ENLIGHT.DLL_AIRSCREWPROXY_HPP
