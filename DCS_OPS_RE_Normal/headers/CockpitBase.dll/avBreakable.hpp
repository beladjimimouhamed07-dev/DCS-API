#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avBreakable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avBreakable
{
public:

    // RVA: 0x91A | Ordinal: 2331
        void add_failure_timer(unsigned int const &, double const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0xE4 | Ordinal: 229
        void avBreakable(class cockpit::avBreakable const &);

    // RVA: 0xE5 | Ordinal: 230
        void avBreakable(void);

    // RVA: 0xA6D | Ordinal: 2670
        void check_damage(unsigned int, double, struct cockpit::avDamageData &);

    // RVA: 0xB33 | Ordinal: 2868
        void createHumanFailureEvent(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0xF05 | Ordinal: 3846
        void get_damage_capable_list(void);

    // RVA: 0x10FE | Ordinal: 4351
        void getflag_failure(void) const;

    // RVA: 0x1100 | Ordinal: 4353
        void getflag_ready(void) const;

    // RVA: 0x13B2 | Ordinal: 5043
        void load_from_state(struct lua_State *);

    // RVA: 0x1476 | Ordinal: 5239
        void on_planned_failure(class ed::basic_string<char> const &, double, double, double);

    // RVA: 0x1480 | Ordinal: 5249
        void on_timer_event(unsigned int, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1527 | Ordinal: 5416
        void process_damage(unsigned int, double);

    // RVA: 0x158A | Ordinal: 5515
        void register_as_breakable(void);

    // RVA: 0x15DA | Ordinal: 5595
        void release_work_time_failures(void);

    // RVA: 0x15F4 | Ordinal: 5621
        void repair(void);

    // RVA: 0x1857 | Ordinal: 6232
        void set_damage(unsigned int, bool);

    // RVA: 0x1886 | Ordinal: 6279
        void set_failure(unsigned int);

    // RVA: 0x1887 | Ordinal: 6280
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x1973 | Ordinal: 6516
        void setflag_failure(bool);

    // RVA: 0x1975 | Ordinal: 6518
        void setflag_ready(bool);

    // RVA: 0x19F1 | Ordinal: 6642
        void start_work_time_failures(void);

    // RVA: 0x1A7F | Ordinal: 6784
        void unregister_as_breakable(void);

    // RVA: 0x2EE | Ordinal: 751
        void _avBreakable(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVBREAKABLE_HPP
