#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avA11Clock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avA11Clock
{
public:

    // RVA: 0x866 | Ordinal: 2151
        void SetCommand(int, float);

    // RVA: 0xA7 | Ordinal: 168
        void avA11Clock(class cockpit::avA11Clock const &);

    // RVA: 0xA8 | Ordinal: 169
        void avA11Clock(void);

    // RVA: 0xA2E | Ordinal: 2607
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xEFC | Ordinal: 3837
        void get_currtime_seconds(void) const;

    // RVA: 0x1190 | Ordinal: 4497
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14C6 | Ordinal: 5319
        void post_initialize(void);

    // RVA: 0x15EC | Ordinal: 5613
        void repair(void);

    // RVA: 0x184F | Ordinal: 6224
        void set_damage(unsigned int, bool);

    // RVA: 0x1A8F | Ordinal: 6800
        void update(void);

    // RVA: 0x2CB | Ordinal: 716
        void _avA11Clock(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVA11CLOCK_HPP
