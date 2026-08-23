#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ImGui.dll
// Class: ImGuiWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ImGuiWindow
{
public:

    // RVA: 0x1AA | Ordinal: 427
        void CalcFontSize(void) const;

    // RVA: 0x29A | Ordinal: 667
        void GetID(int);

    // RVA: 0x29B | Ordinal: 668
        void GetID(char const *, char const *);

    // RVA: 0x29C | Ordinal: 669
        void GetID(void const *);

    // RVA: 0x29D | Ordinal: 670
        void GetIDFromRectangle(struct ImRect const &);

    // RVA: 0x29E | Ordinal: 671
        void GetIDNoKeepAlive(int);

    // RVA: 0x29F | Ordinal: 672
        void GetIDNoKeepAlive(char const *, char const *);

    // RVA: 0x2A0 | Ordinal: 673
        void GetIDNoKeepAlive(void const *);

    // RVA: 0x10A | Ordinal: 267
        void ImGuiWindow(struct ImGuiWindow const &);

    // RVA: 0x10B | Ordinal: 268
        void ImGuiWindow(struct ImGuiContext *, char const *);

    // RVA: 0x398 | Ordinal: 921
        void MenuBarHeight(void) const;

    // RVA: 0x399 | Ordinal: 922
        void MenuBarRect(void) const;

    // RVA: 0x407 | Ordinal: 1032
        void Rect(void) const;

    // RVA: 0x4D6 | Ordinal: 1239
        void TitleBarHeight(void) const;

    // RVA: 0x4D7 | Ordinal: 1240
        void TitleBarRect(void) const;

    // RVA: 0x11E | Ordinal: 287
        void _ImGuiWindow(void);
};

// DCS_OPS_RE_IMGUI.DLL_IMGUIWINDOW_HPP
