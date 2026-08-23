#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXStatusLine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXStatusLine
{
public:

    // RVA: 0x2EA | Ordinal: 747
        void FXStatusLine(void);

    // RVA: 0x2EB | Ordinal: 748
        void FXStatusLine(class FX::FXComposite *, class FX::FXObject *, unsigned int);

    // RVA: 0xBDD | Ordinal: 3038
        void create(void);

    // RVA: 0xCBB | Ordinal: 3260
        void detach(void);

    // RVA: 0x114D | Ordinal: 4430
        void getDefaultHeight(void);

    // RVA: 0x11A3 | Ordinal: 4516
        void getDefaultWidth(void);

    // RVA: 0x121B | Ordinal: 4636
        void getFont(void) const;

    // RVA: 0x144E | Ordinal: 5199
        void getMetaClass(void) const;

    // RVA: 0x1492 | Ordinal: 5267
        void getNormalText(void) const;

    // RVA: 0x15F8 | Ordinal: 5625
        void getText(void) const;

    // RVA: 0x160F | Ordinal: 5648
        void getTextColor(void) const;

    // RVA: 0x1617 | Ordinal: 5656
        void getTextHighlightColor(void) const;

    // RVA: 0x17CE | Ordinal: 6095
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B2B | Ordinal: 6956
        void load(class FX::FXStream &);

    // RVA: 0x1C8B | Ordinal: 7308
        void manufacture(void);

    // RVA: 0x209E | Ordinal: 8351
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21BA | Ordinal: 8635
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x248F | Ordinal: 9360
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2629 | Ordinal: 9770
        void onUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x285C | Ordinal: 10333
        void save(class FX::FXStream &) const;

    // RVA: 0x2AC5 | Ordinal: 10950
        void setFont(class FX::FXFont *);

    // RVA: 0x2C0E | Ordinal: 11279
        void setNormalText(class FX::FXString const &);

    // RVA: 0x2D40 | Ordinal: 11585
        void setText(class FX::FXString const &);

    // RVA: 0x2D56 | Ordinal: 11607
        void setTextColor(unsigned int);

    // RVA: 0x2D5C | Ordinal: 11613
        void setTextHighlightColor(unsigned int);

    // RVA: 0x4BC | Ordinal: 1213
        void _FXStatusLine(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSTATUSLINE_HPP
