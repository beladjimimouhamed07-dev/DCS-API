#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Cursor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {
namespace SQLite3 {

class Cursor
{
public:

    // RVA: 0x15A | Ordinal: 347
        void bind(int, struct std::pair<void const *, unsigned __int64> const &);

    // RVA: 0x15B | Ordinal: 348
        void bind(int, int);

    // RVA: 0x15C | Ordinal: 349
        void bind(int, double);

    // RVA: 0x15D | Ordinal: 350
        void bind(int, class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x15E | Ordinal: 351
        void bind(int, class ed::SQLite3::Null);

    // RVA: 0x15F | Ordinal: 352
        void bind(int, __int64);

    // RVA: 0x173 | Ordinal: 372
        void column(int, int &);

    // RVA: 0x174 | Ordinal: 373
        void column(int, double &);

    // RVA: 0x175 | Ordinal: 374
        void column(int, class ed::Ptr<class edvfs::IBuffer, struct edvfs::IBuffer::Deleter> &);

    // RVA: 0x176 | Ordinal: 375
        void column(int, class ed::basic_string<char> &);

    // RVA: 0x177 | Ordinal: 376
        void column(int, __int64 &);

    // RVA: 0x178 | Ordinal: 377
        void column(int, class std::function<void __cdecl(void const *, unsigned __int64)>);

    // RVA: 0x1C0 | Ordinal: 449
        void finalize(void);

    // RVA: 0x2F1 | Ordinal: 754
        void prepare(class ed::SQLite3::Database &, class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x359 | Ordinal: 858
        void reset(void);

    // RVA: 0x3B2 | Ordinal: 947
        void step(void);
};

} // namespace SQLite3
} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_CURSOR_HPP
