#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGLContext
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGLContext
{
public:

    // RVA: 0x13D | Ordinal: 318
        void FXGLContext(void);

    // RVA: 0x13E | Ordinal: 319
        void FXGLContext(class FX::FXApp *, class FX::FXGLVisual *, class FX::FXGLContext *);

    // RVA: 0xA59 | Ordinal: 2650
        void begin(class FX::FXDrawable *);

    // RVA: 0xBBC | Ordinal: 3005
        void create(void);

    // RVA: 0xC72 | Ordinal: 3187
        void destroy(void);

    // RVA: 0xCA0 | Ordinal: 3233
        void detach(void);

    // RVA: 0xDD9 | Ordinal: 3546
        void drawable(void) const;

    // RVA: 0xE1D | Ordinal: 3614
        void end(void);

    // RVA: 0x13E1 | Ordinal: 5090
        void getMetaClass(void) const;

    // RVA: 0x15AD | Ordinal: 5550
        void getShared(void) const;

    // RVA: 0x16AF | Ordinal: 5808
        void getVisual(void) const;

    // RVA: 0x1760 | Ordinal: 5985
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x180A | Ordinal: 6155
        void hasCurrent(void);

    // RVA: 0x1912 | Ordinal: 6419
        void isCurrent(void) const;

    // RVA: 0x1920 | Ordinal: 6433
        void isDoubleBuffer(void) const;

    // RVA: 0x19F5 | Ordinal: 6646
        void isStereo(void) const;

    // RVA: 0x1AE1 | Ordinal: 6882
        void load(class FX::FXStream &);

    // RVA: 0x1C20 | Ordinal: 7201
        void manufacture(void);

    // RVA: 0x2812 | Ordinal: 10259
        void save(class FX::FXStream &) const;

    // RVA: 0x2CF3 | Ordinal: 11508
        void setShared(class FX::FXGLContext *);

    // RVA: 0x2DD2 | Ordinal: 11731
        void setVisual(class FX::FXGLVisual *);

    // RVA: 0x2E82 | Ordinal: 11907
        void swapBuffers(void);

    // RVA: 0x41A | Ordinal: 1051
        void _FXGLContext(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLCONTEXT_HPP
