#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lVirtualTextureIndexFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class lVirtualTextureIndexFile
{
public:

    // RVA: 0x4A | Ordinal: 75
        void lVirtualTextureIndexFile(void);

    // RVA: 0x49C | Ordinal: 1181
        void load(class io::MmfStream &);

    // RVA: 0x556 | Ordinal: 1367
        void save(class ed::basic_string<char> const &);

    // RVA: 0x564 | Ordinal: 1381
        void serialize(class io::Stream &);

    // RVA: 0x6D | Ordinal: 110
        void _lVirtualTextureIndexFile(void);
};

// DCS_OPS_RE_EDTERRAIN4.DLL_LVIRTUALTEXTUREINDEXFILE_HPP
