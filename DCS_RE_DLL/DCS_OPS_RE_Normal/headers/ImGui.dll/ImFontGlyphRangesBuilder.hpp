#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ImGui.dll
// Class: ImFontGlyphRangesBuilder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ImFontGlyphRangesBuilder
{
public:

    // RVA: 0x158 | Ordinal: 345
        void AddRanges(unsigned short const *);

    // RVA: 0x15F | Ordinal: 352
        void AddText(char const *, char const *);

    // RVA: 0x19E | Ordinal: 415
        void BuildRanges(struct ImVector<unsigned short> *);
};

// DCS_OPS_RE_IMGUI.DLL_IMFONTGLYPHRANGESBUILDER_HPP
