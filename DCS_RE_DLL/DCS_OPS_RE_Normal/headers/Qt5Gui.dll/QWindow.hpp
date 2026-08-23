#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWindow
{
public:

    // RVA: 0x3C9 | Ordinal: 970
        void QWindow(class QWindowPrivate &, class QWindow *);

    // RVA: 0x3CA | Ordinal: 971
        void QWindow(class QWindow *);

    // RVA: 0x3CB | Ordinal: 972
        void QWindow(class QScreen *);

    // RVA: 0x94E | Ordinal: 2383
        void accessibleRoot(void) const;

    // RVA: 0x956 | Ordinal: 2391
        void activeChanged(void);

    // RVA: 0x9BB | Ordinal: 2492
        void alert(int);

    // RVA: 0xA5F | Ordinal: 2656
        void baseSize(void) const;

    // RVA: 0xBE9 | Ordinal: 3050
        void close(void);

    // RVA: 0xC48 | Ordinal: 3145
        void contentOrientation(void) const;

    // RVA: 0xC49 | Ordinal: 3146
        void contentOrientationChanged(enum Qt::ScreenOrientation);

    // RVA: 0xC9A | Ordinal: 3227
        void create(void);

    // RVA: 0xCFB | Ordinal: 3324
        void cursor(void) const;

    // RVA: 0xD96 | Ordinal: 3479
        void d_func(void);

    // RVA: 0xD97 | Ordinal: 3480
        void d_func(void) const;

    // RVA: 0xE19 | Ordinal: 3610
        void destroy(void);

    // RVA: 0xE55 | Ordinal: 3670
        void devicePixelRatio(void) const;

    // RVA: 0xFEB | Ordinal: 4076
        void event(class QEvent *);

    // RVA: 0x1004 | Ordinal: 4101
        void exposeEvent(class QExposeEvent *);

    // RVA: 0x1030 | Ordinal: 4145
        void filePath(void) const;

    // RVA: 0x109E | Ordinal: 4255
        void flags(void) const;

    // RVA: 0x10AB | Ordinal: 4268
        void focusInEvent(class QFocusEvent *);

    // RVA: 0x10AD | Ordinal: 4270
        void focusObject(void) const;

    // RVA: 0x10AF | Ordinal: 4272
        void focusObjectChanged(class QObject *);

    // RVA: 0x10B0 | Ordinal: 4273
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0x1102 | Ordinal: 4355
        void format(void) const;

    // RVA: 0x111B | Ordinal: 4380
        void frameGeometry(void) const;

    // RVA: 0x111D | Ordinal: 4382
        void frameMargins(void) const;

    // RVA: 0x111E | Ordinal: 4383
        void framePosition(void) const;

    // RVA: 0x116C | Ordinal: 4461
        void fromWinId(unsigned __int64);

    // RVA: 0x1184 | Ordinal: 4485
        void geometry(void) const;

    // RVA: 0x4E1E | Ordinal: 19999
        void handle(void) const;

    // RVA: 0x4E9B | Ordinal: 20124
        void height(void) const;

    // RVA: 0x4E9C | Ordinal: 20125
        void heightChanged(int);

    // RVA: 0x4EA2 | Ordinal: 20131
        void hide(void);

    // RVA: 0x4EA3 | Ordinal: 20132
        void hideEvent(class QHideEvent *);

    // RVA: 0x4ECB | Ordinal: 20172
        void icon(void) const;

    // RVA: 0x4FC1 | Ordinal: 20418
        void isActive(void) const;

    // RVA: 0x4FC7 | Ordinal: 20424
        void isAncestorOf(class QWindow const *, enum QWindow::AncestorMode) const;

    // RVA: 0x5020 | Ordinal: 20513
        void isExposed(void) const;

    // RVA: 0x504A | Ordinal: 20555
        void isModal(void) const;

    // RVA: 0x5086 | Ordinal: 20615
        void isTopLevel(void) const;

    // RVA: 0x50BC | Ordinal: 20669
        void isVisible(void) const;

    // RVA: 0x50F5 | Ordinal: 20726
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x50F6 | Ordinal: 20727
        void keyReleaseEvent(class QKeyEvent *);

    // RVA: 0x51BE | Ordinal: 20927
        void lower(void);

    // RVA: 0x5204 | Ordinal: 20997
        void mapFromGlobal(class QPoint const &) const;

    // RVA: 0x5211 | Ordinal: 21010
        void mapToGlobal(class QPoint const &) const;

    // RVA: 0x522A | Ordinal: 21035
        void mask(void) const;

    // RVA: 0x5244 | Ordinal: 21061
        void maximumHeight(void) const;

    // RVA: 0x5245 | Ordinal: 21062
        void maximumHeightChanged(int);

    // RVA: 0x524A | Ordinal: 21067
        void maximumSize(void) const;

    // RVA: 0x524D | Ordinal: 21070
        void maximumWidth(void) const;

    // RVA: 0x524E | Ordinal: 21071
        void maximumWidthChanged(int);

    // RVA: 0x52A0 | Ordinal: 21153
        void metaObject(void) const;

    // RVA: 0x52C8 | Ordinal: 21193
        void minimumHeight(void) const;

    // RVA: 0x52C9 | Ordinal: 21194
        void minimumHeightChanged(int);

    // RVA: 0x52CC | Ordinal: 21197
        void minimumSize(void) const;

    // RVA: 0x52CE | Ordinal: 21199
        void minimumWidth(void) const;

    // RVA: 0x52CF | Ordinal: 21200
        void minimumWidthChanged(int);

    // RVA: 0x52E2 | Ordinal: 21219
        void modality(void) const;

    // RVA: 0x52E3 | Ordinal: 21220
        void modalityChanged(enum Qt::WindowModality);

    // RVA: 0x52F1 | Ordinal: 21234
        void mouseDoubleClickEvent(class QMouseEvent *);

    // RVA: 0x52F8 | Ordinal: 21241
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x52FC | Ordinal: 21245
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x5302 | Ordinal: 21251
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x5306 | Ordinal: 21255
        void moveEvent(class QMoveEvent *);

    // RVA: 0x531B | Ordinal: 21276
        void nativeEvent(class QByteArray const &, void *, long *);

    // RVA: 0x5397 | Ordinal: 21400
        void opacity(void) const;

    // RVA: 0x539B | Ordinal: 21404
        void opacityChanged(double);

    // RVA: 0x5408 | Ordinal: 21513
        void parent(enum QWindow::AncestorMode) const;

    // RVA: 0x5409 | Ordinal: 21514
        void parent(void) const;

    // RVA: 0x54A2 | Ordinal: 21667
        void position(void) const;

    // RVA: 0x55B7 | Ordinal: 21944
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55FB | Ordinal: 22012
        void qt_metacast(char const *);

    // RVA: 0x5652 | Ordinal: 22099
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5665 | Ordinal: 22118
        void raise(void);

    // RVA: 0x5705 | Ordinal: 22278
        void reportContentOrientationChange(enum Qt::ScreenOrientation);

    // RVA: 0x5707 | Ordinal: 22280
        void requestActivate(void);

    // RVA: 0x570D | Ordinal: 22286
        void requestUpdate(void);

    // RVA: 0x5710 | Ordinal: 22289
        void requestedFormat(void) const;

    // RVA: 0x5723 | Ordinal: 22308
        void resize(class QSize const &);

    // RVA: 0x5724 | Ordinal: 22309
        void resize(int, int);

    // RVA: 0x5727 | Ordinal: 22312
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x57CD | Ordinal: 22478
        void screen(void) const;

    // RVA: 0x57D1 | Ordinal: 22482
        void screenChanged(class QScreen *);

    // RVA: 0x585F | Ordinal: 22624
        void setBaseSize(class QSize const &);

    // RVA: 0x58EA | Ordinal: 22763
        void setCursor(class QCursor const &);

    // RVA: 0x5971 | Ordinal: 22898
        void setFilePath(class QString const &);

    // RVA: 0x597E | Ordinal: 22911
        void setFlag(enum Qt::WindowType, bool);

    // RVA: 0x5989 | Ordinal: 22922
        void setFlags(class QFlags<enum Qt::WindowType>);

    // RVA: 0x59C2 | Ordinal: 22979
        void setFormat(class QSurfaceFormat const &);

    // RVA: 0x59C7 | Ordinal: 22984
        void setFramePosition(class QPoint const &);

    // RVA: 0x59D3 | Ordinal: 22996
        void setGeometry(class QRect const &);

    // RVA: 0x59D4 | Ordinal: 22997
        void setGeometry(int, int, int, int);

    // RVA: 0x59E6 | Ordinal: 23015
        void setHeight(int);

    // RVA: 0x59F8 | Ordinal: 23033
        void setIcon(class QIcon const &);

    // RVA: 0x5A1C | Ordinal: 23069
        void setKeyboardGrabEnabled(bool);

    // RVA: 0x5A58 | Ordinal: 23129
        void setMask(class QRegion const &);

    // RVA: 0x5A62 | Ordinal: 23139
        void setMaximumHeight(int);

    // RVA: 0x5A64 | Ordinal: 23141
        void setMaximumSize(class QSize const &);

    // RVA: 0x5A66 | Ordinal: 23143
        void setMaximumWidth(int);

    // RVA: 0x5A71 | Ordinal: 23154
        void setMinimumHeight(int);

    // RVA: 0x5A74 | Ordinal: 23157
        void setMinimumSize(class QSize const &);

    // RVA: 0x5A76 | Ordinal: 23159
        void setMinimumWidth(int);

    // RVA: 0x5A82 | Ordinal: 23171
        void setModality(enum Qt::WindowModality);

    // RVA: 0x5A8D | Ordinal: 23182
        void setMouseGrabEnabled(bool);

    // RVA: 0x5AAF | Ordinal: 23216
        void setOpacity(double);

    // RVA: 0x5AE5 | Ordinal: 23270
        void setParent(class QWindow *);

    // RVA: 0x5B0E | Ordinal: 23311
        void setPosition(class QPoint const &);

    // RVA: 0x5B0F | Ordinal: 23312
        void setPosition(int, int);

    // RVA: 0x5B73 | Ordinal: 23412
        void setScreen(class QScreen *);

    // RVA: 0x5B90 | Ordinal: 23441
        void setSizeIncrement(class QSize const &);

    // RVA: 0x5BD2 | Ordinal: 23507
        void setSurfaceType(enum QSurface::SurfaceType);

    // RVA: 0x5C09 | Ordinal: 23562
        void setTitle(class QString const &);

    // RVA: 0x5C1E | Ordinal: 23583
        void setTransientParent(class QWindow *);

    // RVA: 0x5CAA | Ordinal: 23723
        void setVisibility(enum QWindow::Visibility);

    // RVA: 0x5CAE | Ordinal: 23727
        void setVisible(bool);

    // RVA: 0x5CBC | Ordinal: 23741
        void setWidth(int);

    // RVA: 0x5CCA | Ordinal: 23755
        void setWindowState(enum Qt::WindowState);

    // RVA: 0x5CCB | Ordinal: 23756
        void setWindowStates(class QFlags<enum Qt::WindowState>);

    // RVA: 0x5CDD | Ordinal: 23774
        void setX(int);

    // RVA: 0x5CE2 | Ordinal: 23779
        void setY(int);

    // RVA: 0x5D16 | Ordinal: 23831
        void show(void);

    // RVA: 0x5D17 | Ordinal: 23832
        void showEvent(class QShowEvent *);

    // RVA: 0x5D18 | Ordinal: 23833
        void showFullScreen(void);

    // RVA: 0x5D1C | Ordinal: 23837
        void showMaximized(void);

    // RVA: 0x5D1E | Ordinal: 23839
        void showMinimized(void);

    // RVA: 0x5D20 | Ordinal: 23841
        void showNormal(void);

    // RVA: 0x5D41 | Ordinal: 23874
        void size(void) const;

    // RVA: 0x5D46 | Ordinal: 23879
        void sizeIncrement(void) const;

    // RVA: 0x5D92 | Ordinal: 23955
        void startSystemMove(void);

    // RVA: 0x5D94 | Ordinal: 23957
        void startSystemResize(class QFlags<enum Qt::Edge>);

    // RVA: 0x5E75 | Ordinal: 24182
        void surfaceHandle(void) const;

    // RVA: 0x5E77 | Ordinal: 24184
        void surfaceType(void) const;

    // RVA: 0x5EB8 | Ordinal: 24249
        void tabletEvent(class QTabletEvent *);

    // RVA: 0x5F35 | Ordinal: 24374
        void title(void) const;

    // RVA: 0x5F95 | Ordinal: 24470
        void touchEvent(class QTouchEvent *);

    // RVA: 0x5FDE | Ordinal: 24543
        void tr(char const *, char const *, int);

    // RVA: 0x6025 | Ordinal: 24614
        void trUtf8(char const *, char const *, int);

    // RVA: 0x603B | Ordinal: 24636
        void transientParent(void) const;

    // RVA: 0x603C | Ordinal: 24637
        void transientParentChanged(class QWindow *);

    // RVA: 0x6075 | Ordinal: 24694
        void type(void) const;

    // RVA: 0x60AB | Ordinal: 24748
        void unsetCursor(void);

    // RVA: 0x6133 | Ordinal: 24884
        void visibility(void) const;

    // RVA: 0x6134 | Ordinal: 24885
        void visibilityChanged(enum QWindow::Visibility);

    // RVA: 0x6136 | Ordinal: 24887
        void visibleChanged(bool);

    // RVA: 0x6146 | Ordinal: 24903
        void wheelEvent(class QWheelEvent *);

    // RVA: 0x615E | Ordinal: 24927
        void width(void) const;

    // RVA: 0x615F | Ordinal: 24928
        void widthChanged(int);

    // RVA: 0x6163 | Ordinal: 24932
        void winId(void) const;

    // RVA: 0x617E | Ordinal: 24959
        void windowState(void) const;

    // RVA: 0x617F | Ordinal: 24960
        void windowStateChanged(enum Qt::WindowState);

    // RVA: 0x6180 | Ordinal: 24961
        void windowStates(void) const;

    // RVA: 0x6189 | Ordinal: 24970
        void windowTitleChanged(class QString const &);

    // RVA: 0x61C1 | Ordinal: 25026
        void x(void) const;

    // RVA: 0x61C2 | Ordinal: 25027
        void xChanged(int);

    // RVA: 0x61D7 | Ordinal: 25048
        void y(void) const;

    // RVA: 0x61D8 | Ordinal: 25049
        void yChanged(int);

    // RVA: 0x554 | Ordinal: 1365
        void _QWindow(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QWINDOW_HPP
