#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: EmbedTexturesProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class EmbedTexturesProcess
{
public:

    // RVA: 0x14 | Ordinal: 21
        void EmbedTexturesProcess(class Assimp::EmbedTexturesProcess const &);

    // RVA: 0x15 | Ordinal: 22
        void EmbedTexturesProcess(void);

    // RVA: 0x15B | Ordinal: 348
        void Execute(struct aiScene *);

    // RVA: 0x1C7 | Ordinal: 456
        void IsActive(unsigned int) const;

    // RVA: 0x244 | Ordinal: 581
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x268 | Ordinal: 617
        void addTexture(struct aiScene *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>) const;

    // RVA: 0x7C | Ordinal: 125
        void _EmbedTexturesProcess(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_EMBEDTEXTURESPROCESS_HPP
