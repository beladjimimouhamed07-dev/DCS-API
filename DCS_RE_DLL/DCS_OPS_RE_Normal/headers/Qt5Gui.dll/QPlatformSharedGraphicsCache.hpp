#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformSharedGraphicsCache
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformSharedGraphicsCache
{
public:

    // RVA: 0x254 | Ordinal: 597
        void QPlatformSharedGraphicsCache(class QObject *);

    // RVA: 0x50D2 | Ordinal: 20691
        void itemsAvailable(class QByteArray const &, void *, class QVector<unsigned int> const &, class QVector<class QPoint> const &);

    // RVA: 0x50D3 | Ordinal: 20692
        void itemsInvalidated(class QByteArray const &, class QVector<unsigned int> const &);

    // RVA: 0x50D4 | Ordinal: 20693
        void itemsMissing(class QByteArray const &, class QVector<unsigned int> const &);

    // RVA: 0x50D5 | Ordinal: 20694
        void itemsUpdated(class QByteArray const &, void *, class QVector<unsigned int> const &, class QVector<class QPoint> const &);

    // RVA: 0x528B | Ordinal: 21132
        void metaObject(void) const;

    // RVA: 0x55A2 | Ordinal: 21923
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55E6 | Ordinal: 21991
        void qt_metacast(char const *);

    // RVA: 0x563C | Ordinal: 22077
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5FC9 | Ordinal: 24522
        void tr(char const *, char const *, int);

    // RVA: 0x6010 | Ordinal: 24593
        void trUtf8(char const *, char const *, int);

    // RVA: 0x4DF | Ordinal: 1248
        void _QPlatformSharedGraphicsCache(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMSHAREDGRAPHICSCACHE_HPP
