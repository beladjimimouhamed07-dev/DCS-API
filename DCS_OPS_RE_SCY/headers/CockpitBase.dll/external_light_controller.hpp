#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: external_light_controller
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class external_light_controller
{
public:

    // RVA: 0xAF2 | Ordinal: 2803
        void connect(class EagleFM::Elec::ItemBase &);

    // RVA: 0x266 | Ordinal: 615
        void external_light_controller(class cockpit::external_light_controller &&);

    // RVA: 0x267 | Ordinal: 616
        void external_light_controller(class cockpit::external_light_controller const &);

    // RVA: 0x268 | Ordinal: 617
        void external_light_controller(void);

    // RVA: 0x16DE | Ordinal: 5855
        void setElecConsumParams(class EagleFM::Elec::ConsumerParams const &);

    // RVA: 0x16E1 | Ordinal: 5858
        void setElecConsumParamsFromState(class Lua::Config &, char const *);

    // RVA: 0x16E4 | Ordinal: 5861
        void setElecLampParams(class EagleFM::Elec::LampParams const &);

    // RVA: 0x16E5 | Ordinal: 5862
        void setElecLampParamsFromState(class Lua::Config &, char const *);

    // RVA: 0x1875 | Ordinal: 6262
        void set_dimmed_brightness(double);

    // RVA: 0x1876 | Ordinal: 6263
        void set_dimmed_brightness_mode(bool);

    // RVA: 0x18E7 | Ordinal: 6376
        void set_mode(int);

    // RVA: 0x18F3 | Ordinal: 6388
        void set_normal_brightness(double);

    // RVA: 0x18FA | Ordinal: 6395
        void set_only_power(bool);

    // RVA: 0x194B | Ordinal: 6476
        void set_target(class plane_lights::woLA_LightCollection *, unsigned int);

    // RVA: 0x1B01 | Ordinal: 6914
        void update(double);

    // RVA: 0x3B0 | Ordinal: 945
        void _external_light_controller(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_EXTERNAL_LIGHT_CONTROLLER_HPP
