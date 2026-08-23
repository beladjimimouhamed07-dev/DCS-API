#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: core
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class core
{
public:

    // RVA: 0x39A | Ordinal: 923
        void set_crash_report_mode(enum CrashInfo::Mode);

    // RVA: 0x39B | Ordinal: 924
        void set_crash_report_pdb_path(char const *);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_CORE_HPP
