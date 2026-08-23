#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QFileDialog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFileDialog
{
public:

    // RVA: 0x4B | Ordinal: 76
        void QFileDialog(struct QFileDialogArgs const &);

    // RVA: 0x4C | Ordinal: 77
        void QFileDialog(class QWidget *, class QString const &, class QString const &, class QString const &);

    // RVA: 0x4D | Ordinal: 78
        void QFileDialog(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x4E0 | Ordinal: 1249
        void accept(void);

    // RVA: 0x4E6 | Ordinal: 1255
        void acceptMode(void) const;

    // RVA: 0x6B8 | Ordinal: 1721
        void changeEvent(class QEvent *);

    // RVA: 0x7B1 | Ordinal: 1970
        void confirmOverwrite(void) const;

    // RVA: 0x831 | Ordinal: 2098
        void currentChanged(class QString const &);

    // RVA: 0x86D | Ordinal: 2158
        void currentUrlChanged(class QUrl const &);

    // RVA: 0x8E1 | Ordinal: 2274
        void d_func(void);

    // RVA: 0x8E2 | Ordinal: 2275
        void d_func(void) const;

    // RVA: 0x9FC | Ordinal: 2557
        void defaultSuffix(void) const;

    // RVA: 0xA19 | Ordinal: 2586
        void directory(void) const;

    // RVA: 0xA1A | Ordinal: 2587
        void directoryEntered(class QString const &);

    // RVA: 0xA1C | Ordinal: 2589
        void directoryUrl(void) const;

    // RVA: 0xA1D | Ordinal: 2590
        void directoryUrlEntered(class QUrl const &);

    // RVA: 0xA4F | Ordinal: 2640
        void done(int);

    // RVA: 0xBC0 | Ordinal: 3009
        void fileMode(void) const;

    // RVA: 0xBC6 | Ordinal: 3015
        void fileSelected(class QString const &);

    // RVA: 0xBC7 | Ordinal: 3016
        void filesSelected(class QStringList const &);

    // RVA: 0xBCA | Ordinal: 3019
        void filter(void) const;

    // RVA: 0xBCE | Ordinal: 3023
        void filterSelected(class QString const &);

    // RVA: 0xC97 | Ordinal: 3224
        void getExistingDirectory(class QWidget *, class QString const &, class QString const &, class QFlags<enum QFileDialog::Option>);

    // RVA: 0xC98 | Ordinal: 3225
        void getExistingDirectoryUrl(class QWidget *, class QString const &, class QUrl const &, class QFlags<enum QFileDialog::Option>, class QStringList const &);

    // RVA: 0xCA6 | Ordinal: 3239
        void getOpenFileContent(class QString const &, class std::function<void __cdecl(class QString const &, class QByteArray const &)> const &);

    // RVA: 0xCA7 | Ordinal: 3240
        void getOpenFileName(class QWidget *, class QString const &, class QString const &, class QString const &, class QString *, class QFlags<enum QFileDialog::Option>);

    // RVA: 0xCA8 | Ordinal: 3241
        void getOpenFileNames(class QWidget *, class QString const &, class QString const &, class QString const &, class QString *, class QFlags<enum QFileDialog::Option>);

    // RVA: 0xCA9 | Ordinal: 3242
        void getOpenFileUrl(class QWidget *, class QString const &, class QUrl const &, class QString const &, class QString *, class QFlags<enum QFileDialog::Option>, class QStringList const &);

    // RVA: 0xCAA | Ordinal: 3243
        void getOpenFileUrls(class QWidget *, class QString const &, class QUrl const &, class QString const &, class QString *, class QFlags<enum QFileDialog::Option>, class QStringList const &);

    // RVA: 0xCAF | Ordinal: 3248
        void getSaveFileName(class QWidget *, class QString const &, class QString const &, class QString const &, class QString *, class QFlags<enum QFileDialog::Option>);

    // RVA: 0xCB0 | Ordinal: 3249
        void getSaveFileUrl(class QWidget *, class QString const &, class QUrl const &, class QString const &, class QString *, class QFlags<enum QFileDialog::Option>, class QStringList const &);

    // RVA: 0xD44 | Ordinal: 3397
        void history(void) const;

    // RVA: 0xD8F | Ordinal: 3472
        void iconProvider(void) const;

    // RVA: 0xF14 | Ordinal: 3861
        void isNameFilterDetailsVisible(void) const;

    // RVA: 0xF31 | Ordinal: 3890
        void isReadOnly(void) const;

    // RVA: 0xFAD | Ordinal: 4014
        void itemDelegate(void) const;

    // RVA: 0x102D | Ordinal: 4142
        void labelText(enum QFileDialog::DialogLabel) const;

    // RVA: 0x112D | Ordinal: 4398
        void metaObject(void) const;

    // RVA: 0x11A9 | Ordinal: 4522
        void mimeTypeFilters(void) const;

    // RVA: 0x1291 | Ordinal: 4754
        void nameFilters(void) const;

    // RVA: 0x12D7 | Ordinal: 4824
        void open(class QObject *, char const *);

    // RVA: 0x12E8 | Ordinal: 4841
        void options(void) const;

    // RVA: 0x13E3 | Ordinal: 5092
        void proxyModel(void) const;

    // RVA: 0x1446 | Ordinal: 5191
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14D9 | Ordinal: 5338
        void qt_metacast(char const *);

    // RVA: 0x156F | Ordinal: 5488
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x16CA | Ordinal: 5835
        void resolveSymlinks(void) const;

    // RVA: 0x16D1 | Ordinal: 5842
        void restoreState(class QByteArray const &);

    // RVA: 0x171A | Ordinal: 5915
        void saveFileContent(class QByteArray const &, class QString const &);

    // RVA: 0x171E | Ordinal: 5919
        void saveState(void) const;

    // RVA: 0x179C | Ordinal: 6045
        void selectFile(class QString const &);

    // RVA: 0x179E | Ordinal: 6047
        void selectMimeTypeFilter(class QString const &);

    // RVA: 0x17A0 | Ordinal: 6049
        void selectNameFilter(class QString const &);

    // RVA: 0x17A4 | Ordinal: 6053
        void selectUrl(class QUrl const &);

    // RVA: 0x17A9 | Ordinal: 6058
        void selectedFiles(void) const;

    // RVA: 0x17B4 | Ordinal: 6069
        void selectedMimeTypeFilter(void) const;

    // RVA: 0x17B6 | Ordinal: 6071
        void selectedNameFilter(void) const;

    // RVA: 0x17BD | Ordinal: 6078
        void selectedUrls(void) const;

    // RVA: 0x17E8 | Ordinal: 6121
        void setAcceptMode(enum QFileDialog::AcceptMode);

    // RVA: 0x189E | Ordinal: 6303
        void setConfirmOverwrite(bool);

    // RVA: 0x1904 | Ordinal: 6405
        void setDefaultSuffix(class QString const &);

    // RVA: 0x190E | Ordinal: 6415
        void setDirectory(class QDir const &);

    // RVA: 0x190F | Ordinal: 6416
        void setDirectory(class QString const &);

    // RVA: 0x1910 | Ordinal: 6417
        void setDirectoryUrl(class QUrl const &);

    // RVA: 0x196C | Ordinal: 6509
        void setFileMode(enum QFileDialog::FileMode);

    // RVA: 0x196F | Ordinal: 6512
        void setFilter(class QFlags<enum QDir::Filter>);

    // RVA: 0x19EE | Ordinal: 6639
        void setHistory(class QStringList const &);

    // RVA: 0x1A0C | Ordinal: 6669
        void setIconProvider(class QFileIconProvider *);

    // RVA: 0x1A38 | Ordinal: 6713
        void setItemDelegate(class QAbstractItemDelegate *);

    // RVA: 0x1A59 | Ordinal: 6746
        void setLabelText(enum QFileDialog::DialogLabel, class QString const &);

    // RVA: 0x1AA9 | Ordinal: 6826
        void setMimeTypeFilters(class QStringList const &);

    // RVA: 0x1AE6 | Ordinal: 6887
        void setNameFilter(class QString const &);

    // RVA: 0x1AE7 | Ordinal: 6888
        void setNameFilterDetailsVisible(bool);

    // RVA: 0x1AEA | Ordinal: 6891
        void setNameFilters(class QStringList const &);

    // RVA: 0x1B14 | Ordinal: 6933
        void setOption(enum QFileDialog::Option, bool);

    // RVA: 0x1B1C | Ordinal: 6941
        void setOptions(class QFlags<enum QFileDialog::Option>);

    // RVA: 0x1B74 | Ordinal: 7029
        void setProxyModel(class QAbstractProxyModel *);

    // RVA: 0x1B7E | Ordinal: 7039
        void setReadOnly(bool);

    // RVA: 0x1B95 | Ordinal: 7062
        void setResolveSymlinks(bool);

    // RVA: 0x1C07 | Ordinal: 7176
        void setSidebarUrls(class QList<class QUrl> const &);

    // RVA: 0x1C6A | Ordinal: 7275
        void setSupportedSchemes(class QStringList const &);

    // RVA: 0x1D0E | Ordinal: 7439
        void setViewMode(enum QFileDialog::ViewMode);

    // RVA: 0x1D19 | Ordinal: 7450
        void setVisible(bool);

    // RVA: 0x1DD1 | Ordinal: 7634
        void sidebarUrls(void) const;

    // RVA: 0x1F69 | Ordinal: 8042
        void supportedSchemes(void) const;

    // RVA: 0x1FC9 | Ordinal: 8138
        void testOption(enum QFileDialog::Option) const;

    // RVA: 0x2095 | Ordinal: 8342
        void tr(char const *, char const *, int);

    // RVA: 0x2128 | Ordinal: 8489
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2258 | Ordinal: 8793
        void urlSelected(class QUrl const &);

    // RVA: 0x2259 | Ordinal: 8794
        void urlsSelected(class QList<class QUrl> const &);

    // RVA: 0x229B | Ordinal: 8860
        void viewMode(void) const;

    // RVA: 0x1DA | Ordinal: 475
        void _QFileDialog(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QFILEDIALOG_HPP
