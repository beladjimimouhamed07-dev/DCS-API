#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Terrain.dll
// Class: lShelter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class lShelter
{
public:

    // RVA: 0x48 | Ordinal: 73
        void Close(float);

    // RVA: 0x62 | Ordinal: 99
        void IsOpen(void) const;

    // RVA: 0x64 | Ordinal: 101
        void Open(float);

    // RVA: 0x6D | Ordinal: 110
        void findUniqueLook(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>);
};

// DCS_OPS_RE_TERRAIN.DLL_LSHELTER_HPP
