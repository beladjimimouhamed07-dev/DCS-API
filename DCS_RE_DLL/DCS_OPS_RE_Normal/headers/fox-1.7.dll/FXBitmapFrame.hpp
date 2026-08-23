#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXBitmapFrame
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXBitmapFrame
{
public:

    // RVA: 0x37 | Ordinal: 56
        void FXBitmapFrame(void);

    // RVA: 0x38 | Ordinal: 57
        void FXBitmapFrame(class FX::FXComposite *, class FX::FXBitmap *, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xBA1 | Ordinal: 2978
        void create(void);

    // RVA: 0x1055 | Ordinal: 4182
        void getBitmap(void) const;

    // RVA: 0x110E | Ordinal: 4367
        void getDefaultHeight(void);

    // RVA: 0x1164 | Ordinal: 4453
        void getDefaultWidth(void);

    // RVA: 0x1320 | Ordinal: 4897
        void getJustify(void) const;

    // RVA: 0x138A | Ordinal: 5003
        void getMetaClass(void) const;

    // RVA: 0x14C6 | Ordinal: 5319
        void getOffColor(void) const;

    // RVA: 0x14C8 | Ordinal: 5321
        void getOnColor(void) const;

    // RVA: 0x1708 | Ordinal: 5897
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AB0 | Ordinal: 6833
        void load(class FX::FXStream &);

    // RVA: 0x1BCC | Ordinal: 7117
        void manufacture(void);

    // RVA: 0x2456 | Ordinal: 9303
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27E2 | Ordinal: 10211
        void save(class FX::FXStream &) const;

    // RVA: 0x29BB | Ordinal: 10684
        void setBitmap(class FX::FXBitmap *);

    // RVA: 0x2BB1 | Ordinal: 11186
        void setJustify(unsigned int);

    // RVA: 0x2C28 | Ordinal: 11305
        void setOffColor(unsigned int);

    // RVA: 0x2C2A | Ordinal: 11307
        void setOnColor(unsigned int);

    // RVA: 0x3AE | Ordinal: 943
        void _FXBitmapFrame(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXBITMAPFRAME_HPP
