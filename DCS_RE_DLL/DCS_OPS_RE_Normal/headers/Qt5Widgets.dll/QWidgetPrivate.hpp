#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QWidgetPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWidgetPrivate
{
public:

    // RVA: 0x1A5 | Ordinal: 422
        void QWidgetPrivate(int);

    // RVA: 0x4CC | Ordinal: 1229
        void _q_showIfNotHidden(void);

    // RVA: 0x4D9 | Ordinal: 1242
        void aboutToDestroy(void);

    // RVA: 0x50E | Ordinal: 1295
        void activateChildLayoutsRecursively(void);

    // RVA: 0x5AA | Ordinal: 1451
        void adjustFlags(class QFlags<enum Qt::WindowType> &, class QWidget *);

    // RVA: 0x5AC | Ordinal: 1453
        void adjustQuitOnCloseAttribute(void);

    // RVA: 0x5B2 | Ordinal: 1459
        void adjustedSize(void) const;

    // RVA: 0x5EF | Ordinal: 1520
        void associatedScreen(void) const;

    // RVA: 0x629 | Ordinal: 1578
        void beginBackingStorePainting(void);

    // RVA: 0x62A | Ordinal: 1579
        void beginCompose(void);

    // RVA: 0x6E5 | Ordinal: 1766
        void childAtRecursiveHelper(class QPoint const &, bool) const;

    // RVA: 0x6E6 | Ordinal: 1767
        void childAt_helper(class QPoint const &, bool) const;

    // RVA: 0x741 | Ordinal: 1858
        void clipRect(void) const;

    // RVA: 0x742 | Ordinal: 1859
        void clipRegion(void) const;

    // RVA: 0x743 | Ordinal: 1860
        void clipToEffectiveMask(class QRegion &) const;

    // RVA: 0x75B | Ordinal: 1884
        void close_helper(enum QWidgetPrivate::CloseMode);

    // RVA: 0x802 | Ordinal: 2051
        void create(void);

    // RVA: 0x80A | Ordinal: 2059
        void createExtra(void);

    // RVA: 0x813 | Ordinal: 2068
        void createRecursively(void);

    // RVA: 0x81D | Ordinal: 2078
        void createSysExtra(void);

    // RVA: 0x81E | Ordinal: 2079
        void createTLExtra(void);

    // RVA: 0x81F | Ordinal: 2080
        void createTLSysExtra(void);

    // RVA: 0x827 | Ordinal: 2088
        void createWinId(void);

    // RVA: 0x9F0 | Ordinal: 2545
        void deactivateWidgetCleanup(void);

    // RVA: 0x9F3 | Ordinal: 2548
        void deepestFocusProxy(void) const;

    // RVA: 0xA02 | Ordinal: 2563
        void deleteExtra(void);

    // RVA: 0xA04 | Ordinal: 2565
        void deleteSysExtra(void);

    // RVA: 0xA05 | Ordinal: 2566
        void deleteTLSysExtra(void);

    // RVA: 0xACE | Ordinal: 2767
        void drawWidget(class QPaintDevice *, class QRegion const &, class QPoint const &, class QFlags<enum QWidgetPrivate::DrawWidgetFlag>, class QPainter *, class QWidgetRepaintManager *);

    // RVA: 0xAFB | Ordinal: 2812
        void effectiveFocusWidget(void);

    // RVA: 0xAFE | Ordinal: 2815
        void effectiveRectFor(class QRect const &) const;

    // RVA: 0xAFF | Ordinal: 2816
        void effectiveRectFor(class QRegion const &) const;

    // RVA: 0xB0F | Ordinal: 2832
        void endBackingStorePainting(void);

    // RVA: 0xB10 | Ordinal: 2833
        void endCompose(void);

    // RVA: 0xB14 | Ordinal: 2837
        void enforceNativeChildren(void);

    // RVA: 0xBB1 | Ordinal: 2994
        void extraData(void) const;

    // RVA: 0xBEE | Ordinal: 3055
        void fixPosIncludesFrame(void);

    // RVA: 0xC26 | Ordinal: 3111
        void focusObject(void);

    // RVA: 0xC73 | Ordinal: 3188
        void frameStrut(void) const;

    // RVA: 0xC8C | Ordinal: 3213
        void get(class QWidget *);

    // RVA: 0xC8D | Ordinal: 3214
        void get(class QWidget const *);

    // RVA: 0xCA1 | Ordinal: 3234
        void getLayoutItemMargins(int *, int *, int *, int *) const;

    // RVA: 0xCA5 | Ordinal: 3238
        void getOpaqueChildren(void) const;

    // RVA: 0xCB9 | Ordinal: 3258
        void grabFramebuffer(void);

    // RVA: 0xCD5 | Ordinal: 3286
        void handleSoftwareInputPanel(enum Qt::MouseButton, bool);

    // RVA: 0xD24 | Ordinal: 3365
        void hideChildren(bool);

    // RVA: 0xD3B | Ordinal: 3388
        void hide_helper(void);

    // RVA: 0xD3C | Ordinal: 3389
        void hide_sys(void);

    // RVA: 0xDD2 | Ordinal: 3539
        void inheritStyle(void);

    // RVA: 0xDDA | Ordinal: 3547
        void init(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0xE07 | Ordinal: 3592
        void initializeViewportFramebuffer(void);

    // RVA: 0xE8F | Ordinal: 3728
        void invalidateBackingStore_resizeHelper(class QPoint const &, class QSize const &);

    // RVA: 0xE93 | Ordinal: 3732
        void invalidateGraphicsEffectsRecursively(void);

    // RVA: 0xE9C | Ordinal: 3741
        void isAboutToShow(void) const;

    // RVA: 0x106E | Ordinal: 4207
        void localFont(void) const;

    // RVA: 0x1076 | Ordinal: 4215
        void lower_sys(void);

    // RVA: 0x1096 | Ordinal: 4247
        void mapFromWS(class QPoint const &) const;

    // RVA: 0x1097 | Ordinal: 4248
        void mapFromWS(class QRect const &) const;

    // RVA: 0x10C7 | Ordinal: 4296
        void mapToWS(class QPoint const &) const;

    // RVA: 0x10C8 | Ordinal: 4297
        void mapToWS(class QRect const &) const;

    // RVA: 0x10F9 | Ordinal: 4346
        void maybeRepaintManager(void) const;

    // RVA: 0x10FA | Ordinal: 4347
        void maybeTopData(void) const;

    // RVA: 0x1285 | Ordinal: 4742
        void moveRect(class QRect const &, int, int);

    // RVA: 0x1293 | Ordinal: 4756
        void nativeChildrenForced(void) const;

    // RVA: 0x129B | Ordinal: 4764
        void naturalWidgetFont(unsigned int) const;

    // RVA: 0x129C | Ordinal: 4765
        void naturalWidgetPalette(unsigned int) const;

    // RVA: 0x129E | Ordinal: 4767
        void nearestGraphicsProxyWidget(class QWidget const *);

    // RVA: 0x1300 | Ordinal: 4865
        void overlappedRegion(class QRect const &, bool) const;

    // RVA: 0x131D | Ordinal: 4894
        void paintBackground(class QPainter *, class QRegion const &, class QFlags<enum QWidgetPrivate::DrawWidgetFlag>) const;

    // RVA: 0x134D | Ordinal: 4942
        void paintOnScreen(class QRegion const &);

    // RVA: 0x134F | Ordinal: 4944
        void paintSiblingsRecursive(class QPaintDevice *, class QList<class QObject *> const &, int, class QRegion const &, class QPoint const &, class QFlags<enum QWidgetPrivate::DrawWidgetFlag>, class QPainter *, class QWidgetRepaintManager *);

    // RVA: 0x1397 | Ordinal: 5016
        void pointInsideRectAndMask(class QPoint const &) const;

    // RVA: 0x1398 | Ordinal: 5017
        void pointToRect(class QPoint const &, class QRect const &);

    // RVA: 0x13C8 | Ordinal: 5065
        void prepareToRender(class QRegion const &, class QFlags<enum QWidget::RenderFlag>);

    // RVA: 0x13DF | Ordinal: 5088
        void propagatePaletteChange(void);

    // RVA: 0x141B | Ordinal: 5148
        void q_func(void);

    // RVA: 0x141C | Ordinal: 5149
        void q_func(void) const;

    // RVA: 0x15EB | Ordinal: 5612
        void raise_sys(void);

    // RVA: 0x15FC | Ordinal: 5629
        void redirected(class QPoint *) const;

    // RVA: 0x1656 | Ordinal: 5719
        void render(class QPaintDevice *, class QPoint const &, class QRegion const &, class QFlags<enum QWidget::RenderFlag>);

    // RVA: 0x1659 | Ordinal: 5722
        void render_helper(class QPainter *, class QPoint const &, class QRegion const &, class QFlags<enum QWidget::RenderFlag>);

    // RVA: 0x1660 | Ordinal: 5729
        void reparentFocusWidgets(class QWidget *);

    // RVA: 0x16BE | Ordinal: 5823
        void resizeViewportFramebuffer(void);

    // RVA: 0x16C3 | Ordinal: 5828
        void resolveFont(void);

    // RVA: 0x16C4 | Ordinal: 5829
        void resolveLayoutDirection(void);

    // RVA: 0x16C5 | Ordinal: 5830
        void resolveLocale(void);

    // RVA: 0x16C7 | Ordinal: 5832
        void resolvePalette(void);

    // RVA: 0x16C8 | Ordinal: 5833
        void resolveSamples(void);

    // RVA: 0x16D0 | Ordinal: 5841
        void restoreRedirected(void);

    // RVA: 0x1719 | Ordinal: 5914
        void safeAreaMargins(void) const;

    // RVA: 0x1745 | Ordinal: 5958
        void screenGeometry(class QWidget const *);

    // RVA: 0x1754 | Ordinal: 5973
        void scrollChildren(int, int);

    // RVA: 0x1763 | Ordinal: 5988
        void scrollRect(class QRect const &, int, int);

    // RVA: 0x1771 | Ordinal: 6002
        void scroll_sys(int, int);

    // RVA: 0x1772 | Ordinal: 6003
        void scroll_sys(int, int, class QRect const &);

    // RVA: 0x17D9 | Ordinal: 6106
        void sendComposeStatus(class QWidget *, bool);

    // RVA: 0x17DD | Ordinal: 6110
        void sendPaintEvent(class QRegion const &);

    // RVA: 0x17DE | Ordinal: 6111
        void sendPendingMoveAndResizeEvents(bool, bool);

    // RVA: 0x189F | Ordinal: 6304
        void setConstraints_sys(void);

    // RVA: 0x18E4 | Ordinal: 6373
        void setCursor_sys(class QCursor const &);

    // RVA: 0x1912 | Ordinal: 6419
        void setDirtyOpaqueRegion(void);

    // RVA: 0x194D | Ordinal: 6478
        void setEnabled_helper(bool);

    // RVA: 0x1998 | Ordinal: 6553
        void setFocus_sys(void);

    // RVA: 0x19AB | Ordinal: 6572
        void setFont_helper(class QFont const &);

    // RVA: 0x19D1 | Ordinal: 6610
        void setGeometry_sys(int, int, int, int, bool);

    // RVA: 0x1A6E | Ordinal: 6767
        void setLayoutDirection_helper(enum Qt::LayoutDirection);

    // RVA: 0x1A6F | Ordinal: 6768
        void setLayoutItemMargins(int, int, int, int);

    // RVA: 0x1A70 | Ordinal: 6769
        void setLayoutItemMargins(enum QStyle::SubElement, class QStyleOption const *);

    // RVA: 0x1A7C | Ordinal: 6781
        void setLocale_helper(class QLocale const &, bool);

    // RVA: 0x1A84 | Ordinal: 6789
        void setMask_sys(class QRegion const &);

    // RVA: 0x1A9C | Ordinal: 6813
        void setMaximumSize_helper(int &, int &);

    // RVA: 0x1ABC | Ordinal: 6845
        void setMinimumSize_helper(int &, int &);

    // RVA: 0x1AC1 | Ordinal: 6850
        void setModal_sys(void);

    // RVA: 0x1AEF | Ordinal: 6896
        void setNetWmWindowTypes(bool);

    // RVA: 0x1B0A | Ordinal: 6923
        void setOpaque(bool);

    // RVA: 0x1B3D | Ordinal: 6974
        void setPalette_helper(class QPalette const &);

    // RVA: 0x1B44 | Ordinal: 6981
        void setParent_sys(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x1B89 | Ordinal: 7050
        void setRedirected(class QPaintDevice *, class QPoint const &);

    // RVA: 0x1B8C | Ordinal: 7053
        void setRenderToTexture(void);

    // RVA: 0x1BC6 | Ordinal: 7111
        void setScreen(class QScreen *);

    // RVA: 0x1BC7 | Ordinal: 7112
        void setScreenForPoint(class QPoint const &);

    // RVA: 0x1BF8 | Ordinal: 7161
        void setSharedPainter(class QPainter *);

    // RVA: 0x1C63 | Ordinal: 7268
        void setStyle_helper(class QStyle *, bool);

    // RVA: 0x1C6C | Ordinal: 7277
        void setSystemClip(class QPaintEngine *, double, class QRegion const &);

    // RVA: 0x1CC0 | Ordinal: 7361
        void setTextureChildSeen(void);

    // RVA: 0x1CF3 | Ordinal: 7412
        void setUpdatesEnabled_helper(bool);

    // RVA: 0x1D22 | Ordinal: 7459
        void setVisible(bool);

    // RVA: 0x1D25 | Ordinal: 7462
        void setWSGeometry(void);

    // RVA: 0x1D38 | Ordinal: 7481
        void setWidgetParentHelper(class QObject *, class QObject *);

    // RVA: 0x1D3C | Ordinal: 7485
        void setWinId(unsigned __int64);

    // RVA: 0x1D3E | Ordinal: 7487
        void setWindowFilePath_helper(class QString const &);

    // RVA: 0x1D3F | Ordinal: 7488
        void setWindowFilePath_sys(class QString const &);

    // RVA: 0x1D43 | Ordinal: 7492
        void setWindowFlags(class QFlags<enum Qt::WindowType>);

    // RVA: 0x1D49 | Ordinal: 7498
        void setWindowIconText_helper(class QString const &);

    // RVA: 0x1D4A | Ordinal: 7499
        void setWindowIconText_sys(class QString const &);

    // RVA: 0x1D4B | Ordinal: 7500
        void setWindowIcon_helper(void);

    // RVA: 0x1D4C | Ordinal: 7501
        void setWindowIcon_sys(void);

    // RVA: 0x1D50 | Ordinal: 7505
        void setWindowModified_helper(void);

    // RVA: 0x1D52 | Ordinal: 7507
        void setWindowOpacity_sys(double);

    // RVA: 0x1D58 | Ordinal: 7513
        void setWindowTitle_helper(class QString const &);

    // RVA: 0x1D59 | Ordinal: 7514
        void setWindowTitle_sys(class QString const &);

    // RVA: 0x1D81 | Ordinal: 7554
        void shareContext(void) const;

    // RVA: 0x1D83 | Ordinal: 7556
        void sharedPainter(void) const;

    // RVA: 0x1D8B | Ordinal: 7564
        void shouldDiscardSyncRequest(void) const;

    // RVA: 0x1D8C | Ordinal: 7565
        void shouldPaintOnScreen(void) const;

    // RVA: 0x1D92 | Ordinal: 7571
        void showChildren(bool);

    // RVA: 0x1DCB | Ordinal: 7628
        void show_helper(void);

    // RVA: 0x1DCC | Ordinal: 7629
        void show_recursive(void);

    // RVA: 0x1DCD | Ordinal: 7630
        void show_sys(void);

    // RVA: 0x1E64 | Ordinal: 7781
        void stackUnder_sys(class QWidget *);

    // RVA: 0x1F28 | Ordinal: 7977
        void stealKeyboardGrab(bool);

    // RVA: 0x1F29 | Ordinal: 7978
        void stealMouseGrab(bool);

    // RVA: 0x1F60 | Ordinal: 8033
        void subtractOpaqueChildren(class QRegion &, class QRect const &) const;

    // RVA: 0x1F61 | Ordinal: 8034
        void subtractOpaqueSiblings(class QRegion &, bool *, bool) const;

    // RVA: 0x1F77 | Ordinal: 8056
        void syncBackingStore(class QRegion const &);

    // RVA: 0x1F78 | Ordinal: 8057
        void syncBackingStore(void);

    // RVA: 0x2011 | Ordinal: 8210
        void textureId(void) const;

    // RVA: 0x2012 | Ordinal: 8211
        void textureListFlags(void);

    // RVA: 0x205F | Ordinal: 8288
        void topData(void) const;

    // RVA: 0x21F7 | Ordinal: 8696
        void unsetCursor_sys(void);

    // RVA: 0x2212 | Ordinal: 8723
        void updateBrushOrigin(class QPainter *, class QBrush const &) const;

    // RVA: 0x2218 | Ordinal: 8729
        void updateContentsRect(void);

    // RVA: 0x2225 | Ordinal: 8742
        void updateFocusChild(void);

    // RVA: 0x2226 | Ordinal: 8743
        void updateFont(class QFont const &);

    // RVA: 0x2227 | Ordinal: 8744
        void updateFrameStrut(void);

    // RVA: 0x2232 | Ordinal: 8755
        void updateGeometry_helper(bool);

    // RVA: 0x2235 | Ordinal: 8758
        void updateIsOpaque(void);

    // RVA: 0x2236 | Ordinal: 8759
        void updateIsTranslucent(void);

    // RVA: 0x2252 | Ordinal: 8787
        void updateSystemBackground(void);

    // RVA: 0x2256 | Ordinal: 8791
        void updateWidgetTransform(class QEvent *);

    // RVA: 0x2322 | Ordinal: 8995
        void windowHandle(enum QWidgetPrivate::WindowHandleMode) const;

    // RVA: 0x292 | Ordinal: 659
        void _QWidgetPrivate(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QWIDGETPRIVATE_HPP
