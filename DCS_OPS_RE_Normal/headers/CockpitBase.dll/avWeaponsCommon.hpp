#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avWeaponsCommon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avWeaponsCommon
{
public:

    // RVA: 0xA85 | Ordinal: 2694
        void check_sight(class wsType const &, class cockpit::SightDevice **const);

    // RVA: 0xA86 | Ordinal: 2695
        void check_sight(class cockpit::SightDevice **const);

    // RVA: 0xC02 | Ordinal: 3075
        void fire_cannon(bool, int, bool);

    // RVA: 0xC03 | Ordinal: 3076
        void fire_cannon(bool, unsigned int, int, bool);

    // RVA: 0xC04 | Ordinal: 3077
        void fire_gunpods(bool);

    // RVA: 0xC05 | Ordinal: 3078
        void fire_gunpods(bool, class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0xC06 | Ordinal: 3079
        void fire_multigun_gunpod(bool, int, class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0xF60 | Ordinal: 3937
        void get_gun_mount_by_wpn_type(class wsType const &, signed char);

    // RVA: 0x138D | Ordinal: 5006
        void launch_weapon(bool);

    // RVA: 0x18A5 | Ordinal: 6310
        void set_gun_failure(unsigned int, bool);

    // RVA: 0x18A6 | Ordinal: 6311
        void set_gun_mount_failure(char, bool, float, float);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVWEAPONSCOMMON_HPP
