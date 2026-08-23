#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLTextureGlyphCache
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLTextureGlyphCache
{
public:

    // RVA: 0x1DA | Ordinal: 475
        void QOpenGLTextureGlyphCache(enum QFontEngine::GlyphFormat, class QTransform const &, class QColor const &);

    // RVA: 0xBA2 | Ordinal: 2979
        void clear(void);

    // RVA: 0xC53 | Ordinal: 3156
        void contextGroup(void) const;

    // RVA: 0xCCD | Ordinal: 3278
        void createTextureData(int, int);

    // RVA: 0x105E | Ordinal: 4191
        void fillTexture(struct QTextureGlyphCache::Coord const &, unsigned int, struct QFixed);

    // RVA: 0x1061 | Ordinal: 4194
        void filterMode(void) const;

    // RVA: 0x4DFD | Ordinal: 19966
        void glyphPadding(void) const;

    // RVA: 0x4E93 | Ordinal: 20116
        void height(void) const;

    // RVA: 0x523B | Ordinal: 21052
        void maxTextureHeight(void) const;

    // RVA: 0x523E | Ordinal: 21055
        void maxTextureWidth(void) const;

    // RVA: 0x53EE | Ordinal: 21487
        void paintEnginePrivate(void) const;

    // RVA: 0x572D | Ordinal: 22318
        void resizeTextureData(int, int);

    // RVA: 0x5800 | Ordinal: 22529
        void serialNumber(void) const;

    // RVA: 0x5974 | Ordinal: 22901
        void setFilterMode(enum QOpenGLTextureGlyphCache::FilterMode);

    // RVA: 0x5ADE | Ordinal: 23263
        void setPaintEnginePrivate(class QOpenGL2PaintEngineExPrivate *);

    // RVA: 0x5CE7 | Ordinal: 23784
        void setupVertexAttribs(void);

    // RVA: 0x5F17 | Ordinal: 24344
        void texture(void) const;

    // RVA: 0x6152 | Ordinal: 24915
        void width(void) const;

    // RVA: 0x4A2 | Ordinal: 1187
        void _QOpenGLTextureGlyphCache(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLTEXTUREGLYPHCACHE_HPP
