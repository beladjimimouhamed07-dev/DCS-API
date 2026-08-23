#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrainGraphics41.dll
// Class: TerrainRenderable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edtg41 {

class TerrainRenderable
{
public:

    // RVA: 0x0 | Ordinal: 1
        void TerrainRenderable(class edtg41::TerrainRenderable const &);

    // RVA: 0x1 | Ordinal: 2
        void TerrainRenderable(void);

    // RVA: 0xD | Ordinal: 14
        void addCounter(char const *, unsigned int);

    // RVA: 0xE | Ordinal: 15
        void addInstanceRenderItem(class osg::Matrixf const &, class osg::BoundingBoxImpl<class osg::Vec3f> const &, struct edtg41::RenderItem *, void *);

    // RVA: 0xF | Ordinal: 16
        void addRenderItem(class osg::Matrixf const &, class osg::BoundingBoxImpl<class osg::Vec3f> const &, struct edtg41::RenderItem *, void *);

    // RVA: 0x10 | Ordinal: 17
        void addRenderItem(class edtg41::ParseContextWrapper const &, unsigned int, class osg::Matrixf const &, class osg::BoundingBoxImpl<class osg::Vec3f> const &, struct edtg41::RenderItem *, void *);

    // RVA: 0x11 | Ordinal: 18
        void clear(unsigned __int64, unsigned int, double, double, double, bool *, class osg::Vec2i);

    // RVA: 0x13 | Ordinal: 20
        void dump(class edge::Context *, class osg::Matrixd const &, void *, int);

    // RVA: 0x14 | Ordinal: 21
        void dumpRenderItem(class render::IRenderContext *, struct edtg41::RenderItem *, struct edtg41::TerrainOptions const *, struct edtg41::RenderContext *, int);

    // RVA: 0x15 | Ordinal: 22
        void getBoundingBox(void) const;

    // RVA: 0x16 | Ordinal: 23
        void getLodsList(void) const;

    // RVA: 0x17 | Ordinal: 24
        void getStatistic(void) const;

    // RVA: 0x18 | Ordinal: 25
        void hidden(struct edtg41::RenderItem *);

    // RVA: 0x19 | Ordinal: 26
        void init(void);

    // RVA: 0x1D | Ordinal: 30
        void isLoaded(int) const;

    // RVA: 0x1E | Ordinal: 31
        void isLoaded(void) const;

    // RVA: 0x1F | Ordinal: 32
        void layerIsHidden(bool const *, int);

    // RVA: 0x22 | Ordinal: 35
        void render(unsigned int, enum render::enShadingModel, class render::IRenderContext const &, struct edtg41::TerrainOptions const *, unsigned int);

    // RVA: 0x23 | Ordinal: 36
        void render(class edge::Context *, class osg::Matrixd const &, void *);

    // RVA: 0x24 | Ordinal: 37
        void render(enum render::enShadingModel, class render::IRenderContext const &, unsigned int);

    // RVA: 0x25 | Ordinal: 38
        void setLodsList(class ed::compact_vector<int, 32> &);

    // RVA: 0x3 | Ordinal: 4
        void _TerrainRenderable(void);
};

} // namespace edtg41

// DCS_OPS_RE_EDTERRAINGRAPHICS41.DLL_TERRAINRENDERABLE_HPP
