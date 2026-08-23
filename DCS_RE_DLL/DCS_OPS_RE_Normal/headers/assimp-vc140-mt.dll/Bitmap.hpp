#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: Bitmap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class Bitmap
{
public:

    // RVA: 0x228 | Ordinal: 553
        void Save(struct aiTexture *, class Assimp::IOStream *);

    // RVA: 0x262 | Ordinal: 611
        void WriteDIB(struct Assimp::Bitmap::DIB &, class Assimp::IOStream *);

    // RVA: 0x263 | Ordinal: 612
        void WriteData(struct aiTexture *, class Assimp::IOStream *);

    // RVA: 0x264 | Ordinal: 613
        void WriteHeader(struct Assimp::Bitmap::Header &, class Assimp::IOStream *);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_BITMAP_HPP
