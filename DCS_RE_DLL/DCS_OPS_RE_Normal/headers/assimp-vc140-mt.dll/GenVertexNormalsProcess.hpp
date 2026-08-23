#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: GenVertexNormalsProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class GenVertexNormalsProcess
{
public:

    // RVA: 0x15F | Ordinal: 352
        void Execute(struct aiScene *);

    // RVA: 0x183 | Ordinal: 388
        void GenMeshVertexNormals(struct aiMesh *, unsigned int);

    // RVA: 0x1F | Ordinal: 32
        void GenVertexNormalsProcess(class Assimp::GenVertexNormalsProcess const &);

    // RVA: 0x20 | Ordinal: 33
        void GenVertexNormalsProcess(void);

    // RVA: 0x1CB | Ordinal: 460
        void IsActive(unsigned int) const;

    // RVA: 0x233 | Ordinal: 564
        void SetMaxSmoothAngle(float);

    // RVA: 0x247 | Ordinal: 584
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x82 | Ordinal: 131
        void _GenVertexNormalsProcess(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_GENVERTEXNORMALSPROCESS_HPP
