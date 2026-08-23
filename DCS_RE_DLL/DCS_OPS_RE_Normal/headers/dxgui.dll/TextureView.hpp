#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: TextureView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class TextureView
{
public:

    // RVA: 0xC5 | Ordinal: 198
        void TextureView(void);

    // RVA: 0x1D7 | Ordinal: 472
        void clone(void) const;

    // RVA: 0x20B | Ordinal: 524
        void copyParams(class gui::TextureView *) const;

    // RVA: 0x266 | Ordinal: 615
        void doRedraw(void);

    // RVA: 0x2A7 | Ordinal: 680
        void drawModelView_(void) const;

    // RVA: 0x312 | Ordinal: 787
        void getAngle(void) const;

    // RVA: 0x3D3 | Ordinal: 980
        void getImageInfo(void) const;

    // RVA: 0x476 | Ordinal: 1143
        void getPivotPoint(void) const;

    // RVA: 0x652 | Ordinal: 1619
        void makeModelView_(class gui::GraphicCommands *) const;

    // RVA: 0x673 | Ordinal: 1652
        void onAngleChanged_(double);

    // RVA: 0x755 | Ordinal: 1878
        void onPivotPointChanged_(class osg::Vec2i const &);

    // RVA: 0x7F0 | Ordinal: 2033
        void redraw_(void);

    // RVA: 0x867 | Ordinal: 2152
        void setAngle(double);

    // RVA: 0x8C9 | Ordinal: 2250
        void setImageInfo(struct gui::Image::Info const &);

    // RVA: 0x909 | Ordinal: 2314
        void setPivotPoint(class osg::Vec2i const &);

    // RVA: 0x954 | Ordinal: 2389
        void setTexture(class ed::Ptr<class uiBaseTexture, class uiTextureCleaner>);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_TEXTUREVIEW_HPP
