#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ambient_controller
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ambient_controller
{
public:

    // RVA: 0xA1 | Ordinal: 162
        void ambient_controller(class cockpit::ambient_controller &&);

    // RVA: 0xA2 | Ordinal: 163
        void ambient_controller(class cockpit::ambient_controller const &);

    // RVA: 0xA3 | Ordinal: 164
        void ambient_controller(void);

    // RVA: 0x10B3 | Ordinal: 4276
        void get_sun_luminance(void) const;

    // RVA: 0x156E | Ordinal: 5487
        void read_from_state(class Lua::Config &);

    // RVA: 0x18FF | Ordinal: 6400
        void set_parent(class cockpit::avBasicLightSystem *);

    // RVA: 0x1A8D | Ordinal: 6798
        void update(class cockpit::ccMainPanel *);

    // RVA: 0x2C9 | Ordinal: 714
        void _ambient_controller(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AMBIENT_CONTROLLER_HPP
