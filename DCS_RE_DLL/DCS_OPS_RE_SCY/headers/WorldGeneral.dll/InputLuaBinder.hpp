#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: InputLuaBinder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class InputLuaBinder
{
public:

    // RVA: 0x722 | Ordinal: 1827
        void create(struct lua_State *);

    // RVA: 0x752 | Ordinal: 1875
        void createLayerAndSetOnTop(class ed::basic_string<char> const &, char const *);

    // RVA: 0x755 | Ordinal: 1878
        void createUnitLayerAndSetOnTop(class ed::basic_string<char> const &, char const *);

    // RVA: 0x767 | Ordinal: 1896
        void destroy(void);

    // RVA: 0x7C1 | Ordinal: 1986
        void get(void);

    // RVA: 0xA53 | Ordinal: 2644
        void loadUnitLayer(class ed::basic_string<char> const &, char const *);

    // RVA: 0xB66 | Ordinal: 2919
        void removeLayer(class ed::basic_string<char> const &);

    // RVA: 0xB6C | Ordinal: 2925
        void removeUnitLayer(class ed::basic_string<char> const &);

    // RVA: 0xC2E | Ordinal: 3119
        void tryGetProfilePath(class std::basic_string_view<char, struct std::char_traits<char>>);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_INPUTLUABINDER_HPP
