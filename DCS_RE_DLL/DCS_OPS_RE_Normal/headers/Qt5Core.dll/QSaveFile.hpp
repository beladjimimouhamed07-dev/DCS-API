#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QSaveFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSaveFile
{
public:

    // RVA: 0x1DC | Ordinal: 477
        void QSaveFile(class QString const &);

    // RVA: 0x1DD | Ordinal: 478
        void QSaveFile(class QString const &, class QObject *);

    // RVA: 0x1DE | Ordinal: 479
        void QSaveFile(class QObject *);

    // RVA: 0x963 | Ordinal: 2404
        void cancelWriting(void);

    // RVA: 0xA05 | Ordinal: 2566
        void close(void);

    // RVA: 0xA37 | Ordinal: 2616
        void commit(void);

    // RVA: 0xBCA | Ordinal: 3019
        void d_func(void);

    // RVA: 0xBCB | Ordinal: 3020
        void d_func(void) const;

    // RVA: 0xCA1 | Ordinal: 3234
        void directWriteFallback(void) const;

    // RVA: 0xE06 | Ordinal: 3591
        void fileName(void) const;

    // RVA: 0x1368 | Ordinal: 4969
        void metaObject(void) const;

    // RVA: 0x148C | Ordinal: 5261
        void open(class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x1650 | Ordinal: 5713
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x168D | Ordinal: 5774
        void qt_metacast(char const *);

    // RVA: 0x16D4 | Ordinal: 5845
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1982 | Ordinal: 6531
        void setDirectWriteFallback(bool);

    // RVA: 0x19B8 | Ordinal: 6585
        void setFileName(class QString const &);

    // RVA: 0x1E99 | Ordinal: 7834
        void tr(char const *, char const *, int);

    // RVA: 0x1ED8 | Ordinal: 7897
        void trUtf8(char const *, char const *, int);

    // RVA: 0x202E | Ordinal: 8239
        void writeData(char const *, __int64);

    // RVA: 0x354 | Ordinal: 853
        void _QSaveFile(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSAVEFILE_HPP
