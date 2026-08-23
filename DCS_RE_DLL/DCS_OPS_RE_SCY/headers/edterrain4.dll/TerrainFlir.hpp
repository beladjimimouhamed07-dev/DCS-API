#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: TerrainFlir
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class TerrainFlir
{
public:

    // RVA: 0x2DE | Ordinal: 735
        void getDefaultFlir(class ed::basic_string<char> const &);

    // RVA: 0x2E0 | Ordinal: 737
        void getDefaultModelFlir(void);

    // RVA: 0x406 | Ordinal: 1031
        void getTypeByName(class ed::basic_string<char> const &);

    // RVA: 0x407 | Ordinal: 1032
        void getTypeName(enum TerrainFlir::Type);
};

// DCS_OPS_RE_EDTERRAIN4.DLL_TERRAINFLIR_HPP
