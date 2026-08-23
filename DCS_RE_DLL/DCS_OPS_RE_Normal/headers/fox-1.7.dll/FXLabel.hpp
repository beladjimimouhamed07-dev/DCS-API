#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXLabel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXLabel
{
public:

    // RVA: 0x1AC | Ordinal: 429
        void FXLabel(void);

    // RVA: 0x1AD | Ordinal: 430
        void FXLabel(class FX::FXComposite *, class FX::FXString const &, class FX::FXIcon *, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xBCA | Ordinal: 3019
        void create(void);

    // RVA: 0xCAD | Ordinal: 3246
        void detach(void);

    // RVA: 0xCE0 | Ordinal: 3297
        void disable(void);

    // RVA: 0xD7A | Ordinal: 3451
        void drawLabel(class FX::FXDCWindow &, class FX::FXString const &, int, int, int, int, int);

    // RVA: 0xE04 | Ordinal: 3589
        void enable(void);

    // RVA: 0x1125 | Ordinal: 4390
        void getDefaultHeight(void);

    // RVA: 0x117B | Ordinal: 4476
        void getDefaultWidth(void);

    // RVA: 0x1212 | Ordinal: 4627
        void getFont(void) const;

    // RVA: 0x127B | Ordinal: 4732
        void getHelpText(void) const;

    // RVA: 0x12A6 | Ordinal: 4775
        void getIcon(void) const;

    // RVA: 0x12B1 | Ordinal: 4786
        void getIconPosition(void) const;

    // RVA: 0x1327 | Ordinal: 4904
        void getJustify(void) const;

    // RVA: 0x1408 | Ordinal: 5129
        void getMetaClass(void) const;

    // RVA: 0x15F5 | Ordinal: 5622
        void getText(void) const;

    // RVA: 0x1607 | Ordinal: 5640
        void getTextColor(void) const;

    // RVA: 0x163B | Ordinal: 5692
        void getTipText(void) const;

    // RVA: 0x1788 | Ordinal: 6025
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A11 | Ordinal: 6674
        void just_x(int &, int &, int, int);

    // RVA: 0x1A12 | Ordinal: 6675
        void just_y(int &, int &, int, int);

    // RVA: 0x1A38 | Ordinal: 6713
        void labelHeight(class FX::FXString const &) const;

    // RVA: 0x1A39 | Ordinal: 6714
        void labelWidth(class FX::FXString const &) const;

    // RVA: 0x1AFA | Ordinal: 6907
        void load(class FX::FXStream &);

    // RVA: 0x1C45 | Ordinal: 7238
        void manufacture(void);

    // RVA: 0x2042 | Ordinal: 8259
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x204B | Ordinal: 8268
        void onCmdGetIconValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x209A | Ordinal: 8347
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20AE | Ordinal: 8367
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x215C | Ordinal: 8541
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2165 | Ordinal: 8550
        void onCmdSetIconValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21B6 | Ordinal: 8631
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21CA | Ordinal: 8651
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21E4 | Ordinal: 8677
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x231E | Ordinal: 8991
        void onHotKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x232D | Ordinal: 9006
        void onHotKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x246F | Ordinal: 9328
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24B3 | Ordinal: 9396
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24D3 | Ordinal: 9428
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x282B | Ordinal: 10284
        void save(class FX::FXStream &) const;

    // RVA: 0x2ABC | Ordinal: 10941
        void setFont(class FX::FXFont *);

    // RVA: 0x2B1D | Ordinal: 11038
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B48 | Ordinal: 11081
        void setIcon(class FX::FXIcon *);

    // RVA: 0x2B53 | Ordinal: 11092
        void setIconPosition(unsigned int);

    // RVA: 0x2BB8 | Ordinal: 11193
        void setJustify(unsigned int);

    // RVA: 0x2D3D | Ordinal: 11582
        void setText(class FX::FXString const &);

    // RVA: 0x2D4E | Ordinal: 11599
        void setTextColor(unsigned int);

    // RVA: 0x2D7F | Ordinal: 11648
        void setTipText(class FX::FXString const &);

    // RVA: 0x449 | Ordinal: 1098
        void _FXLabel(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXLABEL_HPP
