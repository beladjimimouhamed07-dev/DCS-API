#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: aiNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class aiNode
{
public:

    // RVA: 0x178 | Ordinal: 377
        void FindNode(struct aiString const &);

    // RVA: 0x179 | Ordinal: 378
        void FindNode(char const *);

    // RVA: 0x17A | Ordinal: 379
        void FindNode(struct aiString const &) const;

    // RVA: 0x17B | Ordinal: 380
        void FindNode(char const *) const;

    // RVA: 0x267 | Ordinal: 616
        void addChildren(unsigned int, struct aiNode **);

    // RVA: 0x6E | Ordinal: 111
        void aiNode(struct aiNode const &);

    // RVA: 0x6F | Ordinal: 112
        void aiNode(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x70 | Ordinal: 113
        void aiNode(void);

    // RVA: 0xA9 | Ordinal: 170
        void _aiNode(void);
};

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_AINODE_HPP
