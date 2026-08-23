#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: arcade_target
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class arcade_target
{
public:

    // RVA: 0xA4 | Ordinal: 165
        void arcade_target(class cockpit::arcade_target const &);

    // RVA: 0xA5 | Ordinal: 166
        void arcade_target(unsigned int);

    // RVA: 0xA6 | Ordinal: 167
        void arcade_target(void);

    // RVA: 0xEF0 | Ordinal: 3825
        void get_course(void) const;

    // RVA: 0x100E | Ordinal: 4111
        void get_point(double) const;

    // RVA: 0x101A | Ordinal: 4123
        void get_position(double) const;

    // RVA: 0x1A8E | Ordinal: 6799
        void update(void);

    // RVA: 0x2CA | Ordinal: 715
        void _arcade_target(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_ARCADE_TARGET_HPP
