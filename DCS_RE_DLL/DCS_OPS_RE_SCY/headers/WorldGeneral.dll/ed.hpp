#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ed
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ed
{
public:

    // RVA: 0x5 | Ordinal: 6
        void cstr_equal_(void);

    // RVA: 0x6 | Ordinal: 7
        void cstr_equal_(class AI::Storage<char const *, class AI::TaskState * (__cdecl *)(class AI::Task *, class AI::Controller *), struct ed::cstr_hash, struct ed::cstr_equal> &&);

    // RVA: 0x7 | Ordinal: 8
        void cstr_equal_(class AI::Storage<char const *, class AI::TaskState * (__cdecl *)(class AI::Task *, class AI::Controller *), struct ed::cstr_hash, struct ed::cstr_equal> const &);

    // RVA: 0x9 | Ordinal: 10
        void cstr_equal_(class AI::Storage<char const *, class AI::CommandExecutor *, struct ed::cstr_hash, struct ed::cstr_equal> &&);

    // RVA: 0xA | Ordinal: 11
        void cstr_equal_(class AI::Storage<char const *, class AI::CommandExecutor *, struct ed::cstr_hash, struct ed::cstr_equal> const &);

    // RVA: 0x83E | Ordinal: 2111
        void getInstalledTheatres(class std::function<void __cdecl(class std::basic_string_view<char, struct std::char_traits<char>>)>);

    // RVA: 0x863 | Ordinal: 2148
        void getMissionTheatre(class std::basic_string_view<char, struct std::char_traits<char>>);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_ED_HPP
