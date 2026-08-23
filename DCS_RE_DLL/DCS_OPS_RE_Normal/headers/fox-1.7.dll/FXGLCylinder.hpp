#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGLCylinder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGLCylinder
{
public:

    // RVA: 0x143 | Ordinal: 324
        void FXGLCylinder(void);

    // RVA: 0x144 | Ordinal: 325
        void FXGLCylinder(class FX::FXGLCylinder const &);

    // RVA: 0x145 | Ordinal: 326
        void FXGLCylinder(float, float, float, float, float);

    // RVA: 0x146 | Ordinal: 327
        void FXGLCylinder(float, float, float, float, float, struct FX::FXMaterial const &);

    // RVA: 0xB86 | Ordinal: 2951
        void copy(void);

    // RVA: 0xDDE | Ordinal: 3551
        void drawshape(class FX::FXGLViewer *);

    // RVA: 0x1261 | Ordinal: 4706
        void getHeight(void) const;

    // RVA: 0x13E3 | Ordinal: 5092
        void getMetaClass(void) const;

    // RVA: 0x151F | Ordinal: 5408
        void getRadius(void) const;

    // RVA: 0x1762 | Ordinal: 5987
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AE3 | Ordinal: 6884
        void load(class FX::FXStream &);

    // RVA: 0x1C22 | Ordinal: 7203
        void manufacture(void);

    // RVA: 0x2814 | Ordinal: 10261
        void save(class FX::FXStream &) const;

    // RVA: 0x2B09 | Ordinal: 11018
        void setHeight(float);

    // RVA: 0x2C7C | Ordinal: 11389
        void setRadius(float);

    // RVA: 0x41C | Ordinal: 1053
        void _FXGLCylinder(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLCYLINDER_HPP
