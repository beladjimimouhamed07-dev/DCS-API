#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGLLine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGLLine
{
public:

    // RVA: 0x149 | Ordinal: 330
        void FXGLLine(class FX::FXGLLine const &);

    // RVA: 0x14A | Ordinal: 331
        void FXGLLine(float, float, float, float, float, float);

    // RVA: 0x14B | Ordinal: 332
        void FXGLLine(void);

    // RVA: 0xA6C | Ordinal: 2669
        void bounds(class FX::FXRangef &);

    // RVA: 0xB88 | Ordinal: 2953
        void copy(void);

    // RVA: 0xD15 | Ordinal: 3350
        void draw(class FX::FXGLViewer *);

    // RVA: 0x13E5 | Ordinal: 5094
        void getMetaClass(void) const;

    // RVA: 0x1764 | Ordinal: 5989
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1832 | Ordinal: 6195
        void hit(class FX::FXGLViewer *);

    // RVA: 0x1AE5 | Ordinal: 6886
        void load(class FX::FXStream &);

    // RVA: 0x1C24 | Ordinal: 7205
        void manufacture(void);

    // RVA: 0x2816 | Ordinal: 10263
        void save(class FX::FXStream &) const;

    // RVA: 0x41E | Ordinal: 1055
        void _FXGLLine(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLLINE_HPP
