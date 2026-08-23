#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: ScenePreprocessor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class ScenePreprocessor
{
public:

    // RVA: 0x212 | Ordinal: 531
        void ProcessAnimation(struct aiAnimation *);

    // RVA: 0x219 | Ordinal: 538
        void ProcessMesh(struct aiMesh *);

    // RVA: 0x21A | Ordinal: 539
        void ProcessScene(void);

    // RVA: 0x55 | Ordinal: 86
        void ScenePreprocessor(struct aiScene *);

    // RVA: 0x56 | Ordinal: 87
        void ScenePreprocessor(void);

    // RVA: 0x23F | Ordinal: 576
        void SetScene(struct aiScene *);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_SCENEPREPROCESSOR_HPP
