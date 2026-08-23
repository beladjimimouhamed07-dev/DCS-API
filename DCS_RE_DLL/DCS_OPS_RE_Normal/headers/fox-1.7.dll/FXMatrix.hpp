#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMatrix
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMatrix
{
public:

    // RVA: 0x204 | Ordinal: 517
        void FXMatrix(void);

    // RVA: 0x205 | Ordinal: 518
        void FXMatrix(class FX::FXComposite *, int, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0xAC6 | Ordinal: 2759
        void childAtRowCol(int, int) const;

    // RVA: 0xB05 | Ordinal: 2822
        void colOfChild(class FX::FXWindow const *) const;

    // RVA: 0x112F | Ordinal: 4400
        void getDefaultHeight(void);

    // RVA: 0x1185 | Ordinal: 4486
        void getDefaultWidth(void);

    // RVA: 0x1360 | Ordinal: 4961
        void getMatrixStyle(void) const;

    // RVA: 0x1415 | Ordinal: 5142
        void getMetaClass(void) const;

    // RVA: 0x14A0 | Ordinal: 5281
        void getNumColumns(void) const;

    // RVA: 0x14B6 | Ordinal: 5303
        void getNumRows(void) const;

    // RVA: 0x1795 | Ordinal: 6038
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A52 | Ordinal: 6739
        void layout(void);

    // RVA: 0x1C52 | Ordinal: 7251
        void manufacture(void);

    // RVA: 0x22AB | Ordinal: 8876
        void onFocusDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22CC | Ordinal: 8909
        void onFocusLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22F6 | Ordinal: 8951
        void onFocusRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x230A | Ordinal: 8971
        void onFocusUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27CB | Ordinal: 10188
        void rowOfChild(class FX::FXWindow const *) const;

    // RVA: 0x2BEF | Ordinal: 11248
        void setMatrixStyle(unsigned int);

    // RVA: 0x2C17 | Ordinal: 11288
        void setNumColumns(int);

    // RVA: 0x2C1B | Ordinal: 11292
        void setNumRows(int);

    // RVA: 0x45F | Ordinal: 1120
        void _FXMatrix(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMATRIX_HPP
