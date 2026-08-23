#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: Graphics
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Graphics
{
public:

    // RVA: 0x60 | Ordinal: 97
        void FindAllParts(class Graphics::ModelInstance &, class osg::Vec3f const &, float, class ed::vector<struct Graphics::_PART_DESC, class ed::allocator<struct Graphics::_PART_DESC>> &);

    // RVA: 0x93 | Ordinal: 148
        void IntersectSegment(class Graphics::ModelInstance &, class osg::Vec3f const &, class osg::Vec3f const &, float *, class osg::Vec3f *);

    // RVA: 0x94 | Ordinal: 149
        void IntersectSegmentLocal(class Graphics::ModelInstance &, class osg::Vec3f const &, class osg::Vec3f const &, float *, class osg::Vec3f *);

    // RVA: 0xD9 | Ordinal: 218
        void buildLightCollection(class Graphics::effectState const &, class Graphics::effectState const *, class ed::vector<struct Graphics::IShadowmap const *, class ed::allocator<struct Graphics::IShadowmap const *>> const &);

    // RVA: 0xE5 | Ordinal: 230
        void disable_periodical_gc(void);

    // RVA: 0xE9 | Ordinal: 234
        void enable_periodical_gc(double, unsigned __int64);

    // RVA: 0xF9 | Ordinal: 250
        void getEffectsConnectors(class Graphics::ModelConnector **, class Graphics::ModelInstance &);

    // RVA: 0x11A | Ordinal: 283
        void load_plugin(char const *);

    // RVA: 0x11B | Ordinal: 284
        void load_plugins(void);

    // RVA: 0x120 | Ordinal: 289
        void periodical_gc_is_active(void);

    // RVA: 0x159 | Ordinal: 346
        void unload_plugins(void);

    // RVA: 0x15D | Ordinal: 350
        void useLaserBeamMask(bool);
};

// DCS_OPS_RE_GRAPHICSVISTA.DLL_GRAPHICS_HPP
