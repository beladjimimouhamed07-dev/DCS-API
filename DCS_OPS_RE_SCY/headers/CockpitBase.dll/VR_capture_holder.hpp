#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: VR_capture_holder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class VR_capture_holder
{
public:

    // RVA: 0xA0 | Ordinal: 161
        void VR_capture_holder(void);

    // RVA: 0x1154 | Ordinal: 4437
        void init(class Graphics::ModelInstance &, struct lua_State *, class osg::Vec3f const &);

    // RVA: 0x1B4F | Ordinal: 6992
        void update_capture(class Graphics::ModelInstance &);

    // RVA: 0x2C8 | Ordinal: 713
        void _VR_capture_holder(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_VR_CAPTURE_HOLDER_HPP
