#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: TriangulateProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class TriangulateProcess
{
public:

    // RVA: 0x16A | Ordinal: 363
        void Execute(struct aiScene *);

    // RVA: 0x1D6 | Ordinal: 471
        void IsActive(unsigned int) const;

    // RVA: 0x259 | Ordinal: 602
        void TriangulateMesh(struct aiMesh *);

    // RVA: 0x69 | Ordinal: 106
        void TriangulateProcess(class Assimp::TriangulateProcess const &);

    // RVA: 0x6A | Ordinal: 107
        void TriangulateProcess(void);

    // RVA: 0xA5 | Ordinal: 166
        void _TriangulateProcess(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_TRIANGULATEPROCESS_HPP
