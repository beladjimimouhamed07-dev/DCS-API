#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPalette
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPalette
{
public:

    // RVA: 0x20B | Ordinal: 524
        void QPalette(class QPalette &&);

    // RVA: 0x20C | Ordinal: 525
        void QPalette(class QPalette const &);

    // RVA: 0x20D | Ordinal: 526
        void QPalette(class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &);

    // RVA: 0x20E | Ordinal: 527
        void QPalette(class QColor const &, class QColor const &, class QColor const &, class QColor const &, class QColor const &, class QColor const &, class QColor const &);

    // RVA: 0x20F | Ordinal: 528
        void QPalette(class QColor const &, class QColor const &);

    // RVA: 0x210 | Ordinal: 529
        void QPalette(class QColor const &);

    // RVA: 0x211 | Ordinal: 530
        void QPalette(enum Qt::GlobalColor);

    // RVA: 0x212 | Ordinal: 531
        void QPalette(void);

    // RVA: 0x9E4 | Ordinal: 2533
        void alternateBase(void) const;

    // RVA: 0xA53 | Ordinal: 2644
        void background(void) const;

    // RVA: 0xA5D | Ordinal: 2654
        void base(void) const;

    // RVA: 0xAFE | Ordinal: 2815
        void brightText(void) const;

    // RVA: 0xB01 | Ordinal: 2818
        void brush(enum QPalette::ColorGroup, enum QPalette::ColorRole) const;

    // RVA: 0xB02 | Ordinal: 2819
        void brush(enum QPalette::ColorRole) const;

    // RVA: 0xB1D | Ordinal: 2846
        void button(void) const;

    // RVA: 0xB21 | Ordinal: 2850
        void buttonText(void) const;

    // RVA: 0xB2D | Ordinal: 2862
        void cacheKey(void) const;

    // RVA: 0xBF5 | Ordinal: 3062
        void color(enum QPalette::ColorGroup, enum QPalette::ColorRole) const;

    // RVA: 0xBF6 | Ordinal: 3063
        void color(enum QPalette::ColorRole) const;

    // RVA: 0xCE0 | Ordinal: 3297
        void currentColorGroup(void) const;

    // RVA: 0xD99 | Ordinal: 3482
        void dark(void) const;

    // RVA: 0xE23 | Ordinal: 3620
        void detach(void);

    // RVA: 0x10E4 | Ordinal: 4325
        void foreground(void) const;

    // RVA: 0x4EAA | Ordinal: 20139
        void highlight(void) const;

    // RVA: 0x4EAB | Ordinal: 20140
        void highlightedText(void) const;

    // RVA: 0x4F04 | Ordinal: 20229
        void init(void);

    // RVA: 0x4FD3 | Ordinal: 20436
        void isBrushSet(enum QPalette::ColorGroup, enum QPalette::ColorRole) const;

    // RVA: 0x4FF8 | Ordinal: 20473
        void isCopyOf(class QPalette const &) const;

    // RVA: 0x501C | Ordinal: 20509
        void isEqual(enum QPalette::ColorGroup, enum QPalette::ColorGroup) const;

    // RVA: 0x515D | Ordinal: 20830
        void light(void) const;

    // RVA: 0x5179 | Ordinal: 20858
        void link(void) const;

    // RVA: 0x517A | Ordinal: 20859
        void linkVisited(void) const;

    // RVA: 0x52AD | Ordinal: 21166
        void mid(void) const;

    // RVA: 0x52B0 | Ordinal: 21169
        void midlight(void) const;

    // RVA: 0x5464 | Ordinal: 21605
        void placeholderText(void) const;

    // RVA: 0x5735 | Ordinal: 22326
        void resolve(unsigned int);

    // RVA: 0x5736 | Ordinal: 22327
        void resolve(class QPalette const &) const;

    // RVA: 0x5737 | Ordinal: 22328
        void resolve(void) const;

    // RVA: 0x5801 | Ordinal: 22530
        void serialNumber(void) const;

    // RVA: 0x5888 | Ordinal: 22665
        void setBrush(enum QPalette::ColorGroup, enum QPalette::ColorRole, class QBrush const &);

    // RVA: 0x5889 | Ordinal: 22666
        void setBrush(enum QPalette::ColorRole, class QBrush const &);

    // RVA: 0x58B9 | Ordinal: 22714
        void setColor(enum QPalette::ColorGroup, enum QPalette::ColorRole, class QColor const &);

    // RVA: 0x58BA | Ordinal: 22715
        void setColor(enum QPalette::ColorRole, class QColor const &);

    // RVA: 0x58BF | Ordinal: 22720
        void setColorGroup(enum QPalette::ColorGroup, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &);

    // RVA: 0x58C0 | Ordinal: 22721
        void setColorGroup(enum QPalette::ColorGroup, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &);

    // RVA: 0x58C1 | Ordinal: 22722
        void setColorGroup(enum QPalette::ColorGroup, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &, class QBrush const &);

    // RVA: 0x58E7 | Ordinal: 22760
        void setCurrentColorGroup(enum QPalette::ColorGroup);

    // RVA: 0x5CF6 | Ordinal: 23799
        void shadow(void) const;

    // RVA: 0x5E8A | Ordinal: 24203
        void swap(class QPalette &);

    // RVA: 0x5EF2 | Ordinal: 24307
        void text(void) const;

    // RVA: 0x5F82 | Ordinal: 24451
        void toolTipBase(void) const;

    // RVA: 0x5F83 | Ordinal: 24452
        void toolTipText(void) const;

    // RVA: 0x6168 | Ordinal: 24937
        void window(void) const;

    // RVA: 0x6184 | Ordinal: 24965
        void windowText(void) const;

    // RVA: 0x4B8 | Ordinal: 1209
        void _QPalette(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPALETTE_HPP
