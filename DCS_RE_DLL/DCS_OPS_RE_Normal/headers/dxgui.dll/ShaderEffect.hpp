#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ShaderEffect
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class ShaderEffect
{
public:

    // RVA: 0xB4 | Ordinal: 181
        void ShaderEffect(void);

    // RVA: 0x263 | Ordinal: 612
        void doRedraw(class osg::Vec2i const &);

    // RVA: 0x284 | Ordinal: 645
        void draw(void);

    // RVA: 0x62E | Ordinal: 1583
        void make(class gui::GraphicCommands *);

    // RVA: 0x882 | Ordinal: 2179
        void setCurrTime(float);

    // RVA: 0x89A | Ordinal: 2203
        void setDrawParams_(void) const;

    // RVA: 0x8FA | Ordinal: 2299
        void setOwner(class gui::WidgetHandler *);

    // RVA: 0x8FF | Ordinal: 2304
        void setParams(class gui::skin::ShaderEffectParams const &);

    // RVA: 0x92D | Ordinal: 2350
        void setStartTime(float);

    // RVA: 0x953 | Ordinal: 2388
        void setTexture(class ed::Ptr<class uiBaseTexture, class uiTextureCleaner>);

    // RVA: 0x9C7 | Ordinal: 2504
        void update(float);

    // RVA: 0x115 | Ordinal: 278
        void _ShaderEffect(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SHADEREFFECT_HPP
