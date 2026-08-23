#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXText
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXText
{
public:

    // RVA: 0x30F | Ordinal: 784
        void FXText(void);

    // RVA: 0x310 | Ordinal: 785
        void FXText(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x9E6 | Ordinal: 2535
        void appendStyledText(class FX::FXString const &, int, bool);

    // RVA: 0x9E7 | Ordinal: 2536
        void appendStyledText(char const *, int, int, bool);

    // RVA: 0x9E8 | Ordinal: 2537
        void appendText(class FX::FXString const &, bool);

    // RVA: 0x9E9 | Ordinal: 2538
        void appendText(char const *, int, bool);

    // RVA: 0xA76 | Ordinal: 2679
        void calcVisRows(int, int);

    // RVA: 0xA99 | Ordinal: 2714
        void canFocus(void) const;

    // RVA: 0xAB4 | Ordinal: 2741
        void changeBeg(int) const;

    // RVA: 0xAB6 | Ordinal: 2743
        void changeEnd(int) const;

    // RVA: 0xAB9 | Ordinal: 2746
        void changeStyle(int, class FX::FXString const &);

    // RVA: 0xABA | Ordinal: 2747
        void changeStyle(int, int, int);

    // RVA: 0xABB | Ordinal: 2748
        void changeStyle(int, char const *, int);

    // RVA: 0xAC3 | Ordinal: 2756
        void charWidth(unsigned int, int) const;

    // RVA: 0xB90 | Ordinal: 2961
        void copySelection(void);

    // RVA: 0xB9A | Ordinal: 2971
        void countCols(int, int) const;

    // RVA: 0xB9B | Ordinal: 2972
        void countLines(int, int) const;

    // RVA: 0xB9C | Ordinal: 2973
        void countRows(int, int) const;

    // RVA: 0xBE0 | Ordinal: 3041
        void create(void);

    // RVA: 0xC13 | Ordinal: 3092
        void cutSelection(bool);

    // RVA: 0xC2E | Ordinal: 3119
        void dec(int) const;

    // RVA: 0xC42 | Ordinal: 3139
        void deletePendingSelection(bool);

    // RVA: 0xC46 | Ordinal: 3143
        void deleteSelection(bool);

    // RVA: 0xCBE | Ordinal: 3263
        void detach(void);

    // RVA: 0xCE9 | Ordinal: 3306
        void disable(void);

    // RVA: 0xD37 | Ordinal: 3384
        void drawBufferText(class FX::FXDCWindow &, int, int, int, int, int, int, unsigned int) const;

    // RVA: 0xD3F | Ordinal: 3392
        void drawContents(class FX::FXDCWindow &) const;

    // RVA: 0xD40 | Ordinal: 3393
        void drawCursor(unsigned int);

    // RVA: 0xD8F | Ordinal: 3472
        void drawNumbers(class FX::FXDCWindow &) const;

    // RVA: 0xDC9 | Ordinal: 3530
        void drawTextRow(class FX::FXDCWindow &, int) const;

    // RVA: 0xE0D | Ordinal: 3598
        void enable(void);

    // RVA: 0xE27 | Ordinal: 3624
        void enterText(class FX::FXString const &, bool);

    // RVA: 0xE28 | Ordinal: 3625
        void enterText(char const *, int, bool);

    // RVA: 0xE3D | Ordinal: 3646
        void eraseCursor(class FX::FXDCWindow &) const;

    // RVA: 0xE3F | Ordinal: 3648
        void eraseCursorOverhang(void);

    // RVA: 0xE70 | Ordinal: 3697
        void extendSelection(int, unsigned int, bool);

    // RVA: 0xE7E | Ordinal: 3711
        void extractStyle(class FX::FXString &, int, int) const;

    // RVA: 0xE7F | Ordinal: 3712
        void extractStyle(char *, int, int) const;

    // RVA: 0xE82 | Ordinal: 3715
        void extractText(class FX::FXString &, int, int) const;

    // RVA: 0xE83 | Ordinal: 3716
        void extractText(char *, int, int) const;

    // RVA: 0xEC2 | Ordinal: 3779
        void fillBufferRect(class FX::FXDCWindow &, int, int, int, int, unsigned int) const;

    // RVA: 0xF2D | Ordinal: 3886
        void findMatching(int, int, int, unsigned int, int) const;

    // RVA: 0xF2E | Ordinal: 3887
        void findText(class FX::FXString const &, int *, int *, int, unsigned int, int);

    // RVA: 0xF47 | Ordinal: 3912
        void flashMatching(void);

    // RVA: 0xFE5 | Ordinal: 4070
        void getActiveBackColor(void) const;

    // RVA: 0x100C | Ordinal: 4109
        void getAnchorPos(void) const;

    // RVA: 0x103F | Ordinal: 4160
        void getBarColor(void) const;

    // RVA: 0x1040 | Ordinal: 4161
        void getBarColumns(void) const;

    // RVA: 0x1068 | Ordinal: 4201
        void getBottomLine(void) const;

    // RVA: 0x106F | Ordinal: 4208
        void getByte(int) const;

    // RVA: 0x107F | Ordinal: 4224
        void getChar(int) const;

    // RVA: 0x1080 | Ordinal: 4225
        void getCharLen(int) const;

    // RVA: 0x10B5 | Ordinal: 4278
        void getContentHeight(void);

    // RVA: 0x10C2 | Ordinal: 4291
        void getContentWidth(void);

    // RVA: 0x10E9 | Ordinal: 4330
        void getCursorColor(void) const;

    // RVA: 0x10EB | Ordinal: 4332
        void getCursorColumn(void) const;

    // RVA: 0x10EC | Ordinal: 4333
        void getCursorPos(void) const;

    // RVA: 0x10EF | Ordinal: 4336
        void getCursorRow(void) const;

    // RVA: 0x1152 | Ordinal: 4435
        void getDefaultHeight(void);

    // RVA: 0x11A8 | Ordinal: 4521
        void getDefaultWidth(void);

    // RVA: 0x11B8 | Ordinal: 4537
        void getDelimiters(void) const;

    // RVA: 0x121D | Ordinal: 4638
        void getFont(void) const;

    // RVA: 0x1288 | Ordinal: 4745
        void getHelpText(void) const;

    // RVA: 0x128C | Ordinal: 4749
        void getHiliteBackColor(void) const;

    // RVA: 0x1298 | Ordinal: 4761
        void getHiliteMatchTime(void) const;

    // RVA: 0x1299 | Ordinal: 4762
        void getHiliteStyles(void) const;

    // RVA: 0x129A | Ordinal: 4763
        void getHiliteTextColor(void) const;

    // RVA: 0x1334 | Ordinal: 4917
        void getLength(void) const;

    // RVA: 0x134C | Ordinal: 4941
        void getMarginBottom(void) const;

    // RVA: 0x134F | Ordinal: 4944
        void getMarginLeft(void) const;

    // RVA: 0x1353 | Ordinal: 4948
        void getMarginRight(void) const;

    // RVA: 0x1356 | Ordinal: 4951
        void getMarginTop(void) const;

    // RVA: 0x1459 | Ordinal: 5210
        void getMetaClass(void) const;

    // RVA: 0x14B8 | Ordinal: 5305
        void getNumRows(void) const;

    // RVA: 0x14C1 | Ordinal: 5314
        void getNumberColor(void) const;

    // RVA: 0x1505 | Ordinal: 5382
        void getPosAt(int, int) const;

    // RVA: 0x1506 | Ordinal: 5383
        void getPosContaining(int, int) const;

    // RVA: 0x1574 | Ordinal: 5493
        void getSelBackColor(void) const;

    // RVA: 0x1578 | Ordinal: 5497
        void getSelEndPos(void) const;

    // RVA: 0x157D | Ordinal: 5502
        void getSelStartPos(void) const;

    // RVA: 0x1589 | Ordinal: 5514
        void getSelTextColor(void) const;

    // RVA: 0x1595 | Ordinal: 5526
        void getSelectedText(void) const;

    // RVA: 0x15E1 | Ordinal: 5602
        void getStyle(int) const;

    // RVA: 0x15E5 | Ordinal: 5606
        void getTabColumns(void) const;

    // RVA: 0x15FA | Ordinal: 5627
        void getText(void) const;

    // RVA: 0x15FB | Ordinal: 5628
        void getText(class FX::FXString &) const;

    // RVA: 0x15FC | Ordinal: 5629
        void getText(char *, int) const;

    // RVA: 0x1611 | Ordinal: 5650
        void getTextColor(void) const;

    // RVA: 0x1618 | Ordinal: 5657
        void getTextStyle(void) const;

    // RVA: 0x1648 | Ordinal: 5705
        void getTipText(void) const;

    // RVA: 0x165F | Ordinal: 5728
        void getTopLine(void) const;

    // RVA: 0x1696 | Ordinal: 5783
        void getVisibleColumns(void) const;

    // RVA: 0x169C | Ordinal: 5789
        void getVisibleHeight(void) const;

    // RVA: 0x169F | Ordinal: 5792
        void getVisibleRows(void) const;

    // RVA: 0x16A3 | Ordinal: 5796
        void getVisibleWidth(void) const;

    // RVA: 0x16A7 | Ordinal: 5800
        void getVisibleX(void) const;

    // RVA: 0x16AD | Ordinal: 5806
        void getVisibleY(void) const;

    // RVA: 0x16C9 | Ordinal: 5834
        void getWrapColumns(void) const;

    // RVA: 0x16CD | Ordinal: 5838
        void getXOfPos(int) const;

    // RVA: 0x16D2 | Ordinal: 5843
        void getYOfPos(int) const;

    // RVA: 0x17D9 | Ordinal: 6106
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1862 | Ordinal: 6243
        void inc(int) const;

    // RVA: 0x1888 | Ordinal: 6281
        void indentFromPos(int, int) const;

    // RVA: 0x18CC | Ordinal: 6349
        void insertStyledText(int, class FX::FXString const &, int, bool);

    // RVA: 0x18CD | Ordinal: 6350
        void insertStyledText(int, char const *, int, int, bool);

    // RVA: 0x18CE | Ordinal: 6351
        void insertText(int, class FX::FXString const &, bool);

    // RVA: 0x18CF | Ordinal: 6352
        void insertText(int, char const *, int, bool);

    // RVA: 0x192E | Ordinal: 6447
        void isEditable(void) const;

    // RVA: 0x19A6 | Ordinal: 6567
        void isModified(void) const;

    // RVA: 0x19BB | Ordinal: 6588
        void isOverstrike(void) const;

    // RVA: 0x19CD | Ordinal: 6606
        void isPosSelected(int) const;

    // RVA: 0x19CF | Ordinal: 6608
        void isPosVisible(int) const;

    // RVA: 0x19F8 | Ordinal: 6649
        void isStyled(void) const;

    // RVA: 0x1A2A | Ordinal: 6699
        void killFocus(void);

    // RVA: 0x1A2F | Ordinal: 6704
        void killHighlight(void);

    // RVA: 0x1A35 | Ordinal: 6710
        void killSelection(bool);

    // RVA: 0x1A69 | Ordinal: 6762
        void layout(void);

    // RVA: 0x1A7A | Ordinal: 6779
        void leftWord(int) const;

    // RVA: 0x1A99 | Ordinal: 6810
        void lineEnd(int) const;

    // RVA: 0x1A9A | Ordinal: 6811
        void lineStart(int) const;

    // RVA: 0x1A9B | Ordinal: 6812
        void lineWidth(int, int) const;

    // RVA: 0x1B3B | Ordinal: 6972
        void load(class FX::FXStream &);

    // RVA: 0x1BB2 | Ordinal: 7091
        void makePositionVisible(int);

    // RVA: 0x1C96 | Ordinal: 7319
        void manufacture(void);

    // RVA: 0x1CBE | Ordinal: 7359
        void matchBackward(int, int, unsigned int, unsigned int, int) const;

    // RVA: 0x1CBF | Ordinal: 7360
        void matchForward(int, int, unsigned int, unsigned int, int) const;

    // RVA: 0x1D01 | Ordinal: 7426
        void measureText(int, int, int &, int &) const;

    // RVA: 0x1EB7 | Ordinal: 7864
        void moveContents(int, int);

    // RVA: 0x1EB8 | Ordinal: 7865
        void moveCursor(int, bool);

    // RVA: 0x1EBA | Ordinal: 7867
        void moveCursorAndSelect(int, unsigned int, bool);

    // RVA: 0x1ECF | Ordinal: 7888
        void movegap(int);

    // RVA: 0x1ED1 | Ordinal: 7890
        void mutation(int, int, int, int, int);

    // RVA: 0x1F0F | Ordinal: 7952
        void nextLine(int, int) const;

    // RVA: 0x1F10 | Ordinal: 7953
        void nextRow(int, int) const;

    // RVA: 0x1F43 | Ordinal: 8004
        void onAutoScroll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F4D | Ordinal: 8014
        void onBeginDrag(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F50 | Ordinal: 8017
        void onBlink(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F78 | Ordinal: 8057
        void onClipboardGained(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F7E | Ordinal: 8063
        void onClipboardLost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F84 | Ordinal: 8069
        void onClipboardRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F9D | Ordinal: 8094
        void onCmdBackspaceBol(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F9F | Ordinal: 8096
        void onCmdBackspaceChar(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FA0 | Ordinal: 8097
        void onCmdBackspaceWord(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FA3 | Ordinal: 8100
        void onCmdBlockBeg(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FA4 | Ordinal: 8101
        void onCmdBlockEnd(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FB2 | Ordinal: 8115
        void onCmdChangeCase(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FC7 | Ordinal: 8136
        void onCmdCopySel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FC9 | Ordinal: 8138
        void onCmdCursorBottom(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FCA | Ordinal: 8139
        void onCmdCursorColumn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FCB | Ordinal: 8140
        void onCmdCursorDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FCC | Ordinal: 8141
        void onCmdCursorEnd(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FCE | Ordinal: 8143
        void onCmdCursorHome(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FD0 | Ordinal: 8145
        void onCmdCursorLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FD2 | Ordinal: 8147
        void onCmdCursorPageDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FD3 | Ordinal: 8148
        void onCmdCursorPageUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FD4 | Ordinal: 8149
        void onCmdCursorRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FD6 | Ordinal: 8151
        void onCmdCursorRow(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FD7 | Ordinal: 8152
        void onCmdCursorSelEnd(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FD8 | Ordinal: 8153
        void onCmdCursorSelStart(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FD9 | Ordinal: 8154
        void onCmdCursorShiftBottom(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FDA | Ordinal: 8155
        void onCmdCursorShiftDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FDB | Ordinal: 8156
        void onCmdCursorShiftEnd(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FDD | Ordinal: 8158
        void onCmdCursorShiftHome(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FDF | Ordinal: 8160
        void onCmdCursorShiftLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FE1 | Ordinal: 8162
        void onCmdCursorShiftPageDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FE2 | Ordinal: 8163
        void onCmdCursorShiftPageUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FE3 | Ordinal: 8164
        void onCmdCursorShiftRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FE5 | Ordinal: 8166
        void onCmdCursorShiftTop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FE6 | Ordinal: 8167
        void onCmdCursorShiftUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FE7 | Ordinal: 8168
        void onCmdCursorShiftWordLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FE9 | Ordinal: 8170
        void onCmdCursorShiftWordRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FEB | Ordinal: 8172
        void onCmdCursorTop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FEC | Ordinal: 8173
        void onCmdCursorUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FED | Ordinal: 8174
        void onCmdCursorWordLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FEF | Ordinal: 8176
        void onCmdCursorWordRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FF5 | Ordinal: 8182
        void onCmdCutSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FFC | Ordinal: 8189
        void onCmdDeleteAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FFE | Ordinal: 8191
        void onCmdDeleteChar(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2001 | Ordinal: 8194
        void onCmdDeleteEol(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2003 | Ordinal: 8196
        void onCmdDeleteLine(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2009 | Ordinal: 8202
        void onCmdDeleteSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x200B | Ordinal: 8204
        void onCmdDeleteWord(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x200F | Ordinal: 8208
        void onCmdDeselectAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2049 | Ordinal: 8266
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x209F | Ordinal: 8352
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20B5 | Ordinal: 8374
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20B8 | Ordinal: 8377
        void onCmdGotoMatching(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20CB | Ordinal: 8396
        void onCmdInsertHardTab(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20CC | Ordinal: 8397
        void onCmdInsertNewline(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20CD | Ordinal: 8398
        void onCmdInsertNewlineIndent(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20CE | Ordinal: 8399
        void onCmdInsertNewlineOnly(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20D0 | Ordinal: 8401
        void onCmdInsertSoftTab(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20D1 | Ordinal: 8402
        void onCmdInsertString(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20D3 | Ordinal: 8404
        void onCmdInsertTab(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x210A | Ordinal: 8459
        void onCmdPasteMiddle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x210F | Ordinal: 8464
        void onCmdPasteSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x212E | Ordinal: 8495
        void onCmdReplaceSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2138 | Ordinal: 8505
        void onCmdScrollBottom(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2139 | Ordinal: 8506
        void onCmdScrollCenter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x213A | Ordinal: 8507
        void onCmdScrollDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x213B | Ordinal: 8508
        void onCmdScrollTop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x213C | Ordinal: 8509
        void onCmdScrollUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2142 | Ordinal: 8515
        void onCmdSelectAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2144 | Ordinal: 8517
        void onCmdSelectBlock(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2146 | Ordinal: 8519
        void onCmdSelectChar(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x214A | Ordinal: 8523
        void onCmdSelectLine(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x214B | Ordinal: 8524
        void onCmdSelectMatching(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x214F | Ordinal: 8528
        void onCmdSelectWord(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2163 | Ordinal: 8548
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21BB | Ordinal: 8636
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21D1 | Ordinal: 8658
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21FD | Ordinal: 8702
        void onCmdShiftText(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x221A | Ordinal: 8731
        void onCmdToggleEditable(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2221 | Ordinal: 8738
        void onCmdToggleOverstrike(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2251 | Ordinal: 8786
        void onDNDDrop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2258 | Ordinal: 8793
        void onDNDEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x225F | Ordinal: 8800
        void onDNDLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2267 | Ordinal: 8808
        void onDNDMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x226C | Ordinal: 8813
        void onDNDRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2284 | Ordinal: 8837
        void onDragged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x228A | Ordinal: 8843
        void onEndDrag(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22A7 | Ordinal: 8872
        void onFlash(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22C6 | Ordinal: 8903
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22EA | Ordinal: 8939
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2339 | Ordinal: 9018
        void onIMEStart(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x235F | Ordinal: 9056
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2387 | Ordinal: 9096
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23CA | Ordinal: 9163
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23F2 | Ordinal: 9203
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2412 | Ordinal: 9235
        void onMiddleBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x241C | Ordinal: 9245
        void onMiddleBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x243F | Ordinal: 9280
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2495 | Ordinal: 9366
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24BD | Ordinal: 9406
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24DD | Ordinal: 9438
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24F3 | Ordinal: 9460
        void onRightBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2500 | Ordinal: 9473
        void onRightBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2507 | Ordinal: 9480
        void onSelectionGained(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x250B | Ordinal: 9484
        void onSelectionLost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x250F | Ordinal: 9488
        void onSelectionRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x254D | Ordinal: 9550
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2578 | Ordinal: 9593
        void onUpdCursorColumn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2579 | Ordinal: 9594
        void onUpdCursorRow(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x259C | Ordinal: 9629
        void onUpdHaveEditableSelection(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25A1 | Ordinal: 9634
        void onUpdHaveSelection(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25AD | Ordinal: 9646
        void onUpdIsEditable(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2608 | Ordinal: 9737
        void onUpdToggleEditable(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x260F | Ordinal: 9744
        void onUpdToggleOverstrike(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x265A | Ordinal: 9819
        void overstruck(int, int, char const *, int);

    // RVA: 0x265B | Ordinal: 9820
        void paintCursor(class FX::FXDCWindow &) const;

    // RVA: 0x2667 | Ordinal: 9832
        void pasteClipboard(bool);

    // RVA: 0x2669 | Ordinal: 9834
        void pasteSelection(bool);

    // RVA: 0x2688 | Ordinal: 9865
        void posFromIndent(int, int) const;

    // RVA: 0x2689 | Ordinal: 9866
        void posToLine(int, int) const;

    // RVA: 0x26C9 | Ordinal: 9930
        void prevLine(int, int) const;

    // RVA: 0x26CA | Ordinal: 9931
        void prevRow(int, int) const;

    // RVA: 0x271A | Ordinal: 10011
        void recalc(void);

    // RVA: 0x2720 | Ordinal: 10017
        void recompute(void);

    // RVA: 0x275D | Ordinal: 10078
        void removeText(int, int, bool);

    // RVA: 0x2781 | Ordinal: 10114
        void replace(int, int, char const *, int, int);

    // RVA: 0x2782 | Ordinal: 10115
        void replaceSelection(class FX::FXString const &, bool);

    // RVA: 0x2783 | Ordinal: 10116
        void replaceSelection(char const *, int, bool);

    // RVA: 0x2785 | Ordinal: 10118
        void replaceStyledText(int, int, class FX::FXString const &, int, bool);

    // RVA: 0x2786 | Ordinal: 10119
        void replaceStyledText(int, int, char const *, int, int, bool);

    // RVA: 0x2787 | Ordinal: 10120
        void replaceText(int, int, class FX::FXString const &, bool);

    // RVA: 0x2788 | Ordinal: 10121
        void replaceText(int, int, char const *, int, bool);

    // RVA: 0x27B0 | Ordinal: 10161
        void rightWord(int) const;

    // RVA: 0x27CA | Ordinal: 10187
        void rowEnd(int) const;

    // RVA: 0x27CC | Ordinal: 10189
        void rowStart(int) const;

    // RVA: 0x286C | Ordinal: 10349
        void save(class FX::FXStream &) const;

    // RVA: 0x28D8 | Ordinal: 10457
        void selectAll(bool);

    // RVA: 0x2965 | Ordinal: 10598
        void setActiveBackColor(unsigned int);

    // RVA: 0x2978 | Ordinal: 10617
        void setAnchorPos(int);

    // RVA: 0x29A7 | Ordinal: 10664
        void setBarColor(unsigned int);

    // RVA: 0x29A8 | Ordinal: 10665
        void setBarColumns(int);

    // RVA: 0x29C8 | Ordinal: 10697
        void setBottomLine(int);

    // RVA: 0x29DE | Ordinal: 10719
        void setCenterLine(int);

    // RVA: 0x2A23 | Ordinal: 10788
        void setCursorColor(unsigned int);

    // RVA: 0x2A25 | Ordinal: 10790
        void setCursorColumn(int, bool);

    // RVA: 0x2A26 | Ordinal: 10791
        void setCursorPos(int, bool);

    // RVA: 0x2A29 | Ordinal: 10794
        void setCursorRow(int, bool);

    // RVA: 0x2A4B | Ordinal: 10828
        void setDelimiters(char const *);

    // RVA: 0x2A76 | Ordinal: 10871
        void setEditable(bool);

    // RVA: 0x2AA7 | Ordinal: 10920
        void setFocus(void);

    // RVA: 0x2AC7 | Ordinal: 10952
        void setFont(class FX::FXFont *);

    // RVA: 0x2B2A | Ordinal: 11051
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B2E | Ordinal: 11055
        void setHighlight(int, int);

    // RVA: 0x2B2F | Ordinal: 11056
        void setHiliteBackColor(unsigned int);

    // RVA: 0x2B3B | Ordinal: 11068
        void setHiliteMatchTime(__int64);

    // RVA: 0x2B3C | Ordinal: 11069
        void setHiliteStyles(struct FX::FXHiliteStyle *);

    // RVA: 0x2B3D | Ordinal: 11070
        void setHiliteTextColor(unsigned int);

    // RVA: 0x2BDB | Ordinal: 11228
        void setMarginBottom(int);

    // RVA: 0x2BDE | Ordinal: 11231
        void setMarginLeft(int);

    // RVA: 0x2BE2 | Ordinal: 11235
        void setMarginRight(int);

    // RVA: 0x2BE5 | Ordinal: 11238
        void setMarginTop(int);

    // RVA: 0x2C09 | Ordinal: 11274
        void setModified(bool);

    // RVA: 0x2C23 | Ordinal: 11300
        void setNumberColor(unsigned int);

    // RVA: 0x2C41 | Ordinal: 11330
        void setOverstrike(bool);

    // RVA: 0x2CBF | Ordinal: 11456
        void setSelBackColor(unsigned int);

    // RVA: 0x2CCE | Ordinal: 11471
        void setSelTextColor(unsigned int);

    // RVA: 0x2CDB | Ordinal: 11484
        void setSelection(int, int, bool);

    // RVA: 0x2D27 | Ordinal: 11560
        void setStyled(bool);

    // RVA: 0x2D28 | Ordinal: 11561
        void setStyledText(class FX::FXString const &, int, bool);

    // RVA: 0x2D29 | Ordinal: 11562
        void setStyledText(char const *, int, int, bool);

    // RVA: 0x2D2D | Ordinal: 11566
        void setTabColumns(int);

    // RVA: 0x2D42 | Ordinal: 11587
        void setText(class FX::FXString const &, bool);

    // RVA: 0x2D43 | Ordinal: 11588
        void setText(char const *, int, bool);

    // RVA: 0x2D58 | Ordinal: 11609
        void setTextColor(unsigned int);

    // RVA: 0x2D5D | Ordinal: 11614
        void setTextStyle(unsigned int);

    // RVA: 0x2D8B | Ordinal: 11660
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DA0 | Ordinal: 11681
        void setTopLine(int);

    // RVA: 0x2DCD | Ordinal: 11726
        void setVisibleColumns(int);

    // RVA: 0x2DD0 | Ordinal: 11729
        void setVisibleRows(int);

    // RVA: 0x2DDE | Ordinal: 11743
        void setWrapColumns(int);

    // RVA: 0x2DED | Ordinal: 11758
        void shiftText(int, int, int, bool);

    // RVA: 0x2E3B | Ordinal: 11836
        void sizegap(int);

    // RVA: 0x2E50 | Ordinal: 11857
        void squeezegap(void);

    // RVA: 0x2E6C | Ordinal: 11885
        void styleOf(int, int, int, int, int) const;

    // RVA: 0x2F1A | Ordinal: 12059
        void updateRange(int, int) const;

    // RVA: 0x2F4D | Ordinal: 12110
        void validPos(int) const;

    // RVA: 0x2FCC | Ordinal: 12237
        void wordEnd(int) const;

    // RVA: 0x2FCE | Ordinal: 12239
        void wordStart(int) const;

    // RVA: 0x2FD4 | Ordinal: 12245
        void wrap(int) const;

    // RVA: 0x4CB | Ordinal: 1228
        void _FXText(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTEXT_HPP
