#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QComboBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QComboBox
{
public:

    // RVA: 0x24 | Ordinal: 37
        void QComboBox(class QComboBoxPrivate &, class QWidget *);

    // RVA: 0x25 | Ordinal: 38
        void QComboBox(class QWidget *);

    // RVA: 0x516 | Ordinal: 1303
        void activated(class QString const &);

    // RVA: 0x517 | Ordinal: 1304
        void activated(int);

    // RVA: 0x558 | Ordinal: 1369
        void addItem(class QIcon const &, class QString const &, class QVariant const &);

    // RVA: 0x559 | Ordinal: 1370
        void addItem(class QString const &, class QVariant const &);

    // RVA: 0x567 | Ordinal: 1384
        void addItems(class QStringList const &);

    // RVA: 0x5F4 | Ordinal: 1525
        void autoCompletion(void) const;

    // RVA: 0x5F5 | Ordinal: 1526
        void autoCompletionCaseSensitivity(void) const;

    // RVA: 0x6B3 | Ordinal: 1716
        void changeEvent(class QEvent *);

    // RVA: 0x70C | Ordinal: 1805
        void clear(void);

    // RVA: 0x721 | Ordinal: 1826
        void clearEditText(void);

    // RVA: 0x7A6 | Ordinal: 1959
        void completer(void) const;

    // RVA: 0x7C9 | Ordinal: 1994
        void contextMenuEvent(class QContextMenuEvent *);

    // RVA: 0x7EF | Ordinal: 2032
        void count(void) const;

    // RVA: 0x845 | Ordinal: 2118
        void currentData(int) const;

    // RVA: 0x84F | Ordinal: 2128
        void currentIndex(void) const;

    // RVA: 0x857 | Ordinal: 2136
        void currentIndexChanged(class QString const &);

    // RVA: 0x858 | Ordinal: 2137
        void currentIndexChanged(int);

    // RVA: 0x86A | Ordinal: 2155
        void currentText(void) const;

    // RVA: 0x86B | Ordinal: 2156
        void currentTextChanged(class QString const &);

    // RVA: 0x8C5 | Ordinal: 2246
        void d_func(void);

    // RVA: 0x8C6 | Ordinal: 2247
        void d_func(void) const;

    // RVA: 0xAE6 | Ordinal: 2791
        void duplicatesEnabled(void) const;

    // RVA: 0xAEF | Ordinal: 2800
        void editTextChanged(class QString const &);

    // RVA: 0xB36 | Ordinal: 2871
        void event(class QEvent *);

    // RVA: 0xBDD | Ordinal: 3038
        void findData(class QVariant const &, int, class QFlags<enum Qt::MatchFlag>) const;

    // RVA: 0xBE4 | Ordinal: 3045
        void findText(class QString const &, class QFlags<enum Qt::MatchFlag>) const;

    // RVA: 0xC03 | Ordinal: 3076
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC2B | Ordinal: 3116
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xCE6 | Ordinal: 3303
        void hasFrame(void) const;

    // RVA: 0xD29 | Ordinal: 3370
        void hideEvent(class QHideEvent *);

    // RVA: 0xD34 | Ordinal: 3381
        void hidePopup(void);

    // RVA: 0xD3E | Ordinal: 3391
        void highlighted(class QString const &);

    // RVA: 0xD3F | Ordinal: 3392
        void highlighted(int);

    // RVA: 0xD93 | Ordinal: 3476
        void iconSize(void) const;

    // RVA: 0xDE3 | Ordinal: 3556
        void initStyleOption(class QStyleOptionComboBox *) const;

    // RVA: 0xE0D | Ordinal: 3598
        void inputMethodEvent(class QInputMethodEvent *);

    // RVA: 0xE1B | Ordinal: 3612
        void inputMethodQuery(enum Qt::InputMethodQuery, class QVariant const &) const;

    // RVA: 0xE1C | Ordinal: 3613
        void inputMethodQuery(enum Qt::InputMethodQuery) const;

    // RVA: 0xE3C | Ordinal: 3645
        void insertItem(int, class QIcon const &, class QString const &, class QVariant const &);

    // RVA: 0xE3D | Ordinal: 3646
        void insertItem(int, class QString const &, class QVariant const &);

    // RVA: 0xE43 | Ordinal: 3652
        void insertItems(int, class QStringList const &);

    // RVA: 0xE4C | Ordinal: 3661
        void insertPolicy(void) const;

    // RVA: 0xE56 | Ordinal: 3671
        void insertSeparator(int);

    // RVA: 0xED0 | Ordinal: 3793
        void isEditable(void) const;

    // RVA: 0xFA6 | Ordinal: 4007
        void itemData(int, int) const;

    // RVA: 0xFAB | Ordinal: 4012
        void itemDelegate(void) const;

    // RVA: 0xFC0 | Ordinal: 4033
        void itemIcon(int) const;

    // RVA: 0xFD2 | Ordinal: 4051
        void itemText(int) const;

    // RVA: 0xFF9 | Ordinal: 4090
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1013 | Ordinal: 4116
        void keyReleaseEvent(class QKeyEvent *);

    // RVA: 0x105B | Ordinal: 4188
        void lineEdit(void) const;

    // RVA: 0x10D6 | Ordinal: 4311
        void maxCount(void) const;

    // RVA: 0x10DB | Ordinal: 4316
        void maxVisibleItems(void) const;

    // RVA: 0x111C | Ordinal: 4381
        void metaObject(void) const;

    // RVA: 0x11B4 | Ordinal: 4533
        void minimumContentsLength(void) const;

    // RVA: 0x11CF | Ordinal: 4560
        void minimumSizeHint(void) const;

    // RVA: 0x11EF | Ordinal: 4592
        void model(void) const;

    // RVA: 0x11F2 | Ordinal: 4595
        void modelColumn(void) const;

    // RVA: 0x1235 | Ordinal: 4662
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x1255 | Ordinal: 4694
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x1324 | Ordinal: 4901
        void paintEvent(class QPaintEvent *);

    // RVA: 0x138F | Ordinal: 5008
        void placeholderText(void) const;

    // RVA: 0x1435 | Ordinal: 5174
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14C8 | Ordinal: 5321
        void qt_metacast(char const *);

    // RVA: 0x155E | Ordinal: 5471
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1637 | Ordinal: 5688
        void removeItem(int);

    // RVA: 0x169A | Ordinal: 5787
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x16E5 | Ordinal: 5862
        void rootModelIndex(void) const;

    // RVA: 0x181A | Ordinal: 6171
        void setAutoCompletion(bool);

    // RVA: 0x181B | Ordinal: 6172
        void setAutoCompletionCaseSensitivity(enum Qt::CaseSensitivity);

    // RVA: 0x1897 | Ordinal: 6296
        void setCompleter(class QCompleter *);

    // RVA: 0x18BC | Ordinal: 6333
        void setCurrentIndex(int);

    // RVA: 0x18D2 | Ordinal: 6355
        void setCurrentText(class QString const &);

    // RVA: 0x1937 | Ordinal: 6456
        void setDuplicatesEnabled(bool);

    // RVA: 0x193B | Ordinal: 6460
        void setEditText(class QString const &);

    // RVA: 0x193D | Ordinal: 6462
        void setEditable(bool);

    // RVA: 0x19B6 | Ordinal: 6583
        void setFrame(bool);

    // RVA: 0x1A10 | Ordinal: 6673
        void setIconSize(class QSize const &);

    // RVA: 0x1A23 | Ordinal: 6692
        void setInsertPolicy(enum QComboBox::InsertPolicy);

    // RVA: 0x1A34 | Ordinal: 6709
        void setItemData(int, class QVariant const &, int);

    // RVA: 0x1A36 | Ordinal: 6711
        void setItemDelegate(class QAbstractItemDelegate *);

    // RVA: 0x1A41 | Ordinal: 6722
        void setItemIcon(int, class QIcon const &);

    // RVA: 0x1A49 | Ordinal: 6730
        void setItemText(int, class QString const &);

    // RVA: 0x1A76 | Ordinal: 6775
        void setLineEdit(class QLineEdit *);

    // RVA: 0x1A87 | Ordinal: 6792
        void setMaxCount(int);

    // RVA: 0x1A8A | Ordinal: 6795
        void setMaxVisibleItems(int);

    // RVA: 0x1AAF | Ordinal: 6832
        void setMinimumContentsLength(int);

    // RVA: 0x1AC5 | Ordinal: 6854
        void setModel(class QAbstractItemModel *);

    // RVA: 0x1ACE | Ordinal: 6863
        void setModelColumn(int);

    // RVA: 0x1B50 | Ordinal: 6993
        void setPlaceholderText(class QString const &);

    // RVA: 0x1BA1 | Ordinal: 7074
        void setRootModelIndex(class QModelIndex const &);

    // RVA: 0x1C0C | Ordinal: 7181
        void setSizeAdjustPolicy(enum QComboBox::SizeAdjustPolicy);

    // RVA: 0x1CF6 | Ordinal: 7415
        void setValidator(class QValidator const *);

    // RVA: 0x1D0D | Ordinal: 7438
        void setView(class QAbstractItemView *);

    // RVA: 0x1D97 | Ordinal: 7576
        void showEvent(class QShowEvent *);

    // RVA: 0x1DBA | Ordinal: 7611
        void showPopup(void);

    // RVA: 0x1DDB | Ordinal: 7644
        void sizeAdjustPolicy(void) const;

    // RVA: 0x1DE9 | Ordinal: 7658
        void sizeHint(void) const;

    // RVA: 0x1FE0 | Ordinal: 8161
        void textActivated(class QString const &);

    // RVA: 0x2000 | Ordinal: 8193
        void textHighlighted(class QString const &);

    // RVA: 0x2084 | Ordinal: 8325
        void tr(char const *, char const *, int);

    // RVA: 0x2117 | Ordinal: 8472
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2268 | Ordinal: 8809
        void validator(void) const;

    // RVA: 0x2295 | Ordinal: 8854
        void view(void) const;

    // RVA: 0x22E2 | Ordinal: 8931
        void wheelEvent(class QWheelEvent *);

    // RVA: 0x1C6 | Ordinal: 455
        void _QComboBox(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QCOMBOBOX_HPP
