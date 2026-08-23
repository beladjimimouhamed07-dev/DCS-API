#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QBitmap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBitmap
{
public:

    // RVA: 0x8E | Ordinal: 143
        void QBitmap(class QBitmap const &);

    // RVA: 0x8F | Ordinal: 144
        void QBitmap(class QPixmap const &);

    // RVA: 0x90 | Ordinal: 145
        void QBitmap(class QSize const &);

    // RVA: 0x91 | Ordinal: 146
        void QBitmap(class QString const &, char const *);

    // RVA: 0x92 | Ordinal: 147
        void QBitmap(int, int);

    // RVA: 0x93 | Ordinal: 148
        void QBitmap(void);

    // RVA: 0xB9E | Ordinal: 2975
        void clear(void);

    // RVA: 0x1130 | Ordinal: 4401
        void fromData(class QSize const &, unsigned char const *, enum QImage::Format);

    // RVA: 0x1145 | Ordinal: 4422
        void fromImage(class QImage &&, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x1146 | Ordinal: 4423
        void fromImage(class QImage const &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x5E79 | Ordinal: 24186
        void swap(class QBitmap &);

    // RVA: 0x6033 | Ordinal: 24628
        void transformed(class QMatrix const &) const;

    // RVA: 0x6034 | Ordinal: 24629
        void transformed(class QTransform const &) const;

    // RVA: 0x416 | Ordinal: 1047
        void _QBitmap(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QBITMAP_HPP
