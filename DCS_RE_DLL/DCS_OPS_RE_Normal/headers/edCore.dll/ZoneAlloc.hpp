#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: ZoneAlloc
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class ZoneAlloc
{
public:

    // RVA: 0x95 | Ordinal: 150
        void ZoneAlloc(unsigned __int64, unsigned __int64, bool);

    // RVA: 0x16E | Ordinal: 367
        void clear(void);

    // RVA: 0x2B9 | Ordinal: 698
        void new_block(unsigned __int64);

    // RVA: 0xD5 | Ordinal: 214
        void _ZoneAlloc(void);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_ZONEALLOC_HPP
