#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: ScaleProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class ScaleProcess
{
public:

    // RVA: 0x166 | Ordinal: 359
        void Execute(struct aiScene *);

    // RVA: 0x1D2 | Ordinal: 467
        void IsActive(unsigned int) const;

    // RVA: 0x52 | Ordinal: 83
        void ScaleProcess(class Assimp::ScaleProcess const &);

    // RVA: 0x53 | Ordinal: 84
        void ScaleProcess(void);

    // RVA: 0x24D | Ordinal: 590
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x26D | Ordinal: 622
        void applyScaling(struct aiNode *);

    // RVA: 0x2AE | Ordinal: 687
        void getScale(void) const;

    // RVA: 0x2FA | Ordinal: 763
        void setScale(float);

    // RVA: 0x307 | Ordinal: 776
        void traverseNodes(struct aiNode *);

    // RVA: 0x9B | Ordinal: 156
        void _ScaleProcess(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_SCALEPROCESS_HPP
