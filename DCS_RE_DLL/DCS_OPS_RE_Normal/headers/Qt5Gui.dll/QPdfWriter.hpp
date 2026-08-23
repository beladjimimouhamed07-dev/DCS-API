#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPdfWriter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPdfWriter
{
public:

    // RVA: 0x217 | Ordinal: 536
        void QPdfWriter(class QString const &);

    // RVA: 0x218 | Ordinal: 537
        void QPdfWriter(class QIODevice *);

    // RVA: 0x97A | Ordinal: 2427
        void addFileAttachment(class QString const &, class QByteArray const &, class QString const &);

    // RVA: 0xCD2 | Ordinal: 3283
        void creator(void) const;

    // RVA: 0xD5E | Ordinal: 3423
        void d_func(void);

    // RVA: 0xD5F | Ordinal: 3424
        void d_func(void) const;

    // RVA: 0xE8B | Ordinal: 3724
        void documentXmpMetadata(void) const;

    // RVA: 0x527C | Ordinal: 21117
        void metaObject(void) const;

    // RVA: 0x52A8 | Ordinal: 21161
        void metric(enum QPaintDevice::PaintDeviceMetric) const;

    // RVA: 0x533D | Ordinal: 21310
        void newPage(void);

    // RVA: 0x53EA | Ordinal: 21483
        void paintEngine(void) const;

    // RVA: 0x5430 | Ordinal: 21553
        void pdfVersion(void) const;

    // RVA: 0x5593 | Ordinal: 21908
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55D7 | Ordinal: 21976
        void qt_metacast(char const *);

    // RVA: 0x562D | Ordinal: 22062
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5730 | Ordinal: 22321
        void resolution(void) const;

    // RVA: 0x58E2 | Ordinal: 22755
        void setCreator(class QString const &);

    // RVA: 0x5952 | Ordinal: 22867
        void setDocumentXmpMetadata(class QByteArray const &);

    // RVA: 0x5A52 | Ordinal: 23123
        void setMargins(struct QPagedPaintDevice::Margins const &);

    // RVA: 0x5AD8 | Ordinal: 23257
        void setPageSize(enum QPagedPaintDevice::PageSize);

    // RVA: 0x5ADB | Ordinal: 23260
        void setPageSizeMM(class QSizeF const &);

    // RVA: 0x5AE9 | Ordinal: 23274
        void setPdfVersion(enum QPagedPaintDevice::PdfVersion);

    // RVA: 0x5B3D | Ordinal: 23358
        void setResolution(int);

    // RVA: 0x5C08 | Ordinal: 23561
        void setTitle(class QString const &);

    // RVA: 0x5F34 | Ordinal: 24373
        void title(void) const;

    // RVA: 0x5FBA | Ordinal: 24507
        void tr(char const *, char const *, int);

    // RVA: 0x6001 | Ordinal: 24578
        void trUtf8(char const *, char const *, int);

    // RVA: 0x4BC | Ordinal: 1213
        void _QPdfWriter(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPDFWRITER_HPP
