#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lModels5File
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class lModels5File
{
public:

    // RVA: 0x1E2 | Ordinal: 483
        void copyFrom(class landscape4::lDataFile *);

    // RVA: 0x300 | Ordinal: 769
        void getIModel(class ed::basic_string<char> const &) const;

    // RVA: 0x301 | Ordinal: 770
        void getIModel(char const *) const;

    // RVA: 0x328 | Ordinal: 809
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x33D | Ordinal: 830
        void getModel(class ed::basic_string<char> const &) const;

    // RVA: 0x402 | Ordinal: 1027
        void getType(void);

    // RVA: 0x48E | Ordinal: 1167
        void load(class io::MmfStream &);

    // RVA: 0x54A | Ordinal: 1355
        void save(class ed::basic_string<char> const &);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_LMODELS5FILE_HPP
