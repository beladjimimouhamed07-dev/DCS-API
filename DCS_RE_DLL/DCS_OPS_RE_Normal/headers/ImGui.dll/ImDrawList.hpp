#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ImGui.dll
// Class: ImDrawList
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ImDrawList
{
public:

    // RVA: 0x13C | Ordinal: 317
        void AddBezierCurve(struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, unsigned int, float, int);

    // RVA: 0x13D | Ordinal: 318
        void AddCallback(void (__cdecl *)(struct ImDrawList const *, struct ImDrawCmd const *), void *);

    // RVA: 0x13E | Ordinal: 319
        void AddCircle(struct ImVec2 const &, float, unsigned int, int, float);

    // RVA: 0x13F | Ordinal: 320
        void AddCircleFilled(struct ImVec2 const &, float, unsigned int, int);

    // RVA: 0x141 | Ordinal: 322
        void AddConvexPolyFilled(struct ImVec2 const *, int, unsigned int);

    // RVA: 0x144 | Ordinal: 325
        void AddDrawCmd(void);

    // RVA: 0x14C | Ordinal: 333
        void AddImage(void *, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, unsigned int);

    // RVA: 0x14D | Ordinal: 334
        void AddImageQuad(void *, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, unsigned int);

    // RVA: 0x14E | Ordinal: 335
        void AddImageRounded(void *, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, unsigned int, float, int);

    // RVA: 0x152 | Ordinal: 339
        void AddLine(struct ImVec2 const &, struct ImVec2 const &, unsigned int, float);

    // RVA: 0x153 | Ordinal: 340
        void AddNgon(struct ImVec2 const &, float, unsigned int, int, float);

    // RVA: 0x154 | Ordinal: 341
        void AddNgonFilled(struct ImVec2 const &, float, unsigned int, int);

    // RVA: 0x155 | Ordinal: 342
        void AddPolyline(struct ImVec2 const *, int, unsigned int, bool, float);

    // RVA: 0x156 | Ordinal: 343
        void AddQuad(struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, unsigned int, float);

    // RVA: 0x157 | Ordinal: 344
        void AddQuadFilled(struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, unsigned int);

    // RVA: 0x159 | Ordinal: 346
        void AddRect(struct ImVec2 const &, struct ImVec2 const &, unsigned int, float, int, float);

    // RVA: 0x15A | Ordinal: 347
        void AddRectFilled(struct ImVec2 const &, struct ImVec2 const &, unsigned int, float, int);

    // RVA: 0x15B | Ordinal: 348
        void AddRectFilledMultiColor(struct ImVec2 const &, struct ImVec2 const &, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x15D | Ordinal: 350
        void AddText(struct ImVec2 const &, unsigned int, char const *, char const *);

    // RVA: 0x15E | Ordinal: 351
        void AddText(struct ImFont const *, float, struct ImVec2 const &, unsigned int, char const *, char const *, float, struct ImVec4 const *);

    // RVA: 0x166 | Ordinal: 359
        void AddTriangle(struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, unsigned int, float);

    // RVA: 0x167 | Ordinal: 360
        void AddTriangleFilled(struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, unsigned int);

    // RVA: 0x171 | Ordinal: 370
        void ApplyTransformation(struct ImMatrix const &);

    // RVA: 0x1D0 | Ordinal: 465
        void CloneOutput(void) const;

    // RVA: 0x3AF | Ordinal: 944
        void PathArcTo(struct ImVec2 const &, float, float, float, int);

    // RVA: 0x3B0 | Ordinal: 945
        void PathArcToFast(struct ImVec2 const &, float, int, int);

    // RVA: 0x3B1 | Ordinal: 946
        void PathBezierCurveTo(struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, int);

    // RVA: 0x3B2 | Ordinal: 947
        void PathRect(struct ImVec2 const &, struct ImVec2 const &, float, int);

    // RVA: 0x3CD | Ordinal: 974
        void PopClipRect(void);

    // RVA: 0x3DC | Ordinal: 989
        void PopTextureID(void);

    // RVA: 0x3DD | Ordinal: 990
        void PopTransformation(int);

    // RVA: 0x3DE | Ordinal: 991
        void PrimQuadUV(struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, unsigned int);

    // RVA: 0x3DF | Ordinal: 992
        void PrimRect(struct ImVec2 const &, struct ImVec2 const &, unsigned int);

    // RVA: 0x3E0 | Ordinal: 993
        void PrimRectUV(struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, unsigned int);

    // RVA: 0x3E1 | Ordinal: 994
        void PrimReserve(int, int);

    // RVA: 0x3E2 | Ordinal: 995
        void PrimUnreserve(int, int);

    // RVA: 0x3E7 | Ordinal: 1000
        void PushClipRect(struct ImVec2, struct ImVec2, bool);

    // RVA: 0x3E9 | Ordinal: 1002
        void PushClipRectFullScreen(void);

    // RVA: 0x404 | Ordinal: 1029
        void PushTextureID(void *);

    // RVA: 0x47A | Ordinal: 1147
        void SetTransformation(struct ImMatrix const &);

    // RVA: 0x4FB | Ordinal: 1276
        void _ClearFreeMemory(void);

    // RVA: 0x4FC | Ordinal: 1277
        void _OnChangedClipRect(void);

    // RVA: 0x4FD | Ordinal: 1278
        void _OnChangedTextureID(void);

    // RVA: 0x4FE | Ordinal: 1279
        void _OnChangedVtxOffset(void);

    // RVA: 0x4FF | Ordinal: 1280
        void _PopUnusedDrawCmd(void);

    // RVA: 0x500 | Ordinal: 1281
        void _ResetForNewFrame(void);
};

// DCS_OPS_RE_IMGUI.DLL_IMDRAWLIST_HPP
