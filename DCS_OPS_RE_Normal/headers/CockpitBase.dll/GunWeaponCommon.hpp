#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: GunWeaponCommon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class GunWeaponCommon
{
public:

    // RVA: 0x55 | Ordinal: 86
        void GunWeaponCommon(class cockpit::GunWeaponCommon const &);

    // RVA: 0x56 | Ordinal: 87
        void GunWeaponCommon(class ed::basic_string<char> const &, char);

    // RVA: 0xB46 | Ordinal: 2887
        void create_gun_mount_data(char, char, double);

    // RVA: 0xB66 | Ordinal: 2919
        void delete_gun_mount_data(char);

    // RVA: 0xB67 | Ordinal: 2920
        void delete_gun_mount_data(char, char);

    // RVA: 0xEA9 | Ordinal: 3754
        void get_atmo_temperature(void) const;

    // RVA: 0xF5D | Ordinal: 3934
        void get_gun_id(char, char) const;

    // RVA: 0xF5F | Ordinal: 3936
        void get_gun_mount(char, char);

    // RVA: 0x110E | Ordinal: 4367
        void gun_mount_data_exist(char, char) const;

    // RVA: 0x110F | Ordinal: 4368
        void gun_temp(char, char);

    // RVA: 0x1189 | Ordinal: 4490
        void initialize(void);

    // RVA: 0x159C | Ordinal: 5533
        void release(void);

    // RVA: 0x187F | Ordinal: 6272
        void set_electric_heater(class EagleFM::Elec::ItemBase *, char, char);

    // RVA: 0x1B6A | Ordinal: 7019
        void update_gun_mount_data(void);

    // RVA: 0x1B6F | Ordinal: 7024
        void update_heat_exchange(void);

    // RVA: 0x2A9 | Ordinal: 682
        void _GunWeaponCommon(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_GUNWEAPONCOMMON_HPP
