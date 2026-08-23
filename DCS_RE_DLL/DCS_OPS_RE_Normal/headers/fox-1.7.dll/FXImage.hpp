#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXImage
{
public:

    // RVA: 0x190 | Ordinal: 401
        void FXImage(void);

    // RVA: 0x191 | Ordinal: 402
        void FXImage(class FX::FXApp *, unsigned int const *, unsigned int, int, int);

    // RVA: 0x937 | Ordinal: 2360
        void GetDC(void) const;

    // RVA: 0x93C | Ordinal: 2365
        void ReleaseDC(void *) const;

    // RVA: 0xA61 | Ordinal: 2658
        void blend(unsigned int);

    // RVA: 0xB18 | Ordinal: 2841
        void colorize(unsigned int);

    // RVA: 0xBC7 | Ordinal: 3016
        void create(void);

    // RVA: 0xBFC | Ordinal: 3069
        void crop(int, int, int, int, unsigned int);

    // RVA: 0xC78 | Ordinal: 3193
        void destroy(void);

    // RVA: 0xCAB | Ordinal: 3244
        void detach(void);

    // RVA: 0xE86 | Ordinal: 3719
        void fade(unsigned int, int);

    // RVA: 0xEB9 | Ordinal: 3770
        void fill(unsigned int);

    // RVA: 0x10FB | Ordinal: 4348
        void getData(void) const;

    // RVA: 0x13FE | Ordinal: 5119
        void getMetaClass(void) const;

    // RVA: 0x14D2 | Ordinal: 5331
        void getOptions(void) const;

    // RVA: 0x14FF | Ordinal: 5376
        void getPixel(int, int) const;

    // RVA: 0x16E5 | Ordinal: 5862
        void gradient(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x177E | Ordinal: 6015
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1804 | Ordinal: 6149
        void hasAlpha(void) const;

    // RVA: 0x1828 | Ordinal: 6185
        void hgradient(unsigned int, unsigned int);

    // RVA: 0x18E5 | Ordinal: 6374
        void invert(void);

    // RVA: 0x19BF | Ordinal: 6592
        void isOwned(void) const;

    // RVA: 0x1AF5 | Ordinal: 6902
        void load(class FX::FXStream &);

    // RVA: 0x1B66 | Ordinal: 7015
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C3B | Ordinal: 7228
        void manufacture(void);

    // RVA: 0x1E97 | Ordinal: 7832
        void mirror(bool, bool);

    // RVA: 0x2733 | Ordinal: 10036
        void release(void);

    // RVA: 0x2764 | Ordinal: 10085
        void render(void);

    // RVA: 0x2795 | Ordinal: 10134
        void resize(int, int);

    // RVA: 0x27A0 | Ordinal: 10145
        void restore(void);

    // RVA: 0x27C8 | Ordinal: 10185
        void rotate(int);

    // RVA: 0x2826 | Ordinal: 10279
        void save(class FX::FXStream &) const;

    // RVA: 0x2892 | Ordinal: 10387
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x28AF | Ordinal: 10416
        void scale(int, int, int);

    // RVA: 0x2A36 | Ordinal: 10807
        void setData(unsigned int *, unsigned int);

    // RVA: 0x2A37 | Ordinal: 10808
        void setData(unsigned int *, unsigned int, int, int);

    // RVA: 0x2C36 | Ordinal: 11319
        void setOptions(unsigned int);

    // RVA: 0x2C45 | Ordinal: 11334
        void setOwned(bool);

    // RVA: 0x2C63 | Ordinal: 11364
        void setPixel(int, int, unsigned int);

    // RVA: 0x2F5D | Ordinal: 12126
        void vgradient(unsigned int, unsigned int);

    // RVA: 0x3008 | Ordinal: 12297
        void xshear(int, unsigned int);

    // RVA: 0x3014 | Ordinal: 12309
        void yshear(int, unsigned int);

    // RVA: 0x43C | Ordinal: 1085
        void _FXImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXIMAGE_HPP
