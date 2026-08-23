#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: ScreenGrabber
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class ScreenGrabber
{
public:

    // RVA: 0x19 | Ordinal: 26
        void ScreenGrabber(void);

    // RVA: 0x65 | Ordinal: 102
        void discard(void);

    // RVA: 0x77 | Ordinal: 120
        void grab(class ed::matrixMN<class osg::Vec4ub> &);

    // RVA: 0x92 | Ordinal: 147
        void init(void);

    // RVA: 0x36 | Ordinal: 55
        void _ScreenGrabber(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_SCREENGRABBER_HPP
