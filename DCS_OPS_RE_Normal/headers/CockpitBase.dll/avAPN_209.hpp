#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avAPN_209
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avAPN_209
{
public:

    // RVA: 0x846 | Ordinal: 2119
        void OnPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x84B | Ordinal: 2124
        void OnPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x86D | Ordinal: 2158
        void SetCommand(int, float);

    // RVA: 0xBC | Ordinal: 189
        void avAPN_209(class cockpit::avAPN_209 const &);

    // RVA: 0xBD | Ordinal: 190
        void avAPN_209(void);

    // RVA: 0xA32 | Ordinal: 2611
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xE65 | Ordinal: 3686
        void get_HI_index(void) const;

    // RVA: 0xE66 | Ordinal: 3687
        void get_HI_lamp(void) const;

    // RVA: 0xE6C | Ordinal: 3693
        void get_LO_index(void) const;

    // RVA: 0xE6D | Ordinal: 3694
        void get_LO_lamp(void) const;

    // RVA: 0xE71 | Ordinal: 3698
        void get_OFF_flag(void) const;

    // RVA: 0xE9B | Ordinal: 3740
        void get_altitude_needle(void) const;

    // RVA: 0xF17 | Ordinal: 3864
        void get_digit(enum cockpit::avAPN_209::APN209_Digit) const;

    // RVA: 0x1199 | Ordinal: 4506
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14CD | Ordinal: 5326
        void post_initialize(void);

    // RVA: 0x15A6 | Ordinal: 5543
        void release(void);

    // RVA: 0x1A97 | Ordinal: 6808
        void update(void);

    // RVA: 0x2D6 | Ordinal: 727
        void _avAPN_209(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVAPN_209_HPP
