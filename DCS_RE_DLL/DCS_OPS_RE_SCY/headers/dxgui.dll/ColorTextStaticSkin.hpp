#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ColorTextStaticSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ColorTextStaticSkin
{
public:

    // RVA: 0x49 | Ordinal: 74
        void ColorTextStaticSkin(class gui::ColorTextStatic *);

    // RVA: 0x177 | Ordinal: 376
        void calcTextSize_(struct gui::Text::Info const *, class gui::skin::Params const *) const;

    // RVA: 0x1A8 | Ordinal: 425
        void clearTextLines_(class ed::vector<class gui::ColorTextStaticSkin::TextLine *, class ed::allocator<class gui::ColorTextStaticSkin::TextLine *>> &) const;

    // RVA: 0x1A9 | Ordinal: 426
        void clearTextStrings_(class ed::vector<class uiBaseTextString *, class ed::allocator<class uiBaseTextString *>> &) const;

    // RVA: 0x232 | Ordinal: 563
        void createTextItem_(struct textutil::TextBlock const &, struct gui::Text::Info const &, class std::unordered_map<class ed::basic_string<wchar_t>, class ed::basic_string<wchar_t>, struct std::hash<class ed::basic_string<wchar_t>>, struct std::equal_to<class ed::basic_string<wchar_t>>, class ed::allocator<struct std::pair<class ed::basic_string<wchar_t> const, class ed::basic_string<wchar_t>>>> const &) const;

    // RVA: 0x233 | Ordinal: 564
        void createTextLines_(struct gui::Text::Info const &, class ed::vector<class gui::ColorTextStaticSkin::TextLine *, class ed::allocator<class gui::ColorTextStaticSkin::TextLine *>> &) const;

    // RVA: 0x234 | Ordinal: 565
        void createTextString_(class gui::ColorTextStaticSkin::TextItem const &) const;

    // RVA: 0x235 | Ordinal: 566
        void createTextStrings_(class ed::vector<class uiBaseTextString *, class ed::allocator<class uiBaseTextString *>> &) const;

    // RVA: 0x2AF | Ordinal: 688
        void drawText_(void) const;

    // RVA: 0x65C | Ordinal: 1629
        void makeText_(class gui::GraphicCommands *) const;

    // RVA: 0x7B7 | Ordinal: 1976
        void placeTextLineHorz_(struct gui::Text::Info const &, class gui::ColorTextStaticSkin::TextLine &) const;

    // RVA: 0x7B8 | Ordinal: 1977
        void placeTextLinesHorz_(struct gui::Text::Info const &, class ed::vector<class gui::ColorTextStaticSkin::TextLine *, class ed::allocator<class gui::ColorTextStaticSkin::TextLine *>> &) const;

    // RVA: 0x7B9 | Ordinal: 1978
        void placeTextLinesVert_(int, struct gui::Text::Info const &, class ed::vector<class gui::ColorTextStaticSkin::TextLine *, class ed::allocator<class gui::ColorTextStaticSkin::TextLine *>> &) const;

    // RVA: 0x7BA | Ordinal: 1979
        void placeTextLines_(struct gui::Text::Info const &, class ed::vector<class gui::ColorTextStaticSkin::TextLine *, class ed::allocator<class gui::ColorTextStaticSkin::TextLine *>> &) const;

    // RVA: 0x7BB | Ordinal: 1980
        void placeWrappedTextLineHorz_(struct gui::Text::Info const &, class gui::ColorTextStaticSkin::TextLine &) const;

    // RVA: 0x7E5 | Ordinal: 2022
        void redrawText_(enum gui::skin::InteractiveState, int);

    // RVA: 0xE3 | Ordinal: 228
        void _ColorTextStaticSkin(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_COLORTEXTSTATICSKIN_HPP
