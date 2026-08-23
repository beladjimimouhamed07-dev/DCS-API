#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: uiBaseRenderer.dll
// Class: uiBaseTextString
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class uiBaseTextString
{
public:

    // RVA: 0x3A | Ordinal: 59
        void draw(class uiBaseShader *, class osg::Vec4f const &, float) const;

    // RVA: 0x3B | Ordinal: 60
        void draw(class uiBaseShader *, float) const;

    // RVA: 0x66 | Ordinal: 103
        void getTextWidth(float) const;

    // RVA: 0x6F | Ordinal: 112
        void redraw(float);

    // RVA: 0x10 | Ordinal: 17
        void uiBaseTextString(void);
};

// DCS_OPS_RE_UIBASERENDERER.DLL_UIBASETEXTSTRING_HPP
