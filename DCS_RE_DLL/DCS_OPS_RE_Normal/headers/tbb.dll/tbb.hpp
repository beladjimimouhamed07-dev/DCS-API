#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: tbb
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class tbb
{
public:

    // RVA: 0x20 | Ordinal: 33
        void assertion_failure(char const *, int, char const *, char const *);

    // RVA: 0xCD | Ordinal: 206
        void set_assertion_handler(void (__cdecl *)(char const *, int, char const *, char const *)))(char const *, int, char const *, char const *);
};

// DCS_OPS_RE_TBB.DLL_TBB_HPP
