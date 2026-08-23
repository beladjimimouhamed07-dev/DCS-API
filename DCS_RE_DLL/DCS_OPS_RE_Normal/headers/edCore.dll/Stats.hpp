#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Stats
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Mail {

class Stats
{
public:

    // RVA: 0x2A3 | Ordinal: 676
        void merge(struct Mail::Stats const &);

    // RVA: 0x35D | Ordinal: 862
        void reset(void);

    // RVA: 0x3F4 | Ordinal: 1013
        void update(unsigned __int64, double, bool, double);
};

} // namespace Mail

// DCS_OPS_RE_EDCORE.DLL_STATS_HPP
