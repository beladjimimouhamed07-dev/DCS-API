#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: AnimatedColorStaticSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class AnimatedColorStaticSkin
{
public:

    // RVA: 0x33 | Ordinal: 52
        void AnimatedColorStaticSkin(class gui::AnimatedColorStatic *);

    // RVA: 0x2A2 | Ordinal: 675
        void drawImage_(void) const;

    // RVA: 0x2AE | Ordinal: 687
        void drawText_(void) const;

    // RVA: 0x64C | Ordinal: 1613
        void makeImage_(class gui::GraphicCommands *) const;

    // RVA: 0x65B | Ordinal: 1628
        void makeText_(class gui::GraphicCommands *) const;

    // RVA: 0xD8 | Ordinal: 217
        void _AnimatedColorStaticSkin(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_ANIMATEDCOLORSTATICSKIN_HPP
