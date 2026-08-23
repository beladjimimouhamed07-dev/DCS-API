#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: DefaultIOSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class DefaultIOSystem
{
public:

    // RVA: 0x131 | Ordinal: 306
        void Close(class Assimp::IOStream *);

    // RVA: 0x133 | Ordinal: 308
        void ComparePaths(char const *, char const *) const;

    // RVA: 0xF | Ordinal: 16
        void DefaultIOSystem(class Assimp::DefaultIOSystem &&);

    // RVA: 0x10 | Ordinal: 17
        void DefaultIOSystem(class Assimp::DefaultIOSystem const &);

    // RVA: 0x11 | Ordinal: 18
        void DefaultIOSystem(void);

    // RVA: 0x16D | Ordinal: 366
        void Exists(char const *) const;

    // RVA: 0x1FF | Ordinal: 512
        void Open(char const *, char const *);

    // RVA: 0x266 | Ordinal: 615
        void absolutePath(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x275 | Ordinal: 630
        void completeBaseName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x287 | Ordinal: 648
        void fileName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2A8 | Ordinal: 681
        void getOsSeparator(void) const;

    // RVA: 0x7A | Ordinal: 123
        void _DefaultIOSystem(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_DEFAULTIOSYSTEM_HPP
