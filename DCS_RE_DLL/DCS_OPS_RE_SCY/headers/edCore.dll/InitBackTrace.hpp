#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: InitBackTrace
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {
namespace core {

class InitBackTrace
{
public:

    // RVA: 0x65 | Ordinal: 102
        void InitBackTrace(char const *, void (__cdecl *)(struct CrashInfo), char const *, int);

    // RVA: 0x252 | Ordinal: 595
        void init(void);

    // RVA: 0x2AF | Ordinal: 688
        void name(void) const;

    // RVA: 0xBC | Ordinal: 189
        void _InitBackTrace(void);
};

} // namespace core
} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_INITBACKTRACE_HPP
