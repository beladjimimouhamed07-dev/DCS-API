#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: dbg_obj
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class dbg_obj
{
public:

    // RVA: 0xD8 | Ordinal: 217
        void build(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &, class ed::vector<unsigned short, class ed::allocator<unsigned short>> const &, class osg::Vec3f const &);

    // RVA: 0xDC | Ordinal: 221
        void collectRenderables(unsigned int, struct render::CollectionInfo const **const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> **const);

    // RVA: 0x26 | Ordinal: 39
        void dbg_obj(void);

    // RVA: 0xE3 | Ordinal: 228
        void deinitialize(void);

    // RVA: 0xE6 | Ordinal: 231
        void draw(class Graphics::ModelParser &);

    // RVA: 0xE7 | Ordinal: 232
        void draw(void);

    // RVA: 0x114 | Ordinal: 277
        void initialize(void);

    // RVA: 0x11D | Ordinal: 286
        void parse(class Graphics::ModelParser &, class osg::Vec3d const &);

    // RVA: 0x11E | Ordinal: 287
        void parse(class Graphics::ModelParser &, class wPosition3<float> const &);

    // RVA: 0x11F | Ordinal: 288
        void parse(class Graphics::ModelParser &, class osg::Vec3f const &);

    // RVA: 0x144 | Ordinal: 325
        void set_color(class osg::Vec3f const &);

    // RVA: 0x35 | Ordinal: 54
        void _dbg_obj(void);
};

// DCS_OPS_RE_GRAPHICSVISTA.DLL_DBG_OBJ_HPP
