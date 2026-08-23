#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QGlyphRun
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGlyphRun
{
public:

    // RVA: 0x114 | Ordinal: 277
        void QGlyphRun(class QGlyphRun const &);

    // RVA: 0x115 | Ordinal: 278
        void QGlyphRun(void);

    // RVA: 0xAF0 | Ordinal: 2801
        void boundingRect(void) const;

    // RVA: 0xBA1 | Ordinal: 2978
        void clear(void);

    // RVA: 0xE1E | Ordinal: 3615
        void detach(void);

    // RVA: 0x1091 | Ordinal: 4242
        void flags(void) const;

    // RVA: 0x4DF9 | Ordinal: 19962
        void glyphIndexes(void) const;

    // RVA: 0x5010 | Ordinal: 20497
        void isEmpty(void) const;

    // RVA: 0x5072 | Ordinal: 20595
        void isRightToLeft(void) const;

    // RVA: 0x53C4 | Ordinal: 21445
        void overline(void) const;

    // RVA: 0x54A9 | Ordinal: 21674
        void positions(void) const;

    // RVA: 0x5667 | Ordinal: 22120
        void rawFont(void) const;

    // RVA: 0x5884 | Ordinal: 22661
        void setBoundingRect(class QRectF const &);

    // RVA: 0x597D | Ordinal: 22910
        void setFlag(enum QGlyphRun::GlyphRunFlag, bool);

    // RVA: 0x597F | Ordinal: 22912
        void setFlags(class QFlags<enum QGlyphRun::GlyphRunFlag>);

    // RVA: 0x59D9 | Ordinal: 23002
        void setGlyphIndexes(class QVector<unsigned int> const &);

    // RVA: 0x5AC5 | Ordinal: 23238
        void setOverline(bool);

    // RVA: 0x5B10 | Ordinal: 23313
        void setPositions(class QVector<class QPointF> const &);

    // RVA: 0x5B26 | Ordinal: 23335
        void setRawData(unsigned int const *, class QPointF const *, int);

    // RVA: 0x5B27 | Ordinal: 23336
        void setRawFont(class QRawFont const &);

    // RVA: 0x5B53 | Ordinal: 23380
        void setRightToLeft(bool);

    // RVA: 0x5BC5 | Ordinal: 23494
        void setStrikeOut(bool);

    // RVA: 0x5C26 | Ordinal: 23591
        void setUnderline(bool);

    // RVA: 0x5E1A | Ordinal: 24091
        void strikeOut(void) const;

    // RVA: 0x5E81 | Ordinal: 24194
        void swap(class QGlyphRun &);

    // RVA: 0x607E | Ordinal: 24703
        void underline(void) const;

    // RVA: 0x442 | Ordinal: 1091
        void _QGlyphRun(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QGLYPHRUN_HPP
