#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QFileDialogOptions
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFileDialogOptions
{
public:

    // RVA: 0xF4 | Ordinal: 245
        void QFileDialogOptions(class QFileDialogOptionsPrivate *);

    // RVA: 0x947 | Ordinal: 2376
        void acceptMode(void) const;

    // RVA: 0xBE1 | Ordinal: 3042
        void clone(void) const;

    // RVA: 0xC83 | Ordinal: 3204
        void create(void);

    // RVA: 0xDD0 | Ordinal: 3537
        void defaultNameFilterString(void);

    // RVA: 0xDD6 | Ordinal: 3543
        void defaultSuffix(void) const;

    // RVA: 0x102A | Ordinal: 4139
        void fileMode(void) const;

    // RVA: 0x105F | Ordinal: 4192
        void filter(void) const;

    // RVA: 0x4EAF | Ordinal: 20144
        void history(void) const;

    // RVA: 0x4F0E | Ordinal: 20239
        void initialDirectory(void) const;

    // RVA: 0x4F35 | Ordinal: 20278
        void initiallySelectedFiles(void) const;

    // RVA: 0x4F36 | Ordinal: 20279
        void initiallySelectedMimeTypeFilter(void) const;

    // RVA: 0x4F37 | Ordinal: 20280
        void initiallySelectedNameFilter(void) const;

    // RVA: 0x503A | Ordinal: 20539
        void isLabelExplicitlySet(enum QFileDialogOptions::DialogLabel);

    // RVA: 0x5104 | Ordinal: 20741
        void labelText(enum QFileDialogOptions::DialogLabel) const;

    // RVA: 0x52B7 | Ordinal: 21176
        void mimeTypeFilters(void) const;

    // RVA: 0x5319 | Ordinal: 21274
        void nameFilters(void) const;

    // RVA: 0x53AA | Ordinal: 21419
        void options(void) const;

    // RVA: 0x5812 | Ordinal: 22547
        void setAcceptMode(enum QFileDialogOptions::AcceptMode);

    // RVA: 0x591F | Ordinal: 22816
        void setDefaultSuffix(class QString const &);

    // RVA: 0x596B | Ordinal: 22892
        void setFileMode(enum QFileDialogOptions::FileMode);

    // RVA: 0x5973 | Ordinal: 22900
        void setFilter(class QFlags<enum QDir::Filter>);

    // RVA: 0x59EA | Ordinal: 23019
        void setHistory(class QStringList const &);

    // RVA: 0x5A02 | Ordinal: 23043
        void setInitialDirectory(class QUrl const &);

    // RVA: 0x5A03 | Ordinal: 23044
        void setInitiallySelectedFiles(class QList<class QUrl> const &);

    // RVA: 0x5A04 | Ordinal: 23045
        void setInitiallySelectedMimeTypeFilter(class QString const &);

    // RVA: 0x5A05 | Ordinal: 23046
        void setInitiallySelectedNameFilter(class QString const &);

    // RVA: 0x5A1F | Ordinal: 23072
        void setLabelText(enum QFileDialogOptions::DialogLabel, class QString const &);

    // RVA: 0x5A6C | Ordinal: 23149
        void setMimeTypeFilters(class QStringList const &);

    // RVA: 0x5A94 | Ordinal: 23189
        void setNameFilters(class QStringList const &);

    // RVA: 0x5AB3 | Ordinal: 23220
        void setOption(enum QFileDialogOptions::FileDialogOption, bool);

    // RVA: 0x5AB9 | Ordinal: 23226
        void setOptions(class QFlags<enum QFileDialogOptions::FileDialogOption>);

    // RVA: 0x5B8A | Ordinal: 23435
        void setSidebarUrls(class QList<class QUrl> const &);

    // RVA: 0x5BD1 | Ordinal: 23506
        void setSupportedSchemes(class QStringList const &);

    // RVA: 0x5C86 | Ordinal: 23687
        void setUseDefaultNameFilters(bool);

    // RVA: 0x5CA2 | Ordinal: 23715
        void setViewMode(enum QFileDialogOptions::ViewMode);

    // RVA: 0x5CCD | Ordinal: 23758
        void setWindowTitle(class QString const &);

    // RVA: 0x5D26 | Ordinal: 23847
        void sidebarUrls(void) const;

    // RVA: 0x5E5A | Ordinal: 24155
        void supportedSchemes(void) const;

    // RVA: 0x5EDA | Ordinal: 24283
        void testOption(enum QFileDialogOptions::FileDialogOption) const;

    // RVA: 0x60DA | Ordinal: 24795
        void useDefaultNameFilters(void) const;

    // RVA: 0x6122 | Ordinal: 24867
        void viewMode(void) const;

    // RVA: 0x6186 | Ordinal: 24967
        void windowTitle(void) const;

    // RVA: 0x433 | Ordinal: 1076
        void _QFileDialogOptions(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QFILEDIALOGOPTIONS_HPP
