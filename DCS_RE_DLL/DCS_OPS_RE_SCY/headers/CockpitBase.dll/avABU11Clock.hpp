#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avABU11Clock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avABU11Clock
{
public:

    // RVA: 0x867 | Ordinal: 2152
        void SetCommand(int, float);

    // RVA: 0xAB | Ordinal: 172
        void avABU11Clock(class cockpit::avABU11Clock const &);

    // RVA: 0xAC | Ordinal: 173
        void avABU11Clock(void);

    // RVA: 0xA22 | Ordinal: 2595
        void change_timer_state(bool &, bool &);

    // RVA: 0xA2F | Ordinal: 2608
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xEFA | Ordinal: 3835
        void get_currtime(int) const;

    // RVA: 0xF28 | Ordinal: 3881
        void get_elapsedtime(int) const;

    // RVA: 0x1192 | Ordinal: 4499
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14C7 | Ordinal: 5320
        void post_initialize(void);

    // RVA: 0x15ED | Ordinal: 5614
        void repair(void);

    // RVA: 0x1850 | Ordinal: 6225
        void set_damage(unsigned int, bool);

    // RVA: 0x1A90 | Ordinal: 6801
        void update(void);

    // RVA: 0x2CD | Ordinal: 718
        void _avABU11Clock(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVABU11CLOCK_HPP
