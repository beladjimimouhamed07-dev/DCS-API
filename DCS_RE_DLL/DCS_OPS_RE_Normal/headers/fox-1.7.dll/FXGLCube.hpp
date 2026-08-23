#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGLCube
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGLCube
{
public:

    // RVA: 0x13F | Ordinal: 320
        void FXGLCube(void);

    // RVA: 0x140 | Ordinal: 321
        void FXGLCube(class FX::FXGLCube const &);

    // RVA: 0x141 | Ordinal: 322
        void FXGLCube(float, float, float, float, float, float);

    // RVA: 0x142 | Ordinal: 323
        void FXGLCube(float, float, float, float, float, float, struct FX::FXMaterial const &);

    // RVA: 0xB85 | Ordinal: 2950
        void copy(void);

    // RVA: 0xDDD | Ordinal: 3550
        void drawshape(class FX::FXGLViewer *);

    // RVA: 0x11BA | Ordinal: 4539
        void getDepth(void) const;

    // RVA: 0x1260 | Ordinal: 4705
        void getHeight(void) const;

    // RVA: 0x13E2 | Ordinal: 5091
        void getMetaClass(void) const;

    // RVA: 0x16BF | Ordinal: 5824
        void getWidth(void) const;

    // RVA: 0x1761 | Ordinal: 5986
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AE2 | Ordinal: 6883
        void load(class FX::FXStream &);

    // RVA: 0x1C21 | Ordinal: 7202
        void manufacture(void);

    // RVA: 0x2813 | Ordinal: 10260
        void save(class FX::FXStream &) const;

    // RVA: 0x2A4D | Ordinal: 10830
        void setDepth(float);

    // RVA: 0x2B08 | Ordinal: 11017
        void setHeight(float);

    // RVA: 0x2DDB | Ordinal: 11740
        void setWidth(float);

    // RVA: 0x41B | Ordinal: 1052
        void _FXGLCube(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLCUBE_HPP
