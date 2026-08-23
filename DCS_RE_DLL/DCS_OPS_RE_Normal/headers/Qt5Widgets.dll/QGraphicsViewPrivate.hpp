#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsViewPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsViewPrivate
{
public:

    // RVA: 0xA5 | Ordinal: 166
        void QGraphicsViewPrivate(void);

    // RVA: 0x4C7 | Ordinal: 1224
        void _q_setViewportCursor(class QCursor const &);

    // RVA: 0x4D0 | Ordinal: 1233
        void _q_unsetViewportCursor(void);

    // RVA: 0x5CA | Ordinal: 1483
        void allocStyleOptionsArray(int);

    // RVA: 0x6AC | Ordinal: 1709
        void centerView(enum QGraphicsView::ViewportAnchor);

    // RVA: 0x732 | Ordinal: 1843
        void clearRubberBand(void);

    // RVA: 0xA22 | Ordinal: 2595
        void dispatchPendingUpdateRequests(void);

    // RVA: 0xBDF | Ordinal: 3040
        void findItems(class QRegion const &, bool *, class QTransform const &) const;

    // RVA: 0xC77 | Ordinal: 3192
        void freeStyleOptionsArray(class QStyleOptionGraphicsItem *);

    // RVA: 0xD62 | Ordinal: 3427
        void horizontalScroll(void) const;

    // RVA: 0x109E | Ordinal: 4255
        void mapRectFromScene(class QRectF const &) const;

    // RVA: 0x10A5 | Ordinal: 4262
        void mapRectToScene(class QRect const &) const;

    // RVA: 0x10C2 | Ordinal: 4291
        void mapToScene(class QPointF const &) const;

    // RVA: 0x10C3 | Ordinal: 4292
        void mapToScene(class QRectF const &) const;

    // RVA: 0x10C5 | Ordinal: 4294
        void mapToViewRect(class QGraphicsItem const *, class QRectF const &) const;

    // RVA: 0x10C6 | Ordinal: 4295
        void mapToViewRegion(class QGraphicsItem const *, class QRectF const &) const;

    // RVA: 0x122F | Ordinal: 4656
        void mouseMoveEventHandler(class QMouseEvent *);

    // RVA: 0x13AD | Ordinal: 5038
        void populateSceneDragDropEvent(class QGraphicsSceneDragDropEvent *, class QDropEvent *);

    // RVA: 0x13DA | Ordinal: 5083
        void processPendingUpdates(void);

    // RVA: 0x1413 | Ordinal: 5140
        void q_func(void);

    // RVA: 0x1414 | Ordinal: 5141
        void q_func(void) const;

    // RVA: 0x15F1 | Ordinal: 5618
        void recalculateContentSize(void);

    // RVA: 0x1666 | Ordinal: 5735
        void replayLastMouseEvent(void);

    // RVA: 0x1717 | Ordinal: 5912
        void rubberBandRegion(class QWidget const *, class QRect const &) const;

    // RVA: 0x1CF1 | Ordinal: 7410
        void setUpdateClip(class QGraphicsItem *);

    // RVA: 0x1F36 | Ordinal: 7991
        void storeDragDropEvent(class QGraphicsSceneDragDropEvent const *);

    // RVA: 0x1F38 | Ordinal: 7993
        void storeMouseEvent(class QMouseEvent *);

    // RVA: 0x21A8 | Ordinal: 8617
        void translateTouchEvent(class QGraphicsViewPrivate *, class QTouchEvent *);

    // RVA: 0x220D | Ordinal: 8718
        void updateAll(void);

    // RVA: 0x2234 | Ordinal: 8757
        void updateInputMethodSensitivity(void);

    // RVA: 0x2238 | Ordinal: 8761
        void updateLastCenterPoint(void);

    // RVA: 0x2244 | Ordinal: 8773
        void updateRect(class QRect const &);

    // RVA: 0x2245 | Ordinal: 8774
        void updateRectF(class QRectF const &);

    // RVA: 0x2246 | Ordinal: 8775
        void updateRegion(class QRectF const &, class QTransform const &);

    // RVA: 0x2249 | Ordinal: 8778
        void updateRubberBand(class QMouseEvent const *);

    // RVA: 0x224D | Ordinal: 8782
        void updateScroll(void);

    // RVA: 0x2286 | Ordinal: 8839
        void verticalScroll(void) const;

    // RVA: 0x213 | Ordinal: 532
        void _QGraphicsViewPrivate(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSVIEWPRIVATE_HPP
