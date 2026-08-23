#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: BaseImporter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class BaseImporter
{
public:

    // RVA: 0x1 | Ordinal: 2
        void BaseImporter(class Assimp::BaseImporter const &);

    // RVA: 0x2 | Ordinal: 3
        void BaseImporter(void);

    // RVA: 0x12F | Ordinal: 304
        void CheckMagicToken(class Assimp::IOSystem *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, void const *, unsigned int, unsigned int, unsigned int);

    // RVA: 0x138 | Ordinal: 313
        void ConvertToUTF8(class std::vector<char, class std::allocator<char>> &);

    // RVA: 0x139 | Ordinal: 314
        void ConvertUTF8toISO8859_1(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &);

    // RVA: 0x192 | Ordinal: 403
        void GetErrorText(void) const;

    // RVA: 0x195 | Ordinal: 406
        void GetExtension(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x196 | Ordinal: 407
        void GetExtensionList(class std::set<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> &);

    // RVA: 0x21D | Ordinal: 542
        void ReadFile(class Assimp::Importer const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class Assimp::IOSystem *);

    // RVA: 0x229 | Ordinal: 554
        void SearchFileHeaderForToken(class Assimp::IOSystem *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const **, unsigned int, unsigned int, bool, bool);

    // RVA: 0x241 | Ordinal: 578
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x251 | Ordinal: 594
        void SimpleExtensionCheck(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *, char const *, char const *);

    // RVA: 0x258 | Ordinal: 601
        void TextFileToBuffer(class Assimp::IOStream *, class std::vector<char, class std::allocator<char>> &, enum Assimp::BaseImporter::TextFileMode);

    // RVA: 0x72 | Ordinal: 115
        void _BaseImporter(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_BASEIMPORTER_HPP
