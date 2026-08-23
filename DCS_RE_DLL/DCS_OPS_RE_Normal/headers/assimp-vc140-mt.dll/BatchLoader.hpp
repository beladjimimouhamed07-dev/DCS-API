#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: BatchLoader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class BatchLoader
{
public:

    // RVA: 0x115 | Ordinal: 278
        void AddLoadRequest(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, unsigned int, struct Assimp::BatchLoader::PropertyMap const *);

    // RVA: 0x5 | Ordinal: 6
        void BatchLoader(class Assimp::IOSystem *, bool);

    // RVA: 0x19C | Ordinal: 413
        void GetImport(unsigned int);

    // RVA: 0x1DF | Ordinal: 480
        void LoadAll(void);

    // RVA: 0x2B7 | Ordinal: 696
        void getValidation(void) const;

    // RVA: 0x301 | Ordinal: 770
        void setValidation(bool);

    // RVA: 0x74 | Ordinal: 117
        void _BatchLoader(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_BATCHLOADER_HPP
