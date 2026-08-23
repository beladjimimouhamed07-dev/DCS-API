#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: MakeVerboseFormatProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class MakeVerboseFormatProcess
{
public:

    // RVA: 0x162 | Ordinal: 355
        void Execute(struct aiScene *);

    // RVA: 0x1CE | Ordinal: 463
        void IsActive(unsigned int) const;

    // RVA: 0x1EF | Ordinal: 496
        void MakeVerboseFormat(struct aiMesh *);

    // RVA: 0x34 | Ordinal: 53
        void MakeVerboseFormatProcess(class Assimp::MakeVerboseFormatProcess const &);

    // RVA: 0x35 | Ordinal: 54
        void MakeVerboseFormatProcess(void);

    // RVA: 0x8C | Ordinal: 141
        void _MakeVerboseFormatProcess(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_MAKEVERBOSEFORMATPROCESS_HPP
