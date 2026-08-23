#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCURCursor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCURCursor
{
public:

    // RVA: 0x6D | Ordinal: 110
        void FXCURCursor(void);

    // RVA: 0x6E | Ordinal: 111
        void FXCURCursor(class FX::FXApp *, void const *);

    // RVA: 0x13A5 | Ordinal: 5030
        void getMetaClass(void) const;

    // RVA: 0x1723 | Ordinal: 5924
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B59 | Ordinal: 7002
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1BE7 | Ordinal: 7144
        void manufacture(void);

    // RVA: 0x2885 | Ordinal: 10374
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x3C9 | Ordinal: 970
        void _FXCURCursor(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCURCURSOR_HPP
