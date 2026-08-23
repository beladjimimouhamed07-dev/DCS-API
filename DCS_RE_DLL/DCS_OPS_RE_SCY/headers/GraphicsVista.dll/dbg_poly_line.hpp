#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: dbg_poly_line
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class dbg_poly_line
{
public:

    // RVA: 0x150 | Ordinal: 337
        void set_poly_line(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &);

    // RVA: 0x151 | Ordinal: 338
        void set_poly_line(class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0x152 | Ordinal: 339
        void set_poly_line_d(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &);
};

// DCS_OPS_RE_GRAPHICSVISTA.DLL_DBG_POLY_LINE_HPP
