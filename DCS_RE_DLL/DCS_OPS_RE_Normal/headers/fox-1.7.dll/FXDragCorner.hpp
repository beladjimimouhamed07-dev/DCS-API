#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDragCorner
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDragCorner
{
public:

    // RVA: 0xEA | Ordinal: 235
        void FXDragCorner(void);

    // RVA: 0xEB | Ordinal: 236
        void FXDragCorner(class FX::FXComposite *);

    // RVA: 0xBB3 | Ordinal: 2996
        void create(void);

    // RVA: 0x111B | Ordinal: 4380
        void getDefaultHeight(void);

    // RVA: 0x1171 | Ordinal: 4466
        void getDefaultWidth(void);

    // RVA: 0x128E | Ordinal: 4751
        void getHiliteColor(void) const;

    // RVA: 0x13CC | Ordinal: 5069
        void getMetaClass(void) const;

    // RVA: 0x15A3 | Ordinal: 5540
        void getShadowColor(void) const;

    // RVA: 0x174B | Ordinal: 5964
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AC7 | Ordinal: 6856
        void load(class FX::FXStream &);

    // RVA: 0x1C0C | Ordinal: 7181
        void manufacture(void);

    // RVA: 0x23B4 | Ordinal: 9141
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23DC | Ordinal: 9181
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2428 | Ordinal: 9257
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2463 | Ordinal: 9316
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27F8 | Ordinal: 10233
        void save(class FX::FXStream &) const;

    // RVA: 0x2B31 | Ordinal: 11058
        void setHiliteColor(unsigned int);

    // RVA: 0x2CE6 | Ordinal: 11495
        void setShadowColor(unsigned int);

    // RVA: 0x3FB | Ordinal: 1020
        void _FXDragCorner(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDRAGCORNER_HPP
