#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: wsBasicTerminal
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wsBasicTerminal
{
public:

    // RVA: 0xE4 | Ordinal: 229
        void acquire(unsigned int);

    // RVA: 0xE5 | Ordinal: 230
        void acquire(unsigned int, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x162 | Ordinal: 355
        void free(void);

    // RVA: 0x204 | Ordinal: 517
        void get_acquire_order(void) const;

    // RVA: 0x205 | Ordinal: 518
        void get_acquired_miss_id(void) const;

    // RVA: 0x206 | Ordinal: 519
        void get_acquired_object(void) const;

    // RVA: 0x207 | Ordinal: 520
        void get_acquired_object_miss_id(void) const;

    // RVA: 0x20B | Ordinal: 524
        void get_client_id(void) const;

    // RVA: 0x221 | Ordinal: 546
        void get_type_of_acquired(void) const;

    // RVA: 0x259 | Ordinal: 602
        void is_acquired_by(class ed::basic_string<char> const &) const;

    // RVA: 0x25A | Ordinal: 603
        void is_acquired_by(unsigned int) const;

    // RVA: 0x25D | Ordinal: 606
        void is_free(void) const;

    // RVA: 0x25E | Ordinal: 607
        void is_free_for_me(class ed::basic_string<char> const &) const;

    // RVA: 0x25F | Ordinal: 608
        void is_free_for_me(unsigned int) const;

    // RVA: 0x291 | Ordinal: 658
        void owner_completely_dead_or_not_exist(void) const;

    // RVA: 0x31D | Ordinal: 798
        void set_acquire_order(int);

    // RVA: 0x347 | Ordinal: 840
        void wait_for_objects_spawn(bool);

    // RVA: 0x28 | Ordinal: 41
        void wsBasicTerminal(class wsBasicTerminal const &);

    // RVA: 0x29 | Ordinal: 42
        void wsBasicTerminal(void);

    // RVA: 0x3F | Ordinal: 64
        void _wsBasicTerminal(void);
};

// DCS_OPS_RE_FLIGHT.DLL_WSBASICTERMINAL_HPP
