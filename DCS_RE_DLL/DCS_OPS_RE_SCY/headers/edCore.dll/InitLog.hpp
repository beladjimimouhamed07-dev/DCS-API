#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: InitLog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {
namespace core {

class InitLog
{
public:

    // RVA: 0x67 | Ordinal: 104
        void InitLog(char const *, char const *, int, int);

    // RVA: 0x254 | Ordinal: 597
        void init(void);

    // RVA: 0x2B1 | Ordinal: 690
        void name(void) const;

    // RVA: 0xBE | Ordinal: 191
        void _InitLog(void);
};

} // namespace core
} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_INITLOG_HPP
