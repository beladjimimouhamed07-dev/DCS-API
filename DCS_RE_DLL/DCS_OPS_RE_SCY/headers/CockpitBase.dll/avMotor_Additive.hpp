#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avMotor_Additive
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avMotor_Additive
{
public:

    // RVA: 0x8EF | Ordinal: 2288
        void active(void) const;

    // RVA: 0x160 | Ordinal: 353
        void avMotor_Additive(void);

    // RVA: 0xABB | Ordinal: 2748
        void clear(void);

    // RVA: 0xC2D | Ordinal: 3118
        void get(double);

    // RVA: 0xC2E | Ordinal: 3119
        void get(void) const;

    // RVA: 0xEB7 | Ordinal: 3768
        void get_base(void) const;

    // RVA: 0x10B0 | Ordinal: 4273
        void get_step(double);

    // RVA: 0x10E8 | Ordinal: 4329
        void get_velocity(void) const;

    // RVA: 0x1631 | Ordinal: 5682
        void reset_output(void);

    // RVA: 0x168A | Ordinal: 5771
        void set(bool, double);

    // RVA: 0x1813 | Ordinal: 6164
        void set_acceleration(double);

    // RVA: 0x182B | Ordinal: 6188
        void set_base(double);

    // RVA: 0x1969 | Ordinal: 6506
        void set_velocity(double, bool);

    // RVA: 0x329 | Ordinal: 810
        void _avMotor_Additive(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVMOTOR_ADDITIVE_HPP
