#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QLayout
{
public:

    // RVA: 0xBF | Ordinal: 192
        void QLayout(class QLayoutPrivate &, class QLayout *, class QWidget *);

    // RVA: 0xC0 | Ordinal: 193
        void QLayout(class QWidget *);

    // RVA: 0xC1 | Ordinal: 194
        void QLayout(void);

    // RVA: 0x50C | Ordinal: 1293
        void activate(void);

    // RVA: 0x512 | Ordinal: 1299
        void activateRecursiveHelper(class QLayoutItem *);

    // RVA: 0x549 | Ordinal: 1354
        void addChildLayout(class QLayout *);

    // RVA: 0x54B | Ordinal: 1356
        void addChildWidget(class QWidget *);

    // RVA: 0x5A4 | Ordinal: 1445
        void addWidget(class QWidget *);

    // RVA: 0x5B3 | Ordinal: 1460
        void adoptLayout(class QLayout *);

    // RVA: 0x5C5 | Ordinal: 1478
        void alignmentRect(class QRect const &) const;

    // RVA: 0x6EB | Ordinal: 1772
        void childEvent(class QChildEvent *);

    // RVA: 0x75C | Ordinal: 1885
        void closestAcceptableSize(class QWidget const *, class QSize const &);

    // RVA: 0x7BD | Ordinal: 1982
        void contentsMargins(void) const;

    // RVA: 0x7C1 | Ordinal: 1986
        void contentsRect(void) const;

    // RVA: 0x7DA | Ordinal: 2011
        void controlTypes(void) const;

    // RVA: 0x953 | Ordinal: 2388
        void d_func(void);

    // RVA: 0x954 | Ordinal: 2389
        void d_func(void) const;

    // RVA: 0xBA1 | Ordinal: 2978
        void expandingDirections(void) const;

    // RVA: 0xC7F | Ordinal: 3200
        void geometry(void) const;

    // RVA: 0xC92 | Ordinal: 3219
        void getContentsMargins(int *, int *, int *, int *) const;

    // RVA: 0xDC1 | Ordinal: 3522
        void indexOf(class QLayoutItem *) const;

    // RVA: 0xDC2 | Ordinal: 3523
        void indexOf(class QWidget *) const;

    // RVA: 0xE8D | Ordinal: 3726
        void invalidate(void);

    // RVA: 0xED2 | Ordinal: 3795
        void isEmpty(void) const;

    // RVA: 0xEDA | Ordinal: 3803
        void isEnabled(void) const;

    // RVA: 0x103D | Ordinal: 4158
        void layout(void);

    // RVA: 0x10CE | Ordinal: 4303
        void margin(void) const;

    // RVA: 0x10EF | Ordinal: 4336
        void maximumSize(void) const;

    // RVA: 0x1100 | Ordinal: 4353
        void menuBar(void) const;

    // RVA: 0x1152 | Ordinal: 4435
        void metaObject(void) const;

    // RVA: 0x11C5 | Ordinal: 4550
        void minimumSize(void) const;

    // RVA: 0x136B | Ordinal: 4972
        void parentWidget(void) const;

    // RVA: 0x146B | Ordinal: 5228
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14FE | Ordinal: 5375
        void qt_metacast(char const *);

    // RVA: 0x1594 | Ordinal: 5525
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x163B | Ordinal: 5692
        void removeItem(class QLayoutItem *);

    // RVA: 0x164F | Ordinal: 5712
        void removeWidget(class QWidget *);

    // RVA: 0x1664 | Ordinal: 5733
        void replaceWidget(class QWidget *, class QWidget *, class QFlags<enum Qt::FindChildOption>);

    // RVA: 0x1808 | Ordinal: 6153
        void setAlignment(class QLayout *, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x1809 | Ordinal: 6154
        void setAlignment(class QWidget *, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x18A3 | Ordinal: 6308
        void setContentsMargins(class QMargins const &);

    // RVA: 0x18A4 | Ordinal: 6309
        void setContentsMargins(int, int, int, int);

    // RVA: 0x1949 | Ordinal: 6474
        void setEnabled(bool);

    // RVA: 0x19C9 | Ordinal: 6602
        void setGeometry(class QRect const &);

    // RVA: 0x1A7F | Ordinal: 6784
        void setMargin(int);

    // RVA: 0x1AA3 | Ordinal: 6820
        void setMenuBar(class QWidget *);

    // RVA: 0x1C0D | Ordinal: 7182
        void setSizeConstraint(enum QLayout::SizeConstraint);

    // RVA: 0x1C36 | Ordinal: 7223
        void setSpacing(int);

    // RVA: 0x1DDC | Ordinal: 7645
        void sizeConstraint(void) const;

    // RVA: 0x1E57 | Ordinal: 7768
        void spacing(void) const;

    // RVA: 0x206E | Ordinal: 8303
        void totalHeightForWidth(int) const;

    // RVA: 0x206F | Ordinal: 8304
        void totalMaximumSize(void) const;

    // RVA: 0x2070 | Ordinal: 8305
        void totalMinimumSize(void) const;

    // RVA: 0x2073 | Ordinal: 8308
        void totalSizeHint(void) const;

    // RVA: 0x20BA | Ordinal: 8379
        void tr(char const *, char const *, int);

    // RVA: 0x214D | Ordinal: 8526
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2208 | Ordinal: 8713
        void update(void);

    // RVA: 0x2306 | Ordinal: 8967
        void widgetEvent(class QEvent *);

    // RVA: 0x221 | Ordinal: 546
        void _QLayout(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QLAYOUT_HPP
