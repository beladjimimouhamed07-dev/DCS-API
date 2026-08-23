#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCursor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCursor
{
public:

    // RVA: 0xA5 | Ordinal: 166
        void FXCursor(void);

    // RVA: 0xA6 | Ordinal: 167
        void FXCursor(class FX::FXApp *, unsigned char const *, unsigned char const *, int, int, int, int);

    // RVA: 0xA7 | Ordinal: 168
        void FXCursor(class FX::FXApp *, unsigned int const *, int, int, int, int);

    // RVA: 0xA8 | Ordinal: 169
        void FXCursor(class FX::FXApp *, enum FX::FXStockCursor);

    // RVA: 0xBAE | Ordinal: 2991
        void create(void);

    // RVA: 0xC6A | Ordinal: 3179
        void destroy(void);

    // RVA: 0xC96 | Ordinal: 3223
        void detach(void);

    // RVA: 0x125C | Ordinal: 4701
        void getHeight(void) const;

    // RVA: 0x12A0 | Ordinal: 4769
        void getHotX(void) const;

    // RVA: 0x12A1 | Ordinal: 4770
        void getHotY(void) const;

    // RVA: 0x13BA | Ordinal: 5051
        void getMetaClass(void) const;

    // RVA: 0x14D1 | Ordinal: 5330
        void getOptions(void) const;

    // RVA: 0x16BC | Ordinal: 5821
        void getWidth(void) const;

    // RVA: 0x1738 | Ordinal: 5945
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x190B | Ordinal: 6412
        void isColor(void) const;

    // RVA: 0x19BE | Ordinal: 6591
        void isOwned(void) const;

    // RVA: 0x1ABC | Ordinal: 6845
        void load(class FX::FXStream &);

    // RVA: 0x1B5A | Ordinal: 7003
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1BFB | Ordinal: 7164
        void manufacture(void);

    // RVA: 0x2732 | Ordinal: 10035
        void release(void);

    // RVA: 0x27EE | Ordinal: 10223
        void save(class FX::FXStream &) const;

    // RVA: 0x2886 | Ordinal: 10375
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x2B40 | Ordinal: 11073
        void setHotX(int);

    // RVA: 0x2B41 | Ordinal: 11074
        void setHotY(int);

    // RVA: 0x2C35 | Ordinal: 11318
        void setOptions(unsigned int);

    // RVA: 0x2C44 | Ordinal: 11333
        void setOwned(bool);

    // RVA: 0x3E2 | Ordinal: 995
        void _FXCursor(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCURSOR_HPP
