#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: DefaultIOStream
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class DefaultIOStream
{
public:

    // RVA: 0xC | Ordinal: 13
        void DefaultIOStream(struct _iobuf *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0xD | Ordinal: 14
        void DefaultIOStream(void);

    // RVA: 0xE | Ordinal: 15
        void DefaultIOStream(class Assimp::DefaultIOStream const &);

    // RVA: 0x173 | Ordinal: 372
        void FileSize(void) const;

    // RVA: 0x17F | Ordinal: 384
        void Flush(void);

    // RVA: 0x21C | Ordinal: 541
        void Read(void *, unsigned __int64, unsigned __int64);

    // RVA: 0x22A | Ordinal: 555
        void Seek(unsigned __int64, enum aiOrigin);

    // RVA: 0x257 | Ordinal: 600
        void Tell(void) const;

    // RVA: 0x261 | Ordinal: 610
        void Write(void const *, unsigned __int64, unsigned __int64);

    // RVA: 0x79 | Ordinal: 122
        void _DefaultIOStream(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_DEFAULTIOSTREAM_HPP
