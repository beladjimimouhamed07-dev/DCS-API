#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: ConsoleArgs
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class ConsoleArgs
{
public:

    // RVA: 0x43 | Ordinal: 68
        void ConsoleArgs(class ed::ConsoleArgs &&);

    // RVA: 0x44 | Ordinal: 69
        void ConsoleArgs(class ed::ConsoleArgs const &);

    // RVA: 0x45 | Ordinal: 70
        void ConsoleArgs(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x46 | Ordinal: 71
        void ConsoleArgs(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x47 | Ordinal: 72
        void ConsoleArgs(class ed::basic_string<char> const &);

    // RVA: 0x48 | Ordinal: 73
        void ConsoleArgs(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x49 | Ordinal: 74
        void ConsoleArgs(int, char **const);

    // RVA: 0x4A | Ordinal: 75
        void ConsoleArgs(void);

    // RVA: 0x199 | Ordinal: 410
        void defined(class ed::basic_string<char> const &) const;

    // RVA: 0x1A8 | Ordinal: 425
        void dump(void) const;

    // RVA: 0x1E2 | Ordinal: 483
        void getAllValues(class ed::basic_string<char> const &) const;

    // RVA: 0x1E3 | Ordinal: 484
        void getAllValues(void) const;

    // RVA: 0x203 | Ordinal: 516
        void getOptionalDouble(class ed::basic_string<char> const &, double &) const;

    // RVA: 0x204 | Ordinal: 517
        void getOptionalDouble(class ed::basic_string<char> const &, double &, double) const;

    // RVA: 0x205 | Ordinal: 518
        void getOptionalInt(class ed::basic_string<char> const &, int &) const;

    // RVA: 0x206 | Ordinal: 519
        void getOptionalInt(class ed::basic_string<char> const &, int &, int) const;

    // RVA: 0x207 | Ordinal: 520
        void getOptionalString(class ed::basic_string<char> const &, class ed::basic_string<char> &) const;

    // RVA: 0x24C | Ordinal: 589
        void indexOf(class ed::basic_string<char> const &) const;

    // RVA: 0x24E | Ordinal: 591
        void init(void);

    // RVA: 0x2ED | Ordinal: 750
        void pop(void);

    // RVA: 0x341 | Ordinal: 834
        void removeKey(class ed::basic_string<char> const &);

    // RVA: 0x3A9 | Ordinal: 938
        void size(void) const;

    // RVA: 0xB1 | Ordinal: 178
        void _ConsoleArgs(void);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_CONSOLEARGS_HPP
