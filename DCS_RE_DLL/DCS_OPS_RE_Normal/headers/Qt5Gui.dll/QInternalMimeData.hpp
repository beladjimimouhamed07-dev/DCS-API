#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QInternalMimeData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QInternalMimeData
{
public:

    // RVA: 0x15E | Ordinal: 351
        void QInternalMimeData(void);

    // RVA: 0xB3C | Ordinal: 2877
        void canReadData(class QString const &);

    // RVA: 0x110C | Ordinal: 4365
        void formats(void) const;

    // RVA: 0x110F | Ordinal: 4368
        void formatsHelper(class QMimeData const *);

    // RVA: 0x4E67 | Ordinal: 20072
        void hasFormat(class QString const &) const;

    // RVA: 0x4E69 | Ordinal: 20074
        void hasFormatHelper(class QString const &, class QMimeData const *);

    // RVA: 0x526D | Ordinal: 21102
        void metaObject(void) const;

    // RVA: 0x5584 | Ordinal: 21893
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55C8 | Ordinal: 21961
        void qt_metacast(char const *);

    // RVA: 0x561E | Ordinal: 22047
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x56F5 | Ordinal: 22262
        void renderDataHelper(class QString const &, class QMimeData const *);

    // RVA: 0x5756 | Ordinal: 22359
        void retrieveData(class QString const &, enum QVariant::Type) const;

    // RVA: 0x5FAB | Ordinal: 24492
        void tr(char const *, char const *, int);

    // RVA: 0x5FF2 | Ordinal: 24563
        void trUtf8(char const *, char const *, int);

    // RVA: 0x460 | Ordinal: 1121
        void _QInternalMimeData(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QINTERNALMIMEDATA_HPP
