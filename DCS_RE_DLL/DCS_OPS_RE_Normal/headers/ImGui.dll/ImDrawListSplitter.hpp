#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ImGui.dll
// Class: ImDrawListSplitter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ImDrawListSplitter
{
public:

    // RVA: 0x1C5 | Ordinal: 454
        void ClearFreeMemory(void);

    // RVA: 0x39C | Ordinal: 925
        void Merge(struct ImDrawList *);

    // RVA: 0x43C | Ordinal: 1085
        void SetCurrentChannel(struct ImDrawList *, int);

    // RVA: 0x4B2 | Ordinal: 1203
        void Split(struct ImDrawList *, int);
};

// DCS_OPS_RE_IMGUI.DLL_IMDRAWLISTSPLITTER_HPP
