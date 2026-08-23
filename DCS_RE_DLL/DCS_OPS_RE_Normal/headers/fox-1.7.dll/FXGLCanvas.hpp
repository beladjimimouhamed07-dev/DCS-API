#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGLCanvas
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGLCanvas
{
public:

    // RVA: 0x135 | Ordinal: 310
        void FXGLCanvas(void);

    // RVA: 0x136 | Ordinal: 311
        void FXGLCanvas(class FX::FXComposite *, class FX::FXGLContext *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x137 | Ordinal: 312
        void FXGLCanvas(class FX::FXComposite *, class FX::FXGLVisual *, class FX::FXGLCanvas *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x138 | Ordinal: 313
        void FXGLCanvas(class FX::FXComposite *, class FX::FXGLVisual *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x930 | Ordinal: 2353
        void GetClass(void) const;

    // RVA: 0xBBB | Ordinal: 3004
        void create(void);

    // RVA: 0xC71 | Ordinal: 3186
        void destroy(void);

    // RVA: 0xC9F | Ordinal: 3232
        void detach(void);

    // RVA: 0x10C6 | Ordinal: 4295
        void getContext(void) const;

    // RVA: 0x13DF | Ordinal: 5088
        void getMetaClass(void) const;

    // RVA: 0x175E | Ordinal: 5983
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1911 | Ordinal: 6418
        void isCurrent(void) const;

    // RVA: 0x19ED | Ordinal: 6638
        void isShared(void) const;

    // RVA: 0x1ADF | Ordinal: 6880
        void load(class FX::FXStream &);

    // RVA: 0x1BA8 | Ordinal: 7081
        void makeCurrent(void);

    // RVA: 0x1BB0 | Ordinal: 7089
        void makeNonCurrent(void);

    // RVA: 0x1C1E | Ordinal: 7199
        void manufacture(void);

    // RVA: 0x2810 | Ordinal: 10257
        void save(class FX::FXStream &) const;

    // RVA: 0x2A04 | Ordinal: 10757
        void setContext(class FX::FXGLContext *, bool);

    // RVA: 0x2E81 | Ordinal: 11906
        void swapBuffers(void);

    // RVA: 0x418 | Ordinal: 1049
        void _FXGLCanvas(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLCANVAS_HPP
