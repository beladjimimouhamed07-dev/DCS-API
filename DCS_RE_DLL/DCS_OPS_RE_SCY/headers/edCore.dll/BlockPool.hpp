#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: BlockPool
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class BlockPool
{
public:

    // RVA: 0x39 | Ordinal: 58
        void BlockPool(unsigned __int64, unsigned __int64, char const *, unsigned __int64);

    // RVA: 0x151 | Ordinal: 338
        void alloc(void);

    // RVA: 0x169 | Ordinal: 362
        void clear(void);

    // RVA: 0x1CB | Ordinal: 460
        void free(void *);

    // RVA: 0x3E0 | Ordinal: 993
        void try_alloc(void);

    // RVA: 0xAB | Ordinal: 172
        void _BlockPool(void);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_BLOCKPOOL_HPP
