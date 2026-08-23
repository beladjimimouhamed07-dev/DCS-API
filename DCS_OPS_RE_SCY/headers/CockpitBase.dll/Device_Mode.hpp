#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: Device_Mode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class Device_Mode
{
public:

    // RVA: 0x37 | Ordinal: 56
        void Device_Mode(struct cockpit::Device_Mode const &);

    // RVA: 0x38 | Ordinal: 57
        void Device_Mode(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0xAD5 | Ordinal: 2774
        void clear_sub_levels(void);

    // RVA: 0x13B1 | Ordinal: 5042
        void load_from_state(class Lua::Config &);

    // RVA: 0x1657 | Ordinal: 5720
        void save_to_state(struct lua_State *) const;
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_DEVICE_MODE_HPP
