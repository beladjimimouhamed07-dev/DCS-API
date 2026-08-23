#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXBitmap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXBitmap
{
public:

    // RVA: 0x35 | Ordinal: 54
        void FXBitmap(void);

    // RVA: 0x36 | Ordinal: 55
        void FXBitmap(class FX::FXApp *, void const *, unsigned int, int, int);

    // RVA: 0x935 | Ordinal: 2358
        void GetDC(void) const;

    // RVA: 0x93A | Ordinal: 2363
        void ReleaseDC(void *) const;

    // RVA: 0xBA0 | Ordinal: 2977
        void create(void);

    // RVA: 0xBFB | Ordinal: 3068
        void crop(int, int, int, int, bool);

    // RVA: 0xC65 | Ordinal: 3174
        void destroy(void);

    // RVA: 0xC8C | Ordinal: 3213
        void detach(void);

    // RVA: 0xEB8 | Ordinal: 3769
        void fill(bool);

    // RVA: 0x10F6 | Ordinal: 4343
        void getData(void) const;

    // RVA: 0x1389 | Ordinal: 5002
        void getMetaClass(void) const;

    // RVA: 0x14D0 | Ordinal: 5329
        void getOptions(void) const;

    // RVA: 0x14FE | Ordinal: 5375
        void getPixel(int, int) const;

    // RVA: 0x1707 | Ordinal: 5896
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x19BD | Ordinal: 6590
        void isOwned(void) const;

    // RVA: 0x1AAF | Ordinal: 6832
        void load(class FX::FXStream &);

    // RVA: 0x1B58 | Ordinal: 7001
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1BCB | Ordinal: 7116
        void manufacture(void);

    // RVA: 0x1E96 | Ordinal: 7831
        void mirror(bool, bool);

    // RVA: 0x2731 | Ordinal: 10034
        void release(void);

    // RVA: 0x2762 | Ordinal: 10083
        void render(void);

    // RVA: 0x278F | Ordinal: 10128
        void resize(int, int);

    // RVA: 0x279F | Ordinal: 10144
        void restore(void);

    // RVA: 0x27C7 | Ordinal: 10184
        void rotate(int);

    // RVA: 0x27E1 | Ordinal: 10210
        void save(class FX::FXStream &) const;

    // RVA: 0x2884 | Ordinal: 10373
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x28AE | Ordinal: 10415
        void scale(int, int);

    // RVA: 0x2A31 | Ordinal: 10802
        void setData(unsigned char *, unsigned int);

    // RVA: 0x2A32 | Ordinal: 10803
        void setData(unsigned char *, unsigned int, int, int);

    // RVA: 0x2C34 | Ordinal: 11317
        void setOptions(unsigned int);

    // RVA: 0x2C43 | Ordinal: 11332
        void setOwned(bool);

    // RVA: 0x2C62 | Ordinal: 11363
        void setPixel(int, int, bool);

    // RVA: 0x3AD | Ordinal: 942
        void _FXBitmap(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXBITMAP_HPP
