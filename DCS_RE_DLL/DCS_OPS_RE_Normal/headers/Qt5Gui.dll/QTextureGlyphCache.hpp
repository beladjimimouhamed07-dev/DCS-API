#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextureGlyphCache
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextureGlyphCache
{
public:

    // RVA: 0x392 | Ordinal: 915
        void QTextureGlyphCache(class QTextureGlyphCache const &);

    // RVA: 0x393 | Ordinal: 916
        void QTextureGlyphCache(enum QFontEngine::GlyphFormat, class QTransform const &, class QColor const &);

    // RVA: 0xA77 | Ordinal: 2680
        void beginFillTexture(void);

    // RVA: 0xB35 | Ordinal: 2870
        void calculateSubPixelPositionCount(unsigned int) const;

    // RVA: 0xC9E | Ordinal: 3231
        void createCache(int, int);

    // RVA: 0xFB6 | Ordinal: 4023
        void endFillTexture(void);

    // RVA: 0x103F | Ordinal: 4160
        void fillInPendingGlyphs(void);

    // RVA: 0x4DFE | Ordinal: 19967
        void glyphPadding(void) const;

    // RVA: 0x4E75 | Ordinal: 20086
        void hasPendingGlyphs(void) const;

    // RVA: 0x5059 | Ordinal: 20570
        void isNull(void) const;

    // RVA: 0x523C | Ordinal: 21053
        void maxTextureHeight(void) const;

    // RVA: 0x523F | Ordinal: 21056
        void maxTextureWidth(void) const;

    // RVA: 0x5481 | Ordinal: 21634
        void populate(class QFontEngine *, int, unsigned int const *, struct QFixedPoint const *);

    // RVA: 0x5725 | Ordinal: 22310
        void resizeCache(int, int);

    // RVA: 0x5F20 | Ordinal: 24353
        void textureMapForGlyph(unsigned int, struct QFixed) const;

    // RVA: 0x54B | Ordinal: 1356
        void _QTextureGlyphCache(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTUREGLYPHCACHE_HPP
