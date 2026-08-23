#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: easy_profiler.dll
// Class: ArbitraryValue
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace profiler {

class ArbitraryValue
{
public:

    // RVA: 0x0 | Ordinal: 1
        void ArbitraryValue(unsigned __int64, unsigned __int64, unsigned int, unsigned short, enum profiler::DataType, bool);

    // RVA: 0x28 | Ordinal: 41
        void data(void) const;

    // RVA: 0x2E | Ordinal: 47
        void data_size(void) const;

    // RVA: 0x3B | Ordinal: 60
        void isArray(void) const;

    // RVA: 0x56 | Ordinal: 87
        void type(void) const;

    // RVA: 0x58 | Ordinal: 89
        void value_id(void) const;
};

} // namespace profiler

// DCS_OPS_RE_EASY_PROFILER.DLL_ARBITRARYVALUE_HPP
