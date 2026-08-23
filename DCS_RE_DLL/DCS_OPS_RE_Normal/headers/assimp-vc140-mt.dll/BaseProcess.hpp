#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: BaseProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class BaseProcess
{
public:

    // RVA: 0x3 | Ordinal: 4
        void BaseProcess(class Assimp::BaseProcess const &);

    // RVA: 0x4 | Ordinal: 5
        void BaseProcess(void);

    // RVA: 0x16C | Ordinal: 365
        void ExecuteOnScene(class Assimp::Importer *);

    // RVA: 0x1B9 | Ordinal: 442
        void GetSharedData(void);

    // RVA: 0x227 | Ordinal: 552
        void RequireVerboseFormat(void) const;

    // RVA: 0x240 | Ordinal: 577
        void SetSharedData(class Assimp::SharedPostProcessInfo *);

    // RVA: 0x242 | Ordinal: 579
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x73 | Ordinal: 116
        void _BaseProcess(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_BASEPROCESS_HPP
