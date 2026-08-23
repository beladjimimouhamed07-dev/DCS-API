#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: ModelAliasFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace export4 {

class ModelAliasFile
{
public:

    // RVA: 0x13 | Ordinal: 20
        void ModelAliasFile(class export4::ModelAliasFile &&);

    // RVA: 0x14 | Ordinal: 21
        void ModelAliasFile(class export4::ModelAliasFile const &);

    // RVA: 0x15 | Ordinal: 22
        void ModelAliasFile(void);

    // RVA: 0x38C | Ordinal: 909
        void getResolveAlias(class ed::basic_string<char> const &);

    // RVA: 0x4CA | Ordinal: 1227
        void open(class ed::basic_string<char> const &);

    // RVA: 0x55 | Ordinal: 86
        void _ModelAliasFile(void);
};

} // namespace export4

// DCS_OPS_RE_EDTERRAIN4.DLL_MODELALIASFILE_HPP
