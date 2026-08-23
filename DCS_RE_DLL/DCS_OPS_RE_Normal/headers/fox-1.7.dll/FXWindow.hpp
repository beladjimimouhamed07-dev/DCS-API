#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXWindow
{
public:

    // RVA: 0x37D | Ordinal: 894
        void FXWindow(class FX::FXApp *, class FX::FXWindow *, unsigned int, int, int, int, int);

    // RVA: 0x37E | Ordinal: 895
        void FXWindow(class FX::FXApp *, class FX::FXVisual *);

    // RVA: 0x37F | Ordinal: 896
        void FXWindow(void);

    // RVA: 0x380 | Ordinal: 897
        void FXWindow(class FX::FXComposite *, unsigned int, int, int, int, int);

    // RVA: 0x934 | Ordinal: 2357
        void GetClass(void) const;

    // RVA: 0x939 | Ordinal: 2362
        void GetDC(void) const;

    // RVA: 0x93E | Ordinal: 2367
        void ReleaseDC(void *) const;

    // RVA: 0x950 | Ordinal: 2385
        void acceptDrop(enum FX::FXDragAction) const;

    // RVA: 0x955 | Ordinal: 2390
        void acquireClipboard(unsigned short const *, unsigned int);

    // RVA: 0x956 | Ordinal: 2391
        void acquireSelection(unsigned short const *, unsigned int);

    // RVA: 0x95F | Ordinal: 2400
        void addHotKey(unsigned int);

    // RVA: 0x97D | Ordinal: 2430
        void after(class FX::FXWindow const *, class FX::FXWindow const *);

    // RVA: 0xA51 | Ordinal: 2642
        void attach(void *);

    // RVA: 0xA57 | Ordinal: 2648
        void before(class FX::FXWindow const *, class FX::FXWindow const *);

    // RVA: 0xA5B | Ordinal: 2652
        void beginDrag(unsigned short const *, unsigned int);

    // RVA: 0xA9F | Ordinal: 2720
        void canFocus(void) const;

    // RVA: 0xAB8 | Ordinal: 2745
        void changeFocus(class FX::FXWindow *);

    // RVA: 0xAC5 | Ordinal: 2758
        void childAtIndex(int) const;

    // RVA: 0xAE3 | Ordinal: 2788
        void clearDragRectangle(void) const;

    // RVA: 0xAED | Ordinal: 2798
        void clearShape(void);

    // RVA: 0xB19 | Ordinal: 2842
        void commonAncestor(class FX::FXWindow *, class FX::FXWindow *);

    // RVA: 0xB7B | Ordinal: 2940
        void contains(int, int) const;

    // RVA: 0xB7C | Ordinal: 2941
        void containsChild(class FX::FXWindow const *) const;

    // RVA: 0xBEB | Ordinal: 3052
        void create(void);

    // RVA: 0xBEC | Ordinal: 3053
        void createComposeContext(void);

    // RVA: 0xC10 | Ordinal: 3089
        void cursorShown(void) const;

    // RVA: 0xC83 | Ordinal: 3204
        void destroy(void);

    // RVA: 0xC84 | Ordinal: 3205
        void destroyComposeContext(void);

    // RVA: 0xCC8 | Ordinal: 3273
        void detach(void);

    // RVA: 0xCD3 | Ordinal: 3284
        void didAccept(void) const;

    // RVA: 0xCED | Ordinal: 3310
        void disable(void);

    // RVA: 0xD05 | Ordinal: 3334
        void doesOverrideRedirect(void) const;

    // RVA: 0xD08 | Ordinal: 3337
        void doesSaveUnder(void) const;

    // RVA: 0xDE3 | Ordinal: 3556
        void dropDisable(void);

    // RVA: 0xDE4 | Ordinal: 3557
        void dropEnable(void);

    // RVA: 0xDE5 | Ordinal: 3558
        void dropFinished(enum FX::FXDragAction) const;

    // RVA: 0xE11 | Ordinal: 3602
        void enable(void);

    // RVA: 0xE1F | Ordinal: 3616
        void endDrag(bool);

    // RVA: 0xF16 | Ordinal: 3863
        void findDefault(void) const;

    // RVA: 0xF1E | Ordinal: 3871
        void findInitial(void) const;

    // RVA: 0xF57 | Ordinal: 3928
        void forceRefresh(void);

    // RVA: 0xFDF | Ordinal: 4064
        void getAccelTable(void) const;

    // RVA: 0x1039 | Ordinal: 4154
        void getBackColor(void) const;

    // RVA: 0x1088 | Ordinal: 4233
        void getChildAt(int, int) const;

    // RVA: 0x1089 | Ordinal: 4234
        void getChildWithKey(unsigned int) const;

    // RVA: 0x10A8 | Ordinal: 4265
        void getComposeContext(void) const;

    // RVA: 0x10EE | Ordinal: 4335
        void getCursorPosition(int &, int &, unsigned int &) const;

    // RVA: 0x10F1 | Ordinal: 4338
        void getDNDData(enum FX::FXDNDOrigin, unsigned short, unsigned char *&, unsigned int &) const;

    // RVA: 0x10F2 | Ordinal: 4339
        void getDNDData(enum FX::FXDNDOrigin, unsigned short, class FX::FXString &) const;

    // RVA: 0x110A | Ordinal: 4363
        void getDefaultCursor(void) const;

    // RVA: 0x115F | Ordinal: 4448
        void getDefaultHeight(void);

    // RVA: 0x11B5 | Ordinal: 4534
        void getDefaultWidth(void);

    // RVA: 0x11D6 | Ordinal: 4567
        void getDragCursor(void) const;

    // RVA: 0x11FC | Ordinal: 4605
        void getFirst(void) const;

    // RVA: 0x1204 | Ordinal: 4613
        void getFocus(void) const;

    // RVA: 0x1268 | Ordinal: 4713
        void getHeightForWidth(int);

    // RVA: 0x1269 | Ordinal: 4714
        void getHelpTag(void) const;

    // RVA: 0x132A | Ordinal: 4907
        void getKey(void) const;

    // RVA: 0x132F | Ordinal: 4912
        void getLast(void) const;

    // RVA: 0x1333 | Ordinal: 4916
        void getLayoutHints(void) const;

    // RVA: 0x1474 | Ordinal: 5237
        void getMetaClass(void) const;

    // RVA: 0x148C | Ordinal: 5261
        void getNext(void) const;

    // RVA: 0x14DD | Ordinal: 5342
        void getOwner(void) const;

    // RVA: 0x14EF | Ordinal: 5360
        void getParent(void) const;

    // RVA: 0x150E | Ordinal: 5391
        void getPrev(void) const;

    // RVA: 0x153D | Ordinal: 5438
        void getRoot(void) const;

    // RVA: 0x159C | Ordinal: 5533
        void getSelector(void) const;

    // RVA: 0x15AE | Ordinal: 5551
        void getShell(void) const;

    // RVA: 0x15EC | Ordinal: 5613
        void getTarget(void) const;

    // RVA: 0x16C6 | Ordinal: 5831
        void getWidthForHeight(int);

    // RVA: 0x16C7 | Ordinal: 5832
        void getWindowClass(void) const;

    // RVA: 0x16CA | Ordinal: 5835
        void getX(void) const;

    // RVA: 0x16CF | Ordinal: 5840
        void getY(void) const;

    // RVA: 0x16E0 | Ordinal: 5857
        void grab(void);

    // RVA: 0x16E1 | Ordinal: 5858
        void grabKeyboard(void);

    // RVA: 0x16E2 | Ordinal: 5859
        void grabbed(void) const;

    // RVA: 0x16E3 | Ordinal: 5860
        void grabbedKeyboard(void) const;

    // RVA: 0x17F4 | Ordinal: 6133
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x17FA | Ordinal: 6139
        void handleDrag(int, int, enum FX::FXDragAction);

    // RVA: 0x1809 | Ordinal: 6154
        void hasClipboard(void) const;

    // RVA: 0x1810 | Ordinal: 6161
        void hasFocus(void) const;

    // RVA: 0x1815 | Ordinal: 6166
        void hasSelection(void) const;

    // RVA: 0x182F | Ordinal: 6192
        void hide(void);

    // RVA: 0x185D | Ordinal: 6238
        void inFocusChain(void) const;

    // RVA: 0x188D | Ordinal: 6286
        void indexOfChild(class FX::FXWindow const *) const;

    // RVA: 0x189A | Ordinal: 6299
        void inquireDNDAction(void) const;

    // RVA: 0x189B | Ordinal: 6300
        void inquireDNDTypes(enum FX::FXDNDOrigin, unsigned short *&, unsigned int &) const;

    // RVA: 0x18F1 | Ordinal: 6386
        void isActive(void) const;

    // RVA: 0x1909 | Ordinal: 6410
        void isChildOf(class FX::FXWindow const *) const;

    // RVA: 0x190E | Ordinal: 6415
        void isComposite(void) const;

    // RVA: 0x1915 | Ordinal: 6422
        void isDefault(void) const;

    // RVA: 0x1927 | Ordinal: 6440
        void isDragging(void) const;

    // RVA: 0x1928 | Ordinal: 6441
        void isDropEnabled(void) const;

    // RVA: 0x1929 | Ordinal: 6442
        void isDropTarget(void) const;

    // RVA: 0x1936 | Ordinal: 6455
        void isEnabled(void) const;

    // RVA: 0x195F | Ordinal: 6496
        void isInitial(void) const;

    // RVA: 0x19C3 | Ordinal: 6596
        void isOwnerOf(class FX::FXWindow const *) const;

    // RVA: 0x19EE | Ordinal: 6639
        void isShell(void) const;

    // RVA: 0x1A2E | Ordinal: 6703
        void killFocus(void);

    // RVA: 0x1A71 | Ordinal: 6770
        void layout(void);

    // RVA: 0x1B49 | Ordinal: 6986
        void load(class FX::FXStream &);

    // RVA: 0x1BA6 | Ordinal: 7079
        void lower(void);

    // RVA: 0x1CAF | Ordinal: 7344
        void manufacture(void);

    // RVA: 0x1EAF | Ordinal: 7856
        void move(int, int);

    // RVA: 0x1F33 | Ordinal: 7988
        void numChildren(void) const;

    // RVA: 0x1F38 | Ordinal: 7993
        void offeredDNDType(enum FX::FXDNDOrigin, unsigned short) const;

    // RVA: 0x1F4E | Ordinal: 8015
        void onBeginDrag(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F7A | Ordinal: 8059
        void onClipboardGained(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F80 | Ordinal: 8065
        void onClipboardLost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F86 | Ordinal: 8071
        void onClipboardRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FFB | Ordinal: 8188
        void onCmdDelete(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2016 | Ordinal: 8215
        void onCmdDisable(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2027 | Ordinal: 8232
        void onCmdEnable(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20BE | Ordinal: 8383
        void onCmdHide(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20E3 | Ordinal: 8420
        void onCmdLower(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2121 | Ordinal: 8482
        void onCmdRaise(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21FE | Ordinal: 8703
        void onCmdShow(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x221C | Ordinal: 8733
        void onCmdToggleEnabled(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2223 | Ordinal: 8740
        void onCmdToggleShown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2234 | Ordinal: 8757
        void onCmdUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x224A | Ordinal: 8779
        void onConfigure(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2252 | Ordinal: 8787
        void onDNDDrop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2259 | Ordinal: 8794
        void onDNDEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2260 | Ordinal: 8801
        void onDNDLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2268 | Ordinal: 8809
        void onDNDMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x226D | Ordinal: 8814
        void onDNDRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2276 | Ordinal: 8823
        void onDestroy(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2285 | Ordinal: 8838
        void onDragged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x228B | Ordinal: 8844
        void onEndDrag(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22A4 | Ordinal: 8869
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22CA | Ordinal: 8907
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22EE | Ordinal: 8943
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2306 | Ordinal: 8967
        void onFocusSelf(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2364 | Ordinal: 9061
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x238C | Ordinal: 9101
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23A8 | Ordinal: 9129
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23D0 | Ordinal: 9169
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23F8 | Ordinal: 9209
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2407 | Ordinal: 9224
        void onMap(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2414 | Ordinal: 9237
        void onMiddleBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x241E | Ordinal: 9247
        void onMiddleBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2443 | Ordinal: 9284
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2451 | Ordinal: 9298
        void onMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x249E | Ordinal: 9375
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24C2 | Ordinal: 9411
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24E3 | Ordinal: 9444
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24F5 | Ordinal: 9462
        void onRightBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2502 | Ordinal: 9475
        void onRightBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2509 | Ordinal: 9482
        void onSelectionGained(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x250D | Ordinal: 9486
        void onSelectionLost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2511 | Ordinal: 9490
        void onSelectionRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2514 | Ordinal: 9493
        void onSpaceBallButtonPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2515 | Ordinal: 9494
        void onSpaceBallButtonRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2517 | Ordinal: 9496
        void onSpaceBallMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2551 | Ordinal: 9554
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2557 | Ordinal: 9560
        void onUnmap(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x260A | Ordinal: 9739
        void onUpdToggleEnabled(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2611 | Ordinal: 9746
        void onUpdToggleShown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2621 | Ordinal: 9762
        void onUpdYes(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x262E | Ordinal: 9775
        void onUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x269E | Ordinal: 9887
        void position(int, int, int, int);

    // RVA: 0x26DF | Ordinal: 9952
        void raise(void);

    // RVA: 0x271C | Ordinal: 10013
        void recalc(void);

    // RVA: 0x2734 | Ordinal: 10037
        void releaseClipboard(void);

    // RVA: 0x2735 | Ordinal: 10038
        void releaseSelection(void);

    // RVA: 0x2736 | Ordinal: 10039
        void remHotKey(unsigned int);

    // RVA: 0x2768 | Ordinal: 10089
        void repaint(int, int, int, int) const;

    // RVA: 0x2769 | Ordinal: 10090
        void repaint(void) const;

    // RVA: 0x276A | Ordinal: 10091
        void reparent(class FX::FXWindow *, class FX::FXWindow *);

    // RVA: 0x279D | Ordinal: 10142
        void resize(int, int);

    // RVA: 0x287A | Ordinal: 10363
        void save(class FX::FXStream &) const;

    // RVA: 0x28C8 | Ordinal: 10441
        void scroll(int, int, int, int, int, int) const;

    // RVA: 0x295F | Ordinal: 10592
        void setAccelTable(class FX::FXAccelTable *);

    // RVA: 0x299E | Ordinal: 10655
        void setBackColor(unsigned int);

    // RVA: 0x2A28 | Ordinal: 10793
        void setCursorPosition(int, int);

    // RVA: 0x2A2C | Ordinal: 10797
        void setDNDData(enum FX::FXDNDOrigin, unsigned short, class FX::FXString const &) const;

    // RVA: 0x2A2D | Ordinal: 10798
        void setDNDData(enum FX::FXDNDOrigin, unsigned short, unsigned char *, unsigned int) const;

    // RVA: 0x2A45 | Ordinal: 10822
        void setDefault(unsigned char);

    // RVA: 0x2A47 | Ordinal: 10824
        void setDefaultCursor(class FX::FXCursor *);

    // RVA: 0x2A63 | Ordinal: 10852
        void setDragCursor(class FX::FXCursor *);

    // RVA: 0x2A65 | Ordinal: 10854
        void setDragRectangle(int, int, int, int, bool) const;

    // RVA: 0x2AAC | Ordinal: 10925
        void setFocus(void);

    // RVA: 0x2B0A | Ordinal: 11019
        void setHeight(int);

    // RVA: 0x2B0B | Ordinal: 11020
        void setHelpTag(class FX::FXString const &);

    // RVA: 0x2B6F | Ordinal: 11120
        void setInitial(bool);

    // RVA: 0x2BBB | Ordinal: 11196
        void setKey(unsigned int);

    // RVA: 0x2BBD | Ordinal: 11198
        void setLayoutHints(unsigned int);

    // RVA: 0x2CE0 | Ordinal: 11489
        void setSelector(unsigned int);

    // RVA: 0x2CF0 | Ordinal: 11505
        void setShape(class FX::FXRegion const &);

    // RVA: 0x2CF1 | Ordinal: 11506
        void setShape(class FX::FXBitmap *);

    // RVA: 0x2CF2 | Ordinal: 11507
        void setShape(class FX::FXIcon *);

    // RVA: 0x2D35 | Ordinal: 11574
        void setTarget(class FX::FXObject *);

    // RVA: 0x2DDC | Ordinal: 11741
        void setWidth(int);

    // RVA: 0x2DDF | Ordinal: 11744
        void setX(int);

    // RVA: 0x2DE1 | Ordinal: 11746
        void setY(int);

    // RVA: 0x2DFC | Ordinal: 11773
        void show(void);

    // RVA: 0x2DFD | Ordinal: 11774
        void showCursor(bool);

    // RVA: 0x2E25 | Ordinal: 11814
        void shown(void) const;

    // RVA: 0x2EBA | Ordinal: 11963
        void tr(char const *, char const *, int) const;

    // RVA: 0x2EC4 | Ordinal: 11973
        void translateCoordinatesFrom(int &, int &, class FX::FXWindow const *, int, int) const;

    // RVA: 0x2EC5 | Ordinal: 11974
        void translateCoordinatesTo(int &, int &, class FX::FXWindow const *, int, int) const;

    // RVA: 0x2EE7 | Ordinal: 12008
        void underCursor(void) const;

    // RVA: 0x2EF1 | Ordinal: 12018
        void ungrab(void);

    // RVA: 0x2EF2 | Ordinal: 12019
        void ungrabKeyboard(void);

    // RVA: 0x2F0D | Ordinal: 12046
        void update(int, int, int, int) const;

    // RVA: 0x2F0E | Ordinal: 12047
        void update(void) const;

    // RVA: 0x4F3 | Ordinal: 1268
        void _FXWindow(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXWINDOW_HPP
