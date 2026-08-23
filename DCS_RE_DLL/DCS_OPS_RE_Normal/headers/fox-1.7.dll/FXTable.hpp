#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTable
{
public:

    // RVA: 0x309 | Ordinal: 778
        void FXTable(void);

    // RVA: 0x30A | Ordinal: 779
        void FXTable(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x951 | Ordinal: 2386
        void acceptInput(bool);

    // RVA: 0xA98 | Ordinal: 2713
        void canFocus(void) const;

    // RVA: 0xAAA | Ordinal: 2731
        void cancelInput(void);

    // RVA: 0xAB7 | Ordinal: 2744
        void changeFocus(class FX::FXWindow *);

    // RVA: 0xAEA | Ordinal: 2795
        void clearItems(bool);

    // RVA: 0xB04 | Ordinal: 2821
        void colAtX(int) const;

    // RVA: 0xB9D | Ordinal: 2974
        void countText(int &, int &, class FX::FXString const &, char const *, char const *) const;

    // RVA: 0xB9E | Ordinal: 2975
        void countText(int &, int &, char const *, int, char const *, char const *) const;

    // RVA: 0xBDE | Ordinal: 3039
        void create(void);

    // RVA: 0xBF5 | Ordinal: 3062
        void createItem(class FX::FXString const &, class FX::FXIcon *, void *);

    // RVA: 0xCBC | Ordinal: 3261
        void detach(void);

    // RVA: 0xCF3 | Ordinal: 3316
        void disableItem(int, int);

    // RVA: 0xD39 | Ordinal: 3386
        void drawCell(class FX::FXDC &, int, int, int, int);

    // RVA: 0xD3E | Ordinal: 3391
        void drawContents(class FX::FXDC &, int, int, int, int);

    // RVA: 0xD5F | Ordinal: 3424
        void drawHGrid(class FX::FXDC &, int, int, int, int);

    // RVA: 0xDA0 | Ordinal: 3489
        void drawRange(class FX::FXDC &, int, int, int, int);

    // RVA: 0xDD2 | Ordinal: 3539
        void drawVGrid(class FX::FXDC &, int, int, int, int);

    // RVA: 0xE17 | Ordinal: 3608
        void enableItem(int, int);

    // RVA: 0xE6F | Ordinal: 3696
        void extendSelection(int, int, bool);

    // RVA: 0xE7B | Ordinal: 3708
        void extractItem(int, int, bool);

    // RVA: 0xE80 | Ordinal: 3713
        void extractText(char *&, int &, int, int, int, int, char const *, char const *) const;

    // RVA: 0xE81 | Ordinal: 3714
        void extractText(class FX::FXString &, int, int, int, int, char const *, char const *) const;

    // RVA: 0xF43 | Ordinal: 3908
        void fitColumnsToContents(int, int);

    // RVA: 0xF44 | Ordinal: 3909
        void fitRowsToContents(int, int);

    // RVA: 0x1007 | Ordinal: 4104
        void getAnchorColumn(void) const;

    // RVA: 0x100E | Ordinal: 4111
        void getAnchorRow(void) const;

    // RVA: 0x1050 | Ordinal: 4177
        void getBaseColor(void) const;

    // RVA: 0x105F | Ordinal: 4192
        void getBorderColor(void) const;

    // RVA: 0x1079 | Ordinal: 4218
        void getCellBorderColor(void) const;

    // RVA: 0x107A | Ordinal: 4219
        void getCellBorderWidth(void) const;

    // RVA: 0x107B | Ordinal: 4220
        void getCellColor(int, int) const;

    // RVA: 0x109B | Ordinal: 4252
        void getColumnHeader(void) const;

    // RVA: 0x109C | Ordinal: 4253
        void getColumnHeaderFont(void) const;

    // RVA: 0x109D | Ordinal: 4254
        void getColumnHeaderHeight(void) const;

    // RVA: 0x109E | Ordinal: 4255
        void getColumnHeaderMode(void) const;

    // RVA: 0x109F | Ordinal: 4256
        void getColumnIcon(int) const;

    // RVA: 0x10A0 | Ordinal: 4257
        void getColumnIconPosition(int) const;

    // RVA: 0x10A1 | Ordinal: 4258
        void getColumnJustify(int) const;

    // RVA: 0x10A2 | Ordinal: 4259
        void getColumnRenumbering(void) const)(int);

    // RVA: 0x10A3 | Ordinal: 4260
        void getColumnText(int) const;

    // RVA: 0x10A4 | Ordinal: 4261
        void getColumnTipText(int) const;

    // RVA: 0x10A5 | Ordinal: 4262
        void getColumnWidth(int) const;

    // RVA: 0x10A6 | Ordinal: 4263
        void getColumnX(int) const;

    // RVA: 0x10B4 | Ordinal: 4277
        void getContentHeight(void);

    // RVA: 0x10C1 | Ordinal: 4290
        void getContentWidth(void);

    // RVA: 0x10C9 | Ordinal: 4298
        void getControlForItem(int, int);

    // RVA: 0x10CB | Ordinal: 4300
        void getCornerButton(void) const;

    // RVA: 0x10D1 | Ordinal: 4306
        void getCurrentColumn(void) const;

    // RVA: 0x10E5 | Ordinal: 4326
        void getCurrentRow(void) const;

    // RVA: 0x1107 | Ordinal: 4360
        void getDefColumnWidth(void) const;

    // RVA: 0x1108 | Ordinal: 4361
        void getDefRowHeight(void) const;

    // RVA: 0x1151 | Ordinal: 4434
        void getDefaultHeight(void);

    // RVA: 0x11A7 | Ordinal: 4520
        void getDefaultWidth(void);

    // RVA: 0x121C | Ordinal: 4637
        void getFont(void) const;

    // RVA: 0x123C | Ordinal: 4669
        void getGridColor(void) const;

    // RVA: 0x1287 | Ordinal: 4744
        void getHelpText(void) const;

    // RVA: 0x1296 | Ordinal: 4759
        void getHiliteColor(void) const;

    // RVA: 0x12D7 | Ordinal: 4824
        void getItem(int, int) const;

    // RVA: 0x12E0 | Ordinal: 4833
        void getItemBorders(int, int) const;

    // RVA: 0x12EB | Ordinal: 4844
        void getItemData(int, int) const;

    // RVA: 0x12F8 | Ordinal: 4857
        void getItemIcon(int, int) const;

    // RVA: 0x12FA | Ordinal: 4859
        void getItemIconPosition(int, int) const;

    // RVA: 0x12FC | Ordinal: 4861
        void getItemJustify(int, int) const;

    // RVA: 0x130D | Ordinal: 4878
        void getItemStipple(int, int) const;

    // RVA: 0x1314 | Ordinal: 4885
        void getItemText(int, int) const;

    // RVA: 0x1318 | Ordinal: 4889
        void getItemTipText(int, int) const;

    // RVA: 0x134B | Ordinal: 4940
        void getMarginBottom(void) const;

    // RVA: 0x134E | Ordinal: 4943
        void getMarginLeft(void) const;

    // RVA: 0x1352 | Ordinal: 4947
        void getMarginRight(void) const;

    // RVA: 0x1355 | Ordinal: 4950
        void getMarginTop(void) const;

    // RVA: 0x1457 | Ordinal: 5208
        void getMetaClass(void) const;

    // RVA: 0x147C | Ordinal: 5245
        void getMinColumnWidth(int) const;

    // RVA: 0x147D | Ordinal: 5246
        void getMinRowHeight(int) const;

    // RVA: 0x14A3 | Ordinal: 5284
        void getNumColumns(void) const;

    // RVA: 0x14B7 | Ordinal: 5304
        void getNumRows(void) const;

    // RVA: 0x153F | Ordinal: 5440
        void getRowHeader(void) const;

    // RVA: 0x1540 | Ordinal: 5441
        void getRowHeaderFont(void) const;

    // RVA: 0x1541 | Ordinal: 5442
        void getRowHeaderMode(void) const;

    // RVA: 0x1542 | Ordinal: 5443
        void getRowHeaderWidth(void) const;

    // RVA: 0x1543 | Ordinal: 5444
        void getRowHeight(int) const;

    // RVA: 0x1544 | Ordinal: 5445
        void getRowIcon(int) const;

    // RVA: 0x1545 | Ordinal: 5446
        void getRowIconPosition(int) const;

    // RVA: 0x1546 | Ordinal: 5447
        void getRowJustify(int) const;

    // RVA: 0x1547 | Ordinal: 5448
        void getRowRenumbering(void) const)(int);

    // RVA: 0x1548 | Ordinal: 5449
        void getRowText(int) const;

    // RVA: 0x1549 | Ordinal: 5450
        void getRowTipText(int) const;

    // RVA: 0x154A | Ordinal: 5451
        void getRowY(int) const;

    // RVA: 0x1573 | Ordinal: 5492
        void getSelBackColor(void) const;

    // RVA: 0x1577 | Ordinal: 5496
        void getSelEndColumn(void) const;

    // RVA: 0x1579 | Ordinal: 5498
        void getSelEndRow(void) const;

    // RVA: 0x157C | Ordinal: 5501
        void getSelStartColumn(void) const;

    // RVA: 0x157E | Ordinal: 5503
        void getSelStartRow(void) const;

    // RVA: 0x1588 | Ordinal: 5513
        void getSelTextColor(void) const;

    // RVA: 0x15AB | Ordinal: 5548
        void getShadowColor(void) const;

    // RVA: 0x15CC | Ordinal: 5581
        void getSpanningRange(int, int, int &, int &, int &, int &) const;

    // RVA: 0x15DC | Ordinal: 5597
        void getStippleColor(void) const;

    // RVA: 0x15E9 | Ordinal: 5610
        void getTableStyle(void) const;

    // RVA: 0x1610 | Ordinal: 5649
        void getTextColor(void) const;

    // RVA: 0x1695 | Ordinal: 5782
        void getVisibleColumns(void) const;

    // RVA: 0x169B | Ordinal: 5788
        void getVisibleHeight(void) const;

    // RVA: 0x169E | Ordinal: 5791
        void getVisibleRows(void) const;

    // RVA: 0x16A2 | Ordinal: 5795
        void getVisibleWidth(void) const;

    // RVA: 0x16A6 | Ordinal: 5799
        void getVisibleX(void) const;

    // RVA: 0x16AC | Ordinal: 5805
        void getVisibleY(void) const;

    // RVA: 0x17D7 | Ordinal: 6104
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x18BB | Ordinal: 6332
        void insertColumns(int, int, bool);

    // RVA: 0x18CB | Ordinal: 6348
        void insertRows(int, int, bool);

    // RVA: 0x18F5 | Ordinal: 6390
        void isAnythingSelected(void) const;

    // RVA: 0x190C | Ordinal: 6413
        void isColumnSelected(int) const;

    // RVA: 0x192D | Ordinal: 6446
        void isEditable(void) const;

    // RVA: 0x1958 | Ordinal: 6489
        void isHorzGridShown(void) const;

    // RVA: 0x1968 | Ordinal: 6505
        void isItemCurrent(int, int) const;

    // RVA: 0x1972 | Ordinal: 6515
        void isItemEnabled(int, int) const;

    // RVA: 0x197B | Ordinal: 6524
        void isItemHorizontalSpanning(int, int) const;

    // RVA: 0x1986 | Ordinal: 6535
        void isItemSelected(int, int) const;

    // RVA: 0x1988 | Ordinal: 6537
        void isItemSpanning(int, int) const;

    // RVA: 0x198B | Ordinal: 6540
        void isItemVerticalSpanning(int, int) const;

    // RVA: 0x198F | Ordinal: 6544
        void isItemVisible(int, int) const;

    // RVA: 0x19DA | Ordinal: 6619
        void isRowSelected(int) const;

    // RVA: 0x1A07 | Ordinal: 6664
        void isVertGridShown(void) const;

    // RVA: 0x1A29 | Ordinal: 6698
        void killFocus(void);

    // RVA: 0x1A34 | Ordinal: 6709
        void killSelection(bool);

    // RVA: 0x1A68 | Ordinal: 6761
        void layout(void);

    // RVA: 0x1B39 | Ordinal: 6970
        void load(class FX::FXStream &);

    // RVA: 0x1BB1 | Ordinal: 7090
        void makePositionVisible(int, int);

    // RVA: 0x1C94 | Ordinal: 7317
        void manufacture(void);

    // RVA: 0x1EB6 | Ordinal: 7863
        void moveContents(int, int);

    // RVA: 0x1F42 | Ordinal: 8003
        void onAutoScroll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F74 | Ordinal: 8053
        void onClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F77 | Ordinal: 8056
        void onClipboardGained(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F7D | Ordinal: 8062
        void onClipboardLost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F83 | Ordinal: 8068
        void onClipboardRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F8F | Ordinal: 8080
        void onCmdAcceptInput(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FB0 | Ordinal: 8113
        void onCmdCancelInput(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FC6 | Ordinal: 8135
        void onCmdCopySel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FF4 | Ordinal: 8181
        void onCmdCutSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2000 | Ordinal: 8193
        void onCmdDeleteColumn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2004 | Ordinal: 8197
        void onCmdDeleteRow(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2008 | Ordinal: 8201
        void onCmdDeleteSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x200E | Ordinal: 8207
        void onCmdDeselectAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x202B | Ordinal: 8236
        void onCmdExtend(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20C4 | Ordinal: 8389
        void onCmdHorzGrid(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20CA | Ordinal: 8395
        void onCmdInsertColumn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20CF | Ordinal: 8400
        void onCmdInsertRow(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20E4 | Ordinal: 8421
        void onCmdMark(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20EF | Ordinal: 8432
        void onCmdMoveBottom(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20F0 | Ordinal: 8433
        void onCmdMoveDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20F1 | Ordinal: 8434
        void onCmdMoveEnd(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20F2 | Ordinal: 8435
        void onCmdMoveHome(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20F3 | Ordinal: 8436
        void onCmdMoveLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20F4 | Ordinal: 8437
        void onCmdMovePageDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20F5 | Ordinal: 8438
        void onCmdMovePageUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20F6 | Ordinal: 8439
        void onCmdMoveRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20F7 | Ordinal: 8440
        void onCmdMoveTop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20F8 | Ordinal: 8441
        void onCmdMoveUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x210E | Ordinal: 8463
        void onCmdPasteSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2141 | Ordinal: 8514
        void onCmdSelectAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2145 | Ordinal: 8518
        void onCmdSelectCell(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2147 | Ordinal: 8520
        void onCmdSelectColumn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2148 | Ordinal: 8521
        void onCmdSelectColumnIndex(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x214D | Ordinal: 8526
        void onCmdSelectRow(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x214E | Ordinal: 8527
        void onCmdSelectRowIndex(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2212 | Ordinal: 8723
        void onCmdStartInput(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2219 | Ordinal: 8730
        void onCmdToggleEditable(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2236 | Ordinal: 8759
        void onCmdVertGrid(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2247 | Ordinal: 8776
        void onCommand(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x227F | Ordinal: 8832
        void onDoubleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x229E | Ordinal: 8863
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22C5 | Ordinal: 8902
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22E9 | Ordinal: 8938
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x235E | Ordinal: 9055
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2386 | Ordinal: 9095
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23A2 | Ordinal: 9123
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23C9 | Ordinal: 9162
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23F1 | Ordinal: 9202
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x243E | Ordinal: 9279
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2494 | Ordinal: 9365
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24BC | Ordinal: 9405
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24DC | Ordinal: 9437
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24F2 | Ordinal: 9459
        void onRightBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24FF | Ordinal: 9472
        void onRightBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2506 | Ordinal: 9479
        void onSelectionGained(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x250A | Ordinal: 9483
        void onSelectionLost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x250E | Ordinal: 9487
        void onSelectionRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2524 | Ordinal: 9509
        void onTipTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2531 | Ordinal: 9522
        void onTripleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x254C | Ordinal: 9549
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2558 | Ordinal: 9561
        void onUpdAcceptInput(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x257C | Ordinal: 9597
        void onUpdDeleteColumn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x257D | Ordinal: 9598
        void onUpdDeleteRow(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x257F | Ordinal: 9600
        void onUpdDeselectAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25A0 | Ordinal: 9633
        void onUpdHaveSelection(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25A7 | Ordinal: 9640
        void onUpdHorzGrid(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25AB | Ordinal: 9644
        void onUpdInsertColumn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25AC | Ordinal: 9645
        void onUpdInsertRow(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25E3 | Ordinal: 9700
        void onUpdSelectAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25E4 | Ordinal: 9701
        void onUpdSelectCell(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25E5 | Ordinal: 9702
        void onUpdSelectColumn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25E6 | Ordinal: 9703
        void onUpdSelectRow(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2601 | Ordinal: 9730
        void onUpdStartInput(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2607 | Ordinal: 9736
        void onUpdToggleEditable(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x261A | Ordinal: 9755
        void onUpdVertGrid(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2658 | Ordinal: 9817
        void overlayText(int, int, int, int, class FX::FXString const &, char const *, char const *, bool);

    // RVA: 0x2659 | Ordinal: 9818
        void overlayText(int, int, int, int, char const *, int, char const *, char const *, bool);

    // RVA: 0x2719 | Ordinal: 10010
        void recalc(void);

    // RVA: 0x2748 | Ordinal: 10057
        void removeColumns(int, int, bool);

    // RVA: 0x2754 | Ordinal: 10069
        void removeItem(int, int, bool);

    // RVA: 0x275A | Ordinal: 10075
        void removeRange(int, int, int, int, bool);

    // RVA: 0x275B | Ordinal: 10076
        void removeRows(int, int, bool);

    // RVA: 0x27C9 | Ordinal: 10186
        void rowAtY(int) const;

    // RVA: 0x286A | Ordinal: 10347
        void save(class FX::FXStream &) const;

    // RVA: 0x28DB | Ordinal: 10460
        void selectCell(int, int, bool);

    // RVA: 0x28DC | Ordinal: 10461
        void selectColumn(int, bool);

    // RVA: 0x28E4 | Ordinal: 10469
        void selectRange(int, int, int, int, bool);

    // RVA: 0x28E5 | Ordinal: 10470
        void selectRow(int, bool);

    // RVA: 0x2976 | Ordinal: 10615
        void setAnchorItem(int, int);

    // RVA: 0x29B7 | Ordinal: 10680
        void setBaseColor(unsigned int);

    // RVA: 0x29C5 | Ordinal: 10694
        void setBorderColor(unsigned int);

    // RVA: 0x29D8 | Ordinal: 10713
        void setCellBorderColor(unsigned int);

    // RVA: 0x29D9 | Ordinal: 10714
        void setCellBorderWidth(int);

    // RVA: 0x29DA | Ordinal: 10715
        void setCellColor(int, int, unsigned int);

    // RVA: 0x29F7 | Ordinal: 10744
        void setColumnHeaderFont(class FX::FXFont *);

    // RVA: 0x29F8 | Ordinal: 10745
        void setColumnHeaderHeight(int);

    // RVA: 0x29F9 | Ordinal: 10746
        void setColumnHeaderMode(unsigned int);

    // RVA: 0x29FA | Ordinal: 10747
        void setColumnIcon(int, class FX::FXIcon *);

    // RVA: 0x29FB | Ordinal: 10748
        void setColumnIconPosition(int, unsigned int);

    // RVA: 0x29FC | Ordinal: 10749
        void setColumnJustify(int, unsigned int);

    // RVA: 0x29FD | Ordinal: 10750
        void setColumnRenumbering(class FX::FXString (__cdecl *)(int));

    // RVA: 0x29FE | Ordinal: 10751
        void setColumnText(int, class FX::FXString const &);

    // RVA: 0x29FF | Ordinal: 10752
        void setColumnTipText(int, class FX::FXString const &);

    // RVA: 0x2A00 | Ordinal: 10753
        void setColumnWidth(int, int);

    // RVA: 0x2A17 | Ordinal: 10776
        void setCurrentItem(int, int, bool);

    // RVA: 0x2A42 | Ordinal: 10819
        void setDefColumnWidth(int);

    // RVA: 0x2A43 | Ordinal: 10820
        void setDefRowHeight(int);

    // RVA: 0x2A75 | Ordinal: 10870
        void setEditable(bool);

    // RVA: 0x2AA5 | Ordinal: 10918
        void setFocus(void);

    // RVA: 0x2AC6 | Ordinal: 10951
        void setFont(class FX::FXFont *);

    // RVA: 0x2AE4 | Ordinal: 10981
        void setGridColor(unsigned int);

    // RVA: 0x2B29 | Ordinal: 11050
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B39 | Ordinal: 11066
        void setHiliteColor(unsigned int);

    // RVA: 0x2B7E | Ordinal: 11135
        void setItem(int, int, class FX::FXTableItem *, bool);

    // RVA: 0x2B82 | Ordinal: 11139
        void setItemBorders(int, int, unsigned int);

    // RVA: 0x2B8D | Ordinal: 11150
        void setItemData(int, int, void *);

    // RVA: 0x2B90 | Ordinal: 11153
        void setItemFromControl(int, int, class FX::FXWindow *);

    // RVA: 0x2B94 | Ordinal: 11157
        void setItemIcon(int, int, class FX::FXIcon *, bool, bool);

    // RVA: 0x2B96 | Ordinal: 11159
        void setItemIconPosition(int, int, unsigned int);

    // RVA: 0x2B98 | Ordinal: 11161
        void setItemJustify(int, int, unsigned int);

    // RVA: 0x2BA2 | Ordinal: 11171
        void setItemStipple(int, int, enum FX::FXStipplePattern);

    // RVA: 0x2BA9 | Ordinal: 11178
        void setItemText(int, int, class FX::FXString const &, bool);

    // RVA: 0x2BAD | Ordinal: 11182
        void setItemTipText(int, int, class FX::FXString const &);

    // RVA: 0x2BDA | Ordinal: 11227
        void setMarginBottom(int);

    // RVA: 0x2BDD | Ordinal: 11230
        void setMarginLeft(int);

    // RVA: 0x2BE1 | Ordinal: 11234
        void setMarginRight(int);

    // RVA: 0x2BE4 | Ordinal: 11237
        void setMarginTop(int);

    // RVA: 0x2C99 | Ordinal: 11418
        void setRowHeaderFont(class FX::FXFont *);

    // RVA: 0x2C9A | Ordinal: 11419
        void setRowHeaderMode(unsigned int);

    // RVA: 0x2C9B | Ordinal: 11420
        void setRowHeaderWidth(int);

    // RVA: 0x2C9C | Ordinal: 11421
        void setRowHeight(int, int);

    // RVA: 0x2C9D | Ordinal: 11422
        void setRowIcon(int, class FX::FXIcon *);

    // RVA: 0x2C9E | Ordinal: 11423
        void setRowIconPosition(int, unsigned int);

    // RVA: 0x2C9F | Ordinal: 11424
        void setRowJustify(int, unsigned int);

    // RVA: 0x2CA0 | Ordinal: 11425
        void setRowRenumbering(class FX::FXString (__cdecl *)(int));

    // RVA: 0x2CA1 | Ordinal: 11426
        void setRowText(int, class FX::FXString const &);

    // RVA: 0x2CA2 | Ordinal: 11427
        void setRowTipText(int, class FX::FXString const &);

    // RVA: 0x2CBE | Ordinal: 11455
        void setSelBackColor(unsigned int);

    // RVA: 0x2CCD | Ordinal: 11470
        void setSelTextColor(unsigned int);

    // RVA: 0x2CEE | Ordinal: 11503
        void setShadowColor(unsigned int);

    // RVA: 0x2D10 | Ordinal: 11537
        void setSpanningRange(int, int, int, int, int, int, bool);

    // RVA: 0x2D25 | Ordinal: 11558
        void setStippleColor(unsigned int);

    // RVA: 0x2D31 | Ordinal: 11570
        void setTableSize(int, int, bool);

    // RVA: 0x2D32 | Ordinal: 11571
        void setTableStyle(unsigned int);

    // RVA: 0x2D57 | Ordinal: 11608
        void setTextColor(unsigned int);

    // RVA: 0x2DCC | Ordinal: 11725
        void setVisibleColumns(int);

    // RVA: 0x2DCF | Ordinal: 11728
        void setVisibleRows(int);

    // RVA: 0x2E10 | Ordinal: 11793
        void showHorzGrid(bool);

    // RVA: 0x2E24 | Ordinal: 11813
        void showVertGrid(bool);

    // RVA: 0x2E56 | Ordinal: 11863
        void startInput(int, int);

    // RVA: 0x2F14 | Ordinal: 12053
        void updateItem(int, int) const;

    // RVA: 0x2F19 | Ordinal: 12058
        void updateRange(int, int, int, int) const;

    // RVA: 0x4C8 | Ordinal: 1225
        void _FXTable(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTABLE_HPP
