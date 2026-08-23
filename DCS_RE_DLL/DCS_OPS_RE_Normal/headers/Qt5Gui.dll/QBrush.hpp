#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QBrush
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBrush
{
public:

    // RVA: 0x98 | Ordinal: 153
        void QBrush(class QBrush const &);

    // RVA: 0x99 | Ordinal: 154
        void QBrush(class QColor const &, class QPixmap const &);

    // RVA: 0x9A | Ordinal: 155
        void QBrush(class QColor const &, enum Qt::BrushStyle);

    // RVA: 0x9B | Ordinal: 156
        void QBrush(class QGradient const &);

    // RVA: 0x9C | Ordinal: 157
        void QBrush(class QImage const &);

    // RVA: 0x9D | Ordinal: 158
        void QBrush(class QPixmap const &);

    // RVA: 0x9E | Ordinal: 159
        void QBrush(enum Qt::BrushStyle);

    // RVA: 0x9F | Ordinal: 160
        void QBrush(enum Qt::GlobalColor, class QPixmap const &);

    // RVA: 0xA0 | Ordinal: 161
        void QBrush(enum Qt::GlobalColor, enum Qt::BrushStyle);

    // RVA: 0xA1 | Ordinal: 162
        void QBrush(void);

    // RVA: 0xB94 | Ordinal: 2965
        void cleanUp(struct QBrushData *);

    // RVA: 0xBF2 | Ordinal: 3059
        void color(void) const;

    // RVA: 0xDAF | Ordinal: 3504
        void data_ptr(void);

    // RVA: 0xE1C | Ordinal: 3613
        void detach(enum Qt::BrushStyle);

    // RVA: 0x4E0E | Ordinal: 19983
        void gradient(void) const;

    // RVA: 0x4F00 | Ordinal: 20225
        void init(class QColor const &, enum Qt::BrushStyle);

    // RVA: 0x5002 | Ordinal: 20483
        void isDetached(void) const;

    // RVA: 0x505D | Ordinal: 20574
        void isOpaque(void) const;

    // RVA: 0x5232 | Ordinal: 21043
        void matrix(void) const;

    // RVA: 0x58B6 | Ordinal: 22711
        void setColor(class QColor const &);

    // RVA: 0x58B7 | Ordinal: 22712
        void setColor(enum Qt::GlobalColor);

    // RVA: 0x5A5A | Ordinal: 23131
        void setMatrix(class QMatrix const &);

    // RVA: 0x5BC8 | Ordinal: 23497
        void setStyle(enum Qt::BrushStyle);

    // RVA: 0x5BFC | Ordinal: 23549
        void setTexture(class QPixmap const &);

    // RVA: 0x5C01 | Ordinal: 23554
        void setTextureImage(class QImage const &);

    // RVA: 0x5C1B | Ordinal: 23580
        void setTransform(class QTransform const &);

    // RVA: 0x5E2A | Ordinal: 24107
        void style(void) const;

    // RVA: 0x5E7A | Ordinal: 24187
        void swap(class QBrush &);

    // RVA: 0x5F15 | Ordinal: 24342
        void texture(void) const;

    // RVA: 0x5F1E | Ordinal: 24351
        void textureImage(void) const;

    // RVA: 0x6027 | Ordinal: 24616
        void transform(void) const;

    // RVA: 0x41A | Ordinal: 1051
        void _QBrush(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QBRUSH_HPP
