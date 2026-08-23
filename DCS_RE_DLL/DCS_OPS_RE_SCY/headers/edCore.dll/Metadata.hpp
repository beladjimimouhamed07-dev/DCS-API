#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Metadata
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edvfs {

class Metadata
{
public:

    // RVA: 0x1FA | Ordinal: 507
        void getMetadata(class edvfs::Metadata const *, char const *, double &);

    // RVA: 0x1FB | Ordinal: 508
        void getMetadata(class edvfs::Metadata const *, char const *, __int64 &);

    // RVA: 0x1FC | Ordinal: 509
        void getMetadata(class edvfs::Metadata const *, char const *, char const **);

    // RVA: 0x278 | Ordinal: 633
        void isValueExist(char const *, class std::unordered_map<class ed::basic_string<char>, struct edvfs::Value, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, struct edvfs::Value>>> const &);

    // RVA: 0x2D2 | Ordinal: 723
        void parseMetafile(char const *, class std::unordered_map<class ed::basic_string<char>, class edvfs::Metadata, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class edvfs::Metadata>>> &);
};

} // namespace edvfs

// DCS_OPS_RE_EDCORE.DLL_METADATA_HPP
