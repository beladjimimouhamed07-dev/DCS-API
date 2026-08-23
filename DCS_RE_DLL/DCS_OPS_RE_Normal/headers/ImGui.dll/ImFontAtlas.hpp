#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ImGui.dll
// Class: ImFontAtlas
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ImFontAtlas
{
public:

    // RVA: 0x142 | Ordinal: 323
        void AddCustomRectFontGlyph(struct ImFont *, unsigned short, int, int, float, struct ImVec2 const &);

    // RVA: 0x143 | Ordinal: 324
        void AddCustomRectRegular(int, int);

    // RVA: 0x145 | Ordinal: 326
        void AddFont(struct ImFontConfig const *);

    // RVA: 0x146 | Ordinal: 327
        void AddFontDefault(struct ImFontConfig const *);

    // RVA: 0x147 | Ordinal: 328
        void AddFontFromFileTTF(char const *, float, struct ImFontConfig const *, unsigned short const *);

    // RVA: 0x148 | Ordinal: 329
        void AddFontFromMemoryCompressedBase85TTF(char const *, float, struct ImFontConfig const *, unsigned short const *);

    // RVA: 0x149 | Ordinal: 330
        void AddFontFromMemoryCompressedTTF(void const *, int, float, struct ImFontConfig const *, unsigned short const *);

    // RVA: 0x14A | Ordinal: 331
        void AddFontFromMemoryTTF(void *, int, float, struct ImFontConfig const *, unsigned short const *);

    // RVA: 0x19B | Ordinal: 412
        void Build(void);

    // RVA: 0x1A8 | Ordinal: 425
        void CalcCustomRectUV(struct ImFontAtlasCustomRect const *, struct ImVec2 *, struct ImVec2 *) const;

    // RVA: 0x1C0 | Ordinal: 449
        void Clear(void);

    // RVA: 0x1C4 | Ordinal: 453
        void ClearFonts(void);

    // RVA: 0x1C9 | Ordinal: 458
        void ClearInputData(void);

    // RVA: 0x1CC | Ordinal: 461
        void ClearTexData(void);

    // RVA: 0x28C | Ordinal: 653
        void GetGlyphRangesChineseFull(void);

    // RVA: 0x28D | Ordinal: 654
        void GetGlyphRangesChineseSimplifiedCommon(void);

    // RVA: 0x28E | Ordinal: 655
        void GetGlyphRangesCyrillic(void);

    // RVA: 0x28F | Ordinal: 656
        void GetGlyphRangesDefault(void);

    // RVA: 0x290 | Ordinal: 657
        void GetGlyphRangesJapanese(void);

    // RVA: 0x291 | Ordinal: 658
        void GetGlyphRangesKorean(void);

    // RVA: 0x292 | Ordinal: 659
        void GetGlyphRangesThai(void);

    // RVA: 0x293 | Ordinal: 660
        void GetGlyphRangesVietnamese(void);

    // RVA: 0x2B4 | Ordinal: 693
        void GetMouseCursorTexData(int, struct ImVec2 *, struct ImVec2 *, struct ImVec2 *const, struct ImVec2 *const);

    // RVA: 0x2D5 | Ordinal: 726
        void GetTexDataAsAlpha8(unsigned char **, int *, int *, int *);

    // RVA: 0x2D6 | Ordinal: 727
        void GetTexDataAsRGBA32(unsigned char **, int *, int *, int *);

    // RVA: 0xFE | Ordinal: 255
        void ImFontAtlas(void);

    // RVA: 0x11B | Ordinal: 284
        void _ImFontAtlas(void);
};

// DCS_OPS_RE_IMGUI.DLL_IMFONTATLAS_HPP
