#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avMk8GunSight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avMk8GunSight
{
public:

    // RVA: 0xC5 | Ordinal: 198
        void avMk8GunSight(class cockpit::dcswwii::avMk8GunSight const &);

    // RVA: 0xC6 | Ordinal: 199
        void avMk8GunSight(void);

    // RVA: 0x30A | Ordinal: 779
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x3B1 | Ordinal: 946
        void getReticleBrightness(bool) const;

    // RVA: 0x3E2 | Ordinal: 995
        void get_mode(void) const;

    // RVA: 0x3EB | Ordinal: 1004
        void get_sideslip(void) const;

    // RVA: 0x42A | Ordinal: 1067
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x4C3 | Ordinal: 1220
        void post_initialize(void);

    // RVA: 0x51F | Ordinal: 1312
        void repair(void);

    // RVA: 0x5BA | Ordinal: 1467
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x5C2 | Ordinal: 1475
        void set_mode(struct cockpit::Device_Mode const &);

    // RVA: 0x632 | Ordinal: 1587
        void update(void);

    // RVA: 0x13C | Ordinal: 317
        void _avMk8GunSight(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVMK8GUNSIGHT_HPP
