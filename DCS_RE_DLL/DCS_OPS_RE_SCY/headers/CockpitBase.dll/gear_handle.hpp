#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: gear_handle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class gear_handle
{
public:

    // RVA: 0xADB | Ordinal: 2780
        void command(bool);

    // RVA: 0xB03 | Ordinal: 2820
        void connect_electric(class EagleFM::Elec::ItemBase &, class EagleFM::Elec::Wire &, class EagleFM::Elec::Wire &);

    // RVA: 0xC0F | Ordinal: 3088
        void force(bool);

    // RVA: 0x27D | Ordinal: 638
        void gear_handle(class cockpit::gear_handle const &);

    // RVA: 0x27E | Ordinal: 639
        void gear_handle(void);

    // RVA: 0xEA1 | Ordinal: 3746
        void get_animation_value(void) const;

    // RVA: 0xEE5 | Ordinal: 3814
        void get_commanded_pos(void) const;

    // RVA: 0x1B03 | Ordinal: 6916
        void update(double);

    // RVA: 0x3B8 | Ordinal: 953
        void _gear_handle(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_GEAR_HANDLE_HPP
