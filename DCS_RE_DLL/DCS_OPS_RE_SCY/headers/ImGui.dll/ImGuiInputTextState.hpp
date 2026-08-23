#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ImGui.dll
// Class: ImGuiInputTextState
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ImGuiInputTextState
{
public:

    // RVA: 0x1C6 | Ordinal: 455
        void ClearFreeMemory(void);

    // RVA: 0x1CB | Ordinal: 460
        void ClearSelection(void);

    // RVA: 0x1CD | Ordinal: 462
        void ClearText(void);

    // RVA: 0x1F1 | Ordinal: 498
        void CursorAnimReset(void);

    // RVA: 0x1F2 | Ordinal: 499
        void CursorClamp(void);

    // RVA: 0x2C4 | Ordinal: 709
        void GetRedoAvailCount(void) const;

    // RVA: 0x2DC | Ordinal: 733
        void GetUndoAvailCount(void) const;

    // RVA: 0x2EF | Ordinal: 752
        void HasSelection(void) const;

    // RVA: 0x102 | Ordinal: 259
        void ImGuiInputTextState(struct ImGuiInputTextState &&);

    // RVA: 0x103 | Ordinal: 260
        void ImGuiInputTextState(struct ImGuiInputTextState const &);

    // RVA: 0x104 | Ordinal: 261
        void ImGuiInputTextState(void);

    // RVA: 0x3A9 | Ordinal: 938
        void OnKeyPressed(int);

    // RVA: 0x42A | Ordinal: 1067
        void SelectAll(void);

    // RVA: 0x11C | Ordinal: 285
        void _ImGuiInputTextState(void);
};

// DCS_OPS_RE_IMGUI.DLL_IMGUIINPUTTEXTSTATE_HPP
