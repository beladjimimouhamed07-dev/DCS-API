#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avPadlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avPadlock
{
public:

    // RVA: 0x891 | Ordinal: 2194
        void SetCommand(int, float);

    // RVA: 0x931 | Ordinal: 2354
        void aircraft_handler(class viObject *, class viSearch *, void *);

    // RVA: 0x172 | Ordinal: 371
        void avPadlock(class cockpit::avPadlock const &);

    // RVA: 0x173 | Ordinal: 372
        void avPadlock(void);

    // RVA: 0xFA9 | Ordinal: 4010
        void get_lock_point(void) const;

    // RVA: 0xFAA | Ordinal: 4011
        void get_lock_time(void) const;

    // RVA: 0xFD1 | Ordinal: 4050
        void get_mode(void) const;

    // RVA: 0xFE7 | Ordinal: 4072
        void get_objects_lock(void) const;

    // RVA: 0x1019 | Ordinal: 4122
        void get_polar_position(void) const;

    // RVA: 0x1027 | Ordinal: 4136
        void get_preferred_target_ID(void) const;

    // RVA: 0x10BA | Ordinal: 4283
        void get_target_ID(void) const;

    // RVA: 0x11D9 | Ordinal: 4570
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1237 | Ordinal: 4664
        void insert_target(class MovingObject *);

    // RVA: 0x13B9 | Ordinal: 5050
        void lock_ground(float, float);

    // RVA: 0x13BB | Ordinal: 5052
        void lock_object(float, float, bool (__cdecl *)(class viObject *, class viSearch *, void *));

    // RVA: 0x1408 | Ordinal: 5129
        void missile_handler(class viObject *, class viSearch *, void *);

    // RVA: 0x15BE | Ordinal: 5567
        void release(void);

    // RVA: 0x18F6 | Ordinal: 6391
        void set_objects_lock(unsigned int);

    // RVA: 0x190F | Ordinal: 6416
        void set_preferred_target_ID(unsigned int);

    // RVA: 0x19E8 | Ordinal: 6633
        void start_tracking(unsigned int, float, float);

    // RVA: 0x1A2D | Ordinal: 6702
        void technics_handler(class viObject *, class viSearch *, void *);

    // RVA: 0x1A7B | Ordinal: 6780
        void unlock(void);

    // RVA: 0x1AC7 | Ordinal: 6856
        void update(void);

    // RVA: 0x331 | Ordinal: 818
        void _avPadlock(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVPADLOCK_HPP
