#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avMotor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avMotor
{
public:

    // RVA: 0x15E | Ordinal: 351
        void avMotor(class cockpit::avMotor const &);

    // RVA: 0x15F | Ordinal: 352
        void avMotor(void);

    // RVA: 0xABA | Ordinal: 2747
        void clear(void);

    // RVA: 0xC0E | Ordinal: 3087
        void force(double);

    // RVA: 0xC14 | Ordinal: 3093
        void force_Pi(double &) const;

    // RVA: 0xC2C | Ordinal: 3117
        void get(void) const;

    // RVA: 0xF0A | Ordinal: 3851
        void get_default(void) const;

    // RVA: 0xF0E | Ordinal: 3855
        void get_default_velocity(void) const;

    // RVA: 0xF2E | Ordinal: 3887
        void get_error(double) const;

    // RVA: 0xFA4 | Ordinal: 4005
        void get_limit(void);

    // RVA: 0xFA5 | Ordinal: 4006
        void get_limit(void) const;

    // RVA: 0x10AF | Ordinal: 4272
        void get_step(double, double) const;

    // RVA: 0x10B9 | Ordinal: 4282
        void get_target(void) const;

    // RVA: 0x10E7 | Ordinal: 4328
        void get_velocity(void) const;

    // RVA: 0x148B | Ordinal: 5260
        void out(double, double, double) const;

    // RVA: 0x1632 | Ordinal: 5683
        void reset_target(void);

    // RVA: 0x1634 | Ordinal: 5685
        void reset_velocity(void);

    // RVA: 0x1638 | Ordinal: 5689
        void respat_to_maximum(void);

    // RVA: 0x1639 | Ordinal: 5690
        void respat_to_minimum(void);

    // RVA: 0x186A | Ordinal: 6251
        void set_default(double);

    // RVA: 0x186F | Ordinal: 6256
        void set_default_velocity(double);

    // RVA: 0x18C3 | Ordinal: 6340
        void set_limits(double, double);

    // RVA: 0x194A | Ordinal: 6475
        void set_target(double);

    // RVA: 0x1959 | Ordinal: 6490
        void set_unlimited(bool);

    // RVA: 0x1968 | Ordinal: 6505
        void set_velocity(double);

    // RVA: 0x19F2 | Ordinal: 6643
        void steady_state(void) const;

    // RVA: 0x19F9 | Ordinal: 6650
        void stop(void);

    // RVA: 0x1AC3 | Ordinal: 6852
        void update(double);

    // RVA: 0x1AC4 | Ordinal: 6853
        void update(double, double);

    // RVA: 0x328 | Ordinal: 809
        void _avMotor(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVMOTOR_HPP
