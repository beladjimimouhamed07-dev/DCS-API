#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXImageView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXImageView
{
public:

    // RVA: 0x196 | Ordinal: 407
        void FXImageView(void);

    // RVA: 0x197 | Ordinal: 408
        void FXImageView(class FX::FXComposite *, class FX::FXImage *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0xA89 | Ordinal: 2698
        void canFocus(void) const;

    // RVA: 0xBC9 | Ordinal: 3018
        void create(void);

    // RVA: 0xCAC | Ordinal: 3245
        void detach(void);

    // RVA: 0x1000 | Ordinal: 4097
        void getAlignment(void) const;

    // RVA: 0x10AF | Ordinal: 4272
        void getContentHeight(void);

    // RVA: 0x10BC | Ordinal: 4285
        void getContentWidth(void);

    // RVA: 0x12BC | Ordinal: 4797
        void getImage(void) const;

    // RVA: 0x1400 | Ordinal: 5121
        void getMetaClass(void) const;

    // RVA: 0x1780 | Ordinal: 6017
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A4C | Ordinal: 6733
        void layout(void);

    // RVA: 0x1AF7 | Ordinal: 6904
        void load(class FX::FXStream &);

    // RVA: 0x1C3D | Ordinal: 7230
        void manufacture(void);

    // RVA: 0x242E | Ordinal: 9263
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x246D | Ordinal: 9326
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24EE | Ordinal: 9455
        void onRightBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24FB | Ordinal: 9468
        void onRightBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2828 | Ordinal: 10281
        void save(class FX::FXStream &) const;

    // RVA: 0x296C | Ordinal: 10605
        void setAlignment(unsigned int);

    // RVA: 0x2B5E | Ordinal: 11103
        void setImage(class FX::FXImage *);

    // RVA: 0x43F | Ordinal: 1088
        void _FXImageView(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXIMAGEVIEW_HPP
