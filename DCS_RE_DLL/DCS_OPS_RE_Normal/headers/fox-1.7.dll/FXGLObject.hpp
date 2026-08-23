#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGLObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGLObject
{
public:

    // RVA: 0x14C | Ordinal: 333
        void FXGLObject(class FX::FXGLObject const &);

    // RVA: 0x14D | Ordinal: 334
        void FXGLObject(void);

    // RVA: 0xA6D | Ordinal: 2670
        void bounds(class FX::FXRangef &);

    // RVA: 0xA78 | Ordinal: 2681
        void canDelete(void) const;

    // RVA: 0xA7B | Ordinal: 2684
        void canDrag(void) const;

    // RVA: 0xB89 | Ordinal: 2954
        void copy(void);

    // RVA: 0xD0D | Ordinal: 3342
        void drag(class FX::FXGLViewer *, int, int, int, int);

    // RVA: 0xD16 | Ordinal: 3351
        void draw(class FX::FXGLViewer *);

    // RVA: 0x13E6 | Ordinal: 5095
        void getMetaClass(void) const;

    // RVA: 0x1765 | Ordinal: 5990
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1833 | Ordinal: 6196
        void hit(class FX::FXGLViewer *);

    // RVA: 0x184D | Ordinal: 6222
        void identify(unsigned int *);

    // RVA: 0x1C25 | Ordinal: 7206
        void manufacture(void);

    // RVA: 0x41F | Ordinal: 1056
        void _FXGLObject(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLOBJECT_HPP
