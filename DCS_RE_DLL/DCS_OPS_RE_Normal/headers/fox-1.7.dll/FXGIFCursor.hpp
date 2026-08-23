#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGIFCursor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGIFCursor
{
public:

    // RVA: 0x12F | Ordinal: 304
        void FXGIFCursor(void);

    // RVA: 0x130 | Ordinal: 305
        void FXGIFCursor(class FX::FXApp *, void const *, int, int);

    // RVA: 0x13DC | Ordinal: 5085
        void getMetaClass(void) const;

    // RVA: 0x175B | Ordinal: 5980
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B5F | Ordinal: 7008
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C1B | Ordinal: 7196
        void manufacture(void);

    // RVA: 0x288B | Ordinal: 10380
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x415 | Ordinal: 1046
        void _FXGIFCursor(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGIFCURSOR_HPP
