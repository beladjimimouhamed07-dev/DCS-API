#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QFormLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFormLayout
{
public:

    // RVA: 0x57 | Ordinal: 88
        void QFormLayout(class QWidget *);

    // RVA: 0x55B | Ordinal: 1372
        void addItem(class QLayoutItem *);

    // RVA: 0x57E | Ordinal: 1407
        void addRow(class QString const &, class QLayout *);

    // RVA: 0x57F | Ordinal: 1408
        void addRow(class QString const &, class QWidget *);

    // RVA: 0x580 | Ordinal: 1409
        void addRow(class QLayout *);

    // RVA: 0x581 | Ordinal: 1410
        void addRow(class QWidget *, class QWidget *);

    // RVA: 0x582 | Ordinal: 1411
        void addRow(class QWidget *);

    // RVA: 0x583 | Ordinal: 1412
        void addRow(class QWidget *, class QLayout *);

    // RVA: 0x7F1 | Ordinal: 2034
        void count(void) const;

    // RVA: 0x8EF | Ordinal: 2288
        void d_func(void);

    // RVA: 0x8F0 | Ordinal: 2289
        void d_func(void) const;

    // RVA: 0xB9F | Ordinal: 2976
        void expandingDirections(void) const;

    // RVA: 0xBBB | Ordinal: 3004
        void fieldGrowthPolicy(void) const;

    // RVA: 0xC66 | Ordinal: 3175
        void formAlignment(void) const;

    // RVA: 0xC9F | Ordinal: 3232
        void getItemPosition(int, int *, enum QFormLayout::ItemRole *) const;

    // RVA: 0xCA2 | Ordinal: 3235
        void getLayoutPosition(class QLayout *, int *, enum QFormLayout::ItemRole *) const;

    // RVA: 0xCB3 | Ordinal: 3252
        void getWidgetPosition(class QWidget *, int *, enum QFormLayout::ItemRole *) const;

    // RVA: 0xCE9 | Ordinal: 3306
        void hasHeightForWidth(void) const;

    // RVA: 0xD0C | Ordinal: 3341
        void heightForWidth(int) const;

    // RVA: 0xD6B | Ordinal: 3436
        void horizontalSpacing(void) const;

    // RVA: 0xE4D | Ordinal: 3662
        void insertRow(int, class QString const &, class QLayout *);

    // RVA: 0xE4E | Ordinal: 3663
        void insertRow(int, class QString const &, class QWidget *);

    // RVA: 0xE4F | Ordinal: 3664
        void insertRow(int, class QLayout *);

    // RVA: 0xE50 | Ordinal: 3665
        void insertRow(int, class QWidget *, class QWidget *);

    // RVA: 0xE51 | Ordinal: 3666
        void insertRow(int, class QWidget *);

    // RVA: 0xE52 | Ordinal: 3667
        void insertRow(int, class QWidget *, class QLayout *);

    // RVA: 0xE85 | Ordinal: 3718
        void invalidate(void);

    // RVA: 0xF84 | Ordinal: 3973
        void itemAt(int, enum QFormLayout::ItemRole) const;

    // RVA: 0xF85 | Ordinal: 3974
        void itemAt(int) const;

    // RVA: 0x102A | Ordinal: 4139
        void labelAlignment(void) const;

    // RVA: 0x102B | Ordinal: 4140
        void labelForField(class QWidget *) const;

    // RVA: 0x102C | Ordinal: 4141
        void labelForField(class QLayout *) const;

    // RVA: 0x1133 | Ordinal: 4404
        void metaObject(void) const;

    // RVA: 0x11C2 | Ordinal: 4547
        void minimumSize(void) const;

    // RVA: 0x144C | Ordinal: 5197
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14DF | Ordinal: 5344
        void qt_metacast(char const *);

    // RVA: 0x1575 | Ordinal: 5494
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1641 | Ordinal: 5698
        void removeRow(int);

    // RVA: 0x1642 | Ordinal: 5699
        void removeRow(class QLayout *);

    // RVA: 0x1643 | Ordinal: 5700
        void removeRow(class QWidget *);

    // RVA: 0x1677 | Ordinal: 5752
        void resetFieldGrowthPolicy(void);

    // RVA: 0x1679 | Ordinal: 5754
        void resetFormAlignment(void);

    // RVA: 0x167F | Ordinal: 5760
        void resetLabelAlignment(void);

    // RVA: 0x1683 | Ordinal: 5764
        void resetRowWrapPolicy(void);

    // RVA: 0x16F7 | Ordinal: 5880
        void rowCount(void) const;

    // RVA: 0x170A | Ordinal: 5899
        void rowWrapPolicy(void) const;

    // RVA: 0x196B | Ordinal: 6508
        void setFieldGrowthPolicy(enum QFormLayout::FieldGrowthPolicy);

    // RVA: 0x19B2 | Ordinal: 6579
        void setFormAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x19C0 | Ordinal: 6593
        void setGeometry(class QRect const &);

    // RVA: 0x19F8 | Ordinal: 6649
        void setHorizontalSpacing(int);

    // RVA: 0x1A2F | Ordinal: 6704
        void setItem(int, enum QFormLayout::ItemRole, class QLayoutItem *);

    // RVA: 0x1A58 | Ordinal: 6745
        void setLabelAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x1A68 | Ordinal: 6761
        void setLayout(int, enum QFormLayout::ItemRole, class QLayout *);

    // RVA: 0x1BB4 | Ordinal: 7093
        void setRowWrapPolicy(enum QFormLayout::RowWrapPolicy);

    // RVA: 0x1C30 | Ordinal: 7217
        void setSpacing(int);

    // RVA: 0x1D06 | Ordinal: 7431
        void setVerticalSpacing(int);

    // RVA: 0x1D31 | Ordinal: 7474
        void setWidget(int, enum QFormLayout::ItemRole, class QWidget *);

    // RVA: 0x1DF0 | Ordinal: 7665
        void sizeHint(void) const;

    // RVA: 0x1E53 | Ordinal: 7764
        void spacing(void) const;

    // RVA: 0x1FB3 | Ordinal: 8116
        void takeAt(int);

    // RVA: 0x1FBD | Ordinal: 8126
        void takeRow(int);

    // RVA: 0x1FBE | Ordinal: 8127
        void takeRow(class QLayout *);

    // RVA: 0x1FBF | Ordinal: 8128
        void takeRow(class QWidget *);

    // RVA: 0x209B | Ordinal: 8348
        void tr(char const *, char const *, int);

    // RVA: 0x212E | Ordinal: 8495
        void trUtf8(char const *, char const *, int);

    // RVA: 0x228F | Ordinal: 8848
        void verticalSpacing(void) const;

    // RVA: 0x1E2 | Ordinal: 483
        void _QFormLayout(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QFORMLAYOUT_HPP
