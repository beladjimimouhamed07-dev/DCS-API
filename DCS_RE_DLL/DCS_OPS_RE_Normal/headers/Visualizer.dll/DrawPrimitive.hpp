#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: DrawPrimitive
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class DrawPrimitive
{
public:

    // RVA: 0x3C | Ordinal: 61
        void CreateBox(float, float, float, float);

    // RVA: 0x3D | Ordinal: 62
        void CreateBoxRotated(float, float, float, float, float);

    // RVA: 0x3E | Ordinal: 63
        void CreateCircle(int, int, int, int);

    // RVA: 0x3F | Ordinal: 64
        void CreateLines(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &);

    // RVA: 0x43 | Ordinal: 68
        void DeleteTexture(void);

    // RVA: 0x46 | Ordinal: 71
        void Draw(void);

    // RVA: 0x11 | Ordinal: 18
        void DrawPrimitive(class DrawPrimitive const &);

    // RVA: 0x12 | Ordinal: 19
        void DrawPrimitive(void);

    // RVA: 0x61 | Ordinal: 98
        void Load(void);

    // RVA: 0x75 | Ordinal: 118
        void SetColor(class osg::Vec4f const &);

    // RVA: 0x76 | Ordinal: 119
        void SetColor(float, float, float, float);

    // RVA: 0x77 | Ordinal: 120
        void SetDepthTest(bool);

    // RVA: 0x83 | Ordinal: 132
        void SetTexCoords(float, float, float, float);

    // RVA: 0x84 | Ordinal: 133
        void SetTexture(class ed::basic_string<char> const &);

    // RVA: 0x25 | Ordinal: 38
        void _DrawPrimitive(void);
};

// DCS_OPS_RE_VISUALIZER.DLL_DRAWPRIMITIVE_HPP
