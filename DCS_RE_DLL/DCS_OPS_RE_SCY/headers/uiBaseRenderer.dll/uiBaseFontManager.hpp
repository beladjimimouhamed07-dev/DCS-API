#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: uiBaseRenderer.dll
// Class: uiBaseFontManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class uiBaseFontManager
{
public:

    // RVA: 0x2E | Ordinal: 47
        void addFontSearchPath(class ed::basic_string<char> const &);

    // RVA: 0x36 | Ordinal: 55
        void debugDraw(class uiBaseShader *);

    // RVA: 0x37 | Ordinal: 56
        void doRedraw(void);

    // RVA: 0x48 | Ordinal: 73
        void getChineseFont(class ed::basic_string<char> const &, int, enum uiBaseFont::Blur);

    // RVA: 0x4D | Ordinal: 78
        void getFace_(class ed::basic_string<char> const &);

    // RVA: 0x4F | Ordinal: 80
        void getFont(class ed::basic_string<char> const &, int, enum uiBaseFont::Blur);

    // RVA: 0x50 | Ordinal: 81
        void getFontFileValid(class ed::basic_string<char> const &);

    // RVA: 0x51 | Ordinal: 82
        void getFontRealPath_(class ed::basic_string<char> const &) const;

    // RVA: 0x77 | Ordinal: 120
        void setChineseFontsMap(class std::unordered_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> const &);

    // RVA: 0x8 | Ordinal: 9
        void uiBaseFontManager(void);

    // RVA: 0x1D | Ordinal: 30
        void _uiBaseFontManager(void);
};

// DCS_OPS_RE_UIBASERENDERER.DLL_UIBASEFONTMANAGER_HPP
