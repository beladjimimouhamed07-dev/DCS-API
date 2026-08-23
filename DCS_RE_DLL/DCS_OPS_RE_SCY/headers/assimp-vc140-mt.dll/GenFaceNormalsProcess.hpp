#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: GenFaceNormalsProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class GenFaceNormalsProcess
{
public:

    // RVA: 0x15E | Ordinal: 351
        void Execute(struct aiScene *);

    // RVA: 0x1D | Ordinal: 30
        void GenFaceNormalsProcess(class Assimp::GenFaceNormalsProcess const &);

    // RVA: 0x1E | Ordinal: 31
        void GenFaceNormalsProcess(void);

    // RVA: 0x182 | Ordinal: 387
        void GenMeshFaceNormals(struct aiMesh *);

    // RVA: 0x1CA | Ordinal: 459
        void IsActive(unsigned int) const;

    // RVA: 0x81 | Ordinal: 130
        void _GenFaceNormalsProcess(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_GENFACENORMALSPROCESS_HPP
