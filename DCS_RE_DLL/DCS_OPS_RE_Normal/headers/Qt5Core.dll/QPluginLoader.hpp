#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QPluginLoader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPluginLoader
{
public:

    // RVA: 0x1AE | Ordinal: 431
        void QPluginLoader(class QString const &, class QObject *);

    // RVA: 0x1AF | Ordinal: 432
        void QPluginLoader(class QObject *);

    // RVA: 0xD8F | Ordinal: 3472
        void errorString(void) const;

    // RVA: 0xE04 | Ordinal: 3589
        void fileName(void) const;

    // RVA: 0x1042 | Ordinal: 4163
        void instance(void);

    // RVA: 0x111F | Ordinal: 4384
        void isLoaded(void) const;

    // RVA: 0x12AF | Ordinal: 4784
        void load(void);

    // RVA: 0x12B6 | Ordinal: 4791
        void loadHints(void) const;

    // RVA: 0x133F | Ordinal: 4928
        void metaData(void) const;

    // RVA: 0x1365 | Ordinal: 4966
        void metaObject(void) const;

    // RVA: 0x164D | Ordinal: 5710
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x168A | Ordinal: 5771
        void qt_metacast(char const *);

    // RVA: 0x16D1 | Ordinal: 5842
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x19B6 | Ordinal: 6583
        void setFileName(class QString const &);

    // RVA: 0x1A00 | Ordinal: 6657
        void setLoadHints(class QFlags<enum QLibrary::LoadHint>);

    // RVA: 0x1BE9 | Ordinal: 7146
        void staticInstances(void);

    // RVA: 0x1C32 | Ordinal: 7219
        void staticPlugins(void);

    // RVA: 0x1E96 | Ordinal: 7831
        void tr(char const *, char const *, int);

    // RVA: 0x1ED5 | Ordinal: 7894
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F62 | Ordinal: 8035
        void unload(void);

    // RVA: 0x346 | Ordinal: 839
        void _QPluginLoader(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QPLUGINLOADER_HPP
