#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: AdditionalData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace DumpHelper {

class AdditionalData
{
public:

    // RVA: 0x13F | Ordinal: 320
        void addGeometry(int, char const *, char const *, char const *, char const *, char const *, int);

    // RVA: 0x233 | Ordinal: 564
        void dumpMaterials(char const *, int, struct landscape5::lMaterialParamsArray const *, class std::function<void __cdecl(int, class std::map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> &)>);

    // RVA: 0x306 | Ordinal: 775
        void getItem(char const *);

    // RVA: 0x4A7 | Ordinal: 1192
        void loadFromLua(char const *, char const *);

    // RVA: 0x52B | Ordinal: 1324
        void renameItem(char const *, char const *);

    // RVA: 0x560 | Ordinal: 1377
        void saveToLua(char const *, char const *);
};

} // namespace DumpHelper

// DCS_OPS_RE_EDTERRAIN4.DLL_ADDITIONALDATA_HPP
