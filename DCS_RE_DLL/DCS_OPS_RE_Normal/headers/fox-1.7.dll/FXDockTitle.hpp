#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDockTitle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDockTitle
{
public:

    // RVA: 0xE6 | Ordinal: 231
        void FXDockTitle(void);

    // RVA: 0xE7 | Ordinal: 232
        void FXDockTitle(class FX::FXComposite *, class FX::FXString const &, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xBB2 | Ordinal: 2995
        void create(void);

    // RVA: 0xC99 | Ordinal: 3226
        void detach(void);

    // RVA: 0x1073 | Ordinal: 4212
        void getCaption(void) const;

    // RVA: 0x1075 | Ordinal: 4214
        void getCaptionColor(void) const;

    // RVA: 0x111A | Ordinal: 4379
        void getDefaultHeight(void);

    // RVA: 0x1170 | Ordinal: 4465
        void getDefaultWidth(void);

    // RVA: 0x120A | Ordinal: 4619
        void getFont(void) const;

    // RVA: 0x1324 | Ordinal: 4901
        void getJustify(void) const;

    // RVA: 0x13CA | Ordinal: 5067
        void getMetaClass(void) const;

    // RVA: 0x1749 | Ordinal: 5962
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AC5 | Ordinal: 6854
        void load(class FX::FXStream &);

    // RVA: 0x1C0A | Ordinal: 7179
        void manufacture(void);

    // RVA: 0x2096 | Ordinal: 8343
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21B2 | Ordinal: 8627
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21DD | Ordinal: 8670
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2462 | Ordinal: 9315
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27F6 | Ordinal: 10231
        void save(class FX::FXStream &) const;

    // RVA: 0x29D2 | Ordinal: 10707
        void setCaption(class FX::FXString const &);

    // RVA: 0x29D4 | Ordinal: 10709
        void setCaptionColor(unsigned int);

    // RVA: 0x2AB4 | Ordinal: 10933
        void setFont(class FX::FXFont *);

    // RVA: 0x2BB5 | Ordinal: 11190
        void setJustify(unsigned int);

    // RVA: 0x3F9 | Ordinal: 1018
        void _FXDockTitle(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDOCKTITLE_HPP
