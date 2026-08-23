#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGLTriangleMesh
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGLTriangleMesh
{
public:

    // RVA: 0x159 | Ordinal: 346
        void FXGLTriangleMesh(void);

    // RVA: 0x15A | Ordinal: 347
        void FXGLTriangleMesh(class FX::FXGLTriangleMesh const &);

    // RVA: 0x15B | Ordinal: 348
        void FXGLTriangleMesh(float, float, float, int, float *, float *, float *, float *);

    // RVA: 0x15C | Ordinal: 349
        void FXGLTriangleMesh(float, float, float, int, float *, float *, float *, float *, struct FX::FXMaterial const &);

    // RVA: 0xB8D | Ordinal: 2958
        void copy(void);

    // RVA: 0xDE1 | Ordinal: 3554
        void drawshape(class FX::FXGLViewer *);

    // RVA: 0xFDA | Ordinal: 4059
        void generatenormals(void);

    // RVA: 0x1099 | Ordinal: 4250
        void getColorBuffer(void) const;

    // RVA: 0x13EA | Ordinal: 5099
        void getMetaClass(void) const;

    // RVA: 0x148F | Ordinal: 5264
        void getNormalBuffer(void) const;

    // RVA: 0x161C | Ordinal: 5661
        void getTextureCoordBuffer(void) const;

    // RVA: 0x1691 | Ordinal: 5778
        void getVertexBuffer(void) const;

    // RVA: 0x1692 | Ordinal: 5779
        void getVertexNumber(void) const;

    // RVA: 0x1769 | Ordinal: 5994
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AE9 | Ordinal: 6890
        void load(class FX::FXStream &);

    // RVA: 0x1C28 | Ordinal: 7209
        void manufacture(void);

    // RVA: 0x2722 | Ordinal: 10019
        void recomputerange(void);

    // RVA: 0x281A | Ordinal: 10267
        void save(class FX::FXStream &) const;

    // RVA: 0x29F6 | Ordinal: 10743
        void setColorBuffer(float *);

    // RVA: 0x2C0B | Ordinal: 11276
        void setNormalBuffer(float *);

    // RVA: 0x2D61 | Ordinal: 11618
        void setTextureCoordBuffer(float *);

    // RVA: 0x2DC9 | Ordinal: 11722
        void setVertexBuffer(float *);

    // RVA: 0x2DCA | Ordinal: 11723
        void setVertexNumber(int);

    // RVA: 0x423 | Ordinal: 1060
        void _FXGLTriangleMesh(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLTRIANGLEMESH_HPP
