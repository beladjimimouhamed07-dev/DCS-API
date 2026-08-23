#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: LimitBoneWeightsProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class LimitBoneWeightsProcess
{
public:

    // RVA: 0x161 | Ordinal: 354
        void Execute(struct aiScene *);

    // RVA: 0x1CD | Ordinal: 462
        void IsActive(unsigned int) const;

    // RVA: 0x2D | Ordinal: 46
        void LimitBoneWeightsProcess(class Assimp::LimitBoneWeightsProcess const &);

    // RVA: 0x2E | Ordinal: 47
        void LimitBoneWeightsProcess(void);

    // RVA: 0x217 | Ordinal: 536
        void ProcessMesh(struct aiMesh *);

    // RVA: 0x248 | Ordinal: 585
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x89 | Ordinal: 138
        void _LimitBoneWeightsProcess(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_LIMITBONEWEIGHTSPROCESS_HPP
