#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QBoxLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBoxLayout
{
public:

    // RVA: 0x19 | Ordinal: 26
        void QBoxLayout(enum QBoxLayout::Direction, class QWidget *);

    // RVA: 0x557 | Ordinal: 1368
        void addItem(class QLayoutItem *);

    // RVA: 0x569 | Ordinal: 1386
        void addLayout(class QLayout *, int);

    // RVA: 0x58B | Ordinal: 1420
        void addSpacerItem(class QSpacerItem *);

    // RVA: 0x58C | Ordinal: 1421
        void addSpacing(int);

    // RVA: 0x58E | Ordinal: 1423
        void addStretch(int);

    // RVA: 0x590 | Ordinal: 1425
        void addStrut(int);

    // RVA: 0x59F | Ordinal: 1440
        void addWidget(class QWidget *, int, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x7EE | Ordinal: 2031
        void count(void) const;

    // RVA: 0x8B9 | Ordinal: 2234
        void d_func(void);

    // RVA: 0x8BA | Ordinal: 2235
        void d_func(void) const;

    // RVA: 0xA18 | Ordinal: 2585
        void direction(void) const;

    // RVA: 0xB9E | Ordinal: 2975
        void expandingDirections(void) const;

    // RVA: 0xCE8 | Ordinal: 3305
        void hasHeightForWidth(void) const;

    // RVA: 0xD0A | Ordinal: 3339
        void heightForWidth(int) const;

    // RVA: 0xE3B | Ordinal: 3644
        void insertItem(int, class QLayoutItem *);

    // RVA: 0xE45 | Ordinal: 3654
        void insertLayout(int, class QLayout *, int);

    // RVA: 0xE5A | Ordinal: 3675
        void insertSpacerItem(int, class QSpacerItem *);

    // RVA: 0xE5B | Ordinal: 3676
        void insertSpacing(int, int);

    // RVA: 0xE5C | Ordinal: 3677
        void insertStretch(int, int);

    // RVA: 0xE67 | Ordinal: 3688
        void insertWidget(int, class QWidget *, int, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0xE84 | Ordinal: 3717
        void invalidate(void);

    // RVA: 0xF82 | Ordinal: 3971
        void itemAt(int) const;

    // RVA: 0x10EB | Ordinal: 4332
        void maximumSize(void) const;

    // RVA: 0x1116 | Ordinal: 4375
        void metaObject(void) const;

    // RVA: 0x11BB | Ordinal: 4540
        void minimumHeightForWidth(int) const;

    // RVA: 0x11C0 | Ordinal: 4545
        void minimumSize(void) const;

    // RVA: 0x142F | Ordinal: 5168
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14C2 | Ordinal: 5315
        void qt_metacast(char const *);

    // RVA: 0x1558 | Ordinal: 5465
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x190D | Ordinal: 6414
        void setDirection(enum QBoxLayout::Direction);

    // RVA: 0x19BE | Ordinal: 6591
        void setGeometry(class QRect const &);

    // RVA: 0x1C2F | Ordinal: 7216
        void setSpacing(int);

    // RVA: 0x1C56 | Ordinal: 7255
        void setStretch(int, int);

    // RVA: 0x1C57 | Ordinal: 7256
        void setStretchFactor(class QLayout *, int);

    // RVA: 0x1C58 | Ordinal: 7257
        void setStretchFactor(class QWidget *, int);

    // RVA: 0x1DE5 | Ordinal: 7654
        void sizeHint(void) const;

    // RVA: 0x1E51 | Ordinal: 7762
        void spacing(void) const;

    // RVA: 0x1F3C | Ordinal: 7997
        void stretch(int) const;

    // RVA: 0x1FB1 | Ordinal: 8114
        void takeAt(int);

    // RVA: 0x207E | Ordinal: 8319
        void tr(char const *, char const *, int);

    // RVA: 0x2111 | Ordinal: 8466
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1BF | Ordinal: 448
        void _QBoxLayout(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QBOXLAYOUT_HPP
