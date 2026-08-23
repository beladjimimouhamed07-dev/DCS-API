#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avVOR
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avVOR
{
public:

    // RVA: 0x1DC | Ordinal: 477
        void avVOR(double);

    // RVA: 0xDF9 | Ordinal: 3578
        void getSoundElement(void);

    // RVA: 0xE5E | Ordinal: 3679
        void get_FROM_flag(void) const;

    // RVA: 0xE7E | Ordinal: 3711
        void get_TO_flag(void) const;

    // RVA: 0xEBB | Ordinal: 3772
        void get_bearing(void) const;

    // RVA: 0xEBC | Ordinal: 3773
        void get_bearing_valid(void) const;

    // RVA: 0xF15 | Ordinal: 3862
        void get_deviation(void) const;

    // RVA: 0x1207 | Ordinal: 4616
        void initialize(char const *, class Lua::Config &);

    // RVA: 0x15CE | Ordinal: 5583
        void release(void);

    // RVA: 0x181A | Ordinal: 6171
        void set_antenna_damage(bool);

    // RVA: 0x1896 | Ordinal: 6295
        void set_frequency(double);

    // RVA: 0x18F7 | Ordinal: 6392
        void set_obs(float);

    // RVA: 0x18F8 | Ordinal: 6393
        void set_on_off(bool);

    // RVA: 0x1988 | Ordinal: 6537
        void simulate(void);

    // RVA: 0x36C | Ordinal: 877
        void _avVOR(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVVOR_HPP
