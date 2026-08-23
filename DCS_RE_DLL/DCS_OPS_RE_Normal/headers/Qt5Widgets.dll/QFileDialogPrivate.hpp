#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QFileDialogPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFileDialogPrivate
{
public:

    // RVA: 0x4E | Ordinal: 79
        void QFileDialogPrivate(void);

    // RVA: 0x4A9 | Ordinal: 1194
        void _q_autoCompleteFileName(class QString const &);

    // RVA: 0x4AD | Ordinal: 1198
        void _q_createDirectory(void);

    // RVA: 0x4AE | Ordinal: 1199
        void _q_currentChanged(class QModelIndex const &);

    // RVA: 0x4AF | Ordinal: 1200
        void _q_deleteCurrent(void);

    // RVA: 0x4B1 | Ordinal: 1202
        void _q_emitUrlSelected(class QUrl const &);

    // RVA: 0x4B2 | Ordinal: 1203
        void _q_emitUrlsSelected(class QList<class QUrl> const &);

    // RVA: 0x4B4 | Ordinal: 1205
        void _q_enterDirectory(class QModelIndex const &);

    // RVA: 0x4B5 | Ordinal: 1206
        void _q_fileRenamed(class QString const &, class QString const &, class QString const &);

    // RVA: 0x4B6 | Ordinal: 1207
        void _q_goHome(void);

    // RVA: 0x4B7 | Ordinal: 1208
        void _q_goToDirectory(class QString const &);

    // RVA: 0x4B8 | Ordinal: 1209
        void _q_goToUrl(class QUrl const &);

    // RVA: 0x4BC | Ordinal: 1213
        void _q_nativeCurrentChanged(class QUrl const &);

    // RVA: 0x4BD | Ordinal: 1214
        void _q_nativeEnterDirectory(class QUrl const &);

    // RVA: 0x4BE | Ordinal: 1215
        void _q_navigateBackward(void);

    // RVA: 0x4BF | Ordinal: 1216
        void _q_navigateForward(void);

    // RVA: 0x4C0 | Ordinal: 1217
        void _q_navigateToParent(void);

    // RVA: 0x4C1 | Ordinal: 1218
        void _q_pathChanged(class QString const &);

    // RVA: 0x4C3 | Ordinal: 1220
        void _q_renameCurrent(void);

    // RVA: 0x4C4 | Ordinal: 1221
        void _q_rowsInserted(class QModelIndex const &);

    // RVA: 0x4C6 | Ordinal: 1223
        void _q_selectionChanged(void);

    // RVA: 0x4C8 | Ordinal: 1225
        void _q_showContextMenu(class QPoint const &);

    // RVA: 0x4C9 | Ordinal: 1226
        void _q_showDetailsView(void);

    // RVA: 0x4CA | Ordinal: 1227
        void _q_showHeader(class QAction *);

    // RVA: 0x4CB | Ordinal: 1228
        void _q_showHidden(void);

    // RVA: 0x4CD | Ordinal: 1230
        void _q_showListView(void);

    // RVA: 0x4D1 | Ordinal: 1234
        void _q_updateOkButton(void);

    // RVA: 0x4D2 | Ordinal: 1235
        void _q_useNameFilter(int);

    // RVA: 0x550 | Ordinal: 1361
        void addDefaultSuffixToFiles(class QStringList const &) const;

    // RVA: 0x551 | Ordinal: 1362
        void addDefaultSuffixToUrls(class QList<class QUrl> const &) const;

    // RVA: 0x624 | Ordinal: 1573
        void basename(class QString const &) const;

    // RVA: 0x683 | Ordinal: 1668
        void canBeNativeDialog(void) const;

    // RVA: 0x80D | Ordinal: 2062
        void createMenuActions(void);

    // RVA: 0x820 | Ordinal: 2081
        void createToolButtons(void);

    // RVA: 0x825 | Ordinal: 2086
        void createWidgets(void);

    // RVA: 0x86F | Ordinal: 2160
        void currentView(void) const;

    // RVA: 0xA1E | Ordinal: 2591
        void directory_sys(void) const;

    // RVA: 0xB07 | Ordinal: 2824
        void emitFilesSelected(class QStringList const &);

    // RVA: 0xBCC | Ordinal: 3021
        void filterForMode(class QFlags<enum QDir::Filter>) const;

    // RVA: 0xC96 | Ordinal: 3223
        void getEnvironmentVariable(class QString const &);

    // RVA: 0xD1B | Ordinal: 3356
        void helperDone(enum QDialog::DialogCode, class QPlatformDialogHelper *);

    // RVA: 0xD1D | Ordinal: 3358
        void helperPrepareShow(class QPlatformDialogHelper *);

    // RVA: 0xDD5 | Ordinal: 3542
        void init(struct QFileDialogArgs const &);

    // RVA: 0xDDE | Ordinal: 3551
        void initHelper(class QPlatformDialogHelper *);

    // RVA: 0xFD9 | Ordinal: 4058
        void itemViewKeyboardEvent(class QKeyEvent *);

    // RVA: 0x105C | Ordinal: 4189
        void lineEdit(void) const;

    // RVA: 0x1095 | Ordinal: 4246
        void mapFromSource(class QModelIndex const &) const;

    // RVA: 0x10C4 | Ordinal: 4293
        void mapToSource(class QModelIndex const &) const;

    // RVA: 0x10DA | Ordinal: 4315
        void maxNameLength(class QString const &);

    // RVA: 0x129D | Ordinal: 4766
        void navigate(struct QFileDialogPrivate::HistoryItem &);

    // RVA: 0x1393 | Ordinal: 5012
        void platformFileDialogHelper(void) const;

    // RVA: 0x1409 | Ordinal: 5130
        void q_func(void);

    // RVA: 0x140A | Ordinal: 5131
        void q_func(void) const;

    // RVA: 0x1632 | Ordinal: 5683
        void removeDirectory(class QString const &);

    // RVA: 0x16CE | Ordinal: 5839
        void restoreFromSettings(void);

    // RVA: 0x16D5 | Ordinal: 5846
        void restoreWidgetState(class QStringList &, int);

    // RVA: 0x16D8 | Ordinal: 5849
        void retranslateStrings(void);

    // RVA: 0x16D9 | Ordinal: 5850
        void retranslateWindowTitle(void);

    // RVA: 0x16E3 | Ordinal: 5860
        void rootIndex(void) const;

    // RVA: 0x16E6 | Ordinal: 5863
        void rootPath(void) const;

    // RVA: 0x171C | Ordinal: 5917
        void saveHistorySelection(void);

    // RVA: 0x171D | Ordinal: 5918
        void saveSettings(void);

    // RVA: 0x1790 | Ordinal: 6033
        void select(class QModelIndex const &) const;

    // RVA: 0x179D | Ordinal: 6046
        void selectFile_sys(class QUrl const &);

    // RVA: 0x179F | Ordinal: 6048
        void selectMimeTypeFilter_sys(class QString const &);

    // RVA: 0x17A1 | Ordinal: 6050
        void selectNameFilter_sys(class QString const &);

    // RVA: 0x17AA | Ordinal: 6059
        void selectedFiles_sys(void) const;

    // RVA: 0x17B5 | Ordinal: 6070
        void selectedMimeTypeFilter_sys(void) const;

    // RVA: 0x17B7 | Ordinal: 6072
        void selectedNameFilter_sys(void) const;

    // RVA: 0x1911 | Ordinal: 6418
        void setDirectory_sys(class QUrl const &);

    // RVA: 0x1972 | Ordinal: 6515
        void setFilter_sys(void);

    // RVA: 0x1A5C | Ordinal: 6749
        void setLabelTextControl(enum QFileDialog::DialogLabel, class QString const &);

    // RVA: 0x1A67 | Ordinal: 6760
        void setLastVisitedDirectory(class QUrl const &);

    // RVA: 0x1B9C | Ordinal: 7069
        void setRootIndex(class QModelIndex const &) const;

    // RVA: 0x203D | Ordinal: 8254
        void toInternal(class QString const &);

    // RVA: 0x21CB | Ordinal: 8652
        void typedFiles(void) const;

    // RVA: 0x2214 | Ordinal: 8725
        void updateCancelButtonText(void);

    // RVA: 0x2223 | Ordinal: 8740
        void updateFileNameLabel(void);

    // RVA: 0x2224 | Ordinal: 8741
        void updateFileTypeLabel(void);

    // RVA: 0x2239 | Ordinal: 8762
        void updateLookInLabel(void);

    // RVA: 0x2240 | Ordinal: 8769
        void updateOkButtonText(bool);

    // RVA: 0x225C | Ordinal: 8797
        void userSelectedFiles(void) const;

    // RVA: 0x2260 | Ordinal: 8801
        void usingWidgets(void) const;

    // RVA: 0x1DB | Ordinal: 476
        void _QFileDialogPrivate(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QFILEDIALOGPRIVATE_HPP
