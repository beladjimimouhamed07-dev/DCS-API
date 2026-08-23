#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QImageTextureGlyphCache
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QImageTextureGlyphCache
{
public:

    // RVA: 0x14B | Ordinal: 332
        void QImageTextureGlyphCache(class QImageTextureGlyphCache const &);

    // RVA: 0x14C | Ordinal: 333
        void QImageTextureGlyphCache(enum QFontEngine::GlyphFormat, class QTransform const &, class QColor const &);

    // RVA: 0xCCC | Ordinal: 3277
        void createTextureData(int, int);

    // RVA: 0x105D | Ordinal: 4190
        void fillTexture(struct QTextureGlyphCache::Coord const &, unsigned int, struct QFixed);

    // RVA: 0x4EDC | Ordinal: 20189
        void image(void) const;

    // RVA: 0x572C | Ordinal: 22317
        void resizeTextureData(int, int);

    // RVA: 0x456 | Ordinal: 1111
        void _QImageTextureGlyphCache(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QIMAGETEXTUREGLYPHCACHE_HPP
