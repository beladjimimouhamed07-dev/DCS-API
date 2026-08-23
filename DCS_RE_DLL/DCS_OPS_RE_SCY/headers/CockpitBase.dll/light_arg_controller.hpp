#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: light_arg_controller
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class light_arg_controller
{
public:

    // RVA: 0xAF4 | Ordinal: 2805
        void connect(class EagleFM::Elec::ItemBase &);

    // RVA: 0xEC2 | Ordinal: 3779
        void get_brightness(void) const;

    // RVA: 0x280 | Ordinal: 641
        void light_arg_controller(class cockpit::light_arg_controller &&);

    // RVA: 0x281 | Ordinal: 642
        void light_arg_controller(class cockpit::light_arg_controller const &);

    // RVA: 0x282 | Ordinal: 643
        void light_arg_controller(void);

    // RVA: 0x1573 | Ordinal: 5492
        void read_from_state(class Lua::Config &);

    // RVA: 0x168D | Ordinal: 5774
        void set(float);

    // RVA: 0x16E0 | Ordinal: 5857
        void setElecConsumParams(class EagleFM::Elec::ConsumerParams const &);

    // RVA: 0x16E3 | Ordinal: 5860
        void setElecConsumParamsFromState(class Lua::Config &, char const *);

    // RVA: 0x18F9 | Ordinal: 6394
        void set_only_brightness(float);

    // RVA: 0x18FB | Ordinal: 6396
        void set_only_power(bool);

    // RVA: 0x1B04 | Ordinal: 6917
        void update(class cockpit::ccMainPanel *);

    // RVA: 0x3B9 | Ordinal: 954
        void _light_arg_controller(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_LIGHT_ARG_CONTROLLER_HPP
