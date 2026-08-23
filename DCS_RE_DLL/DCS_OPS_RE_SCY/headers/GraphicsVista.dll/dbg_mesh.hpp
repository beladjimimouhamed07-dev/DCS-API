#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: dbg_mesh
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class dbg_mesh
{
public:

    // RVA: 0x14A | Ordinal: 331
        void set_mesh(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &&, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &&, class ed::vector<unsigned short, class ed::allocator<unsigned short>> &&);

    // RVA: 0x14B | Ordinal: 332
        void set_mesh(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &&, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &&, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &&, class ed::vector<unsigned short, class ed::allocator<unsigned short>> &&);

    // RVA: 0x14C | Ordinal: 333
        void set_mesh(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &&, class ed::vector<class osg::Vec3i, class ed::allocator<class osg::Vec3i>> const &);

    // RVA: 0x14D | Ordinal: 334
        void set_mesh(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &, class ed::vector<unsigned short, class ed::allocator<unsigned short>> const &);

    // RVA: 0x14E | Ordinal: 335
        void set_mesh(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &, class ed::vector<class osg::Vec3i, class ed::allocator<class osg::Vec3i>> const &);

    // RVA: 0x14F | Ordinal: 336
        void set_points(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &);
};

// DCS_OPS_RE_GRAPHICSVISTA.DLL_DBG_MESH_HPP
