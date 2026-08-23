#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: RenderObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class RenderObject
{
public:

    // RVA: 0x13 | Ordinal: 20
        void RenderObject(class Graphics::RenderObject const &);

    // RVA: 0x14 | Ordinal: 21
        void RenderObject(class Graphics::RenderObject const &, enum AllocType);

    // RVA: 0x15 | Ordinal: 22
        void RenderObject(class wPosition3<float> const &, enum AllocType);

    // RVA: 0x16 | Ordinal: 23
        void RenderObject(enum AllocType);

    // RVA: 0xF0 | Ordinal: 241
        void getBoundingBox(void) const;

    // RVA: 0xF2 | Ordinal: 243
        void getCenter(void);

    // RVA: 0xFF | Ordinal: 256
        void getNTriangles(void);

    // RVA: 0x101 | Ordinal: 258
        void getRadius(void);

    // RVA: 0x12B | Ordinal: 300
        void render(enum Graphics::Pass);

    // RVA: 0x12E | Ordinal: 303
        void renderIR(void);

    // RVA: 0x12F | Ordinal: 304
        void renderShadow(void);

    // RVA: 0x2F | Ordinal: 48
        void _RenderObject(void);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_RENDEROBJECT_HPP
