#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXFrame
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXFrame
{
public:

    // RVA: 0x12D | Ordinal: 302
        void FXFrame(void);

    // RVA: 0x12E | Ordinal: 303
        void FXFrame(class FX::FXComposite *, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xD31 | Ordinal: 3378
        void drawBorderRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD44 | Ordinal: 3397
        void drawDoubleRaisedRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD48 | Ordinal: 3401
        void drawDoubleSunkenRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD56 | Ordinal: 3415
        void drawFrame(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD5B | Ordinal: 3420
        void drawGrooveRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD9C | Ordinal: 3485
        void drawRaisedRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDA7 | Ordinal: 3496
        void drawRidgeRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDBB | Ordinal: 3516
        void drawSunkenRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0x104C | Ordinal: 4173
        void getBaseColor(void) const;

    // RVA: 0x105A | Ordinal: 4187
        void getBorderColor(void) const;

    // RVA: 0x1061 | Ordinal: 4194
        void getBorderWidth(void) const;

    // RVA: 0x111D | Ordinal: 4382
        void getDefaultHeight(void);

    // RVA: 0x1173 | Ordinal: 4468
        void getDefaultWidth(void);

    // RVA: 0x122E | Ordinal: 4655
        void getFrameStyle(void) const;

    // RVA: 0x128F | Ordinal: 4752
        void getHiliteColor(void) const;

    // RVA: 0x13DB | Ordinal: 5084
        void getMetaClass(void) const;

    // RVA: 0x14E0 | Ordinal: 5345
        void getPadBottom(void) const;

    // RVA: 0x14E3 | Ordinal: 5348
        void getPadLeft(void) const;

    // RVA: 0x14E6 | Ordinal: 5351
        void getPadRight(void) const;

    // RVA: 0x14E9 | Ordinal: 5354
        void getPadTop(void) const;

    // RVA: 0x15A4 | Ordinal: 5541
        void getShadowColor(void) const;

    // RVA: 0x175A | Ordinal: 5979
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1ADE | Ordinal: 6879
        void load(class FX::FXStream &);

    // RVA: 0x1C1A | Ordinal: 7195
        void manufacture(void);

    // RVA: 0x2465 | Ordinal: 9318
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x280F | Ordinal: 10256
        void save(class FX::FXStream &) const;

    // RVA: 0x29B3 | Ordinal: 10676
        void setBaseColor(unsigned int);

    // RVA: 0x29C0 | Ordinal: 10689
        void setBorderColor(unsigned int);

    // RVA: 0x2AD4 | Ordinal: 10965
        void setFrameStyle(unsigned int);

    // RVA: 0x2B32 | Ordinal: 11059
        void setHiliteColor(unsigned int);

    // RVA: 0x2C49 | Ordinal: 11338
        void setPadBottom(int);

    // RVA: 0x2C4C | Ordinal: 11341
        void setPadLeft(int);

    // RVA: 0x2C4F | Ordinal: 11344
        void setPadRight(int);

    // RVA: 0x2C52 | Ordinal: 11347
        void setPadTop(int);

    // RVA: 0x2CE7 | Ordinal: 11496
        void setShadowColor(unsigned int);

    // RVA: 0x414 | Ordinal: 1045
        void _FXFrame(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXFRAME_HPP
