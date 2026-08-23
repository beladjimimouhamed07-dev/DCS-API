#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRuler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRuler
{
public:

    // RVA: 0x2A8 | Ordinal: 681
        void FXRuler(void);

    // RVA: 0x2A9 | Ordinal: 682
        void FXRuler(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xBDA | Ordinal: 3035
        void create(void);

    // RVA: 0xCB9 | Ordinal: 3258
        void detach(void);

    // RVA: 0xD4C | Ordinal: 3405
        void drawDownArrow(class FX::FXDCWindow &, int, int);

    // RVA: 0xD4F | Ordinal: 3408
        void drawDownMarker(class FX::FXDCWindow &, int, int);

    // RVA: 0xD7C | Ordinal: 3453
        void drawLeftArrow(class FX::FXDCWindow &, int, int);

    // RVA: 0xD80 | Ordinal: 3457
        void drawLeftMarker(class FX::FXDCWindow &, int, int);

    // RVA: 0xDAB | Ordinal: 3500
        void drawRightArrow(class FX::FXDCWindow &, int, int);

    // RVA: 0xDAF | Ordinal: 3504
        void drawRightMarker(class FX::FXDCWindow &, int, int);

    // RVA: 0xDCE | Ordinal: 3535
        void drawUpArrow(class FX::FXDCWindow &, int, int);

    // RVA: 0xDD1 | Ordinal: 3538
        void drawUpMarker(class FX::FXDCWindow &, int, int);

    // RVA: 0x10B7 | Ordinal: 4280
        void getContentSize(void) const;

    // RVA: 0x1141 | Ordinal: 4418
        void getDefaultHeight(void);

    // RVA: 0x1197 | Ordinal: 4504
        void getDefaultWidth(void);

    // RVA: 0x11CD | Ordinal: 4558
        void getDocumentLower(void) const;

    // RVA: 0x11CE | Ordinal: 4559
        void getDocumentSize(void) const;

    // RVA: 0x11CF | Ordinal: 4560
        void getDocumentUpper(void) const;

    // RVA: 0x11E0 | Ordinal: 4577
        void getEdgeSpacing(void) const;

    // RVA: 0x1219 | Ordinal: 4634
        void getFont(void) const;

    // RVA: 0x1282 | Ordinal: 4739
        void getHelpText(void) const;

    // RVA: 0x12C9 | Ordinal: 4810
        void getIndentFirst(void) const;

    // RVA: 0x12CA | Ordinal: 4811
        void getIndentLower(void) const;

    // RVA: 0x12CB | Ordinal: 4812
        void getIndentUpper(void) const;

    // RVA: 0x1349 | Ordinal: 4938
        void getMajorTicks(void) const;

    // RVA: 0x1350 | Ordinal: 4945
        void getMarginLower(void) const;

    // RVA: 0x1357 | Ordinal: 4952
        void getMarginUpper(void) const;

    // RVA: 0x136A | Ordinal: 4971
        void getMediumTicks(void) const;

    // RVA: 0x143C | Ordinal: 5181
        void getMetaClass(void) const;

    // RVA: 0x14C3 | Ordinal: 5316
        void getNumberTicks(void) const;

    // RVA: 0x1501 | Ordinal: 5378
        void getPixelPerTick(void) const;

    // RVA: 0x1509 | Ordinal: 5386
        void getPosition(void) const;

    // RVA: 0x154B | Ordinal: 5452
        void getRulerAlignment(void) const;

    // RVA: 0x154C | Ordinal: 5453
        void getRulerStyle(void) const;

    // RVA: 0x160D | Ordinal: 5646
        void getTextColor(void) const;

    // RVA: 0x1628 | Ordinal: 5673
        void getTinyTicks(void) const;

    // RVA: 0x1642 | Ordinal: 5699
        void getTipText(void) const;

    // RVA: 0x168C | Ordinal: 5773
        void getValue(void) const;

    // RVA: 0x17BC | Ordinal: 6077
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A5A | Ordinal: 6747
        void layout(void);

    // RVA: 0x1B1F | Ordinal: 6944
        void load(class FX::FXStream &);

    // RVA: 0x1C79 | Ordinal: 7290
        void manufacture(void);

    // RVA: 0x2046 | Ordinal: 8263
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x206F | Ordinal: 8304
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20B2 | Ordinal: 8371
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2160 | Ordinal: 8545
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2189 | Ordinal: 8586
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21CE | Ordinal: 8655
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21F0 | Ordinal: 8689
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23C4 | Ordinal: 9157
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23EC | Ordinal: 9197
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2439 | Ordinal: 9274
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2488 | Ordinal: 9353
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24B9 | Ordinal: 9402
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24D9 | Ordinal: 9434
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2670 | Ordinal: 9841
        void picked(int, int);

    // RVA: 0x2850 | Ordinal: 10321
        void save(class FX::FXStream &) const;

    // RVA: 0x2A03 | Ordinal: 10756
        void setContentSize(int, bool);

    // RVA: 0x2A5E | Ordinal: 10847
        void setDocumentSize(int, bool);

    // RVA: 0x2A71 | Ordinal: 10866
        void setEdgeSpacing(int, bool);

    // RVA: 0x2AC3 | Ordinal: 10948
        void setFont(class FX::FXFont *, bool);

    // RVA: 0x2B24 | Ordinal: 11045
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B6B | Ordinal: 11116
        void setIndentFirst(int, bool);

    // RVA: 0x2B6C | Ordinal: 11117
        void setIndentLower(int, bool);

    // RVA: 0x2B6D | Ordinal: 11118
        void setIndentUpper(int, bool);

    // RVA: 0x2BD8 | Ordinal: 11225
        void setMajorTicks(int, bool);

    // RVA: 0x2BDF | Ordinal: 11232
        void setMarginLower(int, bool);

    // RVA: 0x2BE6 | Ordinal: 11239
        void setMarginUpper(int, bool);

    // RVA: 0x2BF8 | Ordinal: 11257
        void setMediumTicks(int, bool);

    // RVA: 0x2C25 | Ordinal: 11302
        void setNumberTicks(int, bool);

    // RVA: 0x2C64 | Ordinal: 11365
        void setPixelPerTick(double, bool);

    // RVA: 0x2C69 | Ordinal: 11370
        void setPosition(int, bool);

    // RVA: 0x2CA3 | Ordinal: 11428
        void setRulerAlignment(unsigned int, bool);

    // RVA: 0x2CA4 | Ordinal: 11429
        void setRulerStyle(unsigned int);

    // RVA: 0x2D54 | Ordinal: 11605
        void setTextColor(unsigned int);

    // RVA: 0x2D6E | Ordinal: 11631
        void setTinyTicks(int, bool);

    // RVA: 0x2D85 | Ordinal: 11654
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DC4 | Ordinal: 11717
        void setValue(int);

    // RVA: 0x49D | Ordinal: 1182
        void _FXRuler(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXRULER_HPP
