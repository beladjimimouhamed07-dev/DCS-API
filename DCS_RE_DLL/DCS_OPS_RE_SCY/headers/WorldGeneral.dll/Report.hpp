#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Report
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Report
{
public:

    // RVA: 0x14D | Ordinal: 334
        void Report(class AI::Report &&);

    // RVA: 0x14E | Ordinal: 335
        void Report(class AI::Report const &);

    // RVA: 0x14F | Ordinal: 336
        void Report(void);

    // RVA: 0x6C0 | Ordinal: 1729
        void clone(void) const;

    // RVA: 0x731 | Ordinal: 1842
        void create(void);

    // RVA: 0x8AC | Ordinal: 2221
        void getName(void) const;

    // RVA: 0xA2F | Ordinal: 2608
        void load(class Lua::Config &);

    // RVA: 0xAEA | Ordinal: 2795
        void params(void) const;

    // RVA: 0x29D | Ordinal: 670
        void _Report(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_REPORT_HPP
