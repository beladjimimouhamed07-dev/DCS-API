#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: viLight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class viLight
{
public:

    // RVA: 0x99 | Ordinal: 154
        void AddToEffects(class Graphics::effectState *);

    // RVA: 0xAE | Ordinal: 175
        void Create(char const *);

    // RVA: 0xB8 | Ordinal: 185
        void Destroy(class viLight *);

    // RVA: 0xB9 | Ordinal: 186
        void Destroy(class Link<class viLight>);

    // RVA: 0xD1 | Ordinal: 210
        void GetLuminanceAt(class osg::Vec3f const &);

    // RVA: 0xDE | Ordinal: 223
        void GetPosition(void);

    // RVA: 0xE4 | Ordinal: 229
        void GetSize(void);

    // RVA: 0xEA | Ordinal: 235
        void Init(char const *);

    // RVA: 0xF5 | Ordinal: 246
        void LocalBox(double);

    // RVA: 0x105 | Ordinal: 262
        void Position(double);

    // RVA: 0x109 | Ordinal: 266
        void PrepareFrame(class osg::Vec3d const &);

    // RVA: 0x10D | Ordinal: 270
        void QueryEditor(void);

    // RVA: 0x128 | Ordinal: 297
        void SetPosition(class wPosition3<float> const &);

    // RVA: 0x134 | Ordinal: 309
        void TestVolume(class ClipVolume const &);

    // RVA: 0x140 | Ordinal: 321
        void Update(void);

    // RVA: 0x168 | Ordinal: 361
        void getGraphicsLight(void) const;

    // RVA: 0x28 | Ordinal: 41
        void viLight(class viLight const &);

    // RVA: 0x29 | Ordinal: 42
        void viLight(void);

    // RVA: 0x4C | Ordinal: 77
        void _viLight(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_VILIGHT_HPP
