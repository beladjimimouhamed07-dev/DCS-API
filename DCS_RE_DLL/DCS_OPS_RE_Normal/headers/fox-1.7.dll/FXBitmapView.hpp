#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXBitmapView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXBitmapView
{
public:

    // RVA: 0x39 | Ordinal: 58
        void FXBitmapView(void);

    // RVA: 0x3A | Ordinal: 59
        void FXBitmapView(class FX::FXComposite *, class FX::FXBitmap *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0xA7E | Ordinal: 2687
        void canFocus(void) const;

    // RVA: 0xBA2 | Ordinal: 2979
        void create(void);

    // RVA: 0xC8D | Ordinal: 3214
        void detach(void);

    // RVA: 0xFFF | Ordinal: 4096
        void getAlignment(void) const;

    // RVA: 0x1056 | Ordinal: 4183
        void getBitmap(void) const;

    // RVA: 0x10AB | Ordinal: 4268
        void getContentHeight(void);

    // RVA: 0x10B8 | Ordinal: 4281
        void getContentWidth(void);

    // RVA: 0x138B | Ordinal: 5004
        void getMetaClass(void) const;

    // RVA: 0x14C7 | Ordinal: 5320
        void getOffColor(void) const;

    // RVA: 0x14C9 | Ordinal: 5322
        void getOnColor(void) const;

    // RVA: 0x1709 | Ordinal: 5898
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A3D | Ordinal: 6718
        void layout(void);

    // RVA: 0x1AB1 | Ordinal: 6834
        void load(class FX::FXStream &);

    // RVA: 0x1BCD | Ordinal: 7118
        void manufacture(void);

    // RVA: 0x2421 | Ordinal: 9250
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2457 | Ordinal: 9304
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24E9 | Ordinal: 9450
        void onRightBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24F6 | Ordinal: 9463
        void onRightBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27E3 | Ordinal: 10212
        void save(class FX::FXStream &) const;

    // RVA: 0x296B | Ordinal: 10604
        void setAlignment(unsigned int);

    // RVA: 0x29BC | Ordinal: 10685
        void setBitmap(class FX::FXBitmap *);

    // RVA: 0x2C29 | Ordinal: 11306
        void setOffColor(unsigned int);

    // RVA: 0x2C2B | Ordinal: 11308
        void setOnColor(unsigned int);

    // RVA: 0x3AF | Ordinal: 944
        void _FXBitmapView(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXBITMAPVIEW_HPP
