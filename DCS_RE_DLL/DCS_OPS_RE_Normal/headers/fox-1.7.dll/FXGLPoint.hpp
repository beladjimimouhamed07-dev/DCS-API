#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGLPoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGLPoint
{
public:

    // RVA: 0x14E | Ordinal: 335
        void FXGLPoint(class FX::FXGLPoint const &);

    // RVA: 0x14F | Ordinal: 336
        void FXGLPoint(float, float, float);

    // RVA: 0x150 | Ordinal: 337
        void FXGLPoint(void);

    // RVA: 0xA6E | Ordinal: 2671
        void bounds(class FX::FXRangef &);

    // RVA: 0xB8A | Ordinal: 2955
        void copy(void);

    // RVA: 0xD17 | Ordinal: 3352
        void draw(class FX::FXGLViewer *);

    // RVA: 0x13E7 | Ordinal: 5096
        void getMetaClass(void) const;

    // RVA: 0x1766 | Ordinal: 5991
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1834 | Ordinal: 6197
        void hit(class FX::FXGLViewer *);

    // RVA: 0x1AE6 | Ordinal: 6887
        void load(class FX::FXStream &);

    // RVA: 0x1C26 | Ordinal: 7207
        void manufacture(void);

    // RVA: 0x2817 | Ordinal: 10264
        void save(class FX::FXStream &) const;

    // RVA: 0x420 | Ordinal: 1057
        void _FXGLPoint(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLPOINT_HPP
