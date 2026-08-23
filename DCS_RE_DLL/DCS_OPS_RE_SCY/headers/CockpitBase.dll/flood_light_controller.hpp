#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: flood_light_controller
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class flood_light_controller
{
public:

    // RVA: 0xAF3 | Ordinal: 2804
        void connect(class EagleFM::Elec::ItemBase &);

    // RVA: 0x269 | Ordinal: 618
        void flood_light_controller(class cockpit::flood_light_controller const &);

    // RVA: 0x26A | Ordinal: 619
        void flood_light_controller(void);

    // RVA: 0xEC1 | Ordinal: 3778
        void get_brightness(void) const;

    // RVA: 0x1430 | Ordinal: 5169
        void onAddTo(class cockpit::ccMainPanel *);

    // RVA: 0x1457 | Ordinal: 5208
        void onRemoveFrom(class cockpit::ccMainPanel *);

    // RVA: 0x1572 | Ordinal: 5491
        void read_from_state(class Lua::Config &);

    // RVA: 0x168C | Ordinal: 5773
        void set(float);

    // RVA: 0x16DF | Ordinal: 5856
        void setElecConsumParams(class EagleFM::Elec::ConsumerParams const &);

    // RVA: 0x16E2 | Ordinal: 5859
        void setElecConsumParamsFromState(class Lua::Config &, char const *);

    // RVA: 0x1B02 | Ordinal: 6915
        void update(class cockpit::ccMainPanel *);

    // RVA: 0x3B1 | Ordinal: 946
        void _flood_light_controller(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_FLOOD_LIGHT_CONTROLLER_HPP
