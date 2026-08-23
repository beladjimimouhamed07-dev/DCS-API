#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: viObjectShapeCustom
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class viObjectShapeCustom
{
public:

    // RVA: 0xB1 | Ordinal: 178
        void CreateObject(char const *, class wPosition3<float> const &, double, class viObjectNode *);

    // RVA: 0xB2 | Ordinal: 179
        void CreateObject(class Graphics::ModelPtr, class wPosition3<float> const &, double, class viObjectNode *);

    // RVA: 0xCD | Ordinal: 206
        void GetDrawArguments(void);

    // RVA: 0xDB | Ordinal: 220
        void GetPoint(void);

    // RVA: 0xE0 | Ordinal: 225
        void GetPosition(void);

    // RVA: 0xEB | Ordinal: 236
        void Init(class viObjectNode *, class wPosition3<float> const &, double);

    // RVA: 0xFB | Ordinal: 252
        void OnParentChangePos(void);

    // RVA: 0xFD | Ordinal: 254
        void OnParentDeath(void);

    // RVA: 0x106 | Ordinal: 263
        void Position(double);

    // RVA: 0x121 | Ordinal: 290
        void SetModel(class Graphics::ModelPtr);

    // RVA: 0x123 | Ordinal: 292
        void SetModelParam(int, float);

    // RVA: 0x124 | Ordinal: 293
        void SetModelParams(class ed::vector<float, class ed::allocator128<float>> const &);

    // RVA: 0x126 | Ordinal: 295
        void SetPoint(class osg::Vec3d const &);

    // RVA: 0x15D | Ordinal: 350
        void cast_viObjectShapeCustom(void);

    // RVA: 0x181 | Ordinal: 386
        void getPositionUsingMode(void) const;

    // RVA: 0x32 | Ordinal: 51
        void viObjectShapeCustom(class viObjectShapeCustom const &);

    // RVA: 0x33 | Ordinal: 52
        void viObjectShapeCustom(void);

    // RVA: 0x52 | Ordinal: 83
        void _viObjectShapeCustom(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_VIOBJECTSHAPECUSTOM_HPP
