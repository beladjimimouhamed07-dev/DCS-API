#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: IOSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class IOSystem
{
public:

    // RVA: 0x12E | Ordinal: 303
        void ChangeDirectory(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x134 | Ordinal: 309
        void ComparePaths(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x135 | Ordinal: 310
        void ComparePaths(char const *, char const *) const;

    // RVA: 0x14A | Ordinal: 331
        void CreateDirectory(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x14B | Ordinal: 332
        void CreateDirectoryA(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x153 | Ordinal: 340
        void CurrentDirectory(void) const;

    // RVA: 0x155 | Ordinal: 342
        void DeleteFile(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x156 | Ordinal: 343
        void DeleteFileA(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x16E | Ordinal: 367
        void Exists(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x25 | Ordinal: 38
        void IOSystem(class Assimp::IOSystem const &);

    // RVA: 0x26 | Ordinal: 39
        void IOSystem(void);

    // RVA: 0x200 | Ordinal: 513
        void Open(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x20F | Ordinal: 528
        void PopDirectory(void);

    // RVA: 0x21B | Ordinal: 540
        void PushDirectory(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x256 | Ordinal: 599
        void StackSize(void) const;

    // RVA: 0x85 | Ordinal: 134
        void _IOSystem(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_IOSYSTEM_HPP
