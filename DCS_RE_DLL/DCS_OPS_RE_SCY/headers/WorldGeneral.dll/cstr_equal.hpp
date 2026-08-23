#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: cstr_equal>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class cstr_equal_
{
public:

    // RVA: 0x601 | Ordinal: 1538
        void add(char const *const &, class AI::TaskState * (__cdecl *const &)(class AI::Task *, class AI::Controller *));

    // RVA: 0x602 | Ordinal: 1539
        void add(char const *const &, class AI::CommandExecutor *const &);

    // RVA: 0x7BE | Ordinal: 1983
        void get(char const *const &) const)(class AI::Task *, class AI::Controller *);

    // RVA: 0x7BF | Ordinal: 1984
        void get(char const *const &) const;

    // RVA: 0x98F | Ordinal: 2448
        void instance(void);
};

} // namespace ed

// DCS_OPS_RE_WORLDGENERAL.DLL_CSTR_EQUAL_HPP
