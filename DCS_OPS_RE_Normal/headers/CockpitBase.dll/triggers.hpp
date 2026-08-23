#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: triggers
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class triggers
{
public:

    // RVA: 0xAE6 | Ordinal: 2791
        void compare_parameters(void *, void *);

    // RVA: 0xFF1 | Ordinal: 4082
        void get_parameter_handle(char const *);

    // RVA: 0x1126 | Ordinal: 4391
        void highlight_clickable(class cockpit::ccCockpitContext *, unsigned int, char const *);

    // RVA: 0x1127 | Ordinal: 4392
        void highlight_new(void);

    // RVA: 0x1128 | Ordinal: 4393
        void highlight_remove(unsigned int);

    // RVA: 0x1129 | Ordinal: 4394
        void highlight_visible(unsigned int);

    // RVA: 0x1495 | Ordinal: 5270
        void parameter_get_numeric_value(void const *);

    // RVA: 0x1496 | Ordinal: 5271
        void parameter_get_string_value(void const *);

    // RVA: 0x1498 | Ordinal: 5273
        void parameter_is_string(void const *);

    // RVA: 0x1499 | Ordinal: 5274
        void parameter_value(void const *, double &, bool);

    // RVA: 0x149A | Ordinal: 5275
        void parameter_value(void const *, class ed::basic_string<char> &);

    // RVA: 0x149B | Ordinal: 5276
        void parameter_value(void const *, char *, unsigned int);

    // RVA: 0x154F | Ordinal: 5456
        void push_parameter_to_state(struct lua_State *, char const *);

    // RVA: 0x1B76 | Ordinal: 7031
        void update_parameter(void *, double);

    // RVA: 0x1B77 | Ordinal: 7032
        void update_parameter(void *, char const *);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_TRIGGERS_HPP
