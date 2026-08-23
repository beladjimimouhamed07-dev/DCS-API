#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: Camera
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class Camera
{
public:

    // RVA: 0x1 | Ordinal: 2
        void Camera(enum Graphics::Camera::Type);

    // RVA: 0xF3 | Ordinal: 244
        void getClipVolume(void) const;

    // RVA: 0x100 | Ordinal: 257
        void getProjectionDesc(void) const;
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_CAMERA_HPP
