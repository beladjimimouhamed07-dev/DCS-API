#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXApp
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXApp
{
public:

    // RVA: 0x2A | Ordinal: 43
        void FXApp(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x95C | Ordinal: 2397
        void addChore(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x95E | Ordinal: 2399
        void addDeadline(class FX::FXObject *, unsigned int, __int64, void *);

    // RVA: 0x960 | Ordinal: 2401
        void addInput(class FX::FXObject *, unsigned int, void *, unsigned int, void *);

    // RVA: 0x963 | Ordinal: 2404
        void addSignal(int, class FX::FXObject *, unsigned int, bool, unsigned int);

    // RVA: 0x964 | Ordinal: 2405
        void addTimeout(class FX::FXObject *, unsigned int, __int64, void *);

    // RVA: 0xA55 | Ordinal: 2646
        void beep(void);

    // RVA: 0xA5E | Ordinal: 2655
        void beginWaitCursor(void);

    // RVA: 0xAF1 | Ordinal: 2802
        void clipboardGetData(class FX::FXWindow const *, unsigned short, unsigned char *&, unsigned int &);

    // RVA: 0xAF2 | Ordinal: 2803
        void clipboardGetTypes(class FX::FXWindow const *, unsigned short *&, unsigned int &);

    // RVA: 0xAF3 | Ordinal: 2804
        void clipboardSetData(class FX::FXWindow const *, unsigned short, unsigned char *, unsigned int);

    // RVA: 0xAFF | Ordinal: 2816
        void closeDisplay(void);

    // RVA: 0xB00 | Ordinal: 2817
        void closeInputDevices(void);

    // RVA: 0xB9F | Ordinal: 2976
        void create(void);

    // RVA: 0xC64 | Ordinal: 3173
        void destroy(void);

    // RVA: 0xC8B | Ordinal: 3212
        void detach(void);

    // RVA: 0xCF6 | Ordinal: 3319
        void dispatchEvent(void *, unsigned int, unsigned __int64, __int64);

    // RVA: 0xCF7 | Ordinal: 3320
        void dispatchEvent(struct tagMSG &);

    // RVA: 0xD0F | Ordinal: 3344
        void dragdropGetData(class FX::FXWindow const *, unsigned short, unsigned char *&, unsigned int &);

    // RVA: 0xD10 | Ordinal: 3345
        void dragdropGetTypes(class FX::FXWindow const *, unsigned short *&, unsigned int &);

    // RVA: 0xD11 | Ordinal: 3346
        void dragdropSetData(class FX::FXWindow const *, unsigned short, unsigned char *, unsigned int);

    // RVA: 0xDE6 | Ordinal: 3559
        void dumpWidgets(void) const;

    // RVA: 0xE23 | Ordinal: 3620
        void endWaitCursor(void);

    // RVA: 0xE2A | Ordinal: 3627
        void enterWindow(class FX::FXWindow *, class FX::FXWindow *);

    // RVA: 0xE62 | Ordinal: 3683
        void exit(int);

    // RVA: 0xF30 | Ordinal: 3889
        void findWindowAt(int, int, void *) const;

    // RVA: 0xF31 | Ordinal: 3890
        void findWindowWithId(void *) const;

    // RVA: 0xF48 | Ordinal: 3913
        void flush(bool);

    // RVA: 0xF56 | Ordinal: 3927
        void forceRefresh(void);

    // RVA: 0xFEC | Ordinal: 4077
        void getActiveWindow(void) const;

    // RVA: 0x1011 | Ordinal: 4114
        void getAnimSpeed(void) const;

    // RVA: 0x1017 | Ordinal: 4120
        void getAppName(void) const;

    // RVA: 0x1018 | Ordinal: 4121
        void getArgc(void) const;

    // RVA: 0x1019 | Ordinal: 4122
        void getArgv(void) const;

    // RVA: 0x102E | Ordinal: 4143
        void getAutoHideDelay(void) const;

    // RVA: 0x1035 | Ordinal: 4150
        void getBackColor(void) const;

    // RVA: 0x104B | Ordinal: 4172
        void getBaseColor(void) const;

    // RVA: 0x1057 | Ordinal: 4184
        void getBlinkSpeed(void) const;

    // RVA: 0x1059 | Ordinal: 4186
        void getBorderColor(void) const;

    // RVA: 0x108C | Ordinal: 4237
        void getClickSpeed(void) const;

    // RVA: 0x1092 | Ordinal: 4243
        void getClipboardWindow(void) const;

    // RVA: 0x10F0 | Ordinal: 4337
        void getCursorWindow(void) const;

    // RVA: 0x1109 | Ordinal: 4362
        void getDefaultCursor(enum FX::FXDefaultCursor) const;

    // RVA: 0x1160 | Ordinal: 4449
        void getDefaultVisual(void) const;

    // RVA: 0x11C8 | Ordinal: 4553
        void getDisplay(void) const;

    // RVA: 0x11D7 | Ordinal: 4568
        void getDragDelta(void) const;

    // RVA: 0x11D8 | Ordinal: 4569
        void getDragTypeName(unsigned short) const;

    // RVA: 0x11D9 | Ordinal: 4570
        void getDragWindow(void) const;

    // RVA: 0x1205 | Ordinal: 4614
        void getFocusWindow(void) const;

    // RVA: 0x122B | Ordinal: 4652
        void getForeColor(void) const;

    // RVA: 0x128D | Ordinal: 4750
        void getHiliteColor(void) const;

    // RVA: 0x132B | Ordinal: 4908
        void getKeyState(unsigned int) const;

    // RVA: 0x1370 | Ordinal: 4977
        void getMenuPause(void) const;

    // RVA: 0x1385 | Ordinal: 4998
        void getMetaClass(void) const;

    // RVA: 0x1482 | Ordinal: 5251
        void getModalWindow(void) const;

    // RVA: 0x1483 | Ordinal: 5252
        void getModality(void) const;

    // RVA: 0x1487 | Ordinal: 5256
        void getMonoVisual(void) const;

    // RVA: 0x148E | Ordinal: 5263
        void getNextEvent(struct tagMSG &, __int64);

    // RVA: 0x1490 | Ordinal: 5265
        void getNormalFont(void) const;

    // RVA: 0x1503 | Ordinal: 5380
        void getPopupWindow(void) const;

    // RVA: 0x153E | Ordinal: 5439
        void getRootWindow(void) const;

    // RVA: 0x1557 | Ordinal: 5464
        void getScrollBarSize(void) const;

    // RVA: 0x1559 | Ordinal: 5466
        void getScrollDelay(void) const;

    // RVA: 0x155A | Ordinal: 5467
        void getScrollSpeed(void) const;

    // RVA: 0x157A | Ordinal: 5499
        void getSelMenuBackColor(void) const;

    // RVA: 0x157B | Ordinal: 5500
        void getSelMenuTextColor(void) const;

    // RVA: 0x158C | Ordinal: 5517
        void getSelbackColor(void) const;

    // RVA: 0x1598 | Ordinal: 5529
        void getSelectionWindow(void) const;

    // RVA: 0x159D | Ordinal: 5534
        void getSelforeColor(void) const;

    // RVA: 0x15A2 | Ordinal: 5539
        void getShadowColor(void) const;

    // RVA: 0x164D | Ordinal: 5710
        void getTipbackColor(void) const;

    // RVA: 0x164E | Ordinal: 5711
        void getTipforeColor(void) const;

    // RVA: 0x165B | Ordinal: 5724
        void getToolTipPause(void) const;

    // RVA: 0x165C | Ordinal: 5725
        void getToolTipTime(void) const;

    // RVA: 0x1667 | Ordinal: 5736
        void getTranslator(void) const;

    // RVA: 0x166D | Ordinal: 5742
        void getTypingSpeed(void) const;

    // RVA: 0x1690 | Ordinal: 5777
        void getVendorName(void) const;

    // RVA: 0x16B2 | Ordinal: 5811
        void getWaitCursor(void) const;

    // RVA: 0x16BA | Ordinal: 5819
        void getWheelLines(void) const;

    // RVA: 0x16C8 | Ordinal: 5833
        void getWindowCount(void) const;

    // RVA: 0x1703 | Ordinal: 5892
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1808 | Ordinal: 6153
        void hasChore(class FX::FXObject *, unsigned int) const;

    // RVA: 0x1811 | Ordinal: 6162
        void hasInputMethod(void) const;

    // RVA: 0x1816 | Ordinal: 6167
        void hasTimeout(class FX::FXObject *, unsigned int) const;

    // RVA: 0x185B | Ordinal: 6236
        void immediatesignalhandler(int);

    // RVA: 0x1890 | Ordinal: 6289
        void init(int &, char **, bool);

    // RVA: 0x18D2 | Ordinal: 6355
        void instance(void);

    // RVA: 0x1960 | Ordinal: 6497
        void isInitialized(void) const;

    // RVA: 0x19A3 | Ordinal: 6564
        void isModal(class FX::FXWindow *) const;

    // RVA: 0x1A75 | Ordinal: 6774
        void leaveWindow(class FX::FXWindow *, class FX::FXWindow *);

    // RVA: 0x1AAD | Ordinal: 6830
        void load(class FX::FXStream &);

    // RVA: 0x1BC7 | Ordinal: 7112
        void manufacture(void);

    // RVA: 0x1ED2 | Ordinal: 7891
        void mutex(void);

    // RVA: 0x2026 | Ordinal: 8231
        void onCmdDump(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20C5 | Ordinal: 8390
        void onCmdHover(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x211E | Ordinal: 8479
        void onCmdQuit(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2646 | Ordinal: 9799
        void openDisplay(char const *);

    // RVA: 0x2647 | Ordinal: 9800
        void openInputDevices(void);

    // RVA: 0x266E | Ordinal: 9839
        void peekEvent(void);

    // RVA: 0x272B | Ordinal: 10028
        void refresh(void);

    // RVA: 0x272C | Ordinal: 10029
        void reg(void);

    // RVA: 0x272D | Ordinal: 10030
        void registerDragType(class FX::FXString const &) const;

    // RVA: 0x2737 | Ordinal: 10040
        void remainingTimeout(class FX::FXObject *, unsigned int);

    // RVA: 0x2747 | Ordinal: 10056
        void removeChore(class FX::FXObject *, unsigned int);

    // RVA: 0x274D | Ordinal: 10062
        void removeInput(void *, unsigned int);

    // RVA: 0x275C | Ordinal: 10077
        void removeSignal(int);

    // RVA: 0x275F | Ordinal: 10080
        void removeTimeout(class FX::FXObject *, unsigned int);

    // RVA: 0x2767 | Ordinal: 10088
        void repaint(void);

    // RVA: 0x27CD | Ordinal: 10190
        void run(void);

    // RVA: 0x27D0 | Ordinal: 10193
        void runModal(void);

    // RVA: 0x27D1 | Ordinal: 10194
        void runModalFor(class FX::FXWindow *);

    // RVA: 0x27D2 | Ordinal: 10195
        void runModalWhileEvents(class FX::FXWindow *, __int64);

    // RVA: 0x27D3 | Ordinal: 10196
        void runModalWhileShown(class FX::FXWindow *);

    // RVA: 0x27D4 | Ordinal: 10197
        void runOneEvent(__int64);

    // RVA: 0x27D5 | Ordinal: 10198
        void runPopup(class FX::FXWindow *);

    // RVA: 0x27D6 | Ordinal: 10199
        void runUntil(unsigned int &);

    // RVA: 0x27D8 | Ordinal: 10201
        void runWhileEvents(__int64);

    // RVA: 0x27DF | Ordinal: 10208
        void save(class FX::FXStream &) const;

    // RVA: 0x28E7 | Ordinal: 10472
        void selectionGetData(class FX::FXWindow const *, unsigned short, unsigned char *&, unsigned int &);

    // RVA: 0x28E8 | Ordinal: 10473
        void selectionGetTypes(class FX::FXWindow const *, unsigned short *&, unsigned int &);

    // RVA: 0x28E9 | Ordinal: 10474
        void selectionSetData(class FX::FXWindow const *, unsigned short, unsigned char *, unsigned int);

    // RVA: 0x297C | Ordinal: 10621
        void setAnimSpeed(__int64);

    // RVA: 0x297E | Ordinal: 10623
        void setAppName(class FX::FXString const &);

    // RVA: 0x2994 | Ordinal: 10645
        void setAutoHideDelay(__int64);

    // RVA: 0x299A | Ordinal: 10651
        void setBackColor(unsigned int);

    // RVA: 0x29B2 | Ordinal: 10675
        void setBaseColor(unsigned int);

    // RVA: 0x29BD | Ordinal: 10686
        void setBlinkSpeed(__int64);

    // RVA: 0x29BF | Ordinal: 10688
        void setBorderColor(unsigned int);

    // RVA: 0x29E5 | Ordinal: 10726
        void setClickSpeed(__int64);

    // RVA: 0x2A46 | Ordinal: 10823
        void setDefaultCursor(enum FX::FXDefaultCursor, class FX::FXCursor *);

    // RVA: 0x2A48 | Ordinal: 10825
        void setDefaultVisual(class FX::FXVisual *);

    // RVA: 0x2A64 | Ordinal: 10853
        void setDragDelta(int);

    // RVA: 0x2ACF | Ordinal: 10960
        void setForeColor(unsigned int);

    // RVA: 0x2B30 | Ordinal: 11057
        void setHiliteColor(unsigned int);

    // RVA: 0x2BFE | Ordinal: 11263
        void setMenuPause(__int64);

    // RVA: 0x2C0C | Ordinal: 11277
        void setNormalFont(class FX::FXFont *);

    // RVA: 0x2C98 | Ordinal: 11417
        void setRootWindow(class FX::FXRootWindow *);

    // RVA: 0x2CAB | Ordinal: 11436
        void setScrollBarSize(int);

    // RVA: 0x2CAD | Ordinal: 11438
        void setScrollDelay(__int64);

    // RVA: 0x2CAE | Ordinal: 11439
        void setScrollSpeed(__int64);

    // RVA: 0x2CC2 | Ordinal: 11459
        void setSelMenuBackColor(unsigned int);

    // RVA: 0x2CC3 | Ordinal: 11460
        void setSelMenuTextColor(unsigned int);

    // RVA: 0x2CD1 | Ordinal: 11474
        void setSelbackColor(unsigned int);

    // RVA: 0x2CE1 | Ordinal: 11490
        void setSelforeColor(unsigned int);

    // RVA: 0x2CE5 | Ordinal: 11494
        void setShadowColor(unsigned int);

    // RVA: 0x2D8F | Ordinal: 11664
        void setTipbackColor(unsigned int);

    // RVA: 0x2D90 | Ordinal: 11665
        void setTipforeColor(unsigned int);

    // RVA: 0x2D9D | Ordinal: 11678
        void setToolTipPause(__int64);

    // RVA: 0x2D9E | Ordinal: 11679
        void setToolTipTime(__int64);

    // RVA: 0x2DA4 | Ordinal: 11685
        void setTranslator(class FX::FXTranslator *);

    // RVA: 0x2DA8 | Ordinal: 11689
        void setTypingSpeed(__int64);

    // RVA: 0x2DC8 | Ordinal: 11721
        void setVendorName(class FX::FXString const &);

    // RVA: 0x2DD3 | Ordinal: 11732
        void setWaitCursor(class FX::FXCursor *);

    // RVA: 0x2DDA | Ordinal: 11739
        void setWheelLines(int);

    // RVA: 0x2E2F | Ordinal: 11824
        void signalhandler(int);

    // RVA: 0x2E5D | Ordinal: 11870
        void stop(int);

    // RVA: 0x2E60 | Ordinal: 11873
        void stopModal(int);

    // RVA: 0x2E61 | Ordinal: 11874
        void stopModal(class FX::FXWindow *, int);

    // RVA: 0x2FCB | Ordinal: 12236
        void wndproc(void *, unsigned int, unsigned __int64, __int64);

    // RVA: 0x3A6 | Ordinal: 935
        void _FXApp(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXAPP_HPP
