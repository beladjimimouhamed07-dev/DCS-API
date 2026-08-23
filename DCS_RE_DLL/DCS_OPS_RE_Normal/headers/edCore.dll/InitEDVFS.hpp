#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: InitEDVFS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {
namespace core {

class InitEDVFS
{
public:

    // RVA: 0x66 | Ordinal: 103
        void InitEDVFS(bool (__cdecl *)(char const *, void *), void *);

    // RVA: 0x253 | Ordinal: 596
        void init(void);

    // RVA: 0x2B0 | Ordinal: 689
        void name(void) const;

    // RVA: 0xBD | Ordinal: 190
        void _InitEDVFS(void);
};

} // namespace core
} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_INITEDVFS_HPP
