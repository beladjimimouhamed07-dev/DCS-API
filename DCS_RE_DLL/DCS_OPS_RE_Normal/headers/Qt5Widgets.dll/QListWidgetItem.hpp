#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QListWidgetItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QListWidgetItem
{
public:

    // RVA: 0xCA | Ordinal: 203
        void QListWidgetItem(class QListWidgetItem const &);

    // RVA: 0xCB | Ordinal: 204
        void QListWidgetItem(class QIcon const &, class QString const &, class QListWidget *, int);

    // RVA: 0xCC | Ordinal: 205
        void QListWidgetItem(class QString const &, class QListWidget *, int);

    // RVA: 0xCD | Ordinal: 206
        void QListWidgetItem(class QListWidget *, int);

    // RVA: 0x60E | Ordinal: 1551
        void background(void) const;

    // RVA: 0x615 | Ordinal: 1558
        void backgroundColor(void) const;

    // RVA: 0x6D7 | Ordinal: 1752
        void checkState(void) const;

    // RVA: 0x744 | Ordinal: 1861
        void clone(void) const;

    // RVA: 0x9E1 | Ordinal: 2530
        void data(int) const;

    // RVA: 0xBF9 | Ordinal: 3066
        void flags(void) const;

    // RVA: 0xC4F | Ordinal: 3152
        void font(void) const;

    // RVA: 0xC5F | Ordinal: 3168
        void foreground(void) const;

    // RVA: 0xD87 | Ordinal: 3464
        void icon(void) const;

    // RVA: 0xEF2 | Ordinal: 3827
        void isHidden(void) const;

    // RVA: 0xF41 | Ordinal: 3906
        void isSelected(void) const;

    // RVA: 0x1068 | Ordinal: 4201
        void listModel(void) const;

    // RVA: 0x1069 | Ordinal: 4202
        void listWidget(void) const;

    // RVA: 0x2EF | Ordinal: 752
        void operator_(class QListWidgetItem const &) const;

    // RVA: 0x15ED | Ordinal: 5614
        void read(class QDataStream &);

    // RVA: 0x182F | Ordinal: 6192
        void setBackground(class QBrush const &);

    // RVA: 0x1835 | Ordinal: 6198
        void setBackgroundColor(class QColor const &);

    // RVA: 0x186E | Ordinal: 6255
        void setCheckState(enum Qt::CheckState);

    // RVA: 0x18EA | Ordinal: 6379
        void setData(int, class QVariant const &);

    // RVA: 0x1981 | Ordinal: 6530
        void setFlags(class QFlags<enum Qt::ItemFlag>);

    // RVA: 0x199F | Ordinal: 6560
        void setFont(class QFont const &);

    // RVA: 0x19AC | Ordinal: 6573
        void setForeground(class QBrush const &);

    // RVA: 0x19EA | Ordinal: 6635
        void setHidden(bool);

    // RVA: 0x1A04 | Ordinal: 6661
        void setIcon(class QIcon const &);

    // RVA: 0x1BD9 | Ordinal: 7130
        void setSelected(bool);

    // RVA: 0x1C10 | Ordinal: 7185
        void setSizeHint(class QSize const &);

    // RVA: 0x1C4C | Ordinal: 7245
        void setStatusTip(class QString const &);

    // RVA: 0x1C9B | Ordinal: 7324
        void setText(class QString const &);

    // RVA: 0x1CA2 | Ordinal: 7331
        void setTextAlignment(int);

    // RVA: 0x1CA6 | Ordinal: 7335
        void setTextColor(class QColor const &);

    // RVA: 0x1CD3 | Ordinal: 7380
        void setToolTip(class QString const &);

    // RVA: 0x1D28 | Ordinal: 7465
        void setWhatsThis(class QString const &);

    // RVA: 0x1DFF | Ordinal: 7680
        void sizeHint(void) const;

    // RVA: 0x1F24 | Ordinal: 7973
        void statusTip(void) const;

    // RVA: 0x1FD7 | Ordinal: 8152
        void text(void) const;

    // RVA: 0x1FE2 | Ordinal: 8163
        void textAlignment(void) const;

    // RVA: 0x1FEE | Ordinal: 8175
        void textColor(void) const;

    // RVA: 0x2058 | Ordinal: 8281
        void toolTip(void) const;

    // RVA: 0x21C7 | Ordinal: 8648
        void type(void) const;

    // RVA: 0x22DA | Ordinal: 8923
        void whatsThis(void) const;

    // RVA: 0x233F | Ordinal: 9024
        void write(class QDataStream &) const;

    // RVA: 0x227 | Ordinal: 552
        void _QListWidgetItem(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QLISTWIDGETITEM_HPP
