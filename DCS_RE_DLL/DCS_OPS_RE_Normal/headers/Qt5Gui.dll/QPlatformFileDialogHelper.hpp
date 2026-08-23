#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformFileDialogHelper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformFileDialogHelper
{
public:

    // RVA: 0x23E | Ordinal: 575
        void QPlatformFileDialogHelper(void);

    // RVA: 0xB93 | Ordinal: 2964
        void cleanFilterList(class QString const &);

    // RVA: 0xCDE | Ordinal: 3295
        void currentChanged(class QUrl const &);

    // RVA: 0xE5C | Ordinal: 3677
        void directoryEntered(class QUrl const &);

    // RVA: 0x1031 | Ordinal: 4146
        void fileSelected(class QUrl const &);

    // RVA: 0x1032 | Ordinal: 4147
        void filesSelected(class QList<class QUrl> const &);

    // RVA: 0x1063 | Ordinal: 4196
        void filterSelected(class QString const &);

    // RVA: 0x5080 | Ordinal: 20609
        void isSupportedUrl(class QUrl const &) const;

    // RVA: 0x5280 | Ordinal: 21121
        void metaObject(void) const;

    // RVA: 0x53AD | Ordinal: 21422
        void options(void) const;

    // RVA: 0x5597 | Ordinal: 21912
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55DB | Ordinal: 21980
        void qt_metacast(char const *);

    // RVA: 0x5631 | Ordinal: 22066
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x57ED | Ordinal: 22510
        void selectMimeTypeFilter(class QString const &);

    // RVA: 0x57EE | Ordinal: 22511
        void selectedMimeTypeFilter(void) const;

    // RVA: 0x5ABC | Ordinal: 23229
        void setOptions(class QSharedPointer<class QFileDialogOptions> const &);

    // RVA: 0x5FBE | Ordinal: 24511
        void tr(char const *, char const *, int);

    // RVA: 0x6005 | Ordinal: 24582
        void trUtf8(char const *, char const *, int);

    // RVA: 0x4CB | Ordinal: 1228
        void _QPlatformFileDialogHelper(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMFILEDIALOGHELPER_HPP
