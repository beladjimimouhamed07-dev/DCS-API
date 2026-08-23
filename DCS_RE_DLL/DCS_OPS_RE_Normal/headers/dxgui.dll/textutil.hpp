#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: textutil
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class textutil
{
public:

    // RVA: 0x193 | Ordinal: 404
        void cleanupText(class ed::basic_string<wchar_t> &, wchar_t);

    // RVA: 0x211 | Ordinal: 530
        void copyTextToClipboard(class ed::basic_string<wchar_t> const &);

    // RVA: 0x348 | Ordinal: 841
        void getDecimalPoint(void);

    // RVA: 0x52A | Ordinal: 1323
        void getTextFromClipboard(void);

    // RVA: 0x52B | Ordinal: 1324
        void getTextHasTabs(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x5F8 | Ordinal: 1529
        void isSymbolWordSeparator(wchar_t);

    // RVA: 0x7B3 | Ordinal: 1972
        void parseText(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>, class ed::set<class ed::basic_string<wchar_t>, struct std::less<class ed::basic_string<wchar_t>>, class ed::allocator<class ed::basic_string<wchar_t>>> const &, class ed::list<struct textutil::TextBlock, class ed::allocator<struct textutil::TextBlock>> &);

    // RVA: 0x82D | Ordinal: 2094
        void replaceTabsBySpaces(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);
};

// DCS_OPS_RE_DXGUI.DLL_TEXTUTIL_HPP
