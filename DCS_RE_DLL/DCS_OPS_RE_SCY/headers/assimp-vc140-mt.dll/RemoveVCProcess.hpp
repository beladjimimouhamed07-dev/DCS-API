#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: RemoveVCProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class RemoveVCProcess
{
public:

    // RVA: 0x165 | Ordinal: 358
        void Execute(struct aiScene *);

    // RVA: 0x18F | Ordinal: 400
        void GetDeleteFlags(void) const;

    // RVA: 0x1D1 | Ordinal: 466
        void IsActive(unsigned int) const;

    // RVA: 0x218 | Ordinal: 537
        void ProcessMesh(struct aiMesh *);

    // RVA: 0x4A | Ordinal: 75
        void RemoveVCProcess(class Assimp::RemoveVCProcess const &);

    // RVA: 0x4B | Ordinal: 76
        void RemoveVCProcess(void);

    // RVA: 0x22B | Ordinal: 556
        void SetDeleteFlags(unsigned int);

    // RVA: 0x24B | Ordinal: 588
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x97 | Ordinal: 152
        void _RemoveVCProcess(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_REMOVEVCPROCESS_HPP
