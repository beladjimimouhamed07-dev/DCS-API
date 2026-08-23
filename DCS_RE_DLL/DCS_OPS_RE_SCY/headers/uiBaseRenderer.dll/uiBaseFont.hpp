#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: uiBaseRenderer.dll
// Class: uiBaseFont
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class uiBaseFont
{
public:

    // RVA: 0x44 | Ordinal: 69
        void getAscender(void) const;

    // RVA: 0x45 | Ordinal: 70
        void getAscenderNoScale(void) const;

    // RVA: 0x47 | Ordinal: 72
        void getBlur(void) const;

    // RVA: 0x4A | Ordinal: 75
        void getDescender(void) const;

    // RVA: 0x4B | Ordinal: 76
        void getDescenderNoScale(void) const;

    // RVA: 0x4C | Ordinal: 77
        void getFace(void) const;

    // RVA: 0x4E | Ordinal: 79
        void getFilename(void) const;

    // RVA: 0x53 | Ordinal: 84
        void getGlyph(int, float) const;

    // RVA: 0x54 | Ordinal: 85
        void getGlyphBorderSize(void) const;

    // RVA: 0x55 | Ordinal: 86
        void getGlyphDelta(int, int, float) const;

    // RVA: 0x58 | Ordinal: 89
        void getLineHeight(void) const;

    // RVA: 0x59 | Ordinal: 90
        void getLineHeightNoScale(void) const;

    // RVA: 0x60 | Ordinal: 97
        void getSize(void) const;

    // RVA: 0x64 | Ordinal: 101
        void getTextSize(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>, int &, int &, int &) const;

    // RVA: 0x65 | Ordinal: 102
        void getTextWidth(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>, float) const;

    // RVA: 0x67 | Ordinal: 104
        void getTextureArray(void) const;

    // RVA: 0x69 | Ordinal: 106
        void init(void);

    // RVA: 0x7 | Ordinal: 8
        void uiBaseFont(class uiBaseFontManager *, struct FT_LibraryRec_*, struct FT_FaceRec_*, class ed::basic_string<char> const &, int, enum uiBaseFont::Blur);

    // RVA: 0x1C | Ordinal: 29
        void _uiBaseFont(void);
};

// DCS_OPS_RE_UIBASERENDERER.DLL_UIBASEFONT_HPP
