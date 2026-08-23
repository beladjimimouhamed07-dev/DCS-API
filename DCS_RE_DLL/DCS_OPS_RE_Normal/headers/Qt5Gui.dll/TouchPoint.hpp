#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: TouchPoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace QTouchEvent {

class TouchPoint
{
public:

    // RVA: 0x3E0 | Ordinal: 993
        void TouchPoint(class QTouchEvent::TouchPoint &&);

    // RVA: 0x3E1 | Ordinal: 994
        void TouchPoint(class QTouchEvent::TouchPoint const &);

    // RVA: 0x3E2 | Ordinal: 995
        void TouchPoint(int);

    // RVA: 0xF80 | Ordinal: 3969
        void ellipseDiameters(void) const;

    // RVA: 0x109F | Ordinal: 4256
        void flags(void) const;

    // RVA: 0x4ED5 | Ordinal: 20182
        void id(void) const;

    // RVA: 0x510E | Ordinal: 20751
        void lastNormalizedPos(void) const;

    // RVA: 0x510F | Ordinal: 20752
        void lastPos(void) const;

    // RVA: 0x5118 | Ordinal: 20761
        void lastScenePos(void) const;

    // RVA: 0x5119 | Ordinal: 20762
        void lastScreenPos(void) const;

    // RVA: 0x5367 | Ordinal: 21352
        void normalizedPos(void) const;

    // RVA: 0x5495 | Ordinal: 21654
        void pos(void) const;

    // RVA: 0x54B8 | Ordinal: 21689
        void pressure(void) const;

    // RVA: 0x566C | Ordinal: 22125
        void rawScreenPositions(void) const;

    // RVA: 0x568C | Ordinal: 22157
        void rect(void) const;

    // RVA: 0x5779 | Ordinal: 22394
        void rotation(void) const;

    // RVA: 0x57C4 | Ordinal: 22469
        void scenePos(void) const;

    // RVA: 0x57C5 | Ordinal: 22470
        void sceneRect(void) const;

    // RVA: 0x57D9 | Ordinal: 22490
        void screenPos(void) const;

    // RVA: 0x57DA | Ordinal: 22491
        void screenRect(void) const;

    // RVA: 0x595D | Ordinal: 22878
        void setEllipseDiameters(class QSizeF const &);

    // RVA: 0x598A | Ordinal: 22923
        void setFlags(class QFlags<enum QTouchEvent::TouchPoint::InfoFlag>);

    // RVA: 0x59F9 | Ordinal: 23034
        void setId(int);

    // RVA: 0x5A21 | Ordinal: 23074
        void setLastNormalizedPos(class QPointF const &);

    // RVA: 0x5A22 | Ordinal: 23075
        void setLastPos(class QPointF const &);

    // RVA: 0x5A24 | Ordinal: 23077
        void setLastScenePos(class QPointF const &);

    // RVA: 0x5A25 | Ordinal: 23078
        void setLastScreenPos(class QPointF const &);

    // RVA: 0x5A9D | Ordinal: 23198
        void setNormalizedPos(class QPointF const &);

    // RVA: 0x5B08 | Ordinal: 23305
        void setPos(class QPointF const &);

    // RVA: 0x5B14 | Ordinal: 23317
        void setPressure(double);

    // RVA: 0x5B2B | Ordinal: 23340
        void setRawScreenPositions(class QVector<class QPointF> const &);

    // RVA: 0x5B2C | Ordinal: 23341
        void setRect(class QRectF const &);

    // RVA: 0x5B56 | Ordinal: 23383
        void setRotation(double);

    // RVA: 0x5B6C | Ordinal: 23405
        void setScenePos(class QPointF const &);

    // RVA: 0x5B6D | Ordinal: 23406
        void setSceneRect(class QRectF const &);

    // RVA: 0x5B75 | Ordinal: 23414
        void setScreenPos(class QPointF const &);

    // RVA: 0x5B76 | Ordinal: 23415
        void setScreenRect(class QRectF const &);

    // RVA: 0x5BAB | Ordinal: 23468
        void setStartNormalizedPos(class QPointF const &);

    // RVA: 0x5BAC | Ordinal: 23469
        void setStartPos(class QPointF const &);

    // RVA: 0x5BAD | Ordinal: 23470
        void setStartScenePos(class QPointF const &);

    // RVA: 0x5BAE | Ordinal: 23471
        void setStartScreenPos(class QPointF const &);

    // RVA: 0x5BB3 | Ordinal: 23476
        void setState(class QFlags<enum Qt::TouchPointState>);

    // RVA: 0x5C80 | Ordinal: 23681
        void setUniqueId(__int64);

    // RVA: 0x5C94 | Ordinal: 23701
        void setVelocity(class QVector2D const &);

    // RVA: 0x5D8C | Ordinal: 23949
        void startNormalizedPos(void) const;

    // RVA: 0x5D8E | Ordinal: 23951
        void startPos(void) const;

    // RVA: 0x5D8F | Ordinal: 23952
        void startScenePos(void) const;

    // RVA: 0x5D90 | Ordinal: 23953
        void startScreenPos(void) const;

    // RVA: 0x5DA1 | Ordinal: 23970
        void state(void) const;

    // RVA: 0x5E95 | Ordinal: 24214
        void swap(class QTouchEvent::TouchPoint &);

    // RVA: 0x6097 | Ordinal: 24728
        void uniqueId(void) const;

    // RVA: 0x60F8 | Ordinal: 24825
        void velocity(void) const;

    // RVA: 0x55D | Ordinal: 1374
        void _TouchPoint(void);
};

} // namespace QTouchEvent

// DCS_OPS_RE_QT5GUI.DLL_TOUCHPOINT_HPP
