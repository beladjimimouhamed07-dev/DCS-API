#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgHandler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgHandler
{
public:

    // RVA: 0x32 | Ordinal: 51
        void QSvgHandler(class QSvgHandler const &);

    // RVA: 0x33 | Ordinal: 52
        void QSvgHandler(class QByteArray const &);

    // RVA: 0x34 | Ordinal: 53
        void QSvgHandler(class QIODevice *);

    // RVA: 0x35 | Ordinal: 54
        void QSvgHandler(class QXmlStreamReader *const);

    // RVA: 0x11A | Ordinal: 283
        void animationDuration(void) const;

    // RVA: 0x13B | Ordinal: 316
        void characters(class QStringRef const &);

    // RVA: 0x13E | Ordinal: 319
        void currentColor(void) const;

    // RVA: 0x14A | Ordinal: 331
        void defaultCoordinateSystem(void) const;

    // RVA: 0x14B | Ordinal: 332
        void defaultPen(void) const;

    // RVA: 0x14F | Ordinal: 336
        void device(void) const;

    // RVA: 0x152 | Ordinal: 339
        void document(void) const;

    // RVA: 0x16A | Ordinal: 363
        void endElement(class QStringRef const &);

    // RVA: 0x16B | Ordinal: 364
        void errorString(void) const;

    // RVA: 0x176 | Ordinal: 375
        void inStyle(void) const;

    // RVA: 0x177 | Ordinal: 376
        void init(void);

    // RVA: 0x180 | Ordinal: 385
        void lineNumber(void) const;

    // RVA: 0x193 | Ordinal: 404
        void ok(void) const;

    // RVA: 0x199 | Ordinal: 410
        void parse(void);

    // RVA: 0x19A | Ordinal: 411
        void parseCSStoXMLAttrs(class QString const &, class QVector<struct QSvgCssAttribute> *);

    // RVA: 0x19B | Ordinal: 412
        void popColor(void);

    // RVA: 0x19E | Ordinal: 415
        void processingInstruction(class QString const &, class QString const &);

    // RVA: 0x19F | Ordinal: 416
        void pushColor(class QColor const &);

    // RVA: 0x1A0 | Ordinal: 417
        void pushColorCopy(void);

    // RVA: 0x1C0 | Ordinal: 449
        void resolveGradients(class QSvgNode *, int);

    // RVA: 0x1C2 | Ordinal: 451
        void resolveNodes(void);

    // RVA: 0x1D4 | Ordinal: 469
        void selector(void) const;

    // RVA: 0x1D5 | Ordinal: 470
        void setAnimPeriod(int, int);

    // RVA: 0x1E1 | Ordinal: 482
        void setDefaultCoordinateSystem(enum QSvgHandler::LengthType);

    // RVA: 0x1F5 | Ordinal: 502
        void setInStyle(bool);

    // RVA: 0x223 | Ordinal: 548
        void startElement(class QString const &, class QXmlStreamAttributes const &);

    // RVA: 0x84 | Ordinal: 133
        void _QSvgHandler(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGHANDLER_HPP
