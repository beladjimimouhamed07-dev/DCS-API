#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ImGui.dll
// Class: ImFont
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ImFont
{
public:

    // RVA: 0x14B | Ordinal: 332
        void AddGlyph(struct ImFontConfig const *, unsigned short, float, float, float, float, float, float, float, float, float);

    // RVA: 0x15C | Ordinal: 349
        void AddRemapChar(unsigned short, unsigned short, bool);

    // RVA: 0x19D | Ordinal: 414
        void BuildLookupTable(void);

    // RVA: 0x1B0 | Ordinal: 433
        void CalcTextSizeA(float, float, float, char const *, char const *, char const **) const;

    // RVA: 0x1B3 | Ordinal: 436
        void CalcWordWrapPositionA(float, char const *, char const *, float) const;

    // RVA: 0x1CA | Ordinal: 459
        void ClearOutputData(void);

    // RVA: 0x23D | Ordinal: 574
        void FindGlyph(unsigned short) const;

    // RVA: 0x23E | Ordinal: 575
        void FindGlyphNoFallback(unsigned short) const;

    // RVA: 0x2EE | Ordinal: 751
        void GrowIndex(int);

    // RVA: 0xFD | Ordinal: 254
        void ImFont(void);

    // RVA: 0x34C | Ordinal: 845
        void IsGlyphRangeUnused(unsigned int, unsigned int);

    // RVA: 0x40D | Ordinal: 1038
        void RenderChar(struct ImDrawList *, float, struct ImVec2, unsigned int, unsigned short) const;

    // RVA: 0x416 | Ordinal: 1047
        void RenderText(struct ImDrawList *, float, struct ImVec2, unsigned int, struct ImVec4 const &, char const *, char const *, float, bool) const;

    // RVA: 0x445 | Ordinal: 1094
        void SetFallbackChar(unsigned short);

    // RVA: 0x448 | Ordinal: 1097
        void SetGlyphVisible(unsigned short, bool);

    // RVA: 0x11A | Ordinal: 283
        void _ImFont(void);
};

// DCS_OPS_RE_IMGUI.DLL_IMFONT_HPP
