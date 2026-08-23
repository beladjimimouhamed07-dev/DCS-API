#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: easy_profiler.dll
// Class: BaseBlockData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace profiler {

class BaseBlockData
{
public:

    // RVA: 0x1 | Ordinal: 2
        void BaseBlockData(unsigned __int64, unsigned __int64, unsigned int);

    // RVA: 0x2 | Ordinal: 3
        void BaseBlockData(unsigned __int64, unsigned int);

    // RVA: 0x38 | Ordinal: 57
        void id(void) const;

    // RVA: 0x4A | Ordinal: 75
        void setId(unsigned int);
};

} // namespace profiler

// DCS_OPS_RE_EASY_PROFILER.DLL_BASEBLOCKDATA_HPP
