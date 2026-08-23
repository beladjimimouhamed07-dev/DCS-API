#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXImageFrame
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXImageFrame
{
public:

    // RVA: 0x194 | Ordinal: 405
        void FXImageFrame(void);

    // RVA: 0x195 | Ordinal: 406
        void FXImageFrame(class FX::FXComposite *, class FX::FXImage *, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xBC8 | Ordinal: 3017
        void create(void);

    // RVA: 0x1123 | Ordinal: 4388
        void getDefaultHeight(void);

    // RVA: 0x1179 | Ordinal: 4474
        void getDefaultWidth(void);

    // RVA: 0x12BB | Ordinal: 4796
        void getImage(void) const;

    // RVA: 0x1326 | Ordinal: 4903
        void getJustify(void) const;

    // RVA: 0x13FF | Ordinal: 5120
        void getMetaClass(void) const;

    // RVA: 0x177F | Ordinal: 6016
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AF6 | Ordinal: 6903
        void load(class FX::FXStream &);

    // RVA: 0x1C3C | Ordinal: 7229
        void manufacture(void);

    // RVA: 0x246C | Ordinal: 9325
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2827 | Ordinal: 10280
        void save(class FX::FXStream &) const;

    // RVA: 0x2B5D | Ordinal: 11102
        void setImage(class FX::FXImage *);

    // RVA: 0x2BB7 | Ordinal: 11192
        void setJustify(unsigned int);

    // RVA: 0x43E | Ordinal: 1087
        void _FXImageFrame(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXIMAGEFRAME_HPP
