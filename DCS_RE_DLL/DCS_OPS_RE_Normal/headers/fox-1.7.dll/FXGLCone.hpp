#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGLCone
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGLCone
{
public:

    // RVA: 0x139 | Ordinal: 314
        void FXGLCone(void);

    // RVA: 0x13A | Ordinal: 315
        void FXGLCone(class FX::FXGLCone const &);

    // RVA: 0x13B | Ordinal: 316
        void FXGLCone(float, float, float, float, float);

    // RVA: 0x13C | Ordinal: 317
        void FXGLCone(float, float, float, float, float, struct FX::FXMaterial const &);

    // RVA: 0xB84 | Ordinal: 2949
        void copy(void);

    // RVA: 0xDDC | Ordinal: 3549
        void drawshape(class FX::FXGLViewer *);

    // RVA: 0x125F | Ordinal: 4704
        void getHeight(void) const;

    // RVA: 0x13E0 | Ordinal: 5089
        void getMetaClass(void) const;

    // RVA: 0x151E | Ordinal: 5407
        void getRadius(void) const;

    // RVA: 0x175F | Ordinal: 5984
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AE0 | Ordinal: 6881
        void load(class FX::FXStream &);

    // RVA: 0x1C1F | Ordinal: 7200
        void manufacture(void);

    // RVA: 0x2811 | Ordinal: 10258
        void save(class FX::FXStream &) const;

    // RVA: 0x2B07 | Ordinal: 11016
        void setHeight(float);

    // RVA: 0x2C7B | Ordinal: 11388
        void setRadius(float);

    // RVA: 0x419 | Ordinal: 1050
        void _FXGLCone(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLCONE_HPP
