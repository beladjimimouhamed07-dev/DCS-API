#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: uiBaseRenderer.dll
// Class: uiBaseTextureManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class uiBaseTextureManager
{
public:

    // RVA: 0x52 | Ordinal: 83
        void getFullPath(class ed::basic_string<char> const &) const;

    // RVA: 0x56 | Ordinal: 87
        void getGlyphPixel3x3BlurValue(class ed::vector<unsigned char, class ed::allocator<unsigned char>> const &, class osg::Vec2i const &, int, int);

    // RVA: 0x57 | Ordinal: 88
        void getGlyphPixel5x5BlurValue(class ed::vector<unsigned char, class ed::allocator<unsigned char>> const &, class osg::Vec2i const &, int, int);

    // RVA: 0x5C | Ordinal: 93
        void getNormalizedFullPath(class ed::basic_string<char> const &) const;

    // RVA: 0x70 | Ordinal: 113
        void releaseTexture(class ed::Ptr<class uiBaseTexture, class uiTextureCleaner>);

    // RVA: 0x71 | Ordinal: 114
        void releaseTextures(void);

    // RVA: 0x8C | Ordinal: 141
        void setTextureSearchPathes(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x13 | Ordinal: 20
        void uiBaseTextureManager(void);

    // RVA: 0x25 | Ordinal: 38
        void _uiBaseTextureManager(void);
};

// DCS_OPS_RE_UIBASERENDERER.DLL_UIBASETEXTUREMANAGER_HPP
