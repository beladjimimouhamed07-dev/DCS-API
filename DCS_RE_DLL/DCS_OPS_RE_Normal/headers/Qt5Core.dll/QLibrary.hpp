#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QLibrary
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QLibrary
{
public:

    // RVA: 0x15D | Ordinal: 350
        void QLibrary(class QString const &, class QString const &, class QObject *);

    // RVA: 0x15E | Ordinal: 351
        void QLibrary(class QString const &, int, class QObject *);

    // RVA: 0x15F | Ordinal: 352
        void QLibrary(class QString const &, class QObject *);

    // RVA: 0x160 | Ordinal: 353
        void QLibrary(class QObject *);

    // RVA: 0xD8E | Ordinal: 3471
        void errorString(void) const;

    // RVA: 0xE03 | Ordinal: 3588
        void fileName(void) const;

    // RVA: 0x111D | Ordinal: 4382
        void isLibrary(class QString const &);

    // RVA: 0x111E | Ordinal: 4383
        void isLoaded(void) const;

    // RVA: 0x12AD | Ordinal: 4782
        void load(void);

    // RVA: 0x12B5 | Ordinal: 4790
        void loadHints(void) const;

    // RVA: 0x135D | Ordinal: 4958
        void metaObject(void) const;

    // RVA: 0x1646 | Ordinal: 5703
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1683 | Ordinal: 5764
        void qt_metacast(char const *);

    // RVA: 0x16C9 | Ordinal: 5834
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1870 | Ordinal: 6257
        void resolve(char const *))(void);

    // RVA: 0x1871 | Ordinal: 6258
        void resolve(class QString const &, class QString const &, char const *))(void);

    // RVA: 0x1872 | Ordinal: 6259
        void resolve(class QString const &, int, char const *))(void);

    // RVA: 0x1873 | Ordinal: 6260
        void resolve(class QString const &, char const *))(void);

    // RVA: 0x19B5 | Ordinal: 6582
        void setFileName(class QString const &);

    // RVA: 0x19B9 | Ordinal: 6586
        void setFileNameAndVersion(class QString const &, class QString const &);

    // RVA: 0x19BA | Ordinal: 6587
        void setFileNameAndVersion(class QString const &, int);

    // RVA: 0x19FF | Ordinal: 6656
        void setLoadHints(class QFlags<enum QLibrary::LoadHint>);

    // RVA: 0x1E8E | Ordinal: 7823
        void tr(char const *, char const *, int);

    // RVA: 0x1ECE | Ordinal: 7887
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F61 | Ordinal: 8034
        void unload(void);

    // RVA: 0x32E | Ordinal: 815
        void _QLibrary(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QLIBRARY_HPP
