#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: uiBaseRenderer.dll
// Class: uiBaseFrameBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class uiBaseFrameBuffer
{
public:

    // RVA: 0x35 | Ordinal: 54
        void createTexture(void);

    // RVA: 0x3E | Ordinal: 63
        void drawToTarget(class std::function<void __cdecl(void)>);

    // RVA: 0x49 | Ordinal: 74
        void getClearColor(void) const;

    // RVA: 0x5A | Ordinal: 91
        void getMips(void) const;

    // RVA: 0x5B | Ordinal: 92
        void getMsaa(void) const;

    // RVA: 0x61 | Ordinal: 98
        void getTargetSize(void) const;

    // RVA: 0x78 | Ordinal: 121
        void setClearColor(class osg::Vec4f const &);

    // RVA: 0x9 | Ordinal: 10
        void uiBaseFrameBuffer(class osg::Vec2i const &, int, int);

    // RVA: 0x1E | Ordinal: 31
        void _uiBaseFrameBuffer(void);
};

// DCS_OPS_RE_UIBASERENDERER.DLL_UIBASEFRAMEBUFFER_HPP
