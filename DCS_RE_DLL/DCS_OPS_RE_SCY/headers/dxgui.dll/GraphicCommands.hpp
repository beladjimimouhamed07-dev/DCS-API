#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: GraphicCommands
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class GraphicCommands
{
public:

    // RVA: 0x74 | Ordinal: 117
        void GraphicCommands(void);

    // RVA: 0x13C | Ordinal: 317
        void add(class gui::GraphicCommand *);

    // RVA: 0x196 | Ordinal: 407
        void clear(void);

    // RVA: 0x289 | Ordinal: 650
        void drawBkg(class uiBaseShaderBkgQuads const &, float const *);

    // RVA: 0x29E | Ordinal: 671
        void drawFunc(class std::function<void __cdecl(void)>, class osg::Vec2i const &, class std::function<void __cdecl(class osg::Vec2i const &)>);

    // RVA: 0x29F | Ordinal: 672
        void drawGeometryCached(unsigned int, class ed::vector<class uiBaseVertex, class ed::allocator<class uiBaseVertex>> const &, class ed::vector<int, class ed::allocator<int>> const &, int, int, class ed::Ptr<class uiBaseTexture, class uiTextureCleaner>);

    // RVA: 0x2A0 | Ordinal: 673
        void drawGeometryCached(unsigned int, int, int, class ed::Ptr<class uiBaseTexture, class uiTextureCleaner>);

    // RVA: 0x2AA | Ordinal: 683
        void drawQuads(class uiBaseShaderQuads const &, class osg::Vec4f const &, int, int);

    // RVA: 0x2AB | Ordinal: 684
        void drawText(class uiBaseTextString *, class osg::Vec4f const *, float);

    // RVA: 0x2AC | Ordinal: 685
        void drawText(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>, class std::shared_ptr<class uiBaseFont>, class osg::Vec4f const &, float);

    // RVA: 0x2AD | Ordinal: 686
        void drawText(class std::span<class uiBaseTextString *const, -1>, class osg::Vec4f const *, float);

    // RVA: 0x2B3 | Ordinal: 692
        void drawToTarget(class std::shared_ptr<class uiBaseFrameBuffer>, class osg::Vec2i const &, class ed::vector<class gui::GraphicCommand *, class ed::allocator<class gui::GraphicCommand *>> const &);

    // RVA: 0x343 | Ordinal: 836
        void getCommands(void) const;

    // RVA: 0x473 | Ordinal: 1140
        void getParseCommands(void) const;

    // RVA: 0x7B0 | Ordinal: 1969
        void parse(class std::function<void __cdecl(void)>);

    // RVA: 0x7BC | Ordinal: 1981
        void popClipRect(void);

    // RVA: 0x7BE | Ordinal: 1983
        void popViewport(void);

    // RVA: 0x7C0 | Ordinal: 1985
        void preMultModelViewMatrix(class osg::Matrixf const &);

    // RVA: 0x7C5 | Ordinal: 1990
        void pushClipRect(class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x7C7 | Ordinal: 1992
        void pushViewport(class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x8EB | Ordinal: 2284
        void setModelViewMatrix(class osg::Matrixf const &);

    // RVA: 0x8F7 | Ordinal: 2296
        void setOpacity(float);

    // RVA: 0x90D | Ordinal: 2318
        void setProjectionMatrix(class osg::Matrixf const &);

    // RVA: 0x989 | Ordinal: 2442
        void shiftPosition(float, float, float);

    // RVA: 0xF8 | Ordinal: 249
        void _GraphicCommands(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_GRAPHICCOMMANDS_HPP
