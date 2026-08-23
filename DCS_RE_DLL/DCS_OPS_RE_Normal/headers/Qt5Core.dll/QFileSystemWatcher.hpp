#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QFileSystemWatcher
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFileSystemWatcher
{
public:

    // RVA: 0x111 | Ordinal: 274
        void QFileSystemWatcher(class QStringList const &, class QObject *);

    // RVA: 0x112 | Ordinal: 275
        void QFileSystemWatcher(class QObject *);

    // RVA: 0x802 | Ordinal: 2051
        void addPath(class QString const &);

    // RVA: 0x803 | Ordinal: 2052
        void addPaths(class QStringList const &);

    // RVA: 0xBA9 | Ordinal: 2986
        void d_func(void);

    // RVA: 0xBAA | Ordinal: 2987
        void d_func(void) const;

    // RVA: 0xCA8 | Ordinal: 3241
        void directories(void) const;

    // RVA: 0xCA9 | Ordinal: 3242
        void directoryChanged(class QString const &, struct QFileSystemWatcher::QPrivateSignal);

    // RVA: 0xDF9 | Ordinal: 3578
        void fileChanged(class QString const &, struct QFileSystemWatcher::QPrivateSignal);

    // RVA: 0xE15 | Ordinal: 3606
        void files(void) const;

    // RVA: 0x1356 | Ordinal: 4951
        void metaObject(void) const;

    // RVA: 0x163F | Ordinal: 5696
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x167C | Ordinal: 5757
        void qt_metacast(char const *);

    // RVA: 0x16C2 | Ordinal: 5827
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17F4 | Ordinal: 6133
        void removePath(class QString const &);

    // RVA: 0x17F5 | Ordinal: 6134
        void removePaths(class QStringList const &);

    // RVA: 0x1E87 | Ordinal: 7816
        void tr(char const *, char const *, int);

    // RVA: 0x1EC7 | Ordinal: 7880
        void trUtf8(char const *, char const *, int);

    // RVA: 0x319 | Ordinal: 794
        void _QFileSystemWatcher(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QFILESYSTEMWATCHER_HPP
