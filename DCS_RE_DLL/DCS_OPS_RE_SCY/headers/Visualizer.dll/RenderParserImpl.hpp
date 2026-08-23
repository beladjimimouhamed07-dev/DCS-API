#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: RenderParserImpl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class RenderParserImpl
{
public:

    // RVA: 0x3B | Ordinal: 60
        void ClearTransparent(void);

    // RVA: 0x47 | Ordinal: 72
        void DrawAll(void);

    // RVA: 0x48 | Ordinal: 73
        void DrawDecalsDeffered(bool);

    // RVA: 0x49 | Ordinal: 74
        void DrawDecalsForward(bool);

    // RVA: 0x4A | Ordinal: 75
        void DrawFlatShadows(void);

    // RVA: 0x4B | Ordinal: 76
        void DrawMirrors(bool);

    // RVA: 0x4C | Ordinal: 77
        void DrawTransparent(void);

    // RVA: 0x4D | Ordinal: 78
        void DrawTransparentAbove(float);

    // RVA: 0x4E | Ordinal: 79
        void DrawTransparentAll(void);

    // RVA: 0x4F | Ordinal: 80
        void DrawTransparentBelow(float);

    // RVA: 0x50 | Ordinal: 81
        void DrawTransparentInsideClouds(float, float);

    // RVA: 0x51 | Ordinal: 82
        void DrawTransparentNoClear(void);

    // RVA: 0x52 | Ordinal: 83
        void DrawTransparentOutsideClouds(float, float);

    // RVA: 0x53 | Ordinal: 84
        void DrawZWrited(void);

    // RVA: 0x54 | Ordinal: 85
        void DrawZWritedNoClear(void);

    // RVA: 0x55 | Ordinal: 86
        void FinishFrame(void);

    // RVA: 0x5C | Ordinal: 93
        void GetObjsCount(void);

    // RVA: 0x5E | Ordinal: 95
        void GetRenderPurpose(void);

    // RVA: 0x5F | Ordinal: 96
        void GetTrisCount(void);

    // RVA: 0x60 | Ordinal: 97
        void InitFrame(int *, int *);

    // RVA: 0x64 | Ordinal: 101
        void ObjectMaxDist(void);

    // RVA: 0x65 | Ordinal: 102
        void ObjectMaxDist(float);

    // RVA: 0x66 | Ordinal: 103
        void ObjectTransparent(void);

    // RVA: 0x67 | Ordinal: 104
        void ObjectTransparent(float);

    // RVA: 0x68 | Ordinal: 105
        void ObjectTransparentFar(void);

    // RVA: 0x69 | Ordinal: 106
        void ObjectTransparentFar(float);

    // RVA: 0x6A | Ordinal: 107
        void ObjectTransparentNear(void);

    // RVA: 0x6B | Ordinal: 108
        void ObjectTransparentNear(float);

    // RVA: 0x6C | Ordinal: 109
        void OnObjectReady(class Graphics::IRenderObject *, unsigned int);

    // RVA: 0x6D | Ordinal: 110
        void PassAsCloud(class Graphics::IRenderObject *, unsigned int);

    // RVA: 0x6E | Ordinal: 111
        void PassAsFlatShadow(class Graphics::IRenderObject *, unsigned int);

    // RVA: 0x6F | Ordinal: 112
        void PassAsIR_MFD(class Graphics::IRenderObject *, unsigned int);

    // RVA: 0x70 | Ordinal: 113
        void PassAsObject(class Graphics::IRenderObject *, unsigned int);

    // RVA: 0x1A | Ordinal: 27
        void RenderParserImpl(void);

    // RVA: 0x71 | Ordinal: 114
        void ResetIRMode(void);

    // RVA: 0x7B | Ordinal: 124
        void SetIRSignature(float);

    // RVA: 0x85 | Ordinal: 134
        void SortTransparent(void);

    // RVA: 0xAB | Ordinal: 172
        void copy(class RenderParserImpl const &, bool);

    // RVA: 0xBC | Ordinal: 189
        void drawDots(void);

    // RVA: 0xD9 | Ordinal: 218
        void getEffectState(void) const;

    // RVA: 0xEC | Ordinal: 237
        void getParserByPass(enum Graphics::Pass);

    // RVA: 0xED | Ordinal: 238
        void getParserId(void);

    // RVA: 0x10C | Ordinal: 269
        void isEmpty(void);

    // RVA: 0x11B | Ordinal: 284
        void parseDot(class osg::Vec3f const &, class osg::Vec3f const &, float, int);

    // RVA: 0x134 | Ordinal: 309
        void saveEffectState(class Graphics::effectState *);

    // RVA: 0x139 | Ordinal: 314
        void setAdditionalParser(enum Graphics::Pass, class Graphics::ModelParser *);

    // RVA: 0x196 | Ordinal: 407
        void useAsReferenceTo(class RenderParserImpl *);

    // RVA: 0x2A | Ordinal: 43
        void _RenderParserImpl(void);
};

// DCS_OPS_RE_VISUALIZER.DLL_RENDERPARSERIMPL_HPP
