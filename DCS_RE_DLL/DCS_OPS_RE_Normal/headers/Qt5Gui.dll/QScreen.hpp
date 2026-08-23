#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QScreen
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QScreen
{
public:

    // RVA: 0x2DE | Ordinal: 735
        void QScreen(class QPlatformScreen *);

    // RVA: 0x9EF | Ordinal: 2544
        void angleBetween(enum Qt::ScreenOrientation, enum Qt::ScreenOrientation) const;

    // RVA: 0xA3F | Ordinal: 2624
        void availableGeometry(void) const;

    // RVA: 0xA40 | Ordinal: 2625
        void availableGeometryChanged(class QRect const &);

    // RVA: 0xA45 | Ordinal: 2630
        void availableSize(void) const;

    // RVA: 0xA4A | Ordinal: 2635
        void availableVirtualGeometry(void) const;

    // RVA: 0xA4B | Ordinal: 2636
        void availableVirtualSize(void) const;

    // RVA: 0xD78 | Ordinal: 3449
        void d_func(void);

    // RVA: 0xD79 | Ordinal: 3450
        void d_func(void) const;

    // RVA: 0xDF0 | Ordinal: 3569
        void depth(void) const;

    // RVA: 0xE54 | Ordinal: 3669
        void devicePixelRatio(void) const;

    // RVA: 0x1183 | Ordinal: 4484
        void geometry(void) const;

    // RVA: 0x1185 | Ordinal: 4486
        void geometryChanged(class QRect const &);

    // RVA: 0x4E0D | Ordinal: 19982
        void grabWindow(unsigned __int64, int, int, int, int);

    // RVA: 0x4E1D | Ordinal: 19998
        void handle(void) const;

    // RVA: 0x503B | Ordinal: 20540
        void isLandscape(enum Qt::ScreenOrientation) const;

    // RVA: 0x5066 | Ordinal: 20583
        void isPortrait(enum Qt::ScreenOrientation) const;

    // RVA: 0x51AC | Ordinal: 20909
        void logicalDotsPerInch(void) const;

    // RVA: 0x51AD | Ordinal: 20910
        void logicalDotsPerInchChanged(double);

    // RVA: 0x51AE | Ordinal: 20911
        void logicalDotsPerInchX(void) const;

    // RVA: 0x51AF | Ordinal: 20912
        void logicalDotsPerInchY(void) const;

    // RVA: 0x51E3 | Ordinal: 20964
        void manufacturer(void) const;

    // RVA: 0x5201 | Ordinal: 20994
        void mapBetween(enum Qt::ScreenOrientation, enum Qt::ScreenOrientation, class QRect const &) const;

    // RVA: 0x5292 | Ordinal: 21139
        void metaObject(void) const;

    // RVA: 0x52E6 | Ordinal: 21223
        void model(void) const;

    // RVA: 0x5316 | Ordinal: 21271
        void name(void) const;

    // RVA: 0x5325 | Ordinal: 21286
        void nativeOrientation(void) const;

    // RVA: 0x53B3 | Ordinal: 21428
        void orientation(void) const;

    // RVA: 0x53B6 | Ordinal: 21431
        void orientationChanged(enum Qt::ScreenOrientation);

    // RVA: 0x53B7 | Ordinal: 21432
        void orientationUpdateMask(void) const;

    // RVA: 0x543E | Ordinal: 21567
        void physicalDotsPerInch(void) const;

    // RVA: 0x543F | Ordinal: 21568
        void physicalDotsPerInchChanged(double);

    // RVA: 0x5440 | Ordinal: 21569
        void physicalDotsPerInchX(void) const;

    // RVA: 0x5441 | Ordinal: 21570
        void physicalDotsPerInchY(void) const;

    // RVA: 0x5445 | Ordinal: 21574
        void physicalSize(void) const;

    // RVA: 0x5446 | Ordinal: 21575
        void physicalSizeChanged(class QSizeF const &);

    // RVA: 0x54C1 | Ordinal: 21698
        void primaryOrientation(void) const;

    // RVA: 0x54C2 | Ordinal: 21699
        void primaryOrientationChanged(enum Qt::ScreenOrientation);

    // RVA: 0x55A9 | Ordinal: 21930
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55ED | Ordinal: 21998
        void qt_metacast(char const *);

    // RVA: 0x5644 | Ordinal: 22085
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x569E | Ordinal: 22175
        void refreshRate(void) const;

    // RVA: 0x569F | Ordinal: 22176
        void refreshRateChanged(double);

    // RVA: 0x5805 | Ordinal: 22534
        void serialNumber(void) const;

    // RVA: 0x5AC2 | Ordinal: 23235
        void setOrientationUpdateMask(class QFlags<enum Qt::ScreenOrientation>);

    // RVA: 0x5D3D | Ordinal: 23870
        void size(void) const;

    // RVA: 0x5FD0 | Ordinal: 24529
        void tr(char const *, char const *, int);

    // RVA: 0x6017 | Ordinal: 24600
        void trUtf8(char const *, char const *, int);

    // RVA: 0x602C | Ordinal: 24621
        void transformBetween(enum Qt::ScreenOrientation, enum Qt::ScreenOrientation, class QRect const &) const;

    // RVA: 0x6129 | Ordinal: 24874
        void virtualGeometry(void) const;

    // RVA: 0x612A | Ordinal: 24875
        void virtualGeometryChanged(class QRect const &);

    // RVA: 0x612B | Ordinal: 24876
        void virtualSiblingAt(class QPoint);

    // RVA: 0x612E | Ordinal: 24879
        void virtualSiblings(void) const;

    // RVA: 0x612F | Ordinal: 24880
        void virtualSize(void) const;

    // RVA: 0x50D | Ordinal: 1294
        void _QScreen(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QSCREEN_HPP
