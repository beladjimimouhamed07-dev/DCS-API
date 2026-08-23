#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ed_api.dll
// Class: ed
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ed
{
public:

    // RVA: 0x7 | Ordinal: 8
        void WebViewTexture_create(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x8 | Ordinal: 9
        void WebView_create(class ed::WebViewClient *, struct ed::WebViewSettings const &);

    // RVA: 0x9 | Ordinal: 10
        void WebWindow_create(class ed::WebWindowClient *, struct ed::WebWindowSettings const &);
};

// DCS_OPS_RE_ED_API.DLL_ED_HPP
