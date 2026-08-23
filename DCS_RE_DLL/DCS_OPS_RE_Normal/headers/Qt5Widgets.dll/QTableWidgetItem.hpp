#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QTableWidgetItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTableWidgetItem
{
public:

    // RVA: 0x173 | Ordinal: 372
        void QTableWidgetItem(class QTableWidgetItem const &);

    // RVA: 0x174 | Ordinal: 373
        void QTableWidgetItem(class QIcon const &, class QString const &, int);

    // RVA: 0x175 | Ordinal: 374
        void QTableWidgetItem(class QString const &, int);

    // RVA: 0x176 | Ordinal: 375
        void QTableWidgetItem(int);

    // RVA: 0x610 | Ordinal: 1553
        void background(void) const;

    // RVA: 0x617 | Ordinal: 1560
        void backgroundColor(void) const;

    // RVA: 0x6D8 | Ordinal: 1753
        void checkState(void) const;

    // RVA: 0x745 | Ordinal: 1862
        void clone(void) const;

    // RVA: 0x773 | Ordinal: 1908
        void column(void) const;

    // RVA: 0x9E2 | Ordinal: 2531
        void data(int) const;

    // RVA: 0xBFA | Ordinal: 3067
        void flags(void) const;

    // RVA: 0xC50 | Ordinal: 3153
        void font(void) const;

    // RVA: 0xC60 | Ordinal: 3169
        void foreground(void) const;

    // RVA: 0xD8B | Ordinal: 3468
        void icon(void) const;

    // RVA: 0xF42 | Ordinal: 3907
        void isSelected(void) const;

    // RVA: 0x2F0 | Ordinal: 753
        void operator_(class QTableWidgetItem const &) const;

    // RVA: 0x15EE | Ordinal: 5615
        void read(class QDataStream &);

    // RVA: 0x16F2 | Ordinal: 5875
        void row(void) const;

    // RVA: 0x1831 | Ordinal: 6194
        void setBackground(class QBrush const &);

    // RVA: 0x1836 | Ordinal: 6199
        void setBackgroundColor(class QColor const &);

    // RVA: 0x186F | Ordinal: 6256
        void setCheckState(enum Qt::CheckState);

    // RVA: 0x18EB | Ordinal: 6380
        void setData(int, class QVariant const &);

    // RVA: 0x1982 | Ordinal: 6531
        void setFlags(class QFlags<enum Qt::ItemFlag>);

    // RVA: 0x19A0 | Ordinal: 6561
        void setFont(class QFont const &);

    // RVA: 0x19AD | Ordinal: 6574
        void setForeground(class QBrush const &);

    // RVA: 0x1A08 | Ordinal: 6665
        void setIcon(class QIcon const &);

    // RVA: 0x1BDA | Ordinal: 7131
        void setSelected(bool);

    // RVA: 0x1C11 | Ordinal: 7186
        void setSizeHint(class QSize const &);

    // RVA: 0x1C4D | Ordinal: 7246
        void setStatusTip(class QString const &);

    // RVA: 0x1C9D | Ordinal: 7326
        void setText(class QString const &);

    // RVA: 0x1CA3 | Ordinal: 7332
        void setTextAlignment(int);

    // RVA: 0x1CA7 | Ordinal: 7336
        void setTextColor(class QColor const &);

    // RVA: 0x1CD5 | Ordinal: 7382
        void setToolTip(class QString const &);

    // RVA: 0x1D2A | Ordinal: 7467
        void setWhatsThis(class QString const &);

    // RVA: 0x1E13 | Ordinal: 7700
        void sizeHint(void) const;

    // RVA: 0x1F25 | Ordinal: 7974
        void statusTip(void) const;

    // RVA: 0x1FAA | Ordinal: 8107
        void tableModel(void) const;

    // RVA: 0x1FAB | Ordinal: 8108
        void tableWidget(void) const;

    // RVA: 0x1FDA | Ordinal: 8155
        void text(void) const;

    // RVA: 0x1FE3 | Ordinal: 8164
        void textAlignment(void) const;

    // RVA: 0x1FEF | Ordinal: 8176
        void textColor(void) const;

    // RVA: 0x205A | Ordinal: 8283
        void toolTip(void) const;

    // RVA: 0x21C9 | Ordinal: 8650
        void type(void) const;

    // RVA: 0x22DC | Ordinal: 8925
        void whatsThis(void) const;

    // RVA: 0x2340 | Ordinal: 9025
        void write(class QDataStream &) const;

    // RVA: 0x279 | Ordinal: 634
        void _QTableWidgetItem(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QTABLEWIDGETITEM_HPP
