#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: SIBImporter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class SIBImporter
{
public:

    // RVA: 0x12C | Ordinal: 301
        void CanRead(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class Assimp::IOSystem *, bool) const;

    // RVA: 0x1A2 | Ordinal: 419
        void GetInfo(void) const;

    // RVA: 0x1C4 | Ordinal: 453
        void InternReadFile(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, struct aiScene *, class Assimp::IOSystem *);

    // RVA: 0x4E | Ordinal: 79
        void SIBImporter(class Assimp::SIBImporter const &);

    // RVA: 0x4F | Ordinal: 80
        void SIBImporter(void);

    // RVA: 0x99 | Ordinal: 154
        void _SIBImporter(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_SIBIMPORTER_HPP
