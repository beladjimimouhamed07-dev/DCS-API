#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QBlittable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBlittable
{
public:

    // RVA: 0x94 | Ordinal: 149
        void QBlittable(class QBlittable const &);

    // RVA: 0x95 | Ordinal: 150
        void QBlittable(class QSize const &, class QFlags<enum QBlittable::Capability>);

    // RVA: 0x9D4 | Ordinal: 2517
        void alphaFillRect(class QRectF const &, class QColor const &, enum QPainter::CompositionMode);

    // RVA: 0xB52 | Ordinal: 2899
        void capabilities(void) const;

    // RVA: 0xD15 | Ordinal: 3350
        void d_func(void);

    // RVA: 0xD16 | Ordinal: 3351
        void d_func(void) const;

    // RVA: 0xEA6 | Ordinal: 3751
        void drawCachedGlyphs(class QPaintEngineState const *, enum QFontEngine::GlyphFormat, int, unsigned int const *, struct QFixedPoint const *, class QFontEngine *);

    // RVA: 0xF0A | Ordinal: 3851
        void drawPixmapOpacity(class QRectF const &, class QPixmap const &, class QRectF const &, enum QPainter::CompositionMode, double);

    // RVA: 0x5045 | Ordinal: 20550
        void isLocked(void) const;

    // RVA: 0x51A0 | Ordinal: 20897
        void lock(void);

    // RVA: 0x5D2C | Ordinal: 23853
        void size(void) const;

    // RVA: 0x60A2 | Ordinal: 24739
        void unlock(void);

    // RVA: 0x417 | Ordinal: 1048
        void _QBlittable(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QBLITTABLE_HPP
