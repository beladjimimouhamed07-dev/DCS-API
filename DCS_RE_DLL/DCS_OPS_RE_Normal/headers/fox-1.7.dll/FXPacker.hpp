#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXPacker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXPacker
{
public:

    // RVA: 0x23F | Ordinal: 576
        void FXPacker(void);

    // RVA: 0x240 | Ordinal: 577
        void FXPacker(class FX::FXComposite *, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0xD32 | Ordinal: 3379
        void drawBorderRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD45 | Ordinal: 3398
        void drawDoubleRaisedRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD49 | Ordinal: 3402
        void drawDoubleSunkenRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD57 | Ordinal: 3416
        void drawFrame(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD5C | Ordinal: 3421
        void drawGrooveRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD9D | Ordinal: 3486
        void drawRaisedRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDA8 | Ordinal: 3497
        void drawRidgeRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDBC | Ordinal: 3517
        void drawSunkenRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0x104E | Ordinal: 4175
        void getBaseColor(void) const;

    // RVA: 0x105C | Ordinal: 4189
        void getBorderColor(void) const;

    // RVA: 0x1062 | Ordinal: 4195
        void getBorderWidth(void) const;

    // RVA: 0x1139 | Ordinal: 4410
        void getDefaultHeight(void);

    // RVA: 0x118F | Ordinal: 4496
        void getDefaultWidth(void);

    // RVA: 0x122F | Ordinal: 4656
        void getFrameStyle(void) const;

    // RVA: 0x124A | Ordinal: 4683
        void getHSpacing(void) const;

    // RVA: 0x1293 | Ordinal: 4756
        void getHiliteColor(void) const;

    // RVA: 0x142B | Ordinal: 5164
        void getMetaClass(void) const;

    // RVA: 0x14DE | Ordinal: 5343
        void getPackingHints(void) const;

    // RVA: 0x14E1 | Ordinal: 5346
        void getPadBottom(void) const;

    // RVA: 0x14E4 | Ordinal: 5349
        void getPadLeft(void) const;

    // RVA: 0x14E7 | Ordinal: 5352
        void getPadRight(void) const;

    // RVA: 0x14EA | Ordinal: 5355
        void getPadTop(void) const;

    // RVA: 0x15A8 | Ordinal: 5545
        void getShadowColor(void) const;

    // RVA: 0x167E | Ordinal: 5759
        void getVSpacing(void) const;

    // RVA: 0x17AB | Ordinal: 6060
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A54 | Ordinal: 6741
        void layout(void);

    // RVA: 0x1B16 | Ordinal: 6935
        void load(class FX::FXStream &);

    // RVA: 0x1C68 | Ordinal: 7273
        void manufacture(void);

    // RVA: 0x22AD | Ordinal: 8878
        void onFocusDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22CE | Ordinal: 8911
        void onFocusLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22F8 | Ordinal: 8953
        void onFocusRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x230C | Ordinal: 8973
        void onFocusUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2482 | Ordinal: 9347
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2847 | Ordinal: 10312
        void save(class FX::FXStream &) const;

    // RVA: 0x29B5 | Ordinal: 10678
        void setBaseColor(unsigned int);

    // RVA: 0x29C2 | Ordinal: 10691
        void setBorderColor(unsigned int);

    // RVA: 0x2AD5 | Ordinal: 10966
        void setFrameStyle(unsigned int);

    // RVA: 0x2AF1 | Ordinal: 10994
        void setHSpacing(int);

    // RVA: 0x2B36 | Ordinal: 11063
        void setHiliteColor(unsigned int);

    // RVA: 0x2C47 | Ordinal: 11336
        void setPackingHints(unsigned int);

    // RVA: 0x2C4A | Ordinal: 11339
        void setPadBottom(int);

    // RVA: 0x2C4D | Ordinal: 11342
        void setPadLeft(int);

    // RVA: 0x2C50 | Ordinal: 11345
        void setPadRight(int);

    // RVA: 0x2C53 | Ordinal: 11348
        void setPadTop(int);

    // RVA: 0x2CEB | Ordinal: 11500
        void setShadowColor(unsigned int);

    // RVA: 0x2DB7 | Ordinal: 11704
        void setVSpacing(int);

    // RVA: 0x47B | Ordinal: 1148
        void _FXPacker(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPACKER_HPP
