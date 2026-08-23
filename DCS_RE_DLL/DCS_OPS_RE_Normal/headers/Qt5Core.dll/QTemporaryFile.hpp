#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QTemporaryFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTemporaryFile
{
public:

    // RVA: 0x221 | Ordinal: 546
        void QTemporaryFile(class QString const &);

    // RVA: 0x222 | Ordinal: 547
        void QTemporaryFile(class QString const &, class QObject *);

    // RVA: 0x223 | Ordinal: 548
        void QTemporaryFile(class QObject *);

    // RVA: 0x224 | Ordinal: 549
        void QTemporaryFile(void);

    // RVA: 0x8CC | Ordinal: 2253
        void autoRemove(void) const;

    // RVA: 0xB33 | Ordinal: 2868
        void createLocalFile(class QFile &);

    // RVA: 0xB34 | Ordinal: 2869
        void createLocalFile(class QString const &);

    // RVA: 0xB35 | Ordinal: 2870
        void createNativeFile(class QFile &);

    // RVA: 0xB36 | Ordinal: 2871
        void createNativeFile(class QString const &);

    // RVA: 0xBDE | Ordinal: 3039
        void d_func(void);

    // RVA: 0xBDF | Ordinal: 3040
        void d_func(void) const;

    // RVA: 0xE08 | Ordinal: 3593
        void fileName(void) const;

    // RVA: 0xE10 | Ordinal: 3601
        void fileTemplate(void) const;

    // RVA: 0x1373 | Ordinal: 4980
        void metaObject(void) const;

    // RVA: 0x148D | Ordinal: 5262
        void open(class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x148E | Ordinal: 5263
        void open(void);

    // RVA: 0x165B | Ordinal: 5724
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1698 | Ordinal: 5785
        void qt_metacast(char const *);

    // RVA: 0x16DF | Ordinal: 5856
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1810 | Ordinal: 6161
        void rename(class QString const &);

    // RVA: 0x193A | Ordinal: 6459
        void setAutoRemove(bool);

    // RVA: 0x19BB | Ordinal: 6588
        void setFileTemplate(class QString const &);

    // RVA: 0x1EA4 | Ordinal: 7845
        void tr(char const *, char const *, int);

    // RVA: 0x1EE3 | Ordinal: 7908
        void trUtf8(char const *, char const *, int);

    // RVA: 0x369 | Ordinal: 874
        void _QTemporaryFile(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QTEMPORARYFILE_HPP
