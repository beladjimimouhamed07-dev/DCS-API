#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Inter.dll
// Class: render
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class render
{
public:

    // RVA: 0x2F | Ordinal: 48
        void dumpParseContextToString(class render::IParseContext const &);

    // RVA: 0x30 | Ordinal: 49
        void dumpParseOptionsToString(struct render::ParseOptions const &);

    // RVA: 0x31 | Ordinal: 50
        void dumpParseSampleOptionsToString(struct render::ParseSampleOptions const &);

    // RVA: 0x38 | Ordinal: 57
        void getPolytopFromNdc(class render::Camera const &, class osg::Vec2d const &, class osg::Vec2d const &, class osg::Polytope &);

    // RVA: 0x3B | Ordinal: 60
        void getRayFromNdc(class render::Camera const &, class osg::Vec2d const &);

    // RVA: 0x3D | Ordinal: 62
        void getShadingModelByName(char const *);

    // RVA: 0x3E | Ordinal: 63
        void getShadingModelName(enum render::enShadingModel);

    // RVA: 0x3F | Ordinal: 64
        void getShadingModelNameW(enum render::enShadingModel);

    // RVA: 0x40 | Ordinal: 65
        void getShadingModelsName(unsigned __int64);

    // RVA: 0x47 | Ordinal: 72
        void getSlotsDispatcher(void);

    // RVA: 0x6E | Ordinal: 111
        void resolveSharedConstancBufferHandle(class ed::basic_string<char> const &);

    // RVA: 0x6F | Ordinal: 112
        void resolveSharedStructuredBufferName(class ed::basic_string<char> const &);

    // RVA: 0x70 | Ordinal: 113
        void resolveSharedTextureName(class ed::basic_string<char> const &);

    // RVA: 0x72 | Ordinal: 115
        void setSlotsDispatcher(class render::ISlotsDispatcher *);
};

// DCS_OPS_RE_INTER.DLL_RENDER_HPP
