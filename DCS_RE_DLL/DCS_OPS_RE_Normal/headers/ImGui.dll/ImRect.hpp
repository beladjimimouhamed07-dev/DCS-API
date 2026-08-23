#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ImGui.dll
// Class: ImRect
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ImRect
{
public:

    // RVA: 0x13A | Ordinal: 315
        void Add(struct ImRect const &);

    // RVA: 0x13B | Ordinal: 316
        void Add(struct ImVec2 const &);

    // RVA: 0x1CE | Ordinal: 463
        void ClipWith(struct ImRect const &);

    // RVA: 0x1CF | Ordinal: 464
        void ClipWithFull(struct ImRect const &);

    // RVA: 0x1EB | Ordinal: 492
        void Contains(struct ImRect const &) const;

    // RVA: 0x1EC | Ordinal: 493
        void Contains(struct ImVec2 const &) const;

    // RVA: 0x239 | Ordinal: 570
        void Expand(struct ImVec2 const &);

    // RVA: 0x23A | Ordinal: 571
        void Expand(float);

    // RVA: 0x24B | Ordinal: 588
        void Floor(void);

    // RVA: 0x25A | Ordinal: 603
        void GetBL(void) const;

    // RVA: 0x25B | Ordinal: 604
        void GetBR(void) const;

    // RVA: 0x264 | Ordinal: 613
        void GetCenter(void) const;

    // RVA: 0x295 | Ordinal: 662
        void GetHeight(void) const;

    // RVA: 0x2CC | Ordinal: 717
        void GetSize(void) const;

    // RVA: 0x2D3 | Ordinal: 724
        void GetTL(void) const;

    // RVA: 0x2D4 | Ordinal: 725
        void GetTR(void) const;

    // RVA: 0x2E0 | Ordinal: 737
        void GetWidth(void) const;

    // RVA: 0x111 | Ordinal: 274
        void ImRect(struct ImVec2 const &, struct ImVec2 const &);

    // RVA: 0x112 | Ordinal: 275
        void ImRect(struct ImVec4 const &);

    // RVA: 0x113 | Ordinal: 276
        void ImRect(float, float, float, float);

    // RVA: 0x114 | Ordinal: 277
        void ImRect(void);

    // RVA: 0x34D | Ordinal: 846
        void IsInverted(void) const;

    // RVA: 0x3AD | Ordinal: 942
        void Overlaps(struct ImRect const &) const;

    // RVA: 0x4D8 | Ordinal: 1241
        void ToVec4(void) const;

    // RVA: 0x4D9 | Ordinal: 1242
        void Translate(struct ImVec2 const &);

    // RVA: 0x4DA | Ordinal: 1243
        void TranslateX(float);

    // RVA: 0x4DB | Ordinal: 1244
        void TranslateY(float);
};

// DCS_OPS_RE_IMGUI.DLL_IMRECT_HPP
