#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QSettings
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSettings
{
public:

    // RVA: 0x1E3 | Ordinal: 484
        void QSettings(class QString const &, class QString const &, class QObject *);

    // RVA: 0x1E4 | Ordinal: 485
        void QSettings(class QString const &, enum QSettings::Format, class QObject *);

    // RVA: 0x1E5 | Ordinal: 486
        void QSettings(class QObject *);

    // RVA: 0x1E6 | Ordinal: 487
        void QSettings(enum QSettings::Format, enum QSettings::Scope, class QString const &, class QString const &, class QObject *);

    // RVA: 0x1E7 | Ordinal: 488
        void QSettings(enum QSettings::Scope, class QString const &, class QString const &, class QObject *);

    // RVA: 0x1E8 | Ordinal: 489
        void QSettings(enum QSettings::Scope, class QObject *);

    // RVA: 0x82C | Ordinal: 2093
        void allKeys(void) const;

    // RVA: 0x884 | Ordinal: 2181
        void applicationName(void) const;

    // RVA: 0x906 | Ordinal: 2311
        void beginGroup(class QString const &);

    // RVA: 0x90D | Ordinal: 2318
        void beginReadArray(class QString const &);

    // RVA: 0x912 | Ordinal: 2323
        void beginWriteArray(class QString const &, int);

    // RVA: 0x9C0 | Ordinal: 2497
        void childGroups(void) const;

    // RVA: 0x9C1 | Ordinal: 2498
        void childKeys(void) const;

    // RVA: 0x9E7 | Ordinal: 2536
        void clear(void);

    // RVA: 0xAD1 | Ordinal: 2770
        void contains(class QString const &) const;

    // RVA: 0xBCE | Ordinal: 3023
        void d_func(void);

    // RVA: 0xBCF | Ordinal: 3024
        void d_func(void) const;

    // RVA: 0xC59 | Ordinal: 3162
        void defaultFormat(void);

    // RVA: 0xD2B | Ordinal: 3372
        void endArray(void);

    // RVA: 0xD2F | Ordinal: 3376
        void endGroup(void);

    // RVA: 0xDAD | Ordinal: 3502
        void event(class QEvent *);

    // RVA: 0xDEC | Ordinal: 3565
        void fallbacksEnabled(void) const;

    // RVA: 0xE07 | Ordinal: 3592
        void fileName(void) const;

    // RVA: 0xE80 | Ordinal: 3713
        void format(void) const;

    // RVA: 0xF3C | Ordinal: 3901
        void group(void) const;

    // RVA: 0xFE9 | Ordinal: 4074
        void iniCodec(void) const;

    // RVA: 0x107E | Ordinal: 4223
        void isAtomicSyncRequired(void) const;

    // RVA: 0x1229 | Ordinal: 4650
        void isWritable(void) const;

    // RVA: 0x136A | Ordinal: 4971
        void metaObject(void) const;

    // RVA: 0x1495 | Ordinal: 5270
        void organizationName(void) const;

    // RVA: 0x1652 | Ordinal: 5715
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x168F | Ordinal: 5776
        void qt_metacast(char const *);

    // RVA: 0x16D6 | Ordinal: 5847
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x176F | Ordinal: 6000
        void registerFormat(class QString const &, bool (__cdecl *)(class QIODevice &, class QMap<class QString, class QVariant> &), bool (__cdecl *)(class QIODevice &, class QMap<class QString, class QVariant> const &), enum Qt::CaseSensitivity);

    // RVA: 0x17B8 | Ordinal: 6073
        void remove(class QString const &);

    // RVA: 0x18DD | Ordinal: 6366
        void scope(void) const;

    // RVA: 0x192F | Ordinal: 6448
        void setArrayIndex(int);

    // RVA: 0x1930 | Ordinal: 6449
        void setAtomicSyncRequired(bool);

    // RVA: 0x1973 | Ordinal: 6516
        void setDefaultFormat(enum QSettings::Format);

    // RVA: 0x19AC | Ordinal: 6573
        void setFallbacksEnabled(bool);

    // RVA: 0x19E6 | Ordinal: 6631
        void setIniCodec(class QTextCodec *);

    // RVA: 0x19E7 | Ordinal: 6632
        void setIniCodec(char const *);

    // RVA: 0x1A3D | Ordinal: 6718
        void setPath(enum QSettings::Format, enum QSettings::Scope, class QString const &);

    // RVA: 0x1AAF | Ordinal: 6832
        void setSystemIniPath(class QString const &);

    // RVA: 0x1AD1 | Ordinal: 6866
        void setUserIniPath(class QString const &);

    // RVA: 0x1AD5 | Ordinal: 6870
        void setValue(class QString const &, class QVariant const &);

    // RVA: 0x1C36 | Ordinal: 7223
        void status(void) const;

    // RVA: 0x1C91 | Ordinal: 7314
        void sync(void);

    // RVA: 0x1E9B | Ordinal: 7836
        void tr(char const *, char const *, int);

    // RVA: 0x1EDA | Ordinal: 7899
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1FBD | Ordinal: 8126
        void value(class QString const &, class QVariant const &) const;

    // RVA: 0x357 | Ordinal: 856
        void _QSettings(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSETTINGS_HPP
