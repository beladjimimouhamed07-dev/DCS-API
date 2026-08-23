#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGLVisual
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGLVisual
{
public:

    // RVA: 0x161 | Ordinal: 354
        void FXGLVisual(void);

    // RVA: 0x162 | Ordinal: 355
        void FXGLVisual(class FX::FXApp *, unsigned int);

    // RVA: 0xBBE | Ordinal: 3007
        void create(void);

    // RVA: 0xC73 | Ordinal: 3188
        void destroy(void);

    // RVA: 0xCA2 | Ordinal: 3235
        void detach(void);

    // RVA: 0xFE1 | Ordinal: 4066
        void getAccumAlphaSize(void) const;

    // RVA: 0xFE2 | Ordinal: 4067
        void getAccumBlueSize(void) const;

    // RVA: 0xFE3 | Ordinal: 4068
        void getAccumGreenSize(void) const;

    // RVA: 0xFE4 | Ordinal: 4069
        void getAccumRedSize(void) const;

    // RVA: 0xFED | Ordinal: 4078
        void getActualAccumAlphaSize(void) const;

    // RVA: 0xFEE | Ordinal: 4079
        void getActualAccumBlueSize(void) const;

    // RVA: 0xFEF | Ordinal: 4080
        void getActualAccumGreenSize(void) const;

    // RVA: 0xFF0 | Ordinal: 4081
        void getActualAccumRedSize(void) const;

    // RVA: 0xFF1 | Ordinal: 4082
        void getActualAlphaSize(void) const;

    // RVA: 0xFF2 | Ordinal: 4083
        void getActualBlueSize(void) const;

    // RVA: 0xFF3 | Ordinal: 4084
        void getActualDepthSize(void) const;

    // RVA: 0xFF6 | Ordinal: 4087
        void getActualGreenSize(void) const;

    // RVA: 0xFF7 | Ordinal: 4088
        void getActualMultiSamples(void) const;

    // RVA: 0xFF9 | Ordinal: 4090
        void getActualRedSize(void) const;

    // RVA: 0xFFD | Ordinal: 4094
        void getActualStencilSize(void) const;

    // RVA: 0x1001 | Ordinal: 4098
        void getAlphaSize(void) const;

    // RVA: 0x1058 | Ordinal: 4185
        void getBlueSize(void) const;

    // RVA: 0x11BC | Ordinal: 4541
        void getDepthSize(void) const;

    // RVA: 0x123B | Ordinal: 4668
        void getGreenSize(void) const;

    // RVA: 0x13EC | Ordinal: 5101
        void getMetaClass(void) const;

    // RVA: 0x1488 | Ordinal: 5257
        void getMultiSamples(void) const;

    // RVA: 0x152E | Ordinal: 5423
        void getRedSize(void) const;

    // RVA: 0x15D9 | Ordinal: 5594
        void getStencilSize(void) const;

    // RVA: 0x176B | Ordinal: 5996
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1814 | Ordinal: 6165
        void hasOpenGL(class FX::FXApp *);

    // RVA: 0x18EF | Ordinal: 6384
        void isAccelerated(void) const;

    // RVA: 0x1901 | Ordinal: 6402
        void isBufferSwapCopy(void) const;

    // RVA: 0x1921 | Ordinal: 6434
        void isDoubleBuffer(void) const;

    // RVA: 0x19F6 | Ordinal: 6647
        void isStereo(void) const;

    // RVA: 0x1AEB | Ordinal: 6892
        void load(class FX::FXStream &);

    // RVA: 0x1C2A | Ordinal: 7211
        void manufacture(void);

    // RVA: 0x1CC0 | Ordinal: 7361
        void matchSpecs(struct FX::FXGLVisual::FXGLSpecs const &);

    // RVA: 0x281C | Ordinal: 10269
        void save(class FX::FXStream &) const;

    // RVA: 0x2961 | Ordinal: 10594
        void setAccumAlphaSize(int);

    // RVA: 0x2962 | Ordinal: 10595
        void setAccumBlueSize(int);

    // RVA: 0x2963 | Ordinal: 10596
        void setAccumGreenSize(int);

    // RVA: 0x2964 | Ordinal: 10597
        void setAccumRedSize(int);

    // RVA: 0x296D | Ordinal: 10606
        void setAlphaSize(int);

    // RVA: 0x29BE | Ordinal: 10687
        void setBlueSize(int);

    // RVA: 0x2A4E | Ordinal: 10831
        void setDepthSize(int);

    // RVA: 0x2AE3 | Ordinal: 10980
        void setGreenSize(int);

    // RVA: 0x2C0A | Ordinal: 11275
        void setMultiSamples(int);

    // RVA: 0x2C89 | Ordinal: 11402
        void setRedSize(int);

    // RVA: 0x2D1D | Ordinal: 11550
        void setStencilSize(int);

    // RVA: 0x425 | Ordinal: 1062
        void _FXGLVisual(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLVISUAL_HPP
