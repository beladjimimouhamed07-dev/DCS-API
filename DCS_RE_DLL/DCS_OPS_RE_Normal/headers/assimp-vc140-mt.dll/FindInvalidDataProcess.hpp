#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: FindInvalidDataProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class FindInvalidDataProcess
{
public:

    // RVA: 0x15D | Ordinal: 350
        void Execute(struct aiScene *);

    // RVA: 0x1B | Ordinal: 28
        void FindInvalidDataProcess(class Assimp::FindInvalidDataProcess const &);

    // RVA: 0x1C | Ordinal: 29
        void FindInvalidDataProcess(void);

    // RVA: 0x1C9 | Ordinal: 458
        void IsActive(unsigned int) const;

    // RVA: 0x211 | Ordinal: 530
        void ProcessAnimation(struct aiAnimation *);

    // RVA: 0x213 | Ordinal: 532
        void ProcessAnimationChannel(struct aiNodeAnim *);

    // RVA: 0x215 | Ordinal: 534
        void ProcessMesh(struct aiMesh *);

    // RVA: 0x246 | Ordinal: 583
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x80 | Ordinal: 129
        void _FindInvalidDataProcess(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_FINDINVALIDDATAPROCESS_HPP
