#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: NGModel.dll
// Class: GRootNodeMT
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class GRootNodeMT
{
public:

    // RVA: 0x20 | Ordinal: 33
        void applyMults(class std::unordered_map<class ed::basic_string<char>, struct MultCoefs, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, struct MultCoefs>>> const &);

    // RVA: 0x2B | Ordinal: 44
        void destroy(void);

    // RVA: 0x34 | Ordinal: 53
        void getAllShaders(class ed::vector<struct std::pair<class ed::basic_string<char>, class ed::vector<class render::DefinePair, class ed::allocator<class render::DefinePair>>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::vector<class render::DefinePair, class ed::allocator<class render::DefinePair>>>>> &);

    // RVA: 0x69 | Ordinal: 106
        void loadMaterials(void);

    // RVA: 0x6A | Ordinal: 107
        void loadTextures(void) const;

    // RVA: 0x83 | Ordinal: 132
        void uploadBuffers(class io::IBinaryFileR &);
};

} // namespace model

// DCS_OPS_RE_NGMODEL.DLL_GROOTNODEMT_HPP
