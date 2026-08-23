#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: HelicopterRotorProxy
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class HelicopterRotorProxy
{
public:

    // RVA: 0x1D | Ordinal: 30
        void HelicopterRotorProxy(class Graphics::HelicopterRotorProxy const &);

    // RVA: 0x1E | Ordinal: 31
        void HelicopterRotorProxy(unsigned int, char const *, char const *, char const *, class ed::vector<char const *, class ed::allocator<char const *>>, char const *);

    // RVA: 0xAC | Ordinal: 173
        void hide(void);

    // RVA: 0xEA | Ordinal: 235
        void setBladeModelIdx(class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0xF5 | Ordinal: 246
        void setLivery(unsigned int);

    // RVA: 0x10D | Ordinal: 270
        void updateParams(class osg::Matrixd const &, float, float, float, class osg::Vec4f const &, class ed::vector<struct std::pair<int, float>, class ed::allocator<struct std::pair<int, float>>> const &, class boost::container::small_vector<unsigned char, 8, class ed::allocator<unsigned char>, void> const &);

    // RVA: 0x36 | Ordinal: 55
        void _HelicopterRotorProxy(void);
};

} // namespace Graphics

// DCS_OPS_RE_ENLIGHT.DLL_HELICOPTERROTORPROXY_HPP
