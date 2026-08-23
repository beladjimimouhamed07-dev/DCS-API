#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Database
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {
namespace SQLite3 {

class Database
{
public:

    // RVA: 0x165 | Ordinal: 358
        void changes(void);

    // RVA: 0x171 | Ordinal: 370
        void close(void);

    // RVA: 0x1B3 | Ordinal: 436
        void exec(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x286 | Ordinal: 647
        void last_insert_rowid(void);

    // RVA: 0x2C8 | Ordinal: 713
        void open(char const *);

    // RVA: 0x3E1 | Ordinal: 994
        void try_create_table(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>);
};

} // namespace SQLite3
} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_DATABASE_HPP
