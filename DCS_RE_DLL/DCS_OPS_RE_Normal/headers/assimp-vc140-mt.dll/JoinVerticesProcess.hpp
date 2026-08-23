#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: JoinVerticesProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class JoinVerticesProcess
{
public:

    // RVA: 0x160 | Ordinal: 353
        void Execute(struct aiScene *);

    // RVA: 0x1CC | Ordinal: 461
        void IsActive(unsigned int) const;

    // RVA: 0x2B | Ordinal: 44
        void JoinVerticesProcess(class Assimp::JoinVerticesProcess const &);

    // RVA: 0x2C | Ordinal: 45
        void JoinVerticesProcess(void);

    // RVA: 0x216 | Ordinal: 535
        void ProcessMesh(struct aiMesh *, unsigned int);

    // RVA: 0x88 | Ordinal: 137
        void _JoinVerticesProcess(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_JOINVERTICESPROCESS_HPP
