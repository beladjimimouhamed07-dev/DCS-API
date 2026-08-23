#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTextField
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTextField
{
public:

    // RVA: 0x313 | Ordinal: 788
        void FXTextField(void);

    // RVA: 0x314 | Ordinal: 789
        void FXTextField(class FX::FXComposite *, int, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x9EA | Ordinal: 2539
        void appendText(class FX::FXString const &, bool);

    // RVA: 0xA9A | Ordinal: 2715
        void canFocus(void) const;

    // RVA: 0xB82 | Ordinal: 2947
        void coord(int) const;

    // RVA: 0xB91 | Ordinal: 2962
        void copySelection(void);

    // RVA: 0xBE1 | Ordinal: 3042
        void create(void);

    // RVA: 0xC14 | Ordinal: 3093
        void cutSelection(bool);

    // RVA: 0xC43 | Ordinal: 3140
        void deletePendingSelection(bool);

    // RVA: 0xC47 | Ordinal: 3144
        void deleteSelection(bool);

    // RVA: 0xCEA | Ordinal: 3307
        void disable(void);

    // RVA: 0xD41 | Ordinal: 3394
        void drawCursor(unsigned int);

    // RVA: 0xD90 | Ordinal: 3473
        void drawPWDTextFragment(class FX::FXDCWindow &, int, int, int, int) const;

    // RVA: 0xDC6 | Ordinal: 3527
        void drawTextFragment(class FX::FXDCWindow &, int, int, int, int) const;

    // RVA: 0xDC8 | Ordinal: 3529
        void drawTextRange(class FX::FXDCWindow &, int, int) const;

    // RVA: 0xE0E | Ordinal: 3599
        void enable(void);

    // RVA: 0xE29 | Ordinal: 3626
        void enterText(class FX::FXString const &, bool);

    // RVA: 0xE3E | Ordinal: 3647
        void eraseCursor(class FX::FXDCWindow &) const;

    // RVA: 0xE71 | Ordinal: 3698
        void extendSelection(int);

    // RVA: 0x100D | Ordinal: 4110
        void getAnchorPos(void) const;

    // RVA: 0x10EA | Ordinal: 4331
        void getCursorColor(void) const;

    // RVA: 0x10ED | Ordinal: 4334
        void getCursorPos(void) const;

    // RVA: 0x1153 | Ordinal: 4436
        void getDefaultHeight(void);

    // RVA: 0x11A9 | Ordinal: 4522
        void getDefaultWidth(void);

    // RVA: 0x11B9 | Ordinal: 4538
        void getDelimiters(void) const;

    // RVA: 0x121E | Ordinal: 4639
        void getFont(void) const;

    // RVA: 0x1289 | Ordinal: 4746
        void getHelpText(void) const;

    // RVA: 0x1329 | Ordinal: 4906
        void getJustify(void) const;

    // RVA: 0x145B | Ordinal: 5212
        void getMetaClass(void) const;

    // RVA: 0x14A4 | Ordinal: 5285
        void getNumColumns(void) const;

    // RVA: 0x1575 | Ordinal: 5494
        void getSelBackColor(void) const;

    // RVA: 0x158A | Ordinal: 5515
        void getSelTextColor(void) const;

    // RVA: 0x1596 | Ordinal: 5527
        void getSelectedText(void) const;

    // RVA: 0x15FD | Ordinal: 5630
        void getText(void) const;

    // RVA: 0x1612 | Ordinal: 5651
        void getTextColor(void) const;

    // RVA: 0x1619 | Ordinal: 5658
        void getTextStyle(void) const;

    // RVA: 0x1649 | Ordinal: 5706
        void getTipText(void) const;

    // RVA: 0x17DB | Ordinal: 6108
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x188C | Ordinal: 6285
        void index(int) const;

    // RVA: 0x18D0 | Ordinal: 6353
        void insertText(int, class FX::FXString const &, bool);

    // RVA: 0x192F | Ordinal: 6448
        void isEditable(void) const;

    // RVA: 0x19BC | Ordinal: 6589
        void isOverstrike(void) const;

    // RVA: 0x19CE | Ordinal: 6607
        void isPosSelected(int) const;

    // RVA: 0x19D0 | Ordinal: 6609
        void isPosVisible(int) const;

    // RVA: 0x1A2B | Ordinal: 6700
        void killFocus(void);

    // RVA: 0x1A36 | Ordinal: 6711
        void killSelection(void);

    // RVA: 0x1A6A | Ordinal: 6763
        void layout(void);

    // RVA: 0x1A7B | Ordinal: 6780
        void leftWord(int) const;

    // RVA: 0x1B3C | Ordinal: 6973
        void load(class FX::FXStream &);

    // RVA: 0x1BB3 | Ordinal: 7092
        void makePositionVisible(int);

    // RVA: 0x1C97 | Ordinal: 7320
        void manufacture(void);

    // RVA: 0x1EB9 | Ordinal: 7866
        void moveCursor(int);

    // RVA: 0x1EBB | Ordinal: 7868
        void moveCursorAndSelect(int);

    // RVA: 0x1F44 | Ordinal: 8005
        void onAutoScroll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F51 | Ordinal: 8018
        void onBlink(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F79 | Ordinal: 8058
        void onClipboardGained(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F7F | Ordinal: 8064
        void onClipboardLost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F85 | Ordinal: 8070
        void onClipboardRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F9C | Ordinal: 8093
        void onCmdBackspace(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F9E | Ordinal: 8095
        void onCmdBackspaceBol(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FA1 | Ordinal: 8098
        void onCmdBackspaceWord(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FC8 | Ordinal: 8137
        void onCmdCopySel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FCD | Ordinal: 8142
        void onCmdCursorEnd(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FCF | Ordinal: 8144
        void onCmdCursorHome(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FD1 | Ordinal: 8146
        void onCmdCursorLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FD5 | Ordinal: 8150
        void onCmdCursorRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FDC | Ordinal: 8157
        void onCmdCursorShiftEnd(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FDE | Ordinal: 8159
        void onCmdCursorShiftHome(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FE0 | Ordinal: 8161
        void onCmdCursorShiftLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FE4 | Ordinal: 8165
        void onCmdCursorShiftRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FE8 | Ordinal: 8169
        void onCmdCursorShiftWordLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FEA | Ordinal: 8171
        void onCmdCursorShiftWordRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FEE | Ordinal: 8175
        void onCmdCursorWordLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FF0 | Ordinal: 8177
        void onCmdCursorWordRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FF6 | Ordinal: 8183
        void onCmdCutSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FFD | Ordinal: 8190
        void onCmdDeleteAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FFF | Ordinal: 8192
        void onCmdDeleteChar(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2002 | Ordinal: 8195
        void onCmdDeleteEol(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x200A | Ordinal: 8203
        void onCmdDeleteSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x200C | Ordinal: 8205
        void onCmdDeleteWord(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2010 | Ordinal: 8209
        void onCmdDeselectAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x204A | Ordinal: 8267
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2076 | Ordinal: 8311
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2083 | Ordinal: 8324
        void onCmdGetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2092 | Ordinal: 8339
        void onCmdGetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20A0 | Ordinal: 8353
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20B6 | Ordinal: 8375
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20D2 | Ordinal: 8403
        void onCmdInsertString(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x210B | Ordinal: 8460
        void onCmdPasteMiddle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2110 | Ordinal: 8465
        void onCmdPasteSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x212F | Ordinal: 8496
        void onCmdReplaceSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2143 | Ordinal: 8516
        void onCmdSelectAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2164 | Ordinal: 8549
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2190 | Ordinal: 8593
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x219D | Ordinal: 8606
        void onCmdSetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21AE | Ordinal: 8623
        void onCmdSetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21BC | Ordinal: 8637
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21D2 | Ordinal: 8659
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21F7 | Ordinal: 8696
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x221B | Ordinal: 8732
        void onCmdToggleEditable(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2222 | Ordinal: 8739
        void onCmdToggleOverstrike(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22C7 | Ordinal: 8904
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22EB | Ordinal: 8940
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2304 | Ordinal: 8965
        void onFocusSelf(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x233A | Ordinal: 9019
        void onIMEStart(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2360 | Ordinal: 9057
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2388 | Ordinal: 9097
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23CB | Ordinal: 9164
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23F3 | Ordinal: 9204
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2413 | Ordinal: 9236
        void onMiddleBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x241D | Ordinal: 9246
        void onMiddleBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2440 | Ordinal: 9281
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2496 | Ordinal: 9367
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24BE | Ordinal: 9407
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24DE | Ordinal: 9439
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2508 | Ordinal: 9481
        void onSelectionGained(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x250C | Ordinal: 9485
        void onSelectionLost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2510 | Ordinal: 9489
        void onSelectionRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x259D | Ordinal: 9630
        void onUpdHaveEditableSelection(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25A2 | Ordinal: 9635
        void onUpdHaveSelection(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25AE | Ordinal: 9647
        void onUpdIsEditable(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2609 | Ordinal: 9738
        void onUpdToggleEditable(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2610 | Ordinal: 9745
        void onUpdToggleOverstrike(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x262A | Ordinal: 9771
        void onUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2632 | Ordinal: 9779
        void onVerify(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x265C | Ordinal: 9821
        void paintCursor(class FX::FXDCWindow &) const;

    // RVA: 0x2668 | Ordinal: 9833
        void pasteClipboard(bool);

    // RVA: 0x266A | Ordinal: 9835
        void pasteSelection(bool);

    // RVA: 0x275E | Ordinal: 10079
        void removeText(int, int, bool);

    // RVA: 0x2784 | Ordinal: 10117
        void replaceSelection(class FX::FXString const &, bool);

    // RVA: 0x2789 | Ordinal: 10122
        void replaceText(int, int, class FX::FXString const &, bool);

    // RVA: 0x27B1 | Ordinal: 10162
        void rightWord(int) const;

    // RVA: 0x286D | Ordinal: 10350
        void save(class FX::FXStream &) const;

    // RVA: 0x28D9 | Ordinal: 10458
        void selectAll(void);

    // RVA: 0x2979 | Ordinal: 10618
        void setAnchorPos(int);

    // RVA: 0x2A24 | Ordinal: 10789
        void setCursorColor(unsigned int);

    // RVA: 0x2A27 | Ordinal: 10792
        void setCursorPos(int);

    // RVA: 0x2A4C | Ordinal: 10829
        void setDelimiters(char const *);

    // RVA: 0x2A77 | Ordinal: 10872
        void setEditable(bool);

    // RVA: 0x2AA8 | Ordinal: 10921
        void setFocus(void);

    // RVA: 0x2AC8 | Ordinal: 10953
        void setFont(class FX::FXFont *);

    // RVA: 0x2B2B | Ordinal: 11052
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2BBA | Ordinal: 11195
        void setJustify(unsigned int);

    // RVA: 0x2C1A | Ordinal: 11291
        void setNumColumns(int);

    // RVA: 0x2C42 | Ordinal: 11331
        void setOverstrike(bool);

    // RVA: 0x2CC0 | Ordinal: 11457
        void setSelBackColor(unsigned int);

    // RVA: 0x2CCF | Ordinal: 11472
        void setSelTextColor(unsigned int);

    // RVA: 0x2CDC | Ordinal: 11485
        void setSelection(int, int);

    // RVA: 0x2D44 | Ordinal: 11589
        void setText(class FX::FXString const &, bool);

    // RVA: 0x2D59 | Ordinal: 11610
        void setTextColor(unsigned int);

    // RVA: 0x2D5E | Ordinal: 11615
        void setTextStyle(unsigned int);

    // RVA: 0x2D8C | Ordinal: 11661
        void setTipText(class FX::FXString const &);

    // RVA: 0x2FCD | Ordinal: 12238
        void wordEnd(int) const;

    // RVA: 0x2FCF | Ordinal: 12240
        void wordStart(int) const;

    // RVA: 0x4CD | Ordinal: 1230
        void _FXTextField(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTEXTFIELD_HPP
