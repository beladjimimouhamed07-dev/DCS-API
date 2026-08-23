#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: IVFSandbox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edvfs {

class IVFSandbox
{
public:

    // RVA: 0x195 | Ordinal: 406
        void create_read_only(void);

    // RVA: 0x196 | Ordinal: 407
        void create_with_write_dir(char const *);

    // RVA: 0xBB | Ordinal: 188
        void _IVFSandbox(void);
};

} // namespace edvfs

// DCS_OPS_RE_EDCORE.DLL_IVFSANDBOX_HPP
