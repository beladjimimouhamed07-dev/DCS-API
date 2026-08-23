#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXIconSource
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXIconSource
{
public:

    // RVA: 0x18B | Ordinal: 396
        void FXIconSource(class FX::FXIconSource &&);

    // RVA: 0x18C | Ordinal: 397
        void FXIconSource(class FX::FXIconSource const &);

    // RVA: 0x18D | Ordinal: 398
        void FXIconSource(void);

    // RVA: 0x13FC | Ordinal: 5117
        void getMetaClass(void) const;

    // RVA: 0x177C | Ordinal: 6013
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1846 | Ordinal: 6215
        void iconFromStream(class FX::FXApp *, class FX::FXStream &) const;

    // RVA: 0x1847 | Ordinal: 6216
        void iconFromType(class FX::FXApp *, class FX::FXString const &) const;

    // RVA: 0x1858 | Ordinal: 6233
        void imageFromStream(class FX::FXApp *, class FX::FXStream &) const;

    // RVA: 0x1859 | Ordinal: 6234
        void imageFromType(class FX::FXApp *, class FX::FXString const &) const;

    // RVA: 0x1B4C | Ordinal: 6989
        void loadIconData(class FX::FXApp *, void const *, class FX::FXString const &) const;

    // RVA: 0x1B4D | Ordinal: 6990
        void loadIconFile(class FX::FXApp *, class FX::FXString const &, class FX::FXString const &) const;

    // RVA: 0x1B4E | Ordinal: 6991
        void loadIconStream(class FX::FXApp *, class FX::FXStream &, class FX::FXString const &) const;

    // RVA: 0x1B4F | Ordinal: 6992
        void loadImageData(class FX::FXApp *, void const *, class FX::FXString const &) const;

    // RVA: 0x1B50 | Ordinal: 6993
        void loadImageFile(class FX::FXApp *, class FX::FXString const &, class FX::FXString const &) const;

    // RVA: 0x1B51 | Ordinal: 6994
        void loadImageStream(class FX::FXApp *, class FX::FXStream &, class FX::FXString const &) const;

    // RVA: 0x1B7F | Ordinal: 7040
        void loadScaledIconData(class FX::FXApp *, void const *, int, int, class FX::FXString const &) const;

    // RVA: 0x1B80 | Ordinal: 7041
        void loadScaledIconFile(class FX::FXApp *, class FX::FXString const &, int, int, class FX::FXString const &) const;

    // RVA: 0x1B81 | Ordinal: 7042
        void loadScaledIconStream(class FX::FXApp *, class FX::FXStream &, int, int, class FX::FXString const &) const;

    // RVA: 0x1B82 | Ordinal: 7043
        void loadScaledImageData(class FX::FXApp *, void const *, int, int, class FX::FXString const &) const;

    // RVA: 0x1B83 | Ordinal: 7044
        void loadScaledImageFile(class FX::FXApp *, class FX::FXString const &, int, int, class FX::FXString const &) const;

    // RVA: 0x1B84 | Ordinal: 7045
        void loadScaledImageStream(class FX::FXApp *, class FX::FXStream &, int, int, class FX::FXString const &) const;

    // RVA: 0x1C3A | Ordinal: 7227
        void manufacture(void);

    // RVA: 0x28C0 | Ordinal: 10433
        void scaleToSize(class FX::FXImage *, int, int) const;

    // RVA: 0x43A | Ordinal: 1083
        void _FXIconSource(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXICONSOURCE_HPP
