#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: SimpleLaplacianDeform
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class SimpleLaplacianDeform
{
public:

    // RVA: 0x8 | Ordinal: 9
        void SimpleLaplacianDeform(void);

    // RVA: 0xFF | Ordinal: 256
        void deform(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &, class ed::vector<struct std::pair<int, class osg::Vec3d>, class ed::allocator<struct std::pair<int, class osg::Vec3d>>> const &);

    // RVA: 0x199 | Ordinal: 410
        void init(int, class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> const &);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_SIMPLELAPLACIANDEFORM_HPP
