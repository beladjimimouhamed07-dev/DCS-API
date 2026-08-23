#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Inter.dll
// Class: edterrain
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class edterrain
{
public:

    // RVA: 0x39 | Ordinal: 58
        void getRasterChartScaleByName(char const *);

    // RVA: 0x3A | Ordinal: 59
        void getRasterChartScaleName(enum edterrain::enRasterChartScale);

    // RVA: 0x48 | Ordinal: 73
        void getSoundEffectByName(char const *);

    // RVA: 0x49 | Ordinal: 74
        void getSoundEffectByStringEnumName(char const *);

    // RVA: 0x4A | Ordinal: 75
        void getSoundEffectName(enum edterrain::enSoundEffect);

    // RVA: 0x4B | Ordinal: 76
        void getSurfaceTypeByName(class ed::basic_string<char> const &);

    // RVA: 0x4C | Ordinal: 77
        void getSurfaceTypeName(unsigned __int64);

    // RVA: 0x4D | Ordinal: 78
        void getSurfaceTypesName(unsigned __int64);

    // RVA: 0x67 | Ordinal: 104
        void makeLightMapCamera(class osg::Matrixd const &, class osg::Matrixd const &, double, double, bool, double, class osg::Matrixd &, class osg::Matrixd &, class render::IDump *);
};

// DCS_OPS_RE_INTER.DLL_EDTERRAIN_HPP
