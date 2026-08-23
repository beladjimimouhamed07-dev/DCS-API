#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgTinyDocument
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgTinyDocument
{
public:

    // RVA: 0x67 | Ordinal: 104
        void QSvgTinyDocument(class QSvgTinyDocument const &);

    // RVA: 0x68 | Ordinal: 105
        void QSvgTinyDocument(void);

    // RVA: 0x110 | Ordinal: 273
        void addNamedNode(class QString const &, class QSvgNode *);

    // RVA: 0x111 | Ordinal: 274
        void addNamedStyle(class QString const &, class QSvgFillStyleProperty *);

    // RVA: 0x112 | Ordinal: 275
        void addSvgFont(class QSvgFont *);

    // RVA: 0x119 | Ordinal: 282
        void animated(void) const;

    // RVA: 0x11C | Ordinal: 285
        void animationDuration(void) const;

    // RVA: 0x138 | Ordinal: 313
        void boundsOnElement(class QString const &) const;

    // RVA: 0x13F | Ordinal: 320
        void currentElapsed(void) const;

    // RVA: 0x141 | Ordinal: 322
        void currentFrame(void) const;

    // RVA: 0x162 | Ordinal: 355
        void draw(class QPainter *);

    // RVA: 0x163 | Ordinal: 356
        void draw(class QPainter *, class QRectF const &);

    // RVA: 0x164 | Ordinal: 357
        void draw(class QPainter *, class QString const &, class QRectF const &);

    // RVA: 0x165 | Ordinal: 358
        void draw(class QPainter *, struct QSvgExtraStates &);

    // RVA: 0x168 | Ordinal: 361
        void elementExists(class QString const &) const;

    // RVA: 0x174 | Ordinal: 373
        void height(void) const;

    // RVA: 0x175 | Ordinal: 374
        void heightPercent(void) const;

    // RVA: 0x184 | Ordinal: 389
        void load(class QByteArray const &);

    // RVA: 0x185 | Ordinal: 390
        void load(class QString const &);

    // RVA: 0x186 | Ordinal: 391
        void load(class QXmlStreamReader *);

    // RVA: 0x189 | Ordinal: 394
        void mapSourceToTarget(class QPainter *, class QRectF const &, class QRectF const &);

    // RVA: 0x190 | Ordinal: 401
        void namedNode(class QString const &) const;

    // RVA: 0x191 | Ordinal: 402
        void namedStyle(class QString const &) const;

    // RVA: 0x19C | Ordinal: 413
        void preserveAspectRatio(void) const;

    // RVA: 0x1C5 | Ordinal: 454
        void restartAnimation(void);

    // RVA: 0x1D6 | Ordinal: 471
        void setAnimated(bool);

    // RVA: 0x1DD | Ordinal: 478
        void setCurrentFrame(int);

    // RVA: 0x1EC | Ordinal: 493
        void setFramesPerSecond(int);

    // RVA: 0x1F4 | Ordinal: 501
        void setHeight(int, bool);

    // RVA: 0x1FD | Ordinal: 510
        void setPreserveAspectRatio(bool);

    // RVA: 0x218 | Ordinal: 537
        void setViewBox(class QRectF const &);

    // RVA: 0x21E | Ordinal: 543
        void setWidth(int, bool);

    // RVA: 0x221 | Ordinal: 546
        void size(void) const;

    // RVA: 0x22F | Ordinal: 560
        void svgFont(class QString const &) const;

    // RVA: 0x23A | Ordinal: 571
        void transformForElement(class QString const &) const;

    // RVA: 0x256 | Ordinal: 599
        void type(void) const;

    // RVA: 0x25C | Ordinal: 605
        void viewBox(void) const;

    // RVA: 0x261 | Ordinal: 610
        void width(void) const;

    // RVA: 0x262 | Ordinal: 611
        void widthPercent(void) const;

    // RVA: 0x97 | Ordinal: 152
        void _QSvgTinyDocument(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGTINYDOCUMENT_HPP
