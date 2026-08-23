#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: captured_exception
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {

class captured_exception
{
public:

    // RVA: 0x28 | Ordinal: 41
        void clear(void);

    // RVA: 0x2C | Ordinal: 45
        void destroy(void);

    // RVA: 0xBB | Ordinal: 188
        void move(void);

    // RVA: 0xBE | Ordinal: 191
        void name(void) const;

    // RVA: 0xCC | Ordinal: 205
        void set(char const *, char const *);

    // RVA: 0xDF | Ordinal: 224
        void what(void) const;

    // RVA: 0x6 | Ordinal: 7
        void _captured_exception(void);
};

} // namespace tbb

// DCS_OPS_RE_TBB.DLL_CAPTURED_EXCEPTION_HPP
