#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QMimeData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMimeData
{
public:

    // RVA: 0x192 | Ordinal: 403
        void QMimeData(void);

    // RVA: 0x9E3 | Ordinal: 2532
        void clear(void);

    // RVA: 0xA1E | Ordinal: 2591
        void colorData(void) const;

    // RVA: 0xBBC | Ordinal: 3005
        void d_func(void);

    // RVA: 0xBBD | Ordinal: 3006
        void d_func(void) const;

    // RVA: 0xC02 | Ordinal: 3075
        void data(class QString const &) const;

    // RVA: 0xE82 | Ordinal: 3715
        void formats(void) const;

    // RVA: 0xF50 | Ordinal: 3921
        void hasColor(void) const;

    // RVA: 0xF5A | Ordinal: 3931
        void hasFormat(class QString const &) const;

    // RVA: 0xF5C | Ordinal: 3933
        void hasHtml(void) const;

    // RVA: 0xF5D | Ordinal: 3934
        void hasImage(void) const;

    // RVA: 0xF77 | Ordinal: 3960
        void hasText(void) const;

    // RVA: 0xF7A | Ordinal: 3963
        void hasUrls(void) const;

    // RVA: 0xF99 | Ordinal: 3994
        void html(void) const;

    // RVA: 0xFA5 | Ordinal: 4006
        void imageData(void) const;

    // RVA: 0x135F | Ordinal: 4960
        void metaObject(void) const;

    // RVA: 0x1647 | Ordinal: 5704
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1684 | Ordinal: 5765
        void qt_metacast(char const *);

    // RVA: 0x16CA | Ordinal: 5835
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17E2 | Ordinal: 6115
        void removeFormat(class QString const &);

    // RVA: 0x1889 | Ordinal: 6282
        void retrieveData(class QString const &, enum QVariant::Type) const;

    // RVA: 0x1954 | Ordinal: 6485
        void setColorData(class QVariant const &);

    // RVA: 0x196A | Ordinal: 6507
        void setData(class QString const &, class QByteArray const &);

    // RVA: 0x19E2 | Ordinal: 6627
        void setHtml(class QString const &);

    // RVA: 0x19E5 | Ordinal: 6630
        void setImageData(class QVariant const &);

    // RVA: 0x1AB6 | Ordinal: 6839
        void setText(class QString const &);

    // RVA: 0x1ACD | Ordinal: 6862
        void setUrls(class QList<class QUrl> const &);

    // RVA: 0x1CCA | Ordinal: 7371
        void text(void) const;

    // RVA: 0x1E90 | Ordinal: 7825
        void tr(char const *, char const *, int);

    // RVA: 0x1ECF | Ordinal: 7888
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F9A | Ordinal: 8091
        void urls(void) const;

    // RVA: 0x338 | Ordinal: 825
        void _QMimeData(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QMIMEDATA_HPP
