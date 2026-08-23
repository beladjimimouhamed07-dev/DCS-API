#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPdfEnginePrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPdfEnginePrivate
{
public:

    // RVA: 0x216 | Ordinal: 535
        void QPdfEnginePrivate(void);

    // RVA: 0x961 | Ordinal: 2402
        void addBrushPattern(class QTransform const &, bool *, int *);

    // RVA: 0x96B | Ordinal: 2412
        void addConstantAlphaObject(int, int);

    // RVA: 0x97D | Ordinal: 2430
        void addImage(class QImage const &, bool *, bool, __int64);

    // RVA: 0x9A9 | Ordinal: 2474
        void addXrefEntry(int, bool);

    // RVA: 0xB33 | Ordinal: 2868
        void calcUserUnit(void) const;

    // RVA: 0xCC4 | Ordinal: 3269
        void createShadingFunction(class QGradient const *, int, int, bool, bool);

    // RVA: 0xF59 | Ordinal: 3930
        void drawTextItem(class QPointF const &, class QTextItemInt const &);

    // RVA: 0xF82 | Ordinal: 3971
        void embedFont(class QFontSubset *);

    // RVA: 0x1179 | Ordinal: 4474
        void generateGradientShader(class QGradient const *, class QTransform const &, bool);

    // RVA: 0x117A | Ordinal: 4475
        void generateLinearGradientShader(class QLinearGradient const *, class QTransform const &, bool);

    // RVA: 0x117E | Ordinal: 4479
        void generateRadialGradientShader(class QRadialGradient const *, class QTransform const &, bool);

    // RVA: 0x4E0F | Ordinal: 19984
        void gradientBrush(class QBrush const &, class QTransform const &, int *);

    // RVA: 0x533C | Ordinal: 21309
        void newPage(void);

    // RVA: 0x53D9 | Ordinal: 21466
        void pageMatrix(void) const;

    // RVA: 0x54C6 | Ordinal: 21703
        void printString(class QString const &);

    // RVA: 0x5536 | Ordinal: 21815
        void q_func(void);

    // RVA: 0x5537 | Ordinal: 21816
        void q_func(void) const;

    // RVA: 0x5709 | Ordinal: 22282
        void requestObject(void);

    // RVA: 0x6199 | Ordinal: 24986
        void write(class QByteArray const &);

    // RVA: 0x61A0 | Ordinal: 24993
        void writeAttachmentRoot(void);

    // RVA: 0x61A2 | Ordinal: 24995
        void writeCompressed(class QByteArray const &);

    // RVA: 0x61A3 | Ordinal: 24996
        void writeCompressed(class QIODevice *);

    // RVA: 0x61A4 | Ordinal: 24997
        void writeCompressed(char const *, int);

    // RVA: 0x61A5 | Ordinal: 24998
        void writeFonts(void);

    // RVA: 0x61A7 | Ordinal: 25000
        void writeHeader(void);

    // RVA: 0x61A8 | Ordinal: 25001
        void writeImage(class QByteArray const &, int, int, int, int, int, bool, bool);

    // RVA: 0x61A9 | Ordinal: 25002
        void writeInfo(void);

    // RVA: 0x61AA | Ordinal: 25003
        void writeOutputIntent(void);

    // RVA: 0x61AB | Ordinal: 25004
        void writePage(void);

    // RVA: 0x61AC | Ordinal: 25005
        void writePageRoot(void);

    // RVA: 0x61AE | Ordinal: 25007
        void writeTail(void);

    // RVA: 0x61B0 | Ordinal: 25009
        void writeXmpDcumentMetaData(void);

    // RVA: 0x61CB | Ordinal: 25036
        void xprintf(char const *, ...);

    // RVA: 0x4BB | Ordinal: 1212
        void _QPdfEnginePrivate(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPDFENGINEPRIVATE_HPP
