#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: render
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class render
{
public:

    // RVA: 0x4B | Ordinal: 76
        void convertToScreenSpace(class osg::Vec3f const &, class osg::Matrixd const &, class osg::Vec2f &);

    // RVA: 0x72 | Ordinal: 115
        void generateConeSectorMesh(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &, class ed::vector<unsigned int, class ed::allocator<unsigned int>> &, float, float, float, float, float, float, unsigned int, unsigned int);
};

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDER_HPP
